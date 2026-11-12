// rea decompile_all
// name: FUN_20009e20
// address: 0x20009e20
// body: available
// range: 0x20009e20-0x2000a2f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20009e20(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ad97;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DAT_2015ee40 = Cvar_Get(s_scr_interface_2011d30c,&DAT_2011d31c,1,0);
  local_1c = operator_new(100);
  if (local_1c == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    FUN_20006500(0x42000000,0x42000000,0,0);
    *local_1c = &PTR_FUN_20111560;
    local_20 = (undefined4 *)(DAT_201e8fc4 + 5000);
    local_1c[0x18] = 5;
    *(undefined1 *)(local_1c + 0xb) = 0x10;
    local_1c[0x17] = (float)(int)local_20;
    FUN_20006dc0();
  }
  FUN_2002ed20(&local_18,DAT_2015ee34,&local_1c);
  pvVar1 = operator_new(0x6c);
  if (pvVar1 == (void *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = (undefined4 *)FUN_20008260(1,0,0x42c80000);
  }
  FUN_2002ed20(&local_18,DAT_2015ee34,&local_1c);
  puVar2 = operator_new(0x6c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_20008260(0,0x42c80000,0x42c80000);
    *puVar2 = &PTR_FUN_20111630;
  }
  local_1c = puVar2;
  FUN_2002ed20(&local_18,DAT_2015ee34,&local_1c);
  puVar2 = operator_new(0x30);
  local_4 = 0;
  local_18 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    FUN_20006500(0x43200000,0x42500000,0x42480000,0x42c80000);
    *puVar2 = &PTR_FUN_20111658;
    puVar3 = (undefined4 *)FUN_2000a810(0xff,0xff,0xff,0xff);
    puVar2[7] = *puVar3;
    puVar3 = (undefined4 *)FUN_2000a810(0xff,0xff,0xff,0x96);
    puVar2[8] = *puVar3;
    local_1c = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_2002ed20(&local_14,DAT_2015ee34,&local_1c);
  puVar2 = operator_new(0x38);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_20006500(0x42000000,0x42000000,0,0);
    *puVar2 = &PTR_LAB_201115dc;
    *(undefined1 *)(puVar2 + 0xb) = 2;
    puVar2[0xc] = DAT_2040365c / 2;
    puVar2[0xd] = DAT_20403660 / 2;
  }
  local_1c = puVar2;
  FUN_2002ed20(&local_14,DAT_2015ee34,&local_1c);
  puVar2 = operator_new(0x30);
  local_4 = 1;
  local_14 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    FUN_20006500(0x43a00000,0x42000000,0x42c80000,0x42c80000);
    *puVar2 = &PTR_FUN_201116a8;
    puVar3 = (undefined4 *)FUN_2000a810(0xff,0xff,0xff,0xff);
    puVar2[7] = *puVar3;
    puVar3 = (undefined4 *)FUN_2000a810(0xff,0xff,0xff,0x96);
    puVar2[8] = *puVar3;
    local_1c = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_2002ed20(&local_14,DAT_2015ee34,&local_1c);
  puVar2 = operator_new(0x50);
  local_4 = 2;
  local_14 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    FUN_20006500(0,0,0,0);
    puVar2[0x13] = 0xffffffff;
    *puVar2 = &PTR_FUN_201116bc;
    puVar2[0x12] = 0x400;
    puVar3 = (undefined4 *)FUN_2000a810(0xff,0,0,0xff);
    puVar2[0x13] = *puVar3;
    local_1c = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_2002ed20(&local_14,DAT_2015ee34,&local_1c);
  puVar2 = operator_new(0x38);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_20006500(0x42400000,0x42000000,0,0);
    *puVar2 = &PTR_FUN_201115f0;
    *(undefined1 *)(puVar2 + 0xb) = 2;
    FUN_20007af0();
  }
  local_1c = puVar2;
  FUN_2002ed20(&local_14,DAT_2015ee34,&local_1c);
  puVar2 = operator_new(0x40);
  local_4 = 3;
  local_14 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    FUN_20006500(0x42400000,0x42400000,0,0);
    *puVar2 = &PTR_LAB_201114cc;
    puVar3 = (undefined4 *)FUN_2000a810(0xff,0xff,0xff,0xff);
    puVar2[7] = *puVar3;
    local_1c = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_2002ed20(&local_14,DAT_2015ee34,&local_1c);
  puVar2 = operator_new(0x48);
  local_4 = 4;
  local_14 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    FUN_20006500(0x42400000,0x42400000,0,0);
    *puVar2 = &PTR_LAB_201114f8;
    puVar3 = (undefined4 *)FUN_2000a810(0xff,0xff,0xff,0xff);
    puVar2[7] = *puVar3;
    local_20 = puVar2;
  }
  local_4 = 0xffffffff;
  FUN_2002ed20(local_10,DAT_2015ee34,&local_20);
  ExceptionList = local_c;
  return;
}

