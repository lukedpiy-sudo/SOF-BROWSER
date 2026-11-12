// rea decompile_all
// name: FUN_500644a0
// address: 0x500644a0
// body: available
// range: 0x500644a0-0x5006465a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500644a0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (param_1 != param_2) {
    piVar5 = (int *)(param_1 + 0xc);
    do {
      *param_1 = *param_3;
      *(undefined2 *)((int)piVar5 + -10) = *(undefined2 *)(param_3 + 2);
      *(undefined2 *)(piVar5 + -2) = *(undefined2 *)(param_3 + 4);
      if (piVar5 + -1 != (int *)(param_3 + 8)) {
        puVar1 = *(undefined4 **)(param_3 + 0xc);
        if (puVar1 == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(int *)(param_3 + 0x10) - (int)puVar1 >> 2;
        }
        puVar4 = (undefined4 *)*piVar5;
        if (puVar4 == (undefined4 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = piVar5[1] - (int)puVar4 >> 2;
        }
        if (uVar2 < uVar7) {
          if (puVar1 == (undefined4 *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(int *)(param_3 + 0x10) - (int)puVar1 >> 2;
          }
          if (puVar4 == (undefined4 *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = piVar5[2] - (int)puVar4 >> 2;
          }
          if (uVar2 < uVar7) {
            FUN_50106b60((undefined *)puVar4);
            if (*(int *)(param_3 + 0xc) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(param_3 + 0x10) - *(int *)(param_3 + 0xc) >> 2;
            }
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            puVar1 = operator_new(iVar3 * 4);
            *piVar5 = (int)puVar1;
            iVar3 = FUN_50064470(*(undefined4 **)(param_3 + 0xc),*(undefined4 **)(param_3 + 0x10),
                                 puVar1);
            piVar5[1] = iVar3;
            piVar5[2] = iVar3;
          }
          else {
            if (puVar4 == (undefined4 *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = piVar5[1] - (int)puVar4 >> 2;
            }
            puVar6 = puVar1 + iVar3;
            for (; puVar1 != puVar6; puVar1 = puVar1 + 1) {
              *puVar4 = *puVar1;
              puVar4 = puVar4 + 1;
            }
            puVar1 = *(undefined4 **)(param_3 + 0x10);
            puVar4 = (undefined4 *)piVar5[1];
            for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
              FUN_5000ad80(puVar4,puVar6);
              puVar4 = puVar4 + 1;
            }
            if (*(int *)(param_3 + 0xc) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(param_3 + 0x10) - *(int *)(param_3 + 0xc) >> 2;
            }
            piVar5[1] = *piVar5 + iVar3 * 4;
          }
        }
        else {
          puVar6 = *(undefined4 **)(param_3 + 0x10);
          for (; puVar1 != puVar6; puVar1 = puVar1 + 1) {
            *puVar4 = *puVar1;
            puVar4 = puVar4 + 1;
          }
          if (*(int *)(param_3 + 0xc) == 0) {
            piVar5[1] = *piVar5;
          }
          else {
            piVar5[1] = *piVar5 + (*(int *)(param_3 + 0x10) - *(int *)(param_3 + 0xc) >> 2) * 4;
          }
        }
      }
      *(undefined1 *)(piVar5 + 3) = param_3[0x18];
      param_1 = param_1 + 0x1c;
      piVar5 = piVar5 + 7;
    } while (param_1 != param_2);
  }
  return;
}

