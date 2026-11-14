// rea decompile_all
// name: FUN_30003b80
// address: 0x30003b80
// body: available
// range: 0x30003b80-0x3000400a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30003b80(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_8d;
  undefined4 *local_8c;
  undefined1 local_88 [16];
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [20];
  undefined1 auStack_5c [16];
  undefined1 local_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3002b5f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x28);
  puVar6 = (undefined4 *)0x0;
  local_4 = 0;
  local_8c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar3 + 6) = local_8d;
    FUN_300033d0(puVar3 + 6,'\0');
    pcVar10 = s_pics_menus_fonts_font1_3002e38c;
    pcVar9 = s__s_fnt_3002e31c;
    puVar7 = local_4c;
    uVar8 = 0x40;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_3001d410();
    (*DAT_3008fdf4)(local_4c,puVar3 + 4,0,puVar7,uVar8,pcVar9,pcVar10);
    if (puVar3[4] == 0) {
      FUN_30010f90((byte *)s_Unable_to_find____s_3002e308);
    }
    pcVar9 = FUN_30007380(s_pics_menus_fonts_font1_3002e38c,7,'\0','\x01');
    puVar3[5] = pcVar9;
    *puVar3 = 0x20;
    puVar3[1] = 0x100;
    puVar3[2] = 10;
    puVar3[3] = 8;
  }
  local_88[0] = local_8d;
  local_4 = 0xffffffff;
  FUN_300033d0(local_88,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = s_small_3002e300;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_30005190(local_88,(undefined4 *)s_small_3002e300,~uVar5 - 1);
  local_4 = 2;
  local_8c = (undefined4 *)0x0;
  piVar4 = (int *)FUN_30005040(auStack_70,local_88,&local_8c);
  local_4._0_1_ = 3;
  piVar4 = (int *)FUN_30004ea0(&DAT_30034dd0,auStack_78,piVar4);
  iVar2 = *piVar4;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_300033d0(auStack_70,'\x01');
  *(undefined4 **)(iVar2 + 0x1c) = puVar3;
  local_4 = 0xffffffff;
  FUN_300033d0(local_88,'\x01');
  puVar3 = operator_new(0x28);
  local_4 = 4;
  local_8c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_30004970(puVar3 + 6,&local_8d);
    pcVar10 = s_pics_menus_fonts_font4_3002e374;
    pcVar9 = s__s_fnt_3002e31c;
    puVar7 = local_4c;
    uVar8 = 0x40;
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_3001d410();
    (*DAT_3008fdf4)(local_4c,puVar3 + 4,0,puVar7,uVar8,pcVar9,pcVar10);
    if (puVar3[4] == 0) {
      FUN_30010f90((byte *)s_Unable_to_find____s_3002e308);
    }
    pcVar9 = FUN_30007380(s_pics_menus_fonts_font4_3002e374,7,'\0','\x01');
    puVar3[5] = pcVar9;
    *puVar3 = 0x20;
    puVar3[1] = 0x100;
    puVar3[2] = 0xc;
    puVar3[3] = 10;
  }
  local_4 = 0xffffffff;
  local_88[0] = local_8d;
  FUN_300033d0(local_88,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = s_medium_3002e36c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_30005190(local_88,(undefined4 *)s_medium_3002e36c,~uVar5 - 1);
  local_4 = 6;
  local_8c = (undefined4 *)0x0;
  piVar4 = (int *)FUN_30005040(auStack_70,local_88,&local_8c);
  local_4._0_1_ = 7;
  piVar4 = (int *)FUN_30004ea0(&DAT_30034dd0,auStack_78,piVar4);
  iVar2 = *piVar4;
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_300033d0(auStack_70,'\x01');
  *(undefined4 **)(iVar2 + 0x1c) = puVar3;
  local_4 = 0xffffffff;
  FUN_300033d0(local_88,'\x01');
  puVar3 = operator_new(0x28);
  local_4 = 8;
  local_8c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_30004970(puVar3 + 6,&local_8d);
    pcVar10 = s_pics_menus_fonts_font2_3002e354;
    pcVar9 = s__s_fnt_3002e31c;
    puVar7 = local_4c;
    uVar8 = 0x40;
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_3001d410();
    (*DAT_3008fdf4)(local_4c,puVar3 + 4,0,puVar7,uVar8,pcVar9,pcVar10);
    if (puVar3[4] == 0) {
      FUN_30010f90((byte *)s_Unable_to_find____s_3002e308);
    }
    pcVar9 = FUN_30007380(s_pics_menus_fonts_font2_3002e354,7,'\0','\x01');
    puVar3[5] = pcVar9;
    *puVar3 = 0x20;
    puVar3[1] = 0x100;
    puVar3[2] = 0x12;
    puVar3[3] = 0xe;
  }
  local_4 = 0xffffffff;
  local_88[0] = local_8d;
  FUN_300033d0(local_88,'\0');
  uVar5 = 0xffffffff;
  pcVar9 = s_title_3002e34c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_30005190(local_88,(undefined4 *)s_title_3002e34c,~uVar5 - 1);
  local_4 = 10;
  local_8c = (undefined4 *)0x0;
  piVar4 = (int *)FUN_30005040(auStack_70,local_88,&local_8c);
  local_4._0_1_ = 0xb;
  piVar4 = (int *)FUN_30004ea0(&DAT_30034dd0,auStack_78,piVar4);
  iVar2 = *piVar4;
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_300033d0(auStack_70,'\x01');
  *(undefined4 **)(iVar2 + 0x1c) = puVar3;
  local_4 = 0xffffffff;
  FUN_300033d0(local_88,'\x01');
  local_8c = operator_new(0x28);
  local_4 = 0xc;
  if (local_8c != (undefined4 *)0x0) {
    puVar6 = FUN_300038a0(local_8c,s_pics_menus_fonts_inttext_3002e330,0x20,0x40,0x20,0x18);
  }
  local_4 = 0xffffffff;
  FUN_30004ac0(auStack_5c,s_interface_3002e324,&local_8d);
  local_4 = 0xd;
  puVar3 = (undefined4 *)FUN_30004b80(&DAT_30034dd0,auStack_5c);
  *puVar3 = puVar6;
  local_4 = 0xffffffff;
  FUN_300033d0(auStack_5c,'\x01');
  ExceptionList = pvStack_c;
  return;
}

