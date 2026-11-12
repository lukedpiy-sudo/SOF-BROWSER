// rea decompile_all
// name: FUN_200cdba0
// address: 0x200cdba0
// body: available
// range: 0x200cdba0-0x200cddde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200cdc29) */
/* WARNING: Removing unreachable block (ram,0x200cdcf3) */

void FUN_200cdba0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    piVar6 = param_1 + 0x19;
    do {
      puVar7 = param_3;
      puVar8 = param_1;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_2000a3a0(param_3 + 5,0,0xffffffff);
      FUN_2000a3a0(param_3 + 9,0,0xffffffff);
      FUN_2000a3a0(param_3 + 0xd,0,0xffffffff);
      piVar6[-8] = param_3[0x11];
      piVar6[-7] = param_3[0x12];
      FUN_2000a3a0(param_3 + 0x13,0,0xffffffff);
      piVar6[-2] = param_3[0x17];
      uVar1 = param_3[0x1a];
      if (piVar6 + -1 == param_3 + 0x18) {
        FUN_20027e40(uVar1,0xffffffff);
        FUN_20027e40(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar3 = (undefined1 *)param_3[0x19];
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar3[-1] < -1) {
            FUN_2000a5b0(1);
            puVar3 = (undefined1 *)param_3[0x19];
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_201116cc;
            }
            *piVar6 = (int)puVar3;
            piVar6[1] = param_3[0x1a];
            piVar6[2] = param_3[0x1b];
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_200cdcdc;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar7 = (undefined4 *)param_3[0x19];
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&DAT_201116cc;
          }
          puVar8 = (undefined4 *)*piVar6;
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          piVar6[1] = uVar1;
          *(undefined1 *)(uVar1 + *piVar6) = 0;
        }
      }
LAB_200cdcdc:
      piVar6[3] = param_3[0x1c];
      uVar1 = param_3[0x1f];
      if (piVar6 + 4 == param_3 + 0x1d) {
        FUN_20027e40(uVar1,0xffffffff);
        FUN_20027e40(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar3 = (undefined1 *)param_3[0x1e];
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar3[-1] < -1) {
            iVar4 = piVar6[5];
            if (iVar4 != 0) {
              if (*(char *)(iVar4 + -1) == '\0') {
                FUN_200f9f75((char *)(iVar4 + -1));
              }
              else {
                *(char *)(iVar4 + -1) = *(char *)(iVar4 + -1) + -1;
              }
            }
            piVar6[5] = 0;
            piVar6[6] = 0;
            piVar6[7] = 0;
            puVar3 = (undefined1 *)param_3[0x1e];
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_201116cc;
            }
            piVar6[5] = (int)puVar3;
            piVar6[6] = param_3[0x1f];
            piVar6[7] = param_3[0x20];
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_200cddbb;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar7 = (undefined4 *)param_3[0x1e];
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&DAT_201116cc;
          }
          puVar8 = (undefined4 *)piVar6[5];
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          FUN_2000a6a0(uVar1);
        }
      }
LAB_200cddbb:
      param_1 = param_1 + 0x21;
      piVar6 = piVar6 + 0x21;
    } while (param_1 != param_2);
  }
  return;
}

