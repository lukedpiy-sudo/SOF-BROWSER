// rea decompile_all
// name: FUN_500276e0
// address: 0x500276e0
// body: available
// range: 0x500276e0-0x500278de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500276e0(void *this,int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *local_4;
  
  if (*(int **)(param_1 + 0x164) == (int *)0x0) {
    return;
  }
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  piVar1 = *(int **)(param_1 + 0x164);
  local_4 = this;
  if (piVar3 == (int *)0x0) goto LAB_500278ca;
  if (param_2 == 0) {
    if (*(int *)((int)this + 0x1a0) == 0) goto LAB_500278ca;
LAB_500277e4:
    if (param_2 != 0) goto LAB_500278ca;
    uVar4 = (**(code **)(*piVar3 + 0x1c))(s__lopen_501338c0);
    local_4 = (void *)(**(code **)(*piVar3 + 0x1c))(s__lclosed_501338c8);
    if ((short)local_4 != 0) {
      if ((short)uVar4 != 0) {
        cVar2 = (**(code **)(*piVar1 + 0x24))(uVar4);
        if (cVar2 == '\0') goto LAB_50027838;
        (**(code **)(*piVar1 + 0x20))(uVar4,0);
      }
      (**(code **)(*piVar1 + 0x20))(local_4,1);
    }
LAB_50027838:
    uVar4 = (**(code **)(*piVar3 + 0x1c))(s__lbossopen_501338a4);
    uVar5 = (**(code **)(*piVar3 + 0x1c))(s__lbossclosed_501338b0);
    if ((short)uVar5 != 0) {
      if ((short)uVar4 != 0) {
        cVar2 = (**(code **)(*piVar1 + 0x24))(uVar4);
        if (cVar2 == '\0') goto LAB_50027884;
        (**(code **)(*piVar1 + 0x20))(uVar4,0);
      }
      (**(code **)(*piVar1 + 0x20))(uVar5,1);
    }
LAB_50027884:
    uVar4 = (**(code **)(*piVar3 + 0x1c))(s__lhand_open_50133888);
    pcVar6 = s__lhand_closed_50133894;
  }
  else {
    if (*(int *)((int)this + 0x1a0) != 0) goto LAB_500277e4;
    uVar4 = (**(code **)(*piVar3 + 0x1c))(s__lclosed_501338c8);
    local_4 = (void *)(**(code **)(*piVar3 + 0x1c))(s__lopen_501338c0);
    if ((short)local_4 != 0) {
      if ((short)uVar4 != 0) {
        cVar2 = (**(code **)(*piVar1 + 0x24))(uVar4);
        if (cVar2 == '\0') goto LAB_5002777a;
        (**(code **)(*piVar1 + 0x20))(uVar4,0);
      }
      (**(code **)(*piVar1 + 0x20))(local_4,1);
    }
LAB_5002777a:
    uVar4 = (**(code **)(*piVar3 + 0x1c))(s__lbossclosed_501338b0);
    uVar5 = (**(code **)(*piVar3 + 0x1c))(s__lbossopen_501338a4);
    if ((short)uVar5 != 0) {
      if ((short)uVar4 != 0) {
        cVar2 = (**(code **)(*piVar1 + 0x24))(uVar4);
        if (cVar2 == '\0') goto LAB_500277c6;
        (**(code **)(*piVar1 + 0x20))(uVar4,0);
      }
      (**(code **)(*piVar1 + 0x20))(uVar5,1);
    }
LAB_500277c6:
    uVar4 = (**(code **)(*piVar3 + 0x1c))(s__lhand_closed_50133894);
    pcVar6 = s__lhand_open_50133888;
  }
  uVar5 = (**(code **)(*piVar3 + 0x1c))(pcVar6);
  if ((short)uVar5 != 0) {
    if ((short)uVar4 != 0) {
      cVar2 = (**(code **)(*piVar1 + 0x24))(uVar4);
      if (cVar2 == '\0') goto LAB_500278ca;
      (**(code **)(*piVar1 + 0x20))(uVar4,0);
    }
    (**(code **)(*piVar1 + 0x20))(uVar5,1);
  }
LAB_500278ca:
  *(int *)((int)local_4 + 0x1a0) = param_2;
  return;
}

