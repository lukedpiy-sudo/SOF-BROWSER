// rea decompile_all
// name: FUN_20109fe8
// address: 0x20109fe8
// body: available
// range: 0x20109fe8-0x2010a015 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20109fe8(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_2010877e(param_1);
    pvVar2 = _malloc(iVar1 * 2 + 2);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_20109ed4(pvVar2,param_1);
      return uVar3;
    }
  }
  return 0;
}

