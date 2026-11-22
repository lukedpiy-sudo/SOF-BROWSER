// Temporary REA/Ghidra helper: map every direct general-voice call site to
// its containing function and decompile each unique caller.
// @category SOF.RE

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.LinkedHashMap;
import java.util.Map;

public class GeneralVoiceCalls extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            println("usage: GeneralVoiceCalls <call-address-file>");
            return;
        }

        Map<Address, Function> callers = new LinkedHashMap<>();
        BufferedReader br = new BufferedReader(new FileReader(args[0]));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty()) {
                continue;
            }
            Address site = toAddr(line);
            Function f = getFunctionContaining(site);
            println(String.format("CALL 0x%s function=%s entry=%s body=%s..%s proto=%s",
                site, f == null ? "<none>" : f.getName(),
                f == null ? "<none>" : f.getEntryPoint(),
                f == null ? "<none>" : f.getBody().getMinAddress(),
                f == null ? "<none>" : f.getBody().getMaxAddress(),
                f == null ? "<none>" : f.getPrototypeString(true, false)));
            if (f != null) {
                callers.put(f.getEntryPoint(), f);
            }
        }
        br.close();

        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        for (Function f : callers.values()) {
            println("=== DECOMPILE " + f.getEntryPoint() + " " + f.getName() + " ===");
            DecompileResults result = decompiler.decompileFunction(f, 300, monitor);
            if (result.decompileCompleted()) {
                println(result.getDecompiledFunction().getC());
            }
            else {
                println("DECOMPILE_FAILED: " + result.getErrorMessage());
            }
        }
        decompiler.dispose();
    }
}
