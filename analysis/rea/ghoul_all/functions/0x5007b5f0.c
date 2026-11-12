// rea decompile_all
// name: FUN_5007b5f0
// address: 0x5007b5f0
// body: available
// range: 0x5007b5f0-0x5007b741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007b5f0(int param_1)

{
  undefined **ppuVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  undefined **ppuVar11;
  byte *pbVar12;
  bool bVar13;
  undefined4 local_4;
  
  puVar8 = operator_new(0x54);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_50129724;
    iVar10 = *(int *)(param_1 + 0x114);
    do {
      cVar2 = *(char *)(*(int *)(param_1 + 0x104) + *(int *)(param_1 + 0x114));
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
    } while (cVar2 != '\0');
    _strncpy((char *)(puVar8 + 1),(char *)(iVar10 + *(int *)(param_1 + 0x104)),0x40);
    local_4 = (uint)*(byte *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x104));
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
    puVar8[0x13] = 0x15;
    puVar8[0x12] = 0xffffffff;
    puVar8[0x11] = local_4;
    ppuVar11 = &PTR_DAT_50145268;
    pbVar12 = PTR_DAT_50145268;
    while (pbVar12 != (byte *)0x0) {
      pbVar9 = (byte *)(puVar8 + 1);
      do {
        bVar3 = *pbVar9;
        bVar13 = bVar3 < *pbVar12;
        if (bVar3 != *pbVar12) {
LAB_5007b6ad:
          iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_5007b6b2;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar9[1];
        bVar13 = bVar3 < pbVar12[1];
        if (bVar3 != pbVar12[1]) goto LAB_5007b6ad;
        pbVar9 = pbVar9 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar3 != 0);
      iVar10 = 0;
LAB_5007b6b2:
      if (iVar10 == 0) {
        puVar8[0x12] = ppuVar11[1];
        puVar8[0x13] = ppuVar11[2];
        break;
      }
      ppuVar1 = ppuVar11 + 4;
      ppuVar11 = ppuVar11 + 4;
      pbVar12 = *ppuVar1;
    }
  }
  iVar10 = *(int *)(param_1 + 0x114);
  iVar7 = *(int *)(param_1 + 0x104);
  uVar4 = *(undefined1 *)(iVar7 + iVar10);
  *(int *)(param_1 + 0x114) = iVar10 + 1;
  uVar5 = *(undefined1 *)(iVar10 + 1 + iVar7);
  *(int *)(param_1 + 0x114) = iVar10 + 2;
  uVar6 = *(undefined1 *)(iVar10 + 2 + iVar7);
  *(int *)(param_1 + 0x114) = iVar10 + 3;
  cVar2 = *(char *)(iVar10 + 3 + iVar7);
  local_4 = CONCAT13(cVar2,CONCAT12(uVar6,CONCAT11(uVar5,uVar4)));
  *(int *)(param_1 + 0x114) = iVar10 + 4;
  if ((cVar2 < '\0') || (99 < (int)local_4)) {
    FUN_500817d0(param_1,(byte *)s_Index_for_field_out_of_range___d_5014574c);
  }
  *(undefined4 **)(param_1 + 0x318 + local_4 * 4) = puVar8;
  return;
}

