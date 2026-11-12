// rea decompile_all
// name: FUN_200a6650
// address: 0x200a6650
// body: available
// range: 0x200a6650-0x200a6816 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a6650(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  int in_ECX;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  undefined4 *local_24;
  int *local_20;
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  undefined1 local_4;
  
  iVar1 = param_1;
  piVar6 = *(int **)(in_ECX + 0xa4);
  local_1c = in_ECX;
  if (piVar6 != *(int **)(in_ECX + 0xa8)) {
    do {
      FUN_20026c70(&local_8,*piVar6 + 8);
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(in_ECX + 0xa8));
  }
  piVar6 = *(int **)(in_ECX + 0xb4);
  if (piVar6 != *(int **)(in_ECX + 0xb8)) {
    do {
      FUN_20026c70(&local_8,*piVar6 + 8);
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(in_ECX + 0xb8));
  }
  piVar6 = *(int **)(in_ECX + 0xc4);
  if (piVar6 != *(int **)(in_ECX + 200)) {
    do {
      FUN_20026c70(&local_8,*piVar6 + 8);
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(in_ECX + 200));
  }
  local_20 = *(int **)(in_ECX + 0xd4);
  if (local_20 != *(int **)(in_ECX + 0xd8)) {
    do {
      puVar3 = *(undefined4 **)(iVar1 + 4);
      iVar8 = *local_20 + 8;
      puVar7 = (undefined4 *)puVar3[1];
      bVar9 = true;
      if (puVar7 != *(undefined4 **)(iVar1 + 8)) {
        do {
          puVar3 = puVar7;
          iVar2 = FUN_20023c40(puVar3 + 3);
          bVar9 = iVar2 < 0;
          if (bVar9) {
            puVar7 = (undefined4 *)*puVar3;
          }
          else {
            puVar7 = (undefined4 *)puVar3[2];
          }
        } while (puVar7 != *(undefined4 **)(iVar1 + 8));
      }
      if (*(char *)(iVar1 + 0xc) == '\0') {
        local_24 = puVar3;
        if (bVar9) {
          puVar4 = (undefined4 *)FUN_20083550(local_14);
          if (local_24 != (undefined4 *)*puVar4) {
            FUN_20086e70();
            goto LAB_200a67ab;
          }
          puVar4 = &param_1;
          param_1 = CONCAT31(param_1._1_3_,1);
          ppuVar5 = (undefined4 **)FUN_20027330(local_10,puVar7,puVar3,iVar8);
        }
        else {
LAB_200a67ab:
          iVar2 = FUN_20023c40(iVar8);
          if (iVar2 < 0) {
            puVar4 = &param_1;
            param_1 = CONCAT31(param_1._1_3_,1);
            ppuVar5 = (undefined4 **)FUN_20027330(local_c,puVar7,puVar3,iVar8);
          }
          else {
            puVar4 = &param_1;
            ppuVar5 = &local_24;
            param_1 = (uint)param_1._1_3_ << 8;
          }
        }
        FUN_2008c5b0(ppuVar5,puVar4);
      }
      else {
        puVar3 = (undefined4 *)FUN_20027330(local_18,puVar7,puVar3,iVar8);
        local_8 = *puVar3;
        local_4 = 1;
      }
      local_20 = local_20 + 1;
    } while (local_20 != *(int **)(local_1c + 0xd8));
  }
  return;
}

