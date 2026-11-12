// rea decompile_all
// name: FUN_200cdde0
// address: 0x200cdde0
// body: available
// range: 0x200cdde0-0x200ce04e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200cde90) */
/* WARNING: Removing unreachable block (ram,0x200cdf5d) */

undefined4 * FUN_200cdde0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  if (param_1 != param_2) {
    puVar10 = param_2 + 0x19;
    piVar7 = param_3 + 0x19;
    do {
      param_2 = param_2 + -0x21;
      param_3 = param_3 + -0x21;
      puVar6 = puVar10 + -0x21;
      piVar8 = piVar7 + -0x21;
      puVar9 = param_2;
      puVar11 = param_3;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      FUN_2000a3a0(puVar10 + -0x35,0,0xffffffff);
      FUN_2000a3a0(puVar10 + -0x31,0,0xffffffff);
      FUN_2000a3a0(puVar10 + -0x2d,0,0xffffffff);
      piVar7[-0x29] = puVar10[-0x29];
      piVar7[-0x28] = puVar10[-0x28];
      FUN_2000a3a0(puVar10 + -0x27,0,0xffffffff);
      piVar7[-0x23] = puVar10[-0x23];
      uVar1 = puVar10[-0x20];
      if (piVar7 + -0x22 == puVar10 + -0x22) {
        FUN_20027e40(uVar1,0xffffffff);
        FUN_20027e40(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar3 = (undefined1 *)*puVar6;
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar3[-1] < -1) {
            FUN_2000a5b0(1);
            puVar3 = (undefined1 *)*puVar6;
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_201116cc;
            }
            *piVar8 = (int)puVar3;
            piVar7[-0x20] = puVar10[-0x20];
            piVar7[-0x1f] = puVar10[-0x1f];
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_200cdf49;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar9 = (undefined4 *)*puVar6;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)&DAT_201116cc;
          }
          puVar11 = (undefined4 *)*piVar8;
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          piVar7[-0x20] = uVar1;
          *(undefined1 *)(uVar1 + *piVar8) = 0;
        }
      }
LAB_200cdf49:
      piVar7[-0x1e] = puVar10[-0x1e];
      uVar1 = puVar10[-0x1b];
      if (piVar7 + -0x1d == puVar10 + -0x1d) {
        FUN_20027e40(uVar1,0xffffffff);
        FUN_20027e40(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar3 = (undefined1 *)puVar10[-0x1c];
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar3[-1] < -1) {
            iVar4 = piVar7[-0x1c];
            if (iVar4 != 0) {
              if (*(char *)(iVar4 + -1) == '\0') {
                FUN_200f9f75((char *)(iVar4 + -1));
              }
              else {
                *(char *)(iVar4 + -1) = *(char *)(iVar4 + -1) + -1;
              }
            }
            piVar7[-0x1c] = 0;
            piVar7[-0x1b] = 0;
            piVar7[-0x1a] = 0;
            puVar3 = (undefined1 *)puVar10[-0x1c];
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_201116cc;
            }
            piVar7[-0x1c] = (int)puVar3;
            piVar7[-0x1b] = puVar10[-0x1b];
            piVar7[-0x1a] = puVar10[-0x1a];
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_200ce035;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar10 = (undefined4 *)puVar10[-0x1c];
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)&DAT_201116cc;
          }
          puVar9 = (undefined4 *)piVar7[-0x1c];
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_2000a6a0(uVar1);
        }
      }
LAB_200ce035:
      puVar10 = puVar6;
      piVar7 = piVar8;
    } while (param_2 != param_1);
  }
  return param_3;
}

