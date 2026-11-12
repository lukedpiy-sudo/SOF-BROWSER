// rea decompile_all
// name: FUN_20088d00
// address: 0x20088d00
// body: available
// range: 0x20088d00-0x20088d58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20088d00(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x80) + (param_2 & 0xffff) * 0x18;
  iVar2 = (int)*(short *)(*(int *)(iVar1 + -0xc) +
                         *(int *)(*(int *)(in_ECX + 0x5c) + -8 + (param_1 & 0xffff) * 8) * 2);
  if (-1 < iVar2) {
    FUN_200a6fa0(iVar2,*(undefined4 *)(iVar1 + -0x14),param_3,param_4);
    return 1;
  }
  return 0;
}

