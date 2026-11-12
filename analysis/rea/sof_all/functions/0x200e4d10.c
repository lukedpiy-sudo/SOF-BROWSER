// rea decompile_all
// name: FUN_200e4d10
// address: 0x200e4d10
// body: available
// range: 0x200e4d10-0x200e4e7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e4d42) */

void FUN_200e4d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (param_1 != param_2) {
    piVar6 = param_1 + 3;
    do {
      *param_1 = *param_3;
      piVar6[-2] = param_3[1];
      uVar1 = param_3[4];
      if (piVar6 + -1 == param_3 + 2) {
        if ((uint)piVar6[1] < uVar1) {
          FUN_201077fc();
        }
        iVar3 = piVar6[1] - uVar1;
        iVar8 = -1;
        if ((iVar3 == -1) || (iVar8 = iVar3, iVar3 != 0)) {
          FUN_2000a930();
          FUN_200fa360(*piVar6 + uVar1,*piVar6 + uVar1 + iVar8,(piVar6[1] - iVar8) - uVar1);
          iVar3 = piVar6[1];
          cVar2 = FUN_2000a6c0(iVar3 - iVar8,0);
          if (cVar2 != '\0') {
            FUN_2000a6a0(iVar3 - iVar8);
          }
        }
      }
      else {
        if (uVar1 != 0) {
          puVar4 = (undefined1 *)param_3[3];
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar4[-1] < -1) {
            iVar8 = *piVar6;
            if (iVar8 != 0) {
              if (*(char *)(iVar8 + -1) == '\0') {
                FUN_200f9f75((char *)(iVar8 + -1));
              }
              else {
                *(char *)(iVar8 + -1) = *(char *)(iVar8 + -1) + -1;
              }
            }
            *piVar6 = 0;
            piVar6[1] = 0;
            piVar6[2] = 0;
            puVar4 = (undefined1 *)param_3[3];
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_201116cc;
            }
            *piVar6 = (int)puVar4;
            piVar6[1] = param_3[4];
            piVar6[2] = param_3[5];
            puVar4[-1] = puVar4[-1] + '\x01';
            goto LAB_200e4e5c;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar7 = (undefined4 *)param_3[3];
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&DAT_201116cc;
          }
          puVar9 = (undefined4 *)*piVar6;
          for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          piVar6[1] = uVar1;
          *(undefined1 *)(uVar1 + *piVar6) = 0;
        }
      }
LAB_200e4e5c:
      param_1 = param_1 + 6;
      piVar6 = piVar6 + 6;
    } while (param_1 != param_2);
  }
  return;
}

