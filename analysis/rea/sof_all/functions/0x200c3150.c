// rea decompile_all
// name: FUN_200c3150
// address: 0x200c3150
// body: available
// range: 0x200c3150-0x200c3484 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c3150(int *param_1,char *param_2,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_48;
  undefined4 local_44 [16];
  undefined4 local_4;
  
  pcVar3 = param_2;
  piVar1 = param_1;
  if ((*param_2 == '\0') &&
     (FUN_20068550(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                   *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),param_2 + 4), *param_2 == '\0')
     ) {
    iVar2 = FUN_200b93c0();
    if ((iVar2 != 0) &&
       (((*param_3 == '\0' && (*(int *)(param_3 + 0x4c) != 0)) &&
        ((*(int *)(param_3 + 0x50) - *(int *)(param_3 + 0x4c)) / 0x44 != 0)))) {
      if (*param_2 == '\0') {
        if (*(int *)(param_2 + 0x14) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14)) / 0xc;
        }
      }
      else {
        iVar2 = 0;
      }
      if (*(int *)(param_3 + 0x4c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_3 + 0x50) - *(int *)(param_3 + 0x4c)) / 0x44;
      }
      if (iVar2 != iVar4) {
        FUN_2008e9e0(s_Track_mismatch_20158238);
      }
    }
    if (*param_2 == '\0') goto LAB_200c334e;
  }
  iVar2 = param_1[3];
  if (*param_3 != '\0') {
    param_1[2] = *(int *)(*(int *)(iVar2 + 4) + *param_1 * 4);
    local_4 = 0;
    if (*param_3 == '\0') {
      param_3 = (char *)(*(int *)(param_3 + 0x4c) + param_1[2] * 0x44);
    }
    else {
      param_3 = param_3 + 4;
    }
    local_54 = *param_1;
    local_48 = param_1[3];
    puVar6 = local_44;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      puVar6 = puVar6 + 1;
    }
    local_50 = param_1[1];
    if (*param_2 == '\0') {
      pcVar3 = (char *)(*(int *)(param_2 + 0x14) + param_1[2] * 0xc);
    }
    else {
      pcVar3 = param_2 + 4;
    }
    FUN_200802f0(pcVar3);
    FUN_200a1410(&local_60,&local_54);
    if (*param_2 == '\0') {
      param_2 = (char *)0x0;
    }
    else {
      param_2 = param_2 + 4;
    }
    *(undefined4 *)(param_2 + 4) = local_5c;
    *(undefined4 *)param_2 = local_60;
    *(undefined4 *)(param_2 + 8) = local_58;
    if (param_4 == 0) {
      return;
    }
    FUN_20067780(&local_60);
    return;
  }
  iVar4 = *(int *)(*(int *)(iVar2 + 0x14) + *param_1 * 4);
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + *param_1 * 4);
  *param_2 = '\0';
  FUN_20068550(iVar4 + iVar2,param_2 + 4);
LAB_200c334e:
  local_4 = 0;
  if (*param_2 == '\0') {
    param_2 = *(char **)(param_2 + 0x14);
  }
  else {
    param_2 = (char *)0x0;
  }
  iVar2 = param_1[3];
  iVar4 = *param_1 * 4;
  param_1 = (int *)0x0;
  if (0 < *(int *)(iVar4 + *(int *)(iVar2 + 0x14))) {
    do {
      piVar1[2] = *(int *)(*(int *)(iVar2 + 4) + iVar4) + (int)param_1;
      if (*pcVar3 == '\0') {
        local_60 = *(undefined4 *)(*(int *)(pcVar3 + 0x14) + piVar1[2] * 0xc);
        iVar2 = *(int *)(pcVar3 + 0x14) + piVar1[2] * 0xc;
        local_5c = *(undefined4 *)(iVar2 + 4);
        local_58 = *(undefined4 *)(iVar2 + 8);
      }
      else {
        local_60 = *(undefined4 *)(pcVar3 + 4);
        local_5c = *(undefined4 *)(pcVar3 + 8);
        local_58 = *(undefined4 *)(pcVar3 + 0xc);
      }
      local_54 = *piVar1;
      local_50 = piVar1[1];
      local_48 = piVar1[3];
      iVar2 = 0x11;
      if (*param_3 == '\0') {
        pcVar5 = (char *)(*(int *)(param_3 + 0x4c) + piVar1[2] * 0x44);
      }
      else {
        pcVar5 = param_3 + 4;
      }
      iVar4 = piVar1[2];
      puVar6 = local_44;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      FUN_200a1410((int)param_2 + iVar4 * 0xc,&local_60);
      if (param_4 != 0) {
        FUN_20067780((int)param_2 + piVar1[2] * 0xc);
      }
      iVar2 = piVar1[3];
      param_1 = (int *)((int)param_1 + 1);
      iVar4 = *piVar1 * 4;
    } while ((int)param_1 < *(int *)(iVar4 + *(int *)(iVar2 + 0x14)));
  }
  return;
}

