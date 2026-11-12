// rea decompile_all
// name: FUN_5004d6a0
// address: 0x5004d6a0
// body: available
// range: 0x5004d6a0-0x5004d733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5004d6a0(void *this,float *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_5004bbf0((void *)((int)this + 0x28),param_1);
  if (((iVar1 == 0) || (iVar1 = (int)*(short *)(iVar1 + 0x14), iVar1 < 1)) || (iVar1 == 0)) {
    return 0;
  }
  iVar1 = iVar1 * 0x50 + *(int *)((int)this + 4);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x10) < 1) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x14) + (param_3 % *(int *)(iVar1 + 0x10)) * 0xc);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = iVar1 * 0x50 + *(int *)((int)this + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(iVar1 + 4);
  param_2[1] = *(undefined4 *)(iVar1 + 8);
  param_2[2] = *(undefined4 *)(iVar1 + 0xc);
  return 1;
}

