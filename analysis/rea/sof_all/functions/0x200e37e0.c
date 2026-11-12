// rea decompile_all
// name: FUN_200e37e0
// address: 0x200e37e0
// body: available
// range: 0x200e37e0-0x200e393c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e381b) */

int * FUN_200e37e0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  undefined1 *puVar6;
  int in_ECX;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  
  puVar2 = *(undefined4 **)(in_ECX + 8);
  piVar12 = param_1;
  if (param_2 != puVar2) {
    iVar9 = (int)param_1 - (int)param_2;
    puVar8 = param_2 + 1;
    do {
      uVar3 = puVar8[1];
      if (piVar12 == puVar8 + -1) {
        FUN_20027e40(uVar3,0xffffffff);
        FUN_20027e40(0,0);
      }
      else {
        if (uVar3 != 0) {
          puVar6 = (undefined1 *)*puVar8;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar6[-1] < -1) {
            FUN_2000a5b0(1);
            puVar6 = (undefined1 *)*puVar8;
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_201116cc;
            }
            *(undefined1 **)(iVar9 + (int)puVar8) = puVar6;
            *(undefined4 *)(iVar9 + 4 + (int)puVar8) = puVar8[1];
            *(undefined4 *)(iVar9 + 8 + (int)puVar8) = puVar8[2];
            puVar6[-1] = puVar6[-1] + '\x01';
            goto LAB_200e38d0;
          }
        }
        cVar5 = FUN_2000a6c0(uVar3,1);
        if (cVar5 != '\0') {
          puVar10 = (undefined4 *)*puVar8;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)&DAT_201116cc;
          }
          puVar13 = *(undefined4 **)(iVar9 + (int)puVar8);
          for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar13 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          FUN_2000a6a0(uVar3);
        }
      }
LAB_200e38d0:
      piVar12 = piVar12 + 4;
      puVar10 = puVar8 + 3;
      puVar8 = puVar8 + 4;
    } while (puVar10 != puVar2);
  }
  piVar4 = *(int **)(in_ECX + 8);
  if (piVar12 != piVar4) {
    piVar11 = piVar12 + 1;
    do {
      iVar9 = *piVar11;
      if (iVar9 != 0) {
        if (*(char *)(iVar9 + -1) == '\0') {
          FUN_200f9f75((char *)(iVar9 + -1));
        }
        else {
          *(char *)(iVar9 + -1) = *(char *)(iVar9 + -1) + -1;
        }
      }
      *piVar11 = 0;
      piVar11[1] = 0;
      piVar11[2] = 0;
      piVar1 = piVar11 + 3;
      piVar11 = piVar11 + 4;
    } while (piVar1 != piVar4);
  }
  *(int **)(in_ECX + 8) = piVar12;
  return param_1;
}

