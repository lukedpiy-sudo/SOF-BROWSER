// rea decompile_all
// name: FUN_2009ed50
// address: 0x2009ed50
// body: available
// range: 0x2009ed50-0x2009f000 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2009efe3) */
/* WARNING: Removing unreachable block (ram,0x2009eff4) */
/* WARNING: Removing unreachable block (ram,0x2009eff6) */
/* WARNING: Removing unreachable block (ram,0x2009ef8d) */
/* WARNING: Removing unreachable block (ram,0x2009ef9d) */
/* WARNING: Removing unreachable block (ram,0x2009ef9f) */
/* WARNING: Removing unreachable block (ram,0x2009efa1) */
/* WARNING: Removing unreachable block (ram,0x2009ef48) */
/* WARNING: Removing unreachable block (ram,0x2009ef6d) */
/* WARNING: Removing unreachable block (ram,0x2009ef7e) */
/* WARNING: Removing unreachable block (ram,0x2009ef80) */
/* WARNING: Removing unreachable block (ram,0x2009ef82) */
/* WARNING: Removing unreachable block (ram,0x2009ef86) */

int FUN_2009ed50(int *param_1,char *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  
  iVar5 = *param_1 * 4;
  iVar9 = CONCAT31((int3)((uint)iVar5 >> 8),*param_2);
  uVar11 = *(int *)(*(int *)(param_1[3] + 0x14) + iVar5) +
           *(int *)(*(int *)(param_1[3] + 4) + iVar5);
  if (*param_2 == '\0') {
    iVar5 = *(int *)(param_2 + 0x4c);
    pcVar1 = param_2 + 4;
    if (iVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (*(int *)(param_2 + 0x50) - iVar5) / 0x44;
      iVar9 = -(*(int *)(param_2 + 0x50) - iVar5 >> 0x1f);
    }
    if (uVar8 < uVar11) {
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (*(int *)(param_2 + 0x50) - iVar5) / 0x44;
      }
      puVar2 = *(undefined4 **)(param_2 + 0x50);
      uVar11 = uVar11 - iVar9;
      if ((uint)((*(int *)(param_2 + 0x54) - (int)puVar2) / 0x44) < uVar11) {
        uVar8 = uVar11;
        if ((iVar5 != 0) && (uVar11 < (uint)(((int)puVar2 - iVar5) / 0x44))) {
          uVar8 = FUN_200921b0();
        }
        iVar5 = FUN_200921b0();
        iVar5 = iVar5 + uVar8;
        iVar9 = iVar5;
        if (iVar5 < 0) {
          iVar9 = 0;
        }
        pvVar6 = operator_new(iVar9 * 0x44);
        iVar9 = FUN_200937d0(*(undefined4 *)(param_2 + 0x4c),puVar2,pvVar6);
        FUN_20093810(iVar9,uVar11,pcVar1);
        FUN_200937d0(puVar2,*(undefined4 *)(param_2 + 0x50),iVar9 + uVar11 * 0x44);
        FUN_200f9f75(*(undefined4 *)(param_2 + 0x4c));
        *(void **)(param_2 + 0x54) = (void *)((int)pvVar6 + iVar5 * 0x44);
        iVar9 = FUN_200921b0();
        *(void **)(param_2 + 0x4c) = pvVar6;
        *(void **)(param_2 + 0x50) = (void *)((int)pvVar6 + (iVar9 + uVar11) * 0x44);
        return iVar9 + uVar11;
      }
      iVar9 = 0;
      if (uVar11 != 0) {
        FUN_200937d0(puVar2,puVar2,puVar2 + uVar11 * 0x11);
        FUN_20093810(*(int *)(param_2 + 0x50),
                     uVar11 - (*(int *)(param_2 + 0x50) - (int)puVar2) / 0x44,pcVar1);
        puVar3 = *(undefined4 **)(param_2 + 0x50);
        while (puVar2 != puVar3) {
          puVar10 = puVar2 + 0x11;
          pcVar12 = pcVar1;
          puVar13 = puVar2;
          for (iVar9 = 0x11; puVar2 = puVar10, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            puVar13 = puVar13 + 1;
          }
        }
        iVar9 = *(int *)(param_2 + 0x50) + uVar11 * 0x44;
        *(int *)(param_2 + 0x50) = iVar9;
        return iVar9;
      }
    }
    else if (iVar5 != 0) {
      iVar4 = *(int *)(param_2 + 0x50);
      iVar7 = iVar4 - iVar5;
      iVar9 = iVar7 * 0x78787879;
      if (uVar11 < (uint)(iVar7 / 0x44)) {
        *(uint *)(param_2 + 0x50) = iVar5 + uVar11 * 0x44;
        iVar9 = iVar4;
      }
    }
  }
  return iVar9;
}

