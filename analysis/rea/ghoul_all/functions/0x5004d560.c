// rea decompile_all
// name: FUN_5004d560
// address: 0x5004d560
// body: available
// range: 0x5004d560-0x5004d5f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5004d560(void *this,undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(float *)(DAT_5015cca4 + 0x18) == 0.0) {
    iVar2 = param_1[6];
    if (iVar2 == -1) {
      return 0;
    }
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = *(int *)((int)this + 4);
    if (param_3 == 0) {
      iVar4 = *(int *)(iVar2 * 0x50 + 0x30 + iVar3);
    }
    else {
      iVar4 = *(int *)(iVar2 * 0x50 + 0x34 + iVar3);
      if (iVar4 != 0) goto LAB_5004d5cf;
      iVar4 = *(int *)(iVar2 * 0x50 + iVar3 + 0x30);
    }
    if (iVar4 != 0) {
LAB_5004d5cf:
      puVar1 = (undefined4 *)(iVar4 * 0x50 + 4 + iVar3);
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      param_2[2] = puVar1[2];
      return 1;
    }
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
  }
  return 0;
}

