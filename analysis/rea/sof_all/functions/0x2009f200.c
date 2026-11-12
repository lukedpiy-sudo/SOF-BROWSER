// rea decompile_all
// name: FUN_2009f200
// address: 0x2009f200
// body: available
// range: 0x2009f200-0x2009f400 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_2009f200(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  
  if (param_1 != param_2) {
    piVar7 = (int *)(param_2 + 0x20);
    piVar9 = (int *)(param_3 + 0x20);
    do {
      puVar1 = (undefined1 *)(param_2 + -0xd8);
      param_2 = param_2 + -0xd8;
      piVar8 = piVar7 + -0x36;
      param_3 = param_3 + -0xd8;
      piVar10 = piVar9 + -0x36;
      *param_3 = *puVar1;
      FUN_2000a3a0(piVar7 + -0x3d,0,0xffffffff);
      *(char *)(piVar9 + -0x39) = (char)piVar7[-0x39];
      *(undefined1 *)((int)piVar9 + -0xe3) = *(undefined1 *)((int)piVar7 + -0xe3);
      *(undefined1 *)((int)piVar9 + -0xe2) = *(undefined1 *)((int)piVar7 + -0xe2);
      *(char *)(piVar9 + -0x38) = (char)piVar7[-0x38];
      *(undefined1 *)((int)piVar9 + -0xdf) = *(undefined1 *)((int)piVar7 + -0xdf);
      *(undefined1 *)((int)piVar9 + -0xde) = *(undefined1 *)((int)piVar7 + -0xde);
      if (piVar9 + -0x37 != piVar7 + -0x37) {
        iVar4 = *piVar8;
        if (iVar4 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = piVar7[-0x35] - iVar4;
        }
        iVar2 = *piVar10;
        if (iVar2 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = piVar9[-0x35] - iVar2;
        }
        if (uVar5 < uVar11) {
          if (iVar4 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = piVar7[-0x35] - iVar4;
          }
          if (iVar2 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = piVar9[-0x34] - iVar2;
          }
          if (uVar5 < uVar11) {
            FUN_200f9f75(iVar2);
            if (*piVar8 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = piVar7[-0x35] - *piVar8;
            }
            if ((int)uVar11 < 0) {
              uVar11 = 0;
            }
            pvVar3 = operator_new(uVar11);
            *piVar10 = (int)pvVar3;
            iVar4 = FUN_200823d0(*piVar8,piVar7[-0x35],pvVar3);
            piVar9[-0x35] = iVar4;
            piVar9[-0x34] = iVar4;
          }
          else {
            if (iVar2 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = piVar9[-0x35] - iVar2;
            }
            FUN_2009f410(iVar4,iVar6 + iVar4,iVar2);
            FUN_200823d0(iVar6 + iVar4,piVar7[-0x35],piVar9[-0x35]);
            if (*piVar8 == 0) {
              piVar9[-0x35] = *piVar10;
            }
            else {
              piVar9[-0x35] = *piVar10 + (piVar7[-0x35] - *piVar8);
            }
          }
        }
        else {
          FUN_2009f410(iVar4,piVar7[-0x35],iVar2);
          if (*piVar8 == 0) {
            piVar9[-0x35] = *piVar10;
          }
          else {
            piVar9[-0x35] = *piVar10 + (piVar7[-0x35] - *piVar8);
          }
        }
      }
      *(char *)(piVar9 + -0x33) = (char)piVar7[-0x33];
      *(undefined1 *)((int)piVar9 + -0xcb) = *(undefined1 *)((int)piVar7 + -0xcb);
      piVar12 = piVar7 + -0x32;
      piVar13 = piVar9 + -0x32;
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar13 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar13 = piVar13 + 1;
      }
      FUN_200a01d0(piVar7 + -0x21);
      *(char *)(piVar9 + -0x1d) = (char)piVar7[-0x1d];
      piVar9[-0x1c] = piVar7[-0x1c];
      *(char *)(piVar9 + -0x1b) = (char)piVar7[-0x1b];
      *(undefined2 *)((int)piVar9 + -0x6a) = *(undefined2 *)((int)piVar7 + -0x6a);
      *(short *)(piVar9 + -0x1a) = (short)piVar7[-0x1a];
      piVar7 = piVar7 + -0x19;
      piVar9 = piVar9 + -0x19;
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      piVar7 = piVar8;
      piVar9 = piVar10;
    } while (param_2 != param_1);
  }
  return param_3;
}

