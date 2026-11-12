// rea decompile_all
// name: FUN_5007c5a0
// address: 0x5007c5a0
// body: available
// range: 0x5007c5a0-0x5007c759 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __thiscall FUN_5007c5a0(void *this,char param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  char cVar9;
  int *piVar10;
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar5 = *(int *)((int)this + 0x114);
  iVar6 = *(int *)((int)this + 0x104);
  uVar1 = *(undefined1 *)(iVar6 + iVar5);
  *(int *)((int)this + 0x114) = iVar5 + 1;
  uVar2 = *(undefined1 *)(iVar5 + 1 + iVar6);
  *(int *)((int)this + 0x114) = iVar5 + 2;
  uVar3 = *(undefined1 *)(iVar5 + 2 + iVar6);
  *(int *)((int)this + 0x114) = iVar5 + 3;
  uVar4 = *(undefined1 *)(iVar5 + 3 + iVar6);
  *(int *)((int)this + 0x114) = iVar5 + 4;
  local_4 = CONCAT13(*(undefined1 *)(iVar5 + 4 + iVar6),CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
  *(int *)((int)this + 0x114) = iVar5 + 5;
  if (*(int *)((int)this + 0x148) == 0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x144) + 4) + 8);
    piVar10 = *(int **)(*(int *)((int)this + 0x144) + 4);
    *(int *)piVar10[1] = *piVar10;
    *(int *)(*piVar10 + 4) = piVar10[1];
    FUN_50106b60((undefined *)piVar10);
    *(int *)((int)this + 0x148) = *(int *)((int)this + 0x148) + -1;
  }
  if (*(int *)((int)this + 0x148) == 0) {
    piVar10 = (int *)0x0;
LAB_5007c6a3:
    FUN_500817d0(this,(byte *)s_Invalid_stack_for_If_50145950);
  }
  else {
    piVar10 = *(int **)(*(int *)(*(int *)((int)this + 0x144) + 4) + 8);
    piVar7 = *(int **)(*(int *)((int)this + 0x144) + 4);
    *(int *)piVar7[1] = *piVar7;
    *(int *)(*piVar7 + 4) = piVar7[1];
    FUN_50106b60((undefined *)piVar7);
    *(int *)((int)this + 0x148) = *(int *)((int)this + 0x148) + -1;
    if ((piVar10 == (int *)0x0) || (local_8 == (undefined4 *)0x0)) goto LAB_5007c6a3;
  }
  cVar9 = '\0';
  switch(uVar1) {
  case 0:
    cVar8 = (**(code **)(*piVar10 + 0x48))(local_8);
    break;
  case 1:
    cVar8 = (**(code **)(*piVar10 + 0x50))(local_8);
    break;
  case 2:
    cVar8 = (**(code **)(*piVar10 + 0x54))(local_8);
    break;
  case 3:
    cVar8 = (**(code **)(*piVar10 + 0x58))(local_8);
    break;
  case 4:
    cVar8 = (**(code **)(*piVar10 + 0x5c))(local_8);
    break;
  case 5:
    cVar8 = (**(code **)(*piVar10 + 0x4c))(local_8);
    break;
  default:
    goto switchD_5007c6b8_default;
  }
  if (cVar8 != '\0') {
    cVar9 = '\x01';
  }
switchD_5007c6b8_default:
  if (cVar9 == param_1) {
    *(undefined4 *)((int)this + 0x114) = local_4;
  }
  if (piVar10 != (int *)0x0) {
    (**(code **)*piVar10)(1);
  }
  if (local_8 != (undefined4 *)0x0) {
    (**(code **)*local_8)(1);
  }
  return cVar9 == param_1;
}

