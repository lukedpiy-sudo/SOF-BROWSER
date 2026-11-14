// rea decompile_all
// name: FUN_30015fe0
// address: 0x30015fe0
// body: available
// range: 0x30015fe0-0x300161fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30015fe0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  
  FUN_30020910();
  if (((((DAT_3008fd6c != DAT_3008fe3c) || (DAT_3008fc50 != DAT_3008fdb8)) ||
       (*(float *)(DAT_3008fe9c + 0x18) != 0.0)) || (DAT_3008fe3c == -1)) &&
     (*(float *)(DAT_3008fb90 + 0x18) == 0.0)) {
    DAT_3008fd6c = DAT_3008fe3c;
    DAT_3008fe98 = DAT_3008fe98 + 1;
    DAT_3008fc50 = DAT_3008fdb8;
    if (((*(float *)(DAT_3008fe9c + 0x18) == 0.0) && (DAT_3008fe3c != -1)) &&
       (*(int *)(DAT_3008fc6c + 0xdc) != 0)) {
      puVar3 = (undefined4 *)FUN_3000a470(DAT_3008fe3c,DAT_3008fc6c);
      if (DAT_3008fdb8 != DAT_3008fe3c) {
        iVar4 = *(int *)(DAT_3008fc6c + 0x80) + 7;
        uVar7 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
        puVar11 = (undefined4 *)register0x00000010;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        puVar5 = FUN_3000a470(DAT_3008fdb8,DAT_3008fc6c);
        iVar9 = 0;
        iVar4 = *(int *)(DAT_3008fc6c + 0x80) + 0x1f;
        iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
        puVar3 = (undefined4 *)register0x00000010;
        if (0 < iVar4) {
          do {
            *(uint *)(&stack0x00000000 + iVar9 * 4) =
                 *(uint *)(&stack0x00000000 + iVar9 * 4) | *(uint *)(puVar5 + iVar9 * 4);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar4);
        }
      }
      iVar10 = 0;
      iVar4 = *(int *)(DAT_3008fc6c + 0x84);
      iVar9 = DAT_3008fc6c;
      iVar12 = DAT_3008fe98;
      if (0 < *(int *)(DAT_3008fc6c + 0x80)) {
        do {
          iVar2 = *(int *)(iVar4 + 0x24);
          if ((iVar2 != -1) &&
             (iVar6 = iVar4, iVar9 = DAT_3008fc6c,
             (*(byte *)((iVar2 >> 3) + (int)puVar3) & (byte)(1 << ((byte)iVar2 & 7))) != 0)) {
            do {
              iVar9 = DAT_3008fc6c;
              if (*(int *)(iVar6 + 4) == iVar12) break;
              *(int *)(iVar6 + 4) = iVar12;
              piVar1 = (int *)(iVar6 + 0x20);
              iVar6 = *piVar1;
              iVar9 = DAT_3008fc6c;
              iVar12 = DAT_3008fe98;
            } while (*piVar1 != 0);
          }
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + 0x3c;
          if (*(int *)(iVar9 + 0x80) <= iVar10) {
            return;
          }
        } while( true );
      }
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(DAT_3008fc6c + 0x80)) {
        iVar9 = 0;
        do {
          iVar4 = iVar4 + 1;
          *(int *)(*(int *)(DAT_3008fc6c + 0x84) + 4 + iVar9) = DAT_3008fe98;
          iVar9 = iVar9 + 0x3c;
        } while (iVar4 < *(int *)(DAT_3008fc6c + 0x80));
      }
      iVar4 = 0;
      if (0 < *(int *)(DAT_3008fc6c + 0x98)) {
        iVar9 = 0;
        do {
          iVar4 = iVar4 + 1;
          *(int *)(*(int *)(DAT_3008fc6c + 0xa0) + 4 + iVar9) = DAT_3008fe98;
          iVar9 = iVar9 + 0x3c;
        } while (iVar4 < *(int *)(DAT_3008fc6c + 0x98));
      }
    }
  }
  return;
}

