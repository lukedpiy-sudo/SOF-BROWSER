// rea decompile_all
// name: FUN_20109f8a
// address: 0x20109f8a
// body: available
// range: 0x20109f8a-0x20109fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_20109f8a(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_2040846c == 0) {
    iVar1 = FUN_2010a5e7(param_1,param_2,param_3);
    return iVar1;
  }
  iVar1 = FUN_2010a39c(DAT_2040846c,0x1001,param_1,param_3,param_2,param_3,DAT_20408484);
  if (iVar1 == 0) {
    _DAT_20408394 = 0x16;
    return 0x7fffffff;
  }
  return iVar1 + -2;
}

