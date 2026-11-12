// rea decompile_all
// name: FUN_20102a17
// address: 0x20102a17
// body: available
// range: 0x20102a17-0x20102a69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_20102a17(undefined4 param_1,double param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (DAT_2015dd00 == 0) {
    fVar1 = (float10)FUN_20102fcc(1,param_1,param_2,0,param_2,param_3);
    return fVar1;
  }
  _DAT_20408394 = 0x21;
  FUN_2010323f();
  return (float10)param_2;
}

