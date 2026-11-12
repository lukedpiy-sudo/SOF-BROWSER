// rea decompile_all
// name: FUN_500768f0
// address: 0x500768f0
// body: available
// range: 0x500768f0-0x50076b01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500768f0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 local_19c;
  int local_198;
  undefined1 auStack_194 [4];
  int iStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined1 local_184 [4];
  char *local_180;
  undefined4 uStack_174;
  undefined1 auStack_170 [4];
  int aiStack_16c [2];
  int aiStack_164 [4];
  undefined4 uStack_154;
  undefined1 local_150 [64];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114931;
  local_c = ExceptionList;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_110 + -(int)param_1)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_500826d0(local_184,'\0');
  uVar5 = 0xffffffff;
  pcVar2 = local_110;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar3 = FUN_50082c70(local_184,uVar5,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar2 = local_110;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_180 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_180 = local_180 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_180 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_180 = local_180 + 1;
    }
    FUN_50082c50(local_184,uVar5);
  }
  local_4 = 0;
  FUN_50082b00(&DAT_5015c4ec,&local_198,(int)local_184);
  local_4 = 0xffffffff;
  FUN_500826d0(local_184,'\x01');
  if (local_198 == DAT_5015c4f0) {
    puVar7 = local_150;
    pcVar2 = s_ds_roff__s_50145608;
    FUN_50107654(puVar7,(byte *)s_ds_roff__s_50145608);
    iVar4 = (*DAT_5015cb64)(local_150,&local_19c,0,puVar7,pcVar2,param_1);
    if (iVar4 < 1) {
      FUN_500adb20((byte *)s__________________________________501455d4);
      FUN_500adb20((byte *)s_Could_not_open__ROF_file___s__501455b4);
      FUN_500adb20((byte *)s__________________________________501455d4);
      local_19c = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pcVar2 = local_110;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iStack_190 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      FUN_50082bb0(auStack_194,(undefined4 *)local_110,~uVar5 - 1);
      local_4 = 1;
      FUN_50082470(aiStack_164,auStack_194);
      uStack_154 = 0;
      local_4._0_1_ = 2;
      FUN_50082d90(&DAT_5015c4ec,&uStack_174,aiStack_164);
      FUN_50010d30(aiStack_16c,&uStack_174,auStack_170);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_500826d0(aiStack_164,'\x01');
      *(undefined4 *)(aiStack_16c[0] + 0x1c) = local_19c;
      if (iStack_190 != 0) {
        if (*(char *)(iStack_190 + -1) == '\0') {
          FUN_50106b60((char *)(iStack_190 + -1));
        }
        else {
          *(char *)(iStack_190 + -1) = *(char *)(iStack_190 + -1) + -1;
        }
      }
    }
  }
  else {
    local_19c = *(undefined4 *)(local_198 + 0x1c);
  }
  ExceptionList = local_c;
  return local_19c;
}

