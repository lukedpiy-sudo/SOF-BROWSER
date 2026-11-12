// rea decompile_all
// name: FUN_200e4810
// address: 0x200e4810
// body: available
// range: 0x200e4810-0x200e4a59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e4863) */
/* WARNING: Removing unreachable block (ram,0x200e492f) */

void FUN_200e4810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_1 != param_2) {
    puVar6 = param_3 + 0xe;
    puVar7 = param_1 + 9;
    do {
      *param_3 = *param_1;
      FUN_2000a3a0(puVar7 + -8,0,0xffffffff);
      puVar6[-9] = puVar7[-4];
      puVar6[-8] = puVar7[-3];
      puVar6[-7] = puVar7[-2];
      uVar1 = puVar7[1];
      if (puVar6 + -6 == puVar7 + -1) {
        FUN_20027e40(uVar1,0xffffffff);
        FUN_20027e40(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar4 = (undefined1 *)*puVar7;
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar4[-1] < -1) {
            FUN_2000a5b0(1);
            puVar4 = (undefined1 *)*puVar7;
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_201116cc;
            }
            puVar6[-5] = (uint)puVar4;
            puVar6[-4] = puVar7[1];
            puVar6[-3] = puVar7[2];
            puVar4[-1] = puVar4[-1] + '\x01';
            goto LAB_200e491f;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar9 = (undefined4 *)*puVar7;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)&DAT_201116cc;
          }
          puVar10 = (undefined4 *)puVar6[-5];
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          puVar6[-4] = uVar1;
          *(undefined1 *)(uVar1 + puVar6[-5]) = 0;
        }
      }
LAB_200e491f:
      uVar1 = puVar7[5];
      if (puVar6 + -2 == puVar7 + 3) {
        if (*puVar6 < uVar1) {
          FUN_201077fc();
        }
        iVar3 = *puVar6 - uVar1;
        iVar8 = -1;
        if ((iVar3 == -1) || (iVar8 = iVar3, iVar3 != 0)) {
          FUN_2000a930();
          FUN_200fa360(puVar6[-1] + uVar1,puVar6[-1] + uVar1 + iVar8,(*puVar6 - iVar8) - uVar1);
          uVar1 = *puVar6;
          cVar2 = FUN_2000a6c0(uVar1 - iVar8,0);
          if (cVar2 != '\0') {
            FUN_2000a6a0(uVar1 - iVar8);
          }
        }
        FUN_20027e40(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar4 = (undefined1 *)puVar7[4];
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar4[-1] < -1) {
            FUN_2000a5b0(1);
            puVar4 = (undefined1 *)puVar7[4];
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_201116cc;
            }
            puVar6[-1] = (uint)puVar4;
            *puVar6 = puVar7[5];
            puVar6[1] = puVar7[6];
            puVar4[-1] = puVar4[-1] + '\x01';
            goto LAB_200e4a2c;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar9 = (undefined4 *)puVar7[4];
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)&DAT_201116cc;
          }
          puVar10 = (undefined4 *)puVar6[-1];
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *puVar6 = uVar1;
          *(undefined1 *)(uVar1 + puVar6[-1]) = 0;
        }
      }
LAB_200e4a2c:
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      puVar6 = puVar6 + 0x10;
      puVar7 = puVar7 + 0x10;
    } while (param_1 != param_2);
  }
  return;
}

