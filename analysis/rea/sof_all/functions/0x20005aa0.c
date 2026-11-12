// rea decompile_all
// name: FUN_20005aa0
// address: 0x20005aa0
// body: available
// range: 0x20005aa0-0x20005d6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20005aa0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_3;
  puVar5 = param_2;
  puVar6 = param_3;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    param_1 = 0;
    FUN_200be390(&param_1,0xc);
    *(short *)(puVar1 + 1) = (short)(param_1 << 4);
  }
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    param_1 = 0;
    FUN_200be390(&param_1,0xc);
    *(short *)((int)puVar1 + 6) = (short)(param_1 << 4);
  }
  iVar3 = FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    param_1 = 0;
    FUN_200be390(&param_1,0xc);
    iVar3 = param_1 << 4;
    *(short *)(puVar1 + 2) = (short)iVar3;
  }
  local_8 = CONCAT22((short)((uint)iVar3 >> 0x10),*(short *)((int)puVar1 + 10) + 0x1fe);
  FUN_200be390(&param_1,1);
  uVar4 = extraout_var;
  if ((char)param_1 != '\0') {
    FUN_200063e0(&local_8,10);
    uVar4 = extraout_var_00;
  }
  *(short *)((int)puVar1 + 10) = (short)local_8 + -0x1fe;
  local_8 = CONCAT22(uVar4,*(short *)(puVar1 + 3) + 0x1fe);
  FUN_200be390(&param_1,1);
  uVar4 = extraout_var_01;
  if ((char)param_1 != '\0') {
    FUN_200063e0(&local_8,10);
    uVar4 = extraout_var_02;
  }
  *(short *)(puVar1 + 3) = (short)local_8 + -0x1fe;
  local_8 = CONCAT22(uVar4,*(short *)((int)puVar1 + 0xe) + 0x1fe);
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    FUN_200063e0(&local_8,10);
  }
  sVar2 = (short)local_8 + -0x1fe;
  *(short *)((int)puVar1 + 0xe) = sVar2;
  if (*(short *)((int)puVar1 + 10) < -200) {
    *(undefined2 *)((int)puVar1 + 10) = 0xff38;
  }
  if (200 < *(short *)((int)puVar1 + 10)) {
    *(undefined2 *)((int)puVar1 + 10) = 200;
  }
  if (*(short *)(puVar1 + 3) < -0xa0) {
    *(undefined2 *)(puVar1 + 3) = 0xff60;
  }
  if (0xa0 < *(short *)(puVar1 + 3)) {
    *(undefined2 *)(puVar1 + 3) = 0xa0;
  }
  if (sVar2 < -200) {
    *(undefined2 *)((int)puVar1 + 0xe) = 0xff38;
  }
  if (200 < *(short *)((int)puVar1 + 0xe)) {
    *(undefined2 *)((int)puVar1 + 0xe) = 200;
  }
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    FUN_20006410((int)puVar1 + 1,8);
  }
  FUN_200be390(&param_1,1);
  if ((char)param_1 == '\0') {
    *(undefined1 *)((int)puVar1 + 3) = 0;
  }
  else {
    FUN_200be390(&param_1,1);
    if ((char)param_1 == '\0') {
      *(undefined1 *)((int)puVar1 + 3) = 1;
    }
    else {
      *(undefined1 *)((int)puVar1 + 3) = 0xff;
    }
  }
  param_3._0_1_ = *(byte *)((int)puVar1 + 2) >> 3;
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    param_3._0_1_ = 0;
    FUN_200be390(&param_3,5);
  }
  *(byte *)((int)puVar1 + 2) = (byte)param_3 << 3;
  FUN_200be390(puVar1,8);
  puVar5 = param_2;
  local_4 = param_2[4];
  FUN_200be390(&param_2,1);
  if ((char)param_2 != '\0') {
    FUN_200be390(&local_4,0x20);
  }
  puVar1[4] = local_4;
  local_4 = puVar5[5];
  FUN_200be390(&param_2,1);
  if ((char)param_2 != '\0') {
    FUN_200be390(&local_4,0x20);
    puVar1[5] = local_4;
    return;
  }
  puVar1[5] = local_4;
  return;
}

