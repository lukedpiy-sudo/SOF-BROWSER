// rea decompile_all
// name: FUN_20102a6a
// address: 0x20102a6a
// body: available
// range: 0x20102a6a-0x20102b01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_20102a6a(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_20102db5(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_20102b02();
  }
  iVar1 = FUN_2010309f(param_1);
  if ((DAT_2015dd00 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_20102fcc(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_20103054(iVar1);
  FUN_2010323f();
  return (float10)param_4;
}

