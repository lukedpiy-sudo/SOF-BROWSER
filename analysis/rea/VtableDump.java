// Temporary REA/Ghidra helper: map the module's vtables to their real functions.
// @category SOF.EFT

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;

/**
 * args: <file with one hex vtable address per line> [maxSlot]
 *
 * For every vtable address it prints, for each 4-byte slot that holds a
 * code pointer, the target address and the *containing* function's name,
 * entry point, body extent and prototype -- which is the only reliable way
 * to tell a virtual's calling convention (Ghidra's prototype carries the
 * real stack-purge value).
 */
public class VtableDump extends GhidraScript {

    private Memory mem;

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: VtableDump <addrfile> [maxSlot]");
            return;
        }
        int maxSlot = args.length > 1
                ? Integer.decode(args[1].startsWith("0x") ? args[1].substring(2) : args[1])
                : 0x200;

        List<Address> vts = new ArrayList<Address>();
        BufferedReader br = new BufferedReader(new FileReader(args[0]));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty()) {
                continue;
            }
            vts.add(toAddr(line));
        }
        br.close();

        for (Address vt : vts) {
            println("VTABLE " + vt);
            for (int slot = 0; slot < maxSlot; slot += 4) {
                Address at = vt.add(slot);
                Integer v;
                try {
                    v = mem.getInt(at);
                } catch (Exception e) {
                    continue;
                }
                if (v == null) {
                    continue;
                }
                Address code = toAddr(v.intValue());
                if (code == null || mem.getBlock(code) == null) {
                    continue;
                }
                Function f = getFunctionContaining(code);
                Function fa = getFunctionAt(code);
                if (f == null && fa == null) {
                    println(String.format("  +0x%03x -> 0x%s  (no function)", slot,
                            code.toString().replace("0x", "")));
                    continue;
                }
                if (f == null) {
                    f = fa;
                }
                println(String.format("  +0x%03x -> 0x%s  fn=%s entry=%s body=%s..%s proto=%s",
                        slot, code.toString().replace("0x", ""), f.getName(),
                        f.getEntryPoint().toString().replace("0x", ""),
                        f.getBody().getMinAddress().toString().replace("0x", ""),
                        f.getBody().getMaxAddress().toString().replace("0x", ""),
                        f.getPrototypeString(true, false)));
            }
        }
    }
}
