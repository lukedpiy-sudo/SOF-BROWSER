// rea decompile_all
// name: FUN_200aad80
// address: 0x200aad80
// body: available
// range: 0x200aad80-0x200aaec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200aad80(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_8;
  int local_4;
  
  iVar8 = 0;
  local_8 = 0;
  while( true ) {
    if ((*(int *)(param_1 + 0x14) == 0) ||
       ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) <= local_8)) break;
    piVar5 = (int *)(*(int *)(in_ECX + 0x4c) + iVar8);
    if (*(int *)(*(int *)(in_ECX + 0x4c) + iVar8) == 0) {
      iVar7 = *(int *)(in_ECX + 8);
      iVar6 = *(int *)(in_ECX + 4);
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + local_8 * 4);
      *piVar5 = iVar3;
      pvVar2 = operator_new(iVar3 * iVar6 * 0xc);
      piVar5[1] = (int)pvVar2;
      pvVar2 = operator_new(*piVar5 * iVar7 * 8);
      piVar5[2] = (int)pvVar2;
      iVar7 = 0;
      if (0 < *(int *)(*(int *)(in_ECX + 0x4c) + iVar8)) {
        do {
          iVar6 = 0;
          if (0 < *(int *)(in_ECX + 4)) {
            local_4 = 0;
            do {
              puVar4 = (undefined4 *)(*(int *)(in_ECX + 0x30) + local_4);
              iVar3 = *(int *)(*(int *)(in_ECX + 0x4c) + iVar8) * iVar6;
              iVar6 = iVar6 + 1;
              puVar1 = (undefined4 *)
                       (*(int *)(*(int *)(in_ECX + 0x4c) + iVar8 + 4) + (iVar3 + iVar7) * 0xc);
              *puVar1 = *puVar4;
              puVar1[1] = puVar4[1];
              puVar1[2] = puVar4[2];
              local_4 = local_4 + 0xc;
            } while (iVar6 < *(int *)(in_ECX + 4));
          }
          iVar6 = 0;
          if (0 < *(int *)(in_ECX + 8)) {
            do {
              *(undefined4 *)
               (*(int *)(*(int *)(in_ECX + 0x4c) + iVar8 + 8) +
               (*(int *)(*(int *)(in_ECX + 0x4c) + iVar8) * iVar6 + iVar7) * 8) =
                   *(undefined4 *)(*(int *)(in_ECX + 0x34) + iVar6 * 8);
              piVar5 = (int *)(*(int *)(in_ECX + 0x4c) + iVar8);
              iVar9 = *piVar5 * iVar6;
              iVar3 = iVar6 * 8;
              iVar6 = iVar6 + 1;
              *(undefined4 *)(piVar5[2] + 4 + (iVar9 + iVar7) * 8) =
                   *(undefined4 *)(*(int *)(in_ECX + 0x34) + 4 + iVar3);
            } while (iVar6 < *(int *)(in_ECX + 8));
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(*(int *)(in_ECX + 0x4c) + iVar8));
      }
    }
    local_8 = local_8 + 1;
    iVar8 = iVar8 + 0xc;
  }
  return;
}

