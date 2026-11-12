// rea decompile_all
// name: FUN_500b30a0
// address: 0x500b30a0
// body: available
// range: 0x500b30a0-0x500b330e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b30a0(int *param_1,byte param_2,char param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  longlong lVar9;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = param_4;
  piVar1 = param_1;
  if ((param_3 == '\0') || (param_2 == 0)) {
    param_1 = (int *)((float)param_1[0x55] * (float)param_1[0x54] * (float)param_1[0x53]);
    if (param_2 == 0) {
      lVar9 = __ftol();
      param_2 = (byte)lVar9;
    }
    if (param_2 < 0x15) {
      if (param_2 < 10) {
        param_2 = 10;
      }
    }
    else {
      param_2 = 0x14;
    }
    if (param_3 == '\0') {
      param_3 = '\x01';
    }
  }
  iVar5 = 0x15;
  bVar8 = true;
  pcVar6 = (char *)piVar1[0x6d];
  pcVar7 = s_func_breakable_brush_5014781c;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar8 = *pcVar6 == *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    if ((float)param_1 <= 250000.0) {
      param_3 = '\x02';
      if ((float)param_1 <= 40000.0) {
        param_3 = '\x01';
      }
    }
    else {
      param_3 = '\x03';
    }
  }
  local_18 = ((float)piVar1[0x50] + (float)piVar1[0x4d]) * 0.5;
  local_14 = ((float)piVar1[0x51] + (float)piVar1[0x4e]) * 0.5;
  local_10 = ((float)piVar1[0x52] + (float)piVar1[0x4f]) * 0.5;
  if (0 < piVar1[199]) {
    iVar5 = 0x15;
    bVar8 = true;
    pcVar6 = (char *)piVar1[0x6d];
    pcVar7 = s_func_breakable_brush_5014781c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      if (piVar1[0xc6] == 0) {
        lVar9 = __ftol();
        uVar3 = (undefined1)lVar9;
        lVar9 = __ftol();
        param_4._0_1_ = (undefined1)lVar9;
        lVar9 = __ftol();
        param_1._0_1_ = (undefined1)lVar9;
      }
      else {
        param_3 = (char)piVar1[0x9f];
        param_2 = (byte)piVar1[0xc6];
        uVar3 = 0;
        param_4._0_1_ = 0;
        param_1._0_1_ = 0;
      }
    }
    else {
      lVar9 = __ftol();
      uVar3 = (undefined1)lVar9;
      lVar9 = __ftol();
      param_4._0_1_ = (undefined1)lVar9;
      lVar9 = __ftol();
      param_1._0_1_ = (undefined1)lVar9;
    }
    local_c = *(float *)(iVar2 + 4) - local_18;
    local_8 = *(float *)(iVar2 + 8) - local_14;
    local_4 = *(float *)(iVar2 + 0xc) - local_10;
    uVar4 = FUN_500fe050(&local_c);
    FUN_50084270(&local_18,&local_c,param_2,param_3,(char)piVar1[199],uVar3,(undefined1)param_4,
                 param_1._0_1_,CONCAT31((int3)((uint)uVar4 >> 8),(char)piVar1[0xf0]));
  }
  if (piVar1[0x6b] != 0) {
    (*DAT_5015ca34)(iVar2,&DAT_50142f40,piVar1[0x6b]);
    uVar4 = (*DAT_5015c9f4)(s_Misc_Talk_wav_50147844,0x3f19999a,0x3f800000,0,0);
    (*DAT_5015ca48)(iVar2,0,uVar4);
  }
  FUN_500c2f80(piVar1,(int)piVar1);
  FUN_500c3880(piVar1);
  return;
}

