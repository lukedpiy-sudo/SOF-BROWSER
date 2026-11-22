// Temporary REA/Ghidra helper: decompile functions and report their real extent.
// @category SOF.EFT

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class FnDump extends GhidraScript {
    @Override
    public void run() throws Exception {
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        for (String value : getScriptArgs()) {
            Address address = toAddr(value);
            disassemble(address);
            Function function = getFunctionAt(address);
            if (function == null) {
                function = createFunction(address, "FUN_" + value.replace("0x", ""));
            }
            println("=== " + value + " " + (function == null ? "NO_FUNCTION" : function.getName())
                    + " entry=" + (function == null ? "?" : function.getEntryPoint().toString())
                    + " body=" + (function == null ? "?" : function.getBody().getMinAddress().toString()
                            + ".." + function.getBody().getMaxAddress().toString())
                    + " proto=" + (function == null ? "?" : function.getPrototypeString(true, false))
                    + " ===");
            if (function == null) {
                continue;
            }
            DecompileResults result = decompiler.decompileFunction(function, 300, monitor);
            if (result.decompileCompleted()) {
                println(result.getDecompiledFunction().getC());
            } else {
                println("DECOMPILE_FAILED: " + result.getErrorMessage());
            }
        }
        decompiler.dispose();
    }
}
