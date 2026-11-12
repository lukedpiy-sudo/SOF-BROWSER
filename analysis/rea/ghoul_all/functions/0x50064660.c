// rea decompile_all
// name: FUN_50064660
// address: 0x50064660
// body: available
// range: 0x50064660-0x50064823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __cdecl FUN_50064660(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  if (param_1 != param_2) {
    piVar7 = (int *)(param_2 + 0xc);
    piVar9 = (int *)(param_3 + 0xc);
    do {
      puVar1 = (undefined1 *)(param_2 + -0x1c);
      param_2 = param_2 + -0x1c;
      param_3 = param_3 + -0x1c;
      piVar8 = piVar7 + -7;
      piVar10 = piVar9 + -7;
      *param_3 = *puVar1;
      *(undefined2 *)((int)piVar9 + -0x26) = *(undefined2 *)((int)piVar7 + -0x26);
      *(short *)(piVar9 + -9) = (short)piVar7[-9];
      if (piVar9 + -8 != piVar7 + -8) {
        puVar2 = (undefined4 *)*piVar8;
        if (puVar2 == (undefined4 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = piVar7[-6] - (int)puVar2 >> 2;
        }
        puVar5 = (undefined4 *)*piVar10;
        if (puVar5 == (undefined4 *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = piVar9[-6] - (int)puVar5 >> 2;
        }
        if (uVar3 < uVar6) {
          if (puVar2 == (undefined4 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = piVar7[-6] - (int)puVar2 >> 2;
          }
          if (puVar5 == (undefined4 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = piVar9[-5] - (int)puVar5 >> 2;
          }
          if (uVar3 < uVar6) {
            FUN_50106b60((undefined *)puVar5);
            if (*piVar8 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = piVar7[-6] - *piVar8 >> 2;
            }
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            puVar2 = operator_new(iVar4 * 4);
            *piVar10 = (int)puVar2;
            iVar4 = FUN_50064470((undefined4 *)*piVar8,(undefined4 *)piVar7[-6],puVar2);
            piVar9[-6] = iVar4;
            piVar9[-5] = iVar4;
          }
          else {
            if (puVar5 == (undefined4 *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = piVar9[-6] - (int)puVar5 >> 2;
            }
            puVar11 = puVar2 + iVar4;
            for (; puVar2 != puVar11; puVar2 = puVar2 + 1) {
              *puVar5 = *puVar2;
              puVar5 = puVar5 + 1;
            }
            puVar2 = (undefined4 *)piVar7[-6];
            puVar5 = (undefined4 *)piVar9[-6];
            for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
              FUN_5000ad80(puVar5,puVar11);
              puVar5 = puVar5 + 1;
            }
            if (*piVar8 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = piVar7[-6] - *piVar8 >> 2;
            }
            piVar9[-6] = *piVar10 + iVar4 * 4;
          }
        }
        else {
          puVar11 = (undefined4 *)piVar7[-6];
          for (; puVar2 != puVar11; puVar2 = puVar2 + 1) {
            *puVar5 = *puVar2;
            puVar5 = puVar5 + 1;
          }
          if (*piVar8 == 0) {
            piVar9[-6] = *piVar10;
          }
          else {
            piVar9[-6] = *piVar10 + (piVar7[-6] - *piVar8 >> 2) * 4;
          }
        }
      }
      *(char *)(piVar9 + -4) = (char)piVar7[-4];
      piVar7 = piVar8;
      piVar9 = piVar10;
    } while (param_2 != param_1);
  }
  return param_3;
}

