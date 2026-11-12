// rea decompile_all
// name: FUN_50088190
// address: 0x50088190
// body: available
// range: 0x50088190-0x50088547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50088190(int param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float local_50 [5];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_c [3];
  
  iVar8 = DAT_5015cca0;
  local_74 = 0xbf800000;
  local_70 = 0xbf800000;
  local_78 = *(int *)(param_1 + 0x74);
  local_6c = 0xbf800000;
  local_68 = 0x3f800000;
  local_64 = 0x3f800000;
  local_60 = 0x3f800000;
  puVar2 = *(undefined1 **)(local_78 + 0x538);
  if ((*(int *)(puVar2 + 0x78) == 0) ||
     (puVar6 = puVar2, *(int *)(*(int *)(puVar2 + 0x74) + 800) != 0)) {
    if (puVar2 != (undefined1 *)0x0) {
      iVar7 = ((int)puVar2 - DAT_5015cca0) / 0x464;
      local_88 = puVar2;
      lVar9 = __ftol();
      do {
        iVar7 = iVar7 + 1;
        if ((int)lVar9 < iVar7) {
          iVar7 = 1;
        }
        puVar6 = (undefined1 *)(iVar8 + iVar7 * 0x464);
      } while (((*(int *)(iVar8 + 0x78 + iVar7 * 0x464) == 0) ||
               (*(int *)(*(int *)(puVar6 + 0x74) + 800) != 0)) && (puVar6 != puVar2));
      *(undefined1 **)(local_78 + 0x538) = puVar6;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x53c) = 1;
    }
    puVar6 = *(undefined1 **)(*(int *)(param_1 + 0x74) + 0x538);
    if (puVar6 == puVar2) {
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x538) = 0;
      *(byte *)(*(int *)(param_1 + 0x74) + 0x10) = *(byte *)(*(int *)(param_1 + 0x74) + 0x10) & 0x7f
      ;
      return;
    }
  }
  iVar8 = *(int *)(puVar6 + 0x74);
  local_94 = *(float *)(iVar8 + 0x4fc);
  local_90 = *(undefined4 *)(iVar8 + 0x500);
  local_8c = *(undefined4 *)(iVar8 + 0x504);
  if (local_94 <= 56.0) {
    if (local_94 < -56.0) {
      local_94 = -56.0;
    }
  }
  else {
    local_94 = 56.0;
  }
  local_88 = puVar6;
  FUN_500fdd70(&local_94,&local_5c,local_c,local_50);
  (*DAT_5015cac0)();
  fVar5 = fStack_34;
  fVar4 = fStack_38;
  fVar3 = fStack_3c;
  FUN_500fe050(&local_5c);
  fStack_84 = fVar3 - local_5c * 35.0;
  fStack_80 = fVar4 - fStack_58 * 35.0;
  fStack_7c = fVar5 - fStack_54 * 35.0;
  if (*(int *)(puVar6 + 0x330) == 0) {
    fStack_7c = fStack_7c + 16.0;
  }
  (*DAT_5015cac0)();
  *(float *)(param_1 + 8) = fStack_38;
  *(float *)(param_1 + 4) = fStack_3c;
  *(float *)(param_1 + 0xc) = fStack_34;
  iVar8 = 0x14;
  do {
    iVar7 = *(int *)(param_1 + 0x74);
    lVar9 = __ftol();
    *(short *)(iVar8 + iVar7) = (short)lVar9;
    iVar8 = iVar8 + 2;
  } while (iVar8 < 0x1a);
  if (*(int *)(local_88 + 0x2f8) == 0) {
    **(undefined4 **)(param_1 + 0x74) = 7;
    iVar8 = *(int *)(param_1 + 0x74);
    *(float *)(iVar8 + 0x1c) = local_94;
    *(undefined4 *)(iVar8 + 0x20) = local_90;
    *(undefined4 *)(iVar8 + 0x24) = local_8c;
    iVar8 = *(int *)(param_1 + 0x74);
    *(float *)(iVar8 + 0x4fc) = local_94;
    *(undefined4 *)(iVar8 + 0x500) = local_90;
    *(undefined4 *)(iVar8 + 0x504) = local_8c;
  }
  else {
    **(undefined4 **)(param_1 + 0x74) = 3;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x24) = 0x42200000;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x1c) = 0xc1700000;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x20) =
         *(undefined4 *)(*(int *)(local_88 + 0x74) + 0x4ac);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0xc6) = *local_88;
  *(undefined4 *)(param_1 + 0x304) = 0;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x74) + 0x10);
  *pbVar1 = *pbVar1 | 0x80;
  (*DAT_5015cb28)();
  return;
}

