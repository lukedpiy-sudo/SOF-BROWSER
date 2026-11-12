// rea decompile_all
// name: FUN_500f60d0
// address: 0x500f60d0
// body: available
// range: 0x500f60d0-0x500f62df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f60d0(int param_1)

{
  byte *pbVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [48];
  int iStack_8;
  
  local_70 = *(float *)(param_1 + 8);
  local_74 = *(float *)(param_1 + 4);
  local_6c = *(float *)(param_1 + 0xc) + 26.0;
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x1c),&local_68,&local_50,(float *)0x0);
  fVar2 = *(float *)(*(int *)(param_1 + 0x74) + 0x3c) * 2.5;
  local_74 = local_50 * fVar2 + local_74;
  local_70 = local_4c * fVar2 + local_70;
  local_6c = local_48 * fVar2 + local_6c;
  local_44 = local_68 * 2000.0 + local_74;
  local_40 = local_64 * 2000.0 + local_70;
  local_3c = local_60 * 2000.0 + local_6c;
  (*DAT_5015cac0)(&local_74,0,0,&local_44,param_1,0x6000081,local_38);
  if (iStack_8 != 0) {
    if ((*(char *)(iStack_8 + 0x118) < '\0') && (iVar4 = FUN_500f7430(iStack_8), iVar4 != 0)) {
      iStack_8 = FUN_500f7430(iStack_8);
      fStack_5c = *(float *)(iStack_8 + 4) - *(float *)(param_1 + 4);
      fStack_58 = *(float *)(iStack_8 + 8) - *(float *)(param_1 + 8);
      fStack_54 = *(float *)(iStack_8 + 0xc) - *(float *)(param_1 + 0xc);
      FUN_500fe050(&fStack_5c);
      if (local_68 * fStack_5c + fStack_58 * local_64 + fStack_54 * local_60 < 0.0)
      goto LAB_500f62d1;
    }
    if ((iStack_8 != 0) && (*(int *)(iStack_8 + 0x2ec) < 1)) goto LAB_500f62d1;
  }
  bVar3 = FUN_500887e0(param_1,iStack_8);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x74) + 0xb4);
    *pbVar1 = *pbVar1 | 0x30;
    return;
  }
  if ((((iStack_8 != 0) && (*(int *)(iStack_8 + 0x450) != 0)) &&
      (bVar3 = FUN_500887b0(iStack_8), bVar3)) &&
     (iVar4 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar4 == 0)) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x74) + 0xb4);
    *pbVar1 = *pbVar1 | 0x30;
    return;
  }
  if ((*(int *)(iStack_8 + 0x30c) != 0) &&
     ((*(int *)(iStack_8 + 0x450) != 0 || (*(int *)(iStack_8 + 0x74) != 0)))) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x74) + 0xb4);
    *pbVar1 = *pbVar1 & 0xdf;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x74) + 0xb4);
    *pbVar1 = *pbVar1 | 0x10;
    return;
  }
LAB_500f62d1:
  pbVar1 = (byte *)(*(int *)(param_1 + 0x74) + 0xb4);
  *pbVar1 = *pbVar1 & 0xcf;
  return;
}

