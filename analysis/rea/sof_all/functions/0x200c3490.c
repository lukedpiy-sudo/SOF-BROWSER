// rea decompile_all
// name: FUN_200c3490
// address: 0x200c3490
// body: available
// range: 0x200c3490-0x200c3767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c3490(int *param_1,char *param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = param_2;
  piVar1 = param_1;
  if ((*param_2 == '\0') &&
     (FUN_20068550(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                   *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),param_2 + 4), *param_2 == '\0')
     ) {
    iVar2 = FUN_200b93c0();
    if ((iVar2 != 0) && ((*param_3 == '\0' && (iVar2 = FUN_200921b0(), iVar2 != 0)))) {
      if (*param_2 == '\0') {
        iVar2 = FUN_200b93c0();
      }
      else {
        iVar2 = 0;
      }
      if (*param_3 == '\0') {
        if (*(int *)(param_3 + 0x4c) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_3 + 0x50) - *(int *)(param_3 + 0x4c)) / 0x44;
        }
      }
      else {
        iVar3 = 0;
      }
      if (iVar2 != iVar3) {
        FUN_2008e9e0(s_Track_mismatch_20158238);
      }
    }
    if (*param_2 == '\0') goto LAB_200c364f;
  }
  if (*param_3 != '\0') {
    param_1[2] = *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4);
    local_4 = 0;
    iVar2 = 0x11;
    if (*param_3 == '\0') {
      param_3 = (char *)(*(int *)(param_3 + 0x4c) + param_1[2] * 0x44);
    }
    else {
      param_3 = param_3 + 4;
    }
    local_50 = param_1[1];
    puVar6 = local_44;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      puVar6 = puVar6 + 1;
    }
    local_54 = *param_1;
    local_48 = param_1[3];
    if (*param_2 == '\0') {
      pcVar4 = (char *)(*(int *)(param_2 + 0x14) + param_1[2] * 0xc);
    }
    else {
      pcVar4 = param_2 + 4;
    }
    FUN_200802f0(pcVar4);
    FUN_200a14c0(&local_60,&local_54);
    if (*param_2 == '\0') {
      param_2 = (char *)0x0;
    }
    else {
      param_2 = param_2 + 4;
    }
    *(undefined4 *)param_2 = local_60;
    *(undefined4 *)(param_2 + 4) = local_5c;
    *(undefined4 *)(param_2 + 8) = local_58;
    return;
  }
  iVar3 = *param_1 * 4;
  iVar2 = *(int *)(*(int *)(param_1[3] + 0x14) + iVar3);
  iVar3 = *(int *)(*(int *)(param_1[3] + 4) + iVar3);
  *param_2 = '\0';
  FUN_20068550(iVar2 + iVar3,param_2 + 4);
LAB_200c364f:
  local_4 = 0;
  if (*param_2 == '\0') {
    param_1 = *(int **)(param_2 + 0x14);
  }
  else {
    param_1 = (int *)0x0;
  }
  iVar2 = piVar1[3];
  iVar3 = *piVar1 * 4;
  param_2 = (char *)0x0;
  if (0 < *(int *)(iVar3 + *(int *)(iVar2 + 0x14))) {
    do {
      piVar1[2] = *(int *)(*(int *)(iVar2 + 4) + iVar3) + (int)param_2;
      if (*pcVar4 == '\0') {
        local_60 = *(undefined4 *)(*(int *)(pcVar4 + 0x14) + piVar1[2] * 0xc);
        iVar2 = *(int *)(pcVar4 + 0x14) + piVar1[2] * 0xc;
        local_5c = *(undefined4 *)(iVar2 + 4);
        local_58 = *(undefined4 *)(iVar2 + 8);
      }
      else {
        local_60 = *(undefined4 *)(pcVar4 + 4);
        local_5c = *(undefined4 *)(pcVar4 + 8);
        local_58 = *(undefined4 *)(pcVar4 + 0xc);
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
      iVar3 = piVar1[2];
      puVar6 = local_44;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      FUN_200a14c0((int)param_1 + iVar3 * 0xc,&local_60);
      iVar2 = piVar1[3];
      param_2 = (char *)((int)param_2 + 1);
      iVar3 = *piVar1 * 4;
    } while ((int)param_2 < *(int *)(iVar3 + *(int *)(iVar2 + 0x14)));
  }
  return;
}

