// rea decompile_all
// name: FUN_200cd920
// address: 0x200cd920
// body: available
// range: 0x200cd920-0x200cdb90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200cd9b0) */
/* WARNING: Removing unreachable block (ram,0x200cda7d) */

undefined4 * FUN_200cd920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (param_1 != param_2) {
    piVar7 = param_3 + 0x19;
    puVar6 = param_1 + 0x19;
    do {
      puVar8 = param_1;
      puVar9 = param_3;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_2000a3a0(puVar6 + -0x14,0,0xffffffff);
      FUN_2000a3a0(puVar6 + -0x10,0,0xffffffff);
      FUN_2000a3a0(puVar6 + -0xc,0,0xffffffff);
      piVar7[-8] = puVar6[-8];
      piVar7[-7] = puVar6[-7];
      FUN_2000a3a0(puVar6 + -6,0,0xffffffff);
      piVar7[-2] = puVar6[-2];
      uVar1 = puVar6[1];
      if (piVar7 + -1 == puVar6 + -1) {
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
            *piVar7 = (int)puVar3;
            piVar7[1] = puVar6[1];
            piVar7[2] = puVar6[2];
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_200cda69;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar8 = (undefined4 *)*puVar6;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)&DAT_201116cc;
          }
          puVar9 = (undefined4 *)*piVar7;
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          piVar7[1] = uVar1;
          *(undefined1 *)(uVar1 + *piVar7) = 0;
        }
      }
LAB_200cda69:
      piVar7[3] = puVar6[3];
      uVar1 = puVar6[6];
      if (piVar7 + 4 == puVar6 + 4) {
        FUN_20027e40(uVar1,0xffffffff);
        FUN_20027e40(0,0);
      }
      else {
        if (uVar1 != 0) {
          puVar3 = (undefined1 *)puVar6[5];
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar3[-1] < -1) {
            iVar4 = piVar7[5];
            if (iVar4 != 0) {
              if (*(char *)(iVar4 + -1) == '\0') {
                FUN_200f9f75((char *)(iVar4 + -1));
              }
              else {
                *(char *)(iVar4 + -1) = *(char *)(iVar4 + -1) + -1;
              }
            }
            piVar7[5] = 0;
            piVar7[6] = 0;
            piVar7[7] = 0;
            puVar3 = (undefined1 *)puVar6[5];
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_201116cc;
            }
            piVar7[5] = (int)puVar3;
            piVar7[6] = puVar6[6];
            piVar7[7] = puVar6[7];
            puVar3[-1] = puVar3[-1] + '\x01';
            goto LAB_200cdb55;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar8 = (undefined4 *)puVar6[5];
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)&DAT_201116cc;
          }
          puVar9 = (undefined4 *)piVar7[5];
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_2000a6a0(uVar1);
        }
      }
LAB_200cdb55:
      param_3 = param_3 + 0x21;
      piVar7 = piVar7 + 0x21;
      param_1 = param_1 + 0x21;
      puVar6 = puVar6 + 0x21;
    } while (param_1 != param_2);
  }
  return param_3;
}

