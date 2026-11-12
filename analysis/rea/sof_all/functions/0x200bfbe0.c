// rea decompile_all
// name: FUN_200bfbe0
// address: 0x200bfbe0
// body: available
// range: 0x200bfbe0-0x200bfd39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bfbe0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  int in_ECX;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *puVar10;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  undefined1 local_4;
  
  iVar3 = param_1;
  local_20 = (int *)**(int **)(in_ECX + 0x28);
  local_18 = in_ECX;
  if (local_20 != *(int **)(in_ECX + 0x28)) {
    do {
      puVar5 = *(undefined4 **)(iVar3 + 4);
      piVar7 = local_20 + 3;
      bVar9 = true;
      puVar8 = (undefined4 *)puVar5[1];
      if (puVar8 != *(undefined4 **)(iVar3 + 8)) {
        do {
          puVar5 = puVar8;
          iVar4 = FUN_20023c40(puVar5 + 3);
          bVar9 = iVar4 < 0;
          if (bVar9) {
            puVar8 = (undefined4 *)*puVar5;
          }
          else {
            puVar8 = (undefined4 *)puVar5[2];
          }
        } while (puVar8 != *(undefined4 **)(iVar3 + 8));
      }
      if (*(char *)(iVar3 + 0xc) == '\0') {
        local_1c = puVar5;
        if (bVar9) {
          if (puVar5 != (undefined4 *)**(int **)(iVar3 + 4)) {
            FUN_20086e70();
            goto LAB_200bfc91;
          }
          puVar10 = &param_1;
          param_1 = CONCAT31(param_1._1_3_,1);
          ppuVar6 = (undefined4 **)FUN_20027330(local_10,puVar8,puVar5,piVar7);
        }
        else {
LAB_200bfc91:
          iVar4 = FUN_20023c40(piVar7);
          if (iVar4 < 0) {
            puVar10 = &param_1;
            param_1 = CONCAT31(param_1._1_3_,1);
            ppuVar6 = (undefined4 **)FUN_20027330(local_c,puVar8,puVar5,piVar7);
          }
          else {
            puVar10 = &param_1;
            ppuVar6 = &local_1c;
            param_1 = (uint)param_1._1_3_ << 8;
          }
        }
        FUN_2008c5b0(ppuVar6,puVar10);
      }
      else {
        puVar5 = (undefined4 *)FUN_20027330(local_14,puVar8,puVar5,piVar7);
        local_8 = *puVar5;
        local_4 = 1;
      }
      piVar7 = (int *)local_20[2];
      if (*(char *)((int)piVar7 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar7 + 0x21);
        piVar2 = (int *)*piVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
        }
LAB_200bfd1f:
        local_20 = piVar7;
      }
      else {
        piVar7 = (int *)local_20[1];
        if (local_20 == (int *)piVar7[2]) {
          do {
            local_20 = piVar7;
            piVar7 = (int *)local_20[1];
          } while (local_20 == (int *)piVar7[2]);
        }
        if ((int *)local_20[2] != piVar7) goto LAB_200bfd1f;
      }
    } while (local_20 != *(int **)(local_18 + 0x28));
  }
  return;
}

