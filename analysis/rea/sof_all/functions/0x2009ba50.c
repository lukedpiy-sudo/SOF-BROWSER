// rea decompile_all
// name: FUN_2009ba50
// address: 0x2009ba50
// body: available
// range: 0x2009ba50-0x2009bdfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2009ba50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  undefined1 local_101;
  int local_100;
  int local_fc;
  void *local_f8;
  undefined1 local_f4 [16];
  undefined1 local_e4 [4];
  undefined1 local_e0;
  undefined1 local_cb;
  undefined4 local_5c;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ce7c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_20068ff0(param_1,in_ECX + 8);
  FUN_20068ef0(param_1,in_ECX + 0x18);
  FUN_20068ef0(param_1,in_ECX + 0x19);
  uVar2 = FUN_20068dc0(param_1);
  *(undefined4 *)(in_ECX + 0x1c) = uVar2;
  FUN_20068dc0(param_1);
  local_e0 = local_101;
  FUN_2000a5b0(0);
  local_4 = 0;
  FUN_2009df30(&local_101);
  local_cb = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_2009df10();
  local_10 = 0;
  local_5c = 0;
  local_e4[0] = 0;
  iVar3 = *(int *)(in_ECX + 0x28);
  iVar1 = *(int *)(in_ECX + 0x24);
  local_4 = 2;
  if ((uint)((*(int *)(in_ECX + 0x2c) - iVar3) / 0xd8) < 2) {
    if ((*(int *)(in_ECX + 0x24) == 0) || ((uint)((iVar3 - *(int *)(in_ECX + 0x24)) / 0xd8) < 3)) {
      local_100 = 2;
    }
    else {
      local_100 = FUN_2009df50();
    }
    local_fc = FUN_2009df50();
    local_fc = local_fc + local_100;
    iVar3 = local_fc;
    if (local_fc < 0) {
      iVar3 = 0;
    }
    local_f8 = operator_new(iVar3 * 0xd8);
    local_100 = FUN_2009e0d0(*(undefined4 *)(in_ECX + 0x24),iVar1,local_f8);
    FUN_2009e110(local_100,2,local_e4);
    FUN_2009e0d0(iVar1,*(undefined4 *)(in_ECX + 0x28),local_100 + 0x1b0);
    FUN_2009e0a0(*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0x24));
    pvVar4 = local_f8;
    *(void **)(in_ECX + 0x2c) = (void *)((int)local_f8 + local_fc * 0xd8);
    iVar3 = FUN_2009df50();
    *(void **)(in_ECX + 0x24) = pvVar4;
    pvVar4 = (void *)((int)pvVar4 + (iVar3 + 2) * 0xd8);
  }
  else {
    if ((uint)((iVar3 - iVar1) / 0xd8) < 2) {
      FUN_2009e0d0(iVar1,iVar3,iVar1 + 0x1b0);
      FUN_2009e110(*(int *)(in_ECX + 0x28),2 - (*(int *)(in_ECX + 0x28) - iVar1) / 0xd8,local_e4);
      FUN_2009f010(iVar1,*(undefined4 *)(in_ECX + 0x28),local_e4);
    }
    else {
      FUN_2009e0d0(iVar3 + -0x1b0,iVar3,iVar3);
      FUN_2009f200(iVar1,*(int *)(in_ECX + 0x28) + -0x1b0,*(int *)(in_ECX + 0x28));
      FUN_2009f010(iVar1,iVar1 + 0x1b0,local_e4);
    }
    pvVar4 = (void *)(*(int *)(in_ECX + 0x28) + 0x1b0);
  }
  *(void **)(in_ECX + 0x28) = pvVar4;
  local_4 = 0xffffffff;
  FUN_20092110();
  FUN_20092110();
  FUN_2000a5b0(1);
  iVar3 = 0;
  do {
    iVar1 = *(int *)(in_ECX + 0x24);
    FUN_2009df30(&local_101);
    local_4 = 3;
    FUN_20068ff0(param_1,iVar3 + 4 + iVar1);
    FUN_20068ff0(param_1,local_f4);
    FUN_20068ef0(param_1,iVar3 + 0x8c + iVar1);
    FUN_20068ef0(param_1,iVar3 + 0x14 + iVar1);
    FUN_20068ef0(param_1,iVar3 + 0x15 + iVar1);
    FUN_20068ef0(param_1,iVar3 + 0x16 + iVar1);
    FUN_2009e740(param_1);
    FUN_2009e9d0(param_1);
    FUN_20068ef0(param_1,iVar3 + 0x84 + iVar1);
    *(undefined4 *)(iVar3 + 0x88 + iVar1) = 0;
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    iVar3 = iVar3 + 0xd8;
  } while (iVar3 < 0x1b0);
  FUN_2009a3c0(param_1);
  FUN_2009a3c0(param_1);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  ExceptionList = local_c;
  return 1;
}

