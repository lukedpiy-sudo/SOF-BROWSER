// rea decompile_all
// name: FUN_200c2e40
// address: 0x200c2e40
// body: available
// range: 0x200c2e40-0x200c3142 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c2e40(int *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_8c;
  undefined4 local_88 [12];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44 [16];
  undefined4 local_4;
  
  if ((*param_2 == '\0') &&
     (FUN_20093030(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                   *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),param_2 + 4), *param_2 == '\0')
     ) {
    iVar1 = FUN_200921b0();
    if ((iVar1 != 0) &&
       (((*param_3 == '\0' && (*(int *)(param_3 + 0x4c) != 0)) &&
        ((*(int *)(param_3 + 0x50) - *(int *)(param_3 + 0x4c)) / 0x44 != 0)))) {
      if (*param_2 == '\0') {
        if (*(int *)(param_2 + 0x4c) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c)) / 0x44;
        }
      }
      else {
        iVar1 = 0;
      }
      if (*(int *)(param_3 + 0x4c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_3 + 0x50) - *(int *)(param_3 + 0x4c)) / 0x44;
      }
      if (iVar1 != iVar3) {
        FUN_2008e9e0(s_Track_mismatch_20158238);
      }
    }
    if (*param_2 == '\0') goto LAB_200c2ff9;
  }
  iVar1 = param_1[3];
  if (*param_3 != '\0') {
    pcVar2 = (char *)0x0;
    param_1[2] = *(int *)(*(int *)(iVar1 + 4) + *param_1 * 4);
    local_48 = 0;
    if (*param_3 == '\0') {
      param_3 = (char *)0x0;
    }
    else {
      param_3 = param_3 + 4;
    }
    if (*param_2 != '\0') {
      pcVar2 = param_2 + 4;
    }
    FUN_200a1100(pcVar2,param_3);
    if (*param_2 == '\0') {
      param_2 = (char *)0x0;
    }
    else {
      param_2 = param_2 + 4;
    }
    puVar4 = local_88;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 4;
    }
    if (param_4 == 0) {
      return;
    }
    local_a0 = local_54;
    local_a4 = local_58;
    local_9c = local_50;
    FUN_20067780(&local_a4);
    return;
  }
  iVar3 = *(int *)(*(int *)(iVar1 + 0x14) + *param_1 * 4);
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + *param_1 * 4);
  *param_2 = '\0';
  FUN_20093030(iVar3 + iVar1,param_2 + 4);
LAB_200c2ff9:
  local_4 = 0;
  local_48 = 0;
  if (*param_2 == '\0') {
    local_a8 = *(int *)(param_2 + 0x4c);
  }
  else {
    local_a8 = 0;
  }
  iVar1 = param_1[3];
  iVar3 = *param_1 * 4;
  local_ac = 0;
  if (0 < *(int *)(iVar3 + *(int *)(iVar1 + 0x14))) {
    do {
      puVar4 = local_44;
      param_1[2] = *(int *)(*(int *)(iVar1 + 4) + iVar3) + local_ac;
      iVar1 = 0x11;
      if (*param_2 == '\0') {
        pcVar2 = (char *)(*(int *)(param_2 + 0x4c) + param_1[2] * 0x44);
      }
      else {
        pcVar2 = param_2 + 4;
      }
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        puVar4 = puVar4 + 1;
      }
      local_98 = *param_1;
      local_94 = param_1[1];
      local_8c = param_1[3];
      if (*param_3 == '\0') {
        pcVar2 = (char *)(*(int *)(param_3 + 0x4c) + param_1[2] * 0x44);
      }
      else {
        pcVar2 = param_3 + 4;
      }
      puVar4 = local_88;
      for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        puVar4 = puVar4 + 1;
      }
      FUN_200a1100(local_44,local_88);
      if (param_4 != 0) {
        iVar1 = local_a8 + param_1[2] * 0x44;
        local_a4 = *(undefined4 *)(iVar1 + 0x30);
        local_a0 = *(undefined4 *)(iVar1 + 0x34);
        local_9c = *(undefined4 *)(iVar1 + 0x38);
        FUN_20067780(&local_a4);
      }
      iVar1 = param_1[3];
      local_ac = local_ac + 1;
      iVar3 = *param_1 * 4;
    } while (local_ac < *(int *)(iVar3 + *(int *)(iVar1 + 0x14)));
  }
  return;
}

