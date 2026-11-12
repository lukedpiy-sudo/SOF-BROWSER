// rea decompile_all
// name: FUN_2009f010
// address: 0x2009f010
// body: available
// range: 0x2009f010-0x2009f1f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009f010(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  if (param_1 != param_2) {
    piVar5 = (int *)(param_1 + 0x20);
    do {
      *param_1 = *param_3;
      FUN_2000a3a0(param_3 + 4,0,0xffffffff);
      *(undefined1 *)(piVar5 + -3) = param_3[0x14];
      *(undefined1 *)((int)piVar5 + -0xb) = param_3[0x15];
      *(undefined1 *)((int)piVar5 + -10) = param_3[0x16];
      *(undefined1 *)(piVar5 + -2) = param_3[0x18];
      *(undefined1 *)((int)piVar5 + -7) = param_3[0x19];
      *(undefined1 *)((int)piVar5 + -6) = param_3[0x1a];
      if (piVar5 + -1 != (int *)(param_3 + 0x1c)) {
        iVar3 = *(int *)(param_3 + 0x20);
        if (iVar3 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(int *)(param_3 + 0x24) - iVar3;
        }
        iVar1 = *piVar5;
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = piVar5[1] - iVar1;
        }
        if (uVar4 < uVar7) {
          if (iVar3 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(int *)(param_3 + 0x24) - iVar3;
          }
          if (iVar1 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = piVar5[2] - iVar1;
          }
          if (uVar4 < uVar7) {
            FUN_200f9f75(iVar1);
            if (*(int *)(param_3 + 0x20) == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(int *)(param_3 + 0x24) - *(int *)(param_3 + 0x20);
            }
            if ((int)uVar7 < 0) {
              uVar7 = 0;
            }
            pvVar2 = operator_new(uVar7);
            *piVar5 = (int)pvVar2;
            iVar3 = FUN_200823d0(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                                 pvVar2);
            piVar5[1] = iVar3;
            piVar5[2] = iVar3;
          }
          else {
            if (iVar1 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = piVar5[1] - iVar1;
            }
            FUN_2009f410(iVar3,iVar8 + iVar3,iVar1);
            FUN_200823d0(iVar8 + iVar3,*(undefined4 *)(param_3 + 0x24),piVar5[1]);
            iVar3 = *(int *)(param_3 + 0x20);
            if (iVar3 != 0) goto LAB_2009f0be;
            piVar5[1] = *piVar5;
          }
        }
        else {
          FUN_2009f410(iVar3,*(undefined4 *)(param_3 + 0x24),iVar1);
          iVar3 = *(int *)(param_3 + 0x20);
          if (iVar3 == 0) {
            piVar5[1] = *piVar5;
          }
          else {
LAB_2009f0be:
            piVar5[1] = *piVar5 + (*(int *)(param_3 + 0x24) - iVar3);
          }
        }
      }
      *(undefined1 *)(piVar5 + 3) = param_3[0x2c];
      *(undefined1 *)((int)piVar5 + 0xd) = param_3[0x2d];
      piVar6 = (int *)(param_3 + 0x30);
      piVar9 = piVar5 + 4;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      }
      FUN_200a01d0(param_3 + 0x74);
      *(undefined1 *)(piVar5 + 0x19) = param_3[0x84];
      piVar5[0x1a] = *(int *)(param_3 + 0x88);
      *(undefined1 *)(piVar5 + 0x1b) = param_3[0x8c];
      *(undefined2 *)((int)piVar5 + 0x6e) = *(undefined2 *)(param_3 + 0x8e);
      *(undefined2 *)(piVar5 + 0x1c) = *(undefined2 *)(param_3 + 0x90);
      piVar6 = (int *)(param_3 + 0x94);
      piVar9 = piVar5 + 0x1d;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      }
      param_1 = param_1 + 0xd8;
      piVar5 = piVar5 + 0x36;
    } while (param_1 != param_2);
  }
  return;
}

