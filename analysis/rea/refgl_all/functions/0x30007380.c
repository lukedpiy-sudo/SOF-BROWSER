// rea decompile_all
// name: FUN_30007380
// address: 0x30007380
// body: available
// range: 0x30007380-0x3000761b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_30007380(char *param_1,int param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_6c;
  undefined1 local_68 [4];
  int local_64 [2];
  undefined4 local_5c [2];
  char local_54 [4];
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  char local_44 [4];
  char *local_40;
  uint local_3c;
  int local_34 [4];
  undefined4 local_24;
  int local_20 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3002b760;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    ExceptionList = &local_c;
    (*DAT_3008fde8)(0,s_GL_FindImage__Invalid_null_name_3002eaa4);
  }
  else {
    uVar7 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (~uVar7 == 1) {
      ExceptionList = &local_c;
      (*DAT_3008fde8)(0,s_GL_FindImage__Name___s__too_shor_3002ea80,param_1);
    }
    else if ((int)(~uVar7 - 1) < 0x3f) {
      local_44[0] = param_4;
      ExceptionList = &local_c;
      FUN_300033d0(local_44,'\0');
      uVar7 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      uVar3 = FUN_30003420(local_44,uVar7,'\x01');
      if ((char)uVar3 != '\0') {
        pcVar6 = param_1;
        pcVar4 = local_40;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar4 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_40[uVar7] = '\0';
        local_3c = uVar7;
      }
      local_4 = 0;
      FUN_30004990(local_34,local_44);
      local_24 = 0;
      local_4._0_1_ = 1;
      FUN_30007f80(&DAT_3004c50c,&local_6c,local_34);
      FUN_3000c0a0(local_64,&local_6c,local_68);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_300033d0(local_34,'\x01');
      pcVar6 = *(char **)(local_64[0] + 0x1c);
      local_4 = 0xffffffff;
      FUN_300033d0(local_44,'\x01');
      if (pcVar6 != (char *)0x0) {
        *(undefined4 *)(pcVar6 + 0x48) = DAT_3008ffd4;
        if (*(char **)(pcVar6 + 0x5c) != (char *)0x0) {
          pcVar4 = FUN_30007380(*(char **)(pcVar6 + 0x5c),5,'\0','\x01');
          *(char **)(pcVar6 + 0x5c) = pcVar4;
        }
        if (*(char **)(pcVar6 + 0x58) != (char *)0x0) {
          pcVar4 = FUN_30007380(*(char **)(pcVar6 + 0x58),2,'\0','\x01');
          *(char **)(pcVar6 + 0x58) = pcVar4;
        }
        ExceptionList = local_c;
        return pcVar6;
      }
      uVar7 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_54[0] = param_4;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      FUN_30005190(local_54,(undefined4 *)param_1,~uVar7 - 1);
      local_4 = 2;
      FUN_30004990(local_20,local_54);
      local_10 = 0;
      local_4._0_1_ = 3;
      piVar5 = (int *)FUN_30007db0(&DAT_30034de8,local_5c,local_20);
      iVar2 = *piVar5;
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_300033d0(local_20,'\x01');
      pcVar6 = *(char **)(iVar2 + 0x1c);
      local_4 = 0xffffffff;
      if (local_50 != 0) {
        if (*(char *)(local_50 + -1) == '\0') {
          FUN_3001f8bc((char *)(local_50 + -1));
        }
        else {
          *(char *)(local_50 + -1) = *(char *)(local_50 + -1) + -1;
        }
      }
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      if (pcVar6 != (char *)0x0) {
        ExceptionList = local_c;
        return pcVar6;
      }
      if (param_4 != '\0') {
        pcVar6 = FUN_30006a90(param_1,param_2,param_3);
        ExceptionList = local_c;
        return pcVar6;
      }
    }
    else {
      ExceptionList = &local_c;
      (*DAT_3008fde8)(0,s_GL_FindImage__Name___s__too_long_3002ea5c,param_1);
    }
  }
  ExceptionList = local_c;
  return (char *)0x0;
}

