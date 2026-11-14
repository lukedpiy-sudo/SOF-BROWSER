// rea decompile_all
// name: FUN_30004010
// address: 0x30004010
// body: available
// range: 0x30004010-0x300042ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30004010(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  int local_3c [2];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3002b640;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_300033d0(&local_4c,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_small_3002e300;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_30005190(&local_4c,(undefined4 *)s_small_3002e300,~uVar5 - 1);
  local_4 = 0;
  local_50 = 0;
  piVar4 = (int *)FUN_30005040(local_34,(undefined1 *)&local_4c,&local_50);
  local_4._0_1_ = 1;
  piVar4 = (int *)FUN_30004ea0(&DAT_30034dd0,local_3c,piVar4);
  iVar2 = *piVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_300033d0(local_34,'\x01');
  puVar3 = *(undefined **)(iVar2 + 0x1c);
  if (puVar3 != (undefined *)0x0) {
    FUN_30003960((int)puVar3);
    FUN_3001f8bc(puVar3);
  }
  local_4 = 0xffffffff;
  FUN_300033d0(&local_4c,'\x01');
  FUN_300033d0(&local_4c,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_medium_3002e36c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_30005190(&local_4c,(undefined4 *)s_medium_3002e36c,~uVar5 - 1);
  local_4 = 2;
  local_50 = 0;
  piVar4 = (int *)FUN_30005040(local_34,(undefined1 *)&local_4c,&local_50);
  local_4._0_1_ = 3;
  piVar4 = (int *)FUN_30004ea0(&DAT_30034dd0,local_3c,piVar4);
  iVar2 = *piVar4;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_300033d0(local_34,'\x01');
  puVar3 = *(undefined **)(iVar2 + 0x1c);
  if (puVar3 != (undefined *)0x0) {
    FUN_30003960((int)puVar3);
    FUN_3001f8bc(puVar3);
  }
  local_4 = 0xffffffff;
  FUN_300033d0(&local_4c,'\x01');
  FUN_300033d0(local_34,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_title_3002e34c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_30005190(local_34,(undefined4 *)s_title_3002e34c,~uVar5 - 1);
  local_4 = 4;
  local_50 = 0;
  piVar4 = (int *)FUN_30005040(local_20,local_34,&local_50);
  local_4._0_1_ = 5;
  FUN_30005330(&DAT_30034dd0,&local_4c,piVar4);
  FUN_3000c0a0(local_3c,&local_4c,local_48);
  iVar2 = local_3c[0];
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_300033d0(local_20,'\x01');
  puVar3 = *(undefined **)(iVar2 + 0x1c);
  if (puVar3 != (undefined *)0x0) {
    FUN_30003960((int)puVar3);
    FUN_3001f8bc(puVar3);
  }
  local_4 = 0xffffffff;
  FUN_300033d0(local_34,'\x01');
  FUN_300033d0(local_34,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_interface_3002e324;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_30005190(local_34,(undefined4 *)s_interface_3002e324,~uVar5 - 1);
  local_4 = 6;
  local_50 = 0;
  piVar4 = (int *)FUN_30005040(local_20,local_34,&local_50);
  local_4._0_1_ = 7;
  FUN_30005330(&DAT_30034dd0,&local_4c,piVar4);
  FUN_3000c0a0(local_3c,&local_4c,local_48);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_300033d0(local_20,'\x01');
  puVar3 = *(undefined **)(local_3c[0] + 0x1c);
  if (puVar3 != (undefined *)0x0) {
    FUN_30003960((int)puVar3);
    FUN_3001f8bc(puVar3);
  }
  local_4 = 0xffffffff;
  FUN_300033d0(local_34,'\x01');
  FUN_30004f90(&DAT_30034dd0,&local_50,(int *)*DAT_30034dd4,DAT_30034dd4);
  ExceptionList = local_c;
  return;
}

