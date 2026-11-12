// rea decompile_all
// name: FUN_500b3870
// address: 0x500b3870
// body: available
// range: 0x500b3870-0x500b3cd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b3870(uint param_1,undefined4 *param_2,char *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uStack_14c;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 auStack_11c [16];
  float local_dc [17];
  float fStack_98;
  undefined1 auStack_94 [64];
  undefined4 auStack_54 [17];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501150bd;
  local_c = ExceptionList;
  local_dc[0] = 0.0;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x210) == 0) {
    ExceptionList = &local_c;
    puVar3 = operator_new(0x70);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar3 + 4) = 0;
      *puVar3 = uStack_14c._3_1_;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined4 *)(puVar3 + 0x18) = 0;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      *(undefined ***)(puVar3 + 0x14) = &PTR_FUN_501298a8;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      FUN_500b6980((int)(puVar3 + 0x14));
      puVar1 = (undefined4 *)(puVar3 + 0x28);
      local_4._0_1_ = 3;
      FUN_500b74c0(puVar1);
      local_4 = CONCAT31(local_4._1_3_,4);
      *puVar1 = &PTR_FUN_501298b0;
      *(undefined4 *)(puVar3 + 0x30) = 0;
      FUN_500b70f0((int)puVar1);
      *(uint *)(puVar3 + 0x10) = param_1;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 0x30) = 0;
    }
    *(undefined1 **)(param_1 + 0x210) = puVar3;
  }
  local_4 = 0xffffffff;
  FUN_500a6090(&DAT_5015c79c,param_1,(char *)*param_2,(char *)param_2[1],param_3,(char *)param_2[6])
  ;
  if (param_3 != (char *)0x0) {
    FUN_500b2fd0(param_1,*param_2,param_2[1],param_2[6],param_3,0);
  }
  if (param_4 != 0) {
    FUN_500b3ce0(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x3c0) == 0) {
    *(undefined4 *)(param_1 + 0x3c0) = param_2[2];
  }
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(undefined4 *)(param_1 + 0x31c) = param_2[3];
  }
  if (*(int *)(param_1 + 0x2ec) == 0) {
    *(undefined4 *)(param_1 + 0x2ec) = param_2[4];
  }
  if (*(int *)(param_1 + 0x158) == 0) {
    *(undefined4 *)(param_1 + 0x158) = param_2[5];
  }
  if ((*(int *)(param_1 + 0x158) == 4) && (*(int *)(param_1 + 0x164) == 0)) {
    (*DAT_5015ca24)(s_ERROR__attempting_to_set_SOLID_G_5014d2c0,*(undefined4 *)(param_1 + 0x1b4));
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  FUN_500b2c20(param_1);
  *(undefined4 *)(param_1 + 0x15c) = 0x2030003;
  *(undefined4 **)(param_1 + 0x2ac) = param_2;
  if (DAT_5015cc04 != 0.0) {
    auStack_54[0] = 0;
    fStack_98 = 0.0;
    uStack_10 = 0;
    if (*(int **)(param_1 + 0x164) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x164) + 8))(auStack_94);
      FUN_500ed060(local_dc,uStack_14c);
      FUN_500ed0d0(auStack_54,local_dc,&fStack_98);
      (**(code **)**(undefined4 **)(param_1 + 0x164))(auStack_54);
    }
  }
  iVar4 = _strncmp(*(char **)(param_1 + 0x1b4),s_light_5014acbc,5);
  uVar2 = *(uint *)(param_1 + 0x1b8);
  if (iVar4 == 0) {
    if ((uVar2 & 2) == 0) {
      *(undefined4 *)(param_1 + 0x30c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x30c) = 1;
    }
    if ((*(int *)(param_1 + 0x30c) == 1) && (*(int *)(param_1 + 0x2d0) == 0)) {
      *(code **)(param_1 + 0x2d0) = FUN_500b3420;
    }
    if ((uVar2 & 4) != 0) {
LAB_500b3b17:
      if (*(int *)(param_1 + 0x2c0) == 0) {
        *(undefined1 **)(param_1 + 0x2c0) = &LAB_500b3450;
      }
      *(undefined4 *)(param_1 + 0x19c) = 10;
      goto LAB_500b3b33;
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x30c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x30c) = 0;
    }
    if ((*(int *)(param_1 + 0x30c) == 1) && (*(int *)(param_1 + 0x2d0) == 0)) {
      *(code **)(param_1 + 0x2d0) = FUN_500b33e0;
    }
    if ((uVar2 & 2) == 0) goto LAB_500b3b17;
  }
  *(undefined4 *)(param_1 + 0x19c) = 0;
LAB_500b3b33:
  FUN_500c3da0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),auStack_11c);
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  FUN_500ed5a0(auStack_11c,3,&uStack_134);
  FUN_500ecd70((int)auStack_11c);
  if (*(int *)(param_1 + 0x158) == 4) {
    if (*(int **)(param_1 + 0x164) == (int *)0x0) {
      (*DAT_5015ca24)(s_ERROR__couldn_t_find_ghoul_objec_5014d290,*(undefined4 *)(param_1 + 0x1b4));
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x164) + 0xcc))
                (DAT_5015ccdc,auStack_11c,&uStack_140,&uStack_128,0,0);
      *(undefined4 *)(param_1 + 0x11c) = uStack_140;
      *(undefined4 *)(param_1 + 0x120) = uStack_13c;
      *(undefined4 *)(param_1 + 0x124) = uStack_138;
      *(undefined4 *)(param_1 + 0x128) = uStack_128;
      *(undefined4 *)(param_1 + 300) = uStack_124;
      *(undefined4 *)(param_1 + 0x130) = uStack_120;
    }
  }
  if ((*(int **)(param_1 + 0x164) != (int *)0x0) &&
     (((DAT_5015cbb0 != 0.0 || (DAT_5015cbb4 != 0.0)) || (DAT_5015cbb8 != 0.0)))) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x38))
              (DAT_5015cbb0,DAT_5015cbb4,DAT_5015cbb8,0x3f800000);
  }
  (*DAT_5015cb28)(param_1);
  *(undefined4 *)(param_1 + 0x27c) = 800;
  ExceptionList = local_c;
  return;
}

