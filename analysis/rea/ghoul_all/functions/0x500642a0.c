// rea decompile_all
// name: FUN_500642a0
// address: 0x500642a0
// body: available
// range: 0x500642a0-0x50064462 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500642a0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    piVar7 = (int *)(param_3 + 0xc);
    piVar6 = (int *)(param_1 + 0xc);
    do {
      *param_3 = *param_1;
      *(undefined2 *)((int)piVar7 + -10) = *(undefined2 *)((int)piVar6 + -10);
      *(short *)(piVar7 + -2) = (short)piVar6[-2];
      if (piVar7 + -1 != piVar6 + -1) {
        puVar1 = (undefined4 *)*piVar6;
        if (puVar1 == (undefined4 *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = piVar6[1] - (int)puVar1 >> 2;
        }
        puVar4 = (undefined4 *)*piVar7;
        if (puVar4 == (undefined4 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = piVar7[1] - (int)puVar4 >> 2;
        }
        if (uVar2 < uVar5) {
          if (puVar1 == (undefined4 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = piVar6[1] - (int)puVar1 >> 2;
          }
          if (puVar4 == (undefined4 *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = piVar7[2] - (int)puVar4 >> 2;
          }
          if (uVar2 < uVar5) {
            FUN_50106b60((undefined *)puVar4);
            if (*piVar6 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = piVar6[1] - *piVar6 >> 2;
            }
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            puVar1 = operator_new(iVar3 * 4);
            *piVar7 = (int)puVar1;
            iVar3 = FUN_50064470((undefined4 *)*piVar6,(undefined4 *)piVar6[1],puVar1);
            piVar7[1] = iVar3;
            piVar7[2] = iVar3;
          }
          else {
            if (puVar4 == (undefined4 *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = piVar7[1] - (int)puVar4 >> 2;
            }
            puVar8 = puVar1 + iVar3;
            for (; puVar1 != puVar8; puVar1 = puVar1 + 1) {
              *puVar4 = *puVar1;
              puVar4 = puVar4 + 1;
            }
            puVar1 = (undefined4 *)piVar6[1];
            puVar4 = (undefined4 *)piVar7[1];
            for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
              FUN_5000ad80(puVar4,puVar8);
              puVar4 = puVar4 + 1;
            }
            if (*piVar6 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = piVar6[1] - *piVar6 >> 2;
            }
            piVar7[1] = *piVar7 + iVar3 * 4;
          }
        }
        else {
          puVar8 = (undefined4 *)piVar6[1];
          for (; puVar1 != puVar8; puVar1 = puVar1 + 1) {
            *puVar4 = *puVar1;
            puVar4 = puVar4 + 1;
          }
          if (*piVar6 == 0) {
            piVar7[1] = *piVar7;
          }
          else {
            piVar7[1] = *piVar7 + (piVar6[1] - *piVar6 >> 2) * 4;
          }
        }
      }
      *(char *)(piVar7 + 3) = (char)piVar6[3];
      param_1 = param_1 + 0x1c;
      param_3 = param_3 + 0x1c;
      piVar7 = piVar7 + 7;
      piVar6 = piVar6 + 7;
    } while (param_1 != param_2);
  }
  return;
}

