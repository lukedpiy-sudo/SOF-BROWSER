// rea decompile_all
// name: FUN_200e4e80
// address: 0x200e4e80
// body: available
// range: 0x200e4e80-0x200e5007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e4ed0) */

undefined4 * FUN_200e4e80(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  if (param_1 != param_2) {
    piVar6 = param_3 + 3;
    puVar9 = (undefined4 *)(param_2 + 0xc);
    do {
      puVar11 = (undefined4 *)(param_2 + -0x18);
      param_2 = param_2 + -0x18;
      param_3 = param_3 + -6;
      puVar8 = puVar9 + -6;
      piVar7 = piVar6 + -6;
      *param_3 = *puVar11;
      piVar6[-8] = puVar9[-8];
      uVar1 = puVar9[-5];
      if (piVar6 + -7 == puVar9 + -7) {
        if ((uint)piVar6[-5] < uVar1) {
          FUN_201077fc();
        }
        iVar3 = piVar6[-5] - uVar1;
        iVar10 = -1;
        if ((iVar3 == -1) || (iVar10 = iVar3, iVar3 != 0)) {
          FUN_2000a930();
          FUN_200fa360(*piVar7 + uVar1,*piVar7 + uVar1 + iVar10,(piVar6[-5] - iVar10) - uVar1);
          iVar3 = piVar6[-5];
          cVar2 = FUN_2000a6c0(iVar3 - iVar10,0);
          if (cVar2 != '\0') {
            FUN_2000a6a0(iVar3 - iVar10);
          }
        }
      }
      else {
        if (uVar1 != 0) {
          puVar4 = (undefined1 *)*puVar8;
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_201116cc;
          }
          if ((int)(uint)(byte)puVar4[-1] < -1) {
            iVar10 = *piVar7;
            if (iVar10 != 0) {
              if (*(char *)(iVar10 + -1) == '\0') {
                FUN_200f9f75((char *)(iVar10 + -1));
              }
              else {
                *(char *)(iVar10 + -1) = *(char *)(iVar10 + -1) + -1;
              }
            }
            *piVar7 = 0;
            piVar6[-5] = 0;
            piVar6[-4] = 0;
            puVar4 = (undefined1 *)*puVar8;
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_201116cc;
            }
            *piVar7 = (int)puVar4;
            piVar6[-5] = puVar9[-5];
            piVar6[-4] = puVar9[-4];
            puVar4[-1] = puVar4[-1] + '\x01';
            goto LAB_200e4fee;
          }
        }
        cVar2 = FUN_2000a6c0(uVar1,1);
        if (cVar2 != '\0') {
          puVar9 = (undefined4 *)*puVar8;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)&DAT_201116cc;
          }
          puVar11 = (undefined4 *)*piVar7;
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
          piVar6[-5] = uVar1;
          *(undefined1 *)(uVar1 + *piVar7) = 0;
        }
      }
LAB_200e4fee:
      piVar6 = piVar7;
      puVar9 = puVar8;
    } while (param_2 != param_1);
  }
  return param_3;
}

