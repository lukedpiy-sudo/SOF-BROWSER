// rea decompile_all
// name: FUN_200a73d0
// address: 0x200a73d0
// body: available
// range: 0x200a73d0-0x200a7634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200a75be) */
/* WARNING: Removing unreachable block (ram,0x200a75d3) */
/* WARNING: Removing unreachable block (ram,0x200a75e8) */
/* WARNING: Removing unreachable block (ram,0x200a75f1) */

void FUN_200a73d0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int in_ECX;
  int *piVar10;
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(in_ECX + 0xe0) != 0) {
    FUN_200a7710(param_1);
    iVar2 = param_2;
    piVar10 = *(int **)(in_ECX + 0xd4);
    param_1 = 0;
    if (piVar10 != *(int **)(in_ECX + 0xd8)) {
      do {
        iVar3 = param_3;
        iVar7 = *(int *)(param_3 + 4);
        param_2 = FUN_20075c80(&param_1);
        if ((param_2 == *(int *)(iVar3 + 4)) || (param_1 < *(int *)(param_2 + 0xc))) {
          local_c = *(int *)(iVar3 + 4);
          piVar5 = &local_c;
        }
        else {
          piVar5 = &param_2;
        }
        if (*piVar5 == iVar7) {
          *(undefined1 *)(*piVar10 + 5) = 1;
          cVar4 = FUN_200c28e0(in_ECX + 0x154);
          if ((cVar4 != '\0') &&
             (cVar4 = (**(code **)(**(int **)(*piVar10 + 0xec) + 0x1c))(in_ECX + 0x154),
             cVar4 != '\0')) {
            uStack_8 = *(undefined4 *)(*piVar10 + 0xec);
            puVar9 = *(undefined4 **)(iVar2 + 8);
            uStack_4 = CONCAT31(uStack_4._1_3_,*(undefined1 *)(*piVar10 + 0xf0));
            if (*(int *)(iVar2 + 0xc) - (int)puVar9 >> 3 == 0) {
              if ((*(int *)(iVar2 + 4) == 0) ||
                 (uVar6 = (int)puVar9 - *(int *)(iVar2 + 4) >> 3, uVar6 < 2)) {
                uVar6 = 1;
              }
              param_2 = FUN_2008ca10();
              param_2 = param_2 + uVar6;
              iVar7 = param_2;
              if (param_2 < 0) {
                iVar7 = 0;
              }
              pvVar8 = operator_new(iVar7 * 8);
              iVar7 = FUN_2008cbe0(*(undefined4 *)(iVar2 + 4),puVar9,pvVar8);
              FUN_200a9290(iVar7,1,&uStack_8);
              FUN_2008cbe0(puVar9,*(undefined4 *)(iVar2 + 8),iVar7 + 8);
              FUN_2008c730(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
              FUN_200f9f75(*(undefined4 *)(iVar2 + 4));
              *(void **)(iVar2 + 0xc) = (void *)((int)pvVar8 + param_2 * 8);
              iVar7 = FUN_2008ca10();
              *(void **)(iVar2 + 4) = pvVar8;
              *(int *)(iVar2 + 8) = (int)pvVar8 + iVar7 * 8 + 8;
            }
            else {
              FUN_2008cbe0(puVar9,puVar9,puVar9 + 2);
              FUN_200a9290(*(int *)(iVar2 + 8),1 - (*(int *)(iVar2 + 8) - (int)puVar9 >> 3),
                           &uStack_8);
              puVar1 = *(undefined4 **)(iVar2 + 8);
              for (; puVar9 != puVar1; puVar9 = puVar9 + 2) {
                *puVar9 = uStack_8;
                puVar9[1] = uStack_4;
              }
              *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 8;
            }
          }
        }
        piVar10 = piVar10 + 1;
        param_1 = param_1 + 1;
      } while (piVar10 != *(int **)(in_ECX + 0xd8));
    }
  }
  return;
}

