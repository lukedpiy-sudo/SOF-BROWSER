// rea decompile_all
// name: FUN_200dc020
// address: 0x200dc020
// body: available
// range: 0x200dc020-0x200dc24e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dc020(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c;
  char *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f318;
  local_c = ExceptionList;
  local_1c = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  FUN_200dbf10(&local_28,&local_30,&local_2c,local_20,local_24);
  uVar4 = local_30 * local_2c + local_28;
  if ((*(int *)(in_ECX + 0xbc) == 0) ||
     ((uint)(*(int *)(in_ECX + 0xc0) - *(int *)(in_ECX + 0xbc) >> 6) <= uVar4)) {
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    ExceptionList = local_c;
    return;
  }
  if (param_1 < 1) {
LAB_200dc1a5:
    if (param_1 == 2) {
      pcVar9 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar9 = "";
      }
      iVar5 = __strcmpi(pcVar9,&DAT_20139004);
      if (iVar5 == 0) {
        (*DAT_20390d94)(s_menu_small_invalid_wav_20158370);
        goto LAB_200dc20a;
      }
    }
  }
  else if (param_1 < 3) {
    puVar2 = *(undefined1 **)(uVar4 * 0x40 + *(int *)(in_ECX + 0xbc) + 8);
    puVar8 = &DAT_201116cc;
    if (puVar2 != (undefined1 *)0x0) {
      puVar8 = puVar2;
    }
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_20158ef0;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0xffffffff;
    pcVar9 = puVar8 + (~uVar4 - 1);
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(puVar8 + (~uVar4 - 1),~uVar6 - 1);
    FUN_2000a930();
    if (local_18 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar9 = local_18 + local_14;
    }
    FUN_2000a930();
    if (local_18 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = local_18 + local_14;
    }
    uVar4 = 0xffffffff;
    pcVar10 = &DAT_20158ee8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_200e32f0((int)pcVar7 - (~uVar4 - 1),pcVar9);
    pcVar9 = "";
    if (local_18 != (char *)0x0) {
      pcVar9 = local_18;
    }
    if (*(undefined4 **)(in_ECX + 0x50) != (undefined4 *)0x0) {
      Cvar_Set(**(undefined4 **)(in_ECX + 0x50),pcVar9);
    }
    (*DAT_20390d94)(s_menu_small_select_wav_20158548);
    goto LAB_200dc1a5;
  }
  for (puVar3 = *(undefined4 **)(in_ECX + 0x88); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    if ((param_1 == puVar3[1]) || (puVar3[1] == 0)) {
      (*DAT_20390d94)(s_menu_small_select_wav_20158548);
      FUN_200c7190(in_ECX);
    }
  }
LAB_200dc20a:
  if (local_18 != (char *)0x0) {
    if (local_18[-1] != '\0') {
      local_18[-1] = local_18[-1] + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

