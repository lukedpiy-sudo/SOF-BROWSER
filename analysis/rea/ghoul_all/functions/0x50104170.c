// rea decompile_all
// name: FUN_50104170
// address: 0x50104170
// body: available
// range: 0x50104170-0x50104481 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_50104170(float *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  int local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38;
  char cStack_37;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_8;
  
  pfVar4 = param_1 + 1;
  local_78 = 0;
  local_5c = 0xc0400000;
  local_58 = 0xc0400000;
  local_54 = 0xc0400000;
  local_68 = 0x40400000;
  local_64 = 0x40400000;
  local_60 = 0x40400000;
  (*DAT_5015cac0)((int)*param_1 + 4,&local_5c,&local_68,pfVar4,*param_1,0x6000081,&local_38);
  if (cStack_37 != '\0') {
    return;
  }
  if (fStack_34 < 0.99) {
    if (fStack_8 == DAT_5015cca0) {
      _DAT_5015c530 = param_1[4];
      _DAT_5015c534 = param_1[5];
      _DAT_5015c538 = param_1[6];
      _DAT_5015c524 = fStack_30;
      _DAT_5015c528 = fStack_2c;
      _DAT_5015c52c = fStack_28;
      pfVar4 = (float *)((int)*param_1 + 4);
      goto LAB_50104461;
    }
    if ((fStack_8 != 0.0) && (*(int *)((int)fStack_8 + 0x30c) != 0)) {
      fVar1 = *param_1;
      fVar5 = FUN_500658e0((int)param_1[8]);
      fVar3 = (float)fVar5;
      fVar5 = FUN_500658d0((int)param_1[8]);
      FUN_5008bb10(fStack_8,fVar1,fVar1,&fStack_50,pfVar4,pfVar4,0xf0,100,0x800,0xe,(float)fVar5,
                   fVar3);
    }
  }
  fStack_74 = *pfVar4;
  fStack_70 = param_1[2];
  fStack_6c = param_1[3];
  fVar3 = *param_1;
  fStack_44 = param_1[4] * 1024.0 + *pfVar4;
  fStack_50 = param_1[4];
  fStack_4c = param_1[5];
  fStack_48 = param_1[6];
  fStack_40 = param_1[5] * 1024.0 + param_1[2];
  fStack_3c = param_1[6] * 1024.0 + param_1[3];
  do {
    (*DAT_5015cac0)(&fStack_74,&local_5c,&local_68,&fStack_44,fVar3,0x6000081,&local_38);
    fVar3 = fStack_8;
    local_78 = local_78 + 1;
    iVar2 = FUN_500f7430((int)fStack_8);
    if (iVar2 == 0) {
      if (fStack_8 != 0.0) goto LAB_50104379;
    }
    else {
      fStack_8 = (float)FUN_500f7430((int)fStack_8);
      if (fStack_8 == 0.0) {
        return;
      }
LAB_50104379:
      if ((*(int *)((int)fStack_8 + 0x30c) != 0) && (fVar1 = *param_1, fStack_8 != fVar1)) {
        fVar5 = FUN_500658e0((int)param_1[8]);
        fVar7 = (float)fVar5;
        fVar5 = FUN_500658d0((int)param_1[8]);
        FUN_5008bb10(fStack_8,fVar1,fVar1,&fStack_50,pfVar4,pfVar4,0xf0,100,0x800,0xe,(float)fVar5,
                     fVar7);
        fStack_74 = fStack_30;
        fStack_70 = fStack_2c;
        fStack_6c = fStack_28;
      }
    }
  } while (((fStack_34 < 0.999) && (local_78 < 0xc)) && (fStack_8 != DAT_5015cca0));
  _DAT_5015c530 = param_1[4];
  _DAT_5015c534 = param_1[5];
  _DAT_5015c538 = param_1[6];
  _DAT_5015c524 = fStack_30;
  _DAT_5015c528 = fStack_2c;
  _DAT_5015c52c = fStack_28;
LAB_50104461:
  DAT_5015c51c = DAT_5015c51c | 0xc;
  iVar8 = 0;
  uVar6 = 1;
  iVar2 = (*DAT_5015c9f8)(s_weapons_world_mpgburst_50155f44);
  FUN_500852e0(&DAT_5015c518,iVar2,pfVar4,uVar6,iVar8);
  return;
}

