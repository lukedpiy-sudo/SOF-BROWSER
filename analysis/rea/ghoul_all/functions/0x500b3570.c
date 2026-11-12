// rea decompile_all
// name: FUN_500b3570
// address: 0x500b3570
// body: available
// range: 0x500b3570-0x500b3860 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b3570(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50115076;
  pvStack_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x210) == 0) {
    ExceptionList = &pvStack_c;
    puVar3 = operator_new(0x70);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      param_1._0_1_ = SUB41(puVar3,0);
      *(undefined4 *)(puVar3 + 4) = 0;
      *puVar3 = (undefined1)param_1;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined4 *)(puVar3 + 0x18) = 0;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      *(undefined ***)(puVar3 + 0x14) = &PTR_FUN_501298a8;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      FUN_500b6980((int)(puVar3 + 0x14));
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_500b7540((undefined4 *)(puVar3 + 0x28));
      *(int *)(puVar3 + 0x10) = iVar2;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 0x30) = 0;
    }
    *(undefined1 **)(iVar2 + 0x210) = puVar3;
  }
  local_4 = 0xffffffff;
  if ((param_2 == 4) && (*(int *)(iVar2 + 0x164) == 0)) {
    (*DAT_5015ca24)(s_ERROR__attempting_to_set_SOLID_G_5014d2c0,*(undefined4 *)(iVar2 + 0x1b4));
    param_2 = 0;
  }
  FUN_500b2c20(iVar2);
  *(int *)(iVar2 + 0x158) = param_2;
  *(undefined4 *)(iVar2 + 0x15c) = 0x2030003;
  iVar4 = _strncmp(*(char **)(iVar2 + 0x1b4),s_light_5014acbc,5);
  uVar1 = *(uint *)(iVar2 + 0x1b8);
  if (iVar4 == 0) {
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(iVar2 + 0x30c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x30c) = 1;
    }
    if ((*(int *)(iVar2 + 0x30c) == 1) && (*(int *)(iVar2 + 0x2d0) == 0)) {
      *(code **)(iVar2 + 0x2d0) = FUN_500b3420;
    }
    if ((uVar1 & 4) == 0) {
LAB_500b37c6:
      *(undefined4 *)(iVar2 + 0x19c) = 0;
      goto LAB_500b36d8;
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(iVar2 + 0x30c) = 1;
    }
    else {
      *(undefined4 *)(iVar2 + 0x30c) = 0;
    }
    if ((*(int *)(iVar2 + 0x30c) == 1) && (*(int *)(iVar2 + 0x2d0) == 0)) {
      *(code **)(iVar2 + 0x2d0) = FUN_500b3420;
    }
    if ((uVar1 & 2) != 0) goto LAB_500b37c6;
  }
  if (*(int *)(iVar2 + 0x2c0) == 0) {
    *(undefined1 **)(iVar2 + 0x2c0) = &LAB_500b3450;
  }
  *(undefined4 *)(iVar2 + 0x19c) = 10;
LAB_500b36d8:
  FUN_500c3da0((undefined4 *)(iVar2 + 4),(float *)(iVar2 + 0x10),auStack_50);
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  FUN_500ed5a0(auStack_50,3,&uStack_74);
  FUN_500ecd70((int)auStack_50);
  if (param_2 == 4) {
    if (*(int **)(iVar2 + 0x164) == (int *)0x0) {
      (*DAT_5015ca24)(s_ERROR__couldn_t_find_ghoul_objec_5014d290,*(undefined4 *)(iVar2 + 0x1b4));
    }
    else {
      (**(code **)(**(int **)(iVar2 + 0x164) + 0xcc))
                (DAT_5015ccdc,auStack_50,&uStack_68,&uStack_5c,0,0);
      *(undefined4 *)(iVar2 + 0x11c) = uStack_68;
      *(undefined4 *)(iVar2 + 0x120) = uStack_64;
      *(undefined4 *)(iVar2 + 0x124) = uStack_60;
      *(undefined4 *)(iVar2 + 0x128) = uStack_5c;
      *(undefined4 *)(iVar2 + 300) = uStack_58;
      *(undefined4 *)(iVar2 + 0x130) = uStack_54;
    }
  }
  if ((*(int **)(iVar2 + 0x164) != (int *)0x0) &&
     (((DAT_5015cbb0 != 0.0 || (DAT_5015cbb4 != 0.0)) || (DAT_5015cbb8 != 0.0)))) {
    (**(code **)(**(int **)(iVar2 + 0x164) + 0x38))
              (DAT_5015cbb0,DAT_5015cbb4,DAT_5015cbb8,0x3f800000);
  }
  (*DAT_5015cb28)(iVar2);
  ExceptionList = pvStack_c;
  return;
}

