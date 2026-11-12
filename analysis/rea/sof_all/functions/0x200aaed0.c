// rea decompile_all
// name: FUN_200aaed0
// address: 0x200aaed0
// body: available
// range: 0x200aaed0-0x200ab0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200aaed0(int *param_1,char *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_48;
  undefined4 local_44 [16];
  undefined4 local_4;
  
  local_4 = 0;
  if ((*param_2 == '\0') &&
     (puVar2 = *(undefined1 **)(in_ECX + 0x10), puVar2 != *(undefined1 **)(in_ECX + 0x14))) {
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined1 **)(in_ECX + 0x14));
  }
  if (*(char *)(in_ECX + 1) == '\0') {
    local_54 = *param_1;
    local_50 = param_1[1];
    local_48 = param_1[3];
    if (*param_2 == '\0') {
      pcVar6 = (char *)(*(int *)(param_2 + 0x4c) + param_1[2] * 0x44);
    }
    else {
      pcVar6 = param_2 + 4;
    }
    iVar5 = *(int *)(in_ECX + 4);
    puVar3 = local_44;
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      puVar3 = puVar3 + 1;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        FUN_200a1410(&local_60,*(int *)(in_ECX + 0x30) + iVar5);
        puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x30) + iVar5);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0xc;
        *puVar3 = local_60;
        puVar3[1] = local_5c;
        puVar3[2] = local_58;
      } while (iVar4 < *(int *)(in_ECX + 4));
    }
    *(undefined1 *)(in_ECX + 1) = 1;
  }
  iVar5 = *param_1;
  param_1[1] = 0;
  if (0 < *(int *)(*(int *)(in_ECX + 0x4c) + iVar5 * 0xc)) {
    do {
      param_1[2] = *(int *)(*(int *)(param_1[3] + 4) + iVar5 * 4) + param_1[1];
      local_54 = *param_1;
      local_50 = param_1[1];
      local_48 = param_1[3];
      if (*param_2 == '\0') {
        pcVar6 = (char *)(*(int *)(param_2 + 0x4c) + param_1[2] * 0x44);
      }
      else {
        pcVar6 = param_2 + 4;
      }
      iVar5 = *(int *)(in_ECX + 4);
      puVar3 = local_44;
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        puVar3 = puVar3 + 1;
      }
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          FUN_200a1410(&local_60,
                       *(int *)(*(int *)(in_ECX + 0x4c) + *param_1 * 0xc + 4) +
                       (*(int *)(*(int *)(in_ECX + 0x4c) + *param_1 * 0xc) * iVar4 + param_1[1]) *
                       0xc);
          FUN_20067780(&local_60);
          piVar1 = (int *)(*(int *)(in_ECX + 0x4c) + *param_1 * 0xc);
          iVar5 = *piVar1 * iVar4;
          iVar4 = iVar4 + 1;
          puVar3 = (undefined4 *)(piVar1[1] + (iVar5 + param_1[1]) * 0xc);
          *puVar3 = local_60;
          puVar3[1] = local_5c;
          puVar3[2] = local_58;
        } while (iVar4 < *(int *)(in_ECX + 4));
      }
      iVar4 = param_1[1];
      param_1[1] = iVar4 + 1;
      iVar5 = *param_1;
    } while (iVar4 + 1 < *(int *)(*(int *)(in_ECX + 0x4c) + iVar5 * 0xc));
  }
  return;
}

