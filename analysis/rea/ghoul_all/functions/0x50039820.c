// rea decompile_all
// name: FUN_50039820
// address: 0x50039820
// body: available
// range: 0x50039820-0x50039b8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall
FUN_50039820(void *this,int *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_retaddr;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_84;
  int iStack_80;
  float fStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  void *local_6c;
  int iStack_68;
  int iStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char cStack_50;
  char cStack_4f;
  float fStack_4c;
  int *piStack_20;
  undefined1 local_c [8];
  undefined4 uStack_4;
  
  local_6c = this;
  (**(code **)(*param_1 + 0x1f0))(param_5,&local_84,local_c);
  if (param_1 == (int *)0x0) {
    iStack_68 = *unaff_retaddr;
    iStack_64 = unaff_retaddr[1];
    fStack_60 = (float)unaff_retaddr[2] + 20.0;
  }
  else {
    iStack_68 = param_1[1];
    iStack_64 = param_1[2];
    fStack_60 = (float)param_1[3] + (float)param_1[0xc1];
  }
  iVar1 = (**(code **)(*param_1 + 0x18c))();
  if (iVar1 == 0) {
LAB_5003996c:
    uVar6 = 0x2000081;
    piVar2 = (int *)0x0;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
    iVar1 = (**(code **)(*piVar2 + 0xb4))(uStack_4);
    if (iVar1 != 0xe) {
      piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
      iVar1 = (**(code **)(*piVar2 + 0xb4))(uStack_4);
      if (iVar1 != 9) goto LAB_5003996c;
    }
    uVar6 = 0x6000081;
    piVar2 = &local_84;
    puVar5 = &uStack_74;
    uStack_74 = 0xc1200000;
    uStack_70 = 0xc1200000;
    local_6c = (void *)0xc0c00000;
    local_84 = 0x41200000;
    iStack_80 = 0x41200000;
    fStack_7c = 6.0;
  }
  (*DAT_5015cac0)(&stack0xffffff70,puVar5,piVar2,&iStack_68,uStack_4,uVar6,&cStack_50);
  *(undefined4 *)((int)this + 0x1c) = DAT_5015ccdc;
  if ((((0.95 < fStack_4c) && (cStack_4f == '\0')) && (cStack_50 == '\0')) ||
     (piStack_20 == param_1)) {
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    *(undefined4 *)((int)this + 0x20) = 1;
    return 1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = ((int)piStack_20 - DAT_5015cca0) / 0x464;
  }
  if (((param_1 == (int *)0x0) || (param_1[0x1d] == 0)) ||
     ((iVar1 = (**(code **)(*param_1 + 0x7c))(), iVar1 == 0 ||
      (piVar2 = (int *)FUN_500f7190((int)param_1), piVar2 == (int *)0x0)))) goto LAB_50039b73;
  iStack_80 = piVar2[2];
  local_84 = piVar2[1];
  fStack_7c = (float)piVar2[3] + 16.0;
  iVar1 = (**(code **)(*param_1 + 0x18c))();
  if (iVar1 == 0) {
LAB_50039af4:
    puVar5 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)0x0;
  }
  else {
    piVar3 = (int *)(**(code **)(*param_1 + 0x18c))();
    iVar1 = (**(code **)(*piVar3 + 0xb4))(uStack_4);
    if (iVar1 != 0xe) {
      piVar3 = (int *)(**(code **)(*param_1 + 0x18c))();
      iVar1 = (**(code **)(*piVar3 + 0xb4))(uStack_4);
      if (iVar1 != 9) goto LAB_50039af4;
    }
    puVar5 = &uStack_74;
    puVar4 = &uStack_5c;
    uStack_5c = 0xc0c00000;
    uStack_58 = 0xc0c00000;
    uStack_54 = 0xc0c00000;
    uStack_74 = 0x40c00000;
    uStack_70 = 0x40c00000;
    local_6c = (void *)0x40c00000;
  }
  (*DAT_5015cac0)(&stack0xffffff70,puVar4,puVar5,&local_84,uStack_4,0x6000081,&cStack_50);
  if ((((0.95 < fStack_4c) && (cStack_4f == '\0')) && (cStack_50 == '\0')) ||
     ((piStack_20 == param_1 || (piStack_20 == piVar2)))) {
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    *(undefined4 *)(iStack_78 + 0x20) = 1;
    return 1;
  }
LAB_50039b73:
  *(undefined4 *)(iStack_78 + 0x20) = 0;
  return 0;
}

