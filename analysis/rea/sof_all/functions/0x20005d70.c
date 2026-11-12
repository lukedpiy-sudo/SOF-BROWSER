// rea decompile_all
// name: FUN_20005d70
// address: 0x20005d70
// body: available
// range: 0x20005d70-0x200060b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20005d70(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 unaff_EBP;
  undefined2 uVar6;
  int iVar5;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar3 = param_3;
  iVar2 = param_2;
  uVar8 = 1;
  uVar1 = *(ushort *)(param_3 + 4);
  uVar6 = (undefined2)((uint)unaff_EBP >> 0x10);
  uVar9 = CONCAT22(uVar6,uVar1);
  if (uVar1 == *(ushort *)(param_2 + 4)) {
    puVar7 = &param_3;
    param_3 = (uint)param_3._1_3_ << 8;
  }
  else {
    param_3 = CONCAT31(param_3._1_3_,1);
    FUN_200bdca0(&param_3,1);
    uVar9 = CONCAT22(uVar6,uVar1 >> 4);
    puVar7 = &param_1;
    uVar8 = 0xc;
    param_1 = uVar9;
  }
  FUN_200bdca0(puVar7,uVar8);
  uVar1 = *(ushort *)(iVar3 + 6);
  uVar6 = (undefined2)((uint)uVar9 >> 0x10);
  iVar5 = CONCAT22(uVar6,uVar1);
  uVar9 = 1;
  if (uVar1 == *(ushort *)(iVar2 + 6)) {
    puVar7 = &param_1;
    param_1 = (uint)param_1._1_3_ << 8;
  }
  else {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_200bdca0(&param_1,1);
    iVar5 = CONCAT22(uVar6,uVar1 >> 4);
    puVar7 = &param_3;
    uVar9 = 0xc;
    param_3 = iVar5;
  }
  FUN_200bdca0(puVar7,uVar9);
  uVar1 = *(ushort *)(iVar3 + 8);
  uVar9 = 1;
  if (uVar1 == *(ushort *)(iVar2 + 8)) {
    puVar7 = &param_1;
    param_1 = (uint)param_1._1_3_ << 8;
  }
  else {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_200bdca0(&param_1,1);
    param_3 = CONCAT22((short)((uint)iVar5 >> 0x10),uVar1 >> 4);
    puVar7 = &param_3;
    uVar9 = 0xc;
  }
  FUN_200bdca0(puVar7,uVar9);
  if (*(short *)(iVar3 + 10) < -200) {
    *(undefined2 *)(iVar3 + 10) = 0xff38;
  }
  if (200 < *(short *)(iVar3 + 10)) {
    *(undefined2 *)(iVar3 + 10) = 200;
  }
  if (*(short *)(iVar3 + 0xc) < -0xa0) {
    *(undefined2 *)(iVar3 + 0xc) = 0xff60;
  }
  if (0xa0 < *(short *)(iVar3 + 0xc)) {
    *(undefined2 *)(iVar3 + 0xc) = 0xa0;
  }
  if (*(short *)(iVar3 + 0xe) < -200) {
    *(undefined2 *)(iVar3 + 0xe) = 0xff38;
  }
  if (200 < *(short *)(iVar3 + 0xe)) {
    *(undefined2 *)(iVar3 + 0xe) = 200;
  }
  param_3 = *(short *)(iVar3 + 10) + 0x1fe;
  uVar9 = 1;
  if (param_3 == *(short *)(iVar2 + 10) + 0x1fe) {
    puVar7 = &param_1;
    param_1 = (uint)param_1._1_3_ << 8;
  }
  else {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_200bdca0(&param_1,1);
    puVar7 = &param_3;
    uVar9 = 10;
  }
  FUN_200bdca0(puVar7,uVar9);
  param_3 = *(short *)(iVar3 + 0xc) + 0x1fe;
  uVar9 = 1;
  if (param_3 == *(short *)(iVar2 + 0xc) + 0x1fe) {
    puVar7 = &param_1;
    param_1 = (uint)param_1._1_3_ << 8;
  }
  else {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_200bdca0(&param_1,1);
    puVar7 = &param_3;
    uVar9 = 10;
  }
  FUN_200bdca0(puVar7,uVar9);
  param_3 = *(short *)(iVar3 + 0xe) + 0x1fe;
  if (param_3 == *(short *)(iVar2 + 0xe) + 0x1fe) {
    param_1 = (uint)param_1._1_3_ << 8;
    FUN_200bdca0(&param_1,1);
  }
  else {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_200bdca0(&param_1,1);
    FUN_20087570(&param_3,10);
  }
  if (*(char *)(iVar3 + 1) == *(char *)(iVar2 + 1)) {
    param_1._0_1_ = 0;
    FUN_200bdca0(&param_1,1);
  }
  else {
    param_1._0_1_ = 1;
    FUN_200bdca0(&param_1,1);
    FUN_20087570(iVar3 + 1,8);
  }
  if (*(char *)(iVar3 + 3) != '\0') {
    param_1._0_1_ = 1;
    FUN_200bdca0(&param_1,1);
    if (*(char *)(iVar3 + 3) < '\0') {
      param_1._0_1_ = 1;
      goto LAB_20005fe4;
    }
  }
  param_1._0_1_ = 0;
LAB_20005fe4:
  FUN_200bdca0(&param_1,1);
  bVar4 = *(byte *)(iVar3 + 2) >> 3;
  param_3 = CONCAT31(param_3._1_3_,bVar4);
  uVar9 = 1;
  if (bVar4 == *(byte *)(iVar2 + 2) >> 3) {
    puVar7 = &param_1;
    param_1 = (uint)param_1._1_3_ << 8;
  }
  else {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_200bdca0(&param_1,1);
    puVar7 = &param_3;
    uVar9 = 5;
  }
  FUN_200bdca0(puVar7,uVar9);
  FUN_200bdca0(iVar3,8);
  puVar7 = (undefined4 *)(iVar3 + 0x10);
  uVar9 = 1;
  if (*(float *)(iVar3 + 0x10) == *(float *)(iVar2 + 0x10)) {
    puVar7 = &param_1;
    param_1 = (uint)param_1._1_3_ << 8;
  }
  else {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_200bdca0(&param_1,1);
    uVar9 = 0x20;
  }
  FUN_200bdca0(puVar7,uVar9);
  if (*(float *)(iVar3 + 0x14) != *(float *)(iVar2 + 0x14)) {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_200bdca0(&param_1,1);
    FUN_200bdca0(iVar3 + 0x14,0x20);
    return;
  }
  param_1 = (uint)param_1._1_3_ << 8;
  FUN_200bdca0(&param_1,1);
  return;
}

