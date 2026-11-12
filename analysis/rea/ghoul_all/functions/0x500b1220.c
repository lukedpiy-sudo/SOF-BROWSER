// rea decompile_all
// name: FUN_500b1220
// address: 0x500b1220
// body: available
// range: 0x500b1220-0x500b1464 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_500b1220(int *param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_38 [4];
  float fStack_34;
  float fStack_28;
  
  if (((uint)param_4 & 2) == 0) {
    if (((uint)param_4 & 4) == 0) {
      param_1 = (int *)0x40000000;
    }
    else {
      fVar5 = (float10)(**(code **)(*param_1 + 0x134))();
      param_1 = (int *)(float)fVar5;
    }
  }
  else {
    fVar5 = (float10)(**(code **)(*param_1 + 0x134))();
    param_1 = (int *)(float)fVar5;
  }
  local_5c = *param_3 + *(float *)(param_2 + 0x11c);
  iVar4 = 0;
  local_58 = *(float *)(param_2 + 0x120) + param_3[1];
  local_54 = *(float *)(param_2 + 0x124) + param_3[2];
  fStack_44 = *param_3 + *(float *)(param_2 + 0x128);
  fStack_40 = *(float *)(param_2 + 300) + param_3[1];
  fStack_60 = local_54 - 1.0;
  do {
    iVar3 = 0;
    do {
      if (iVar4 == 0) {
        fStack_68 = local_5c;
      }
      else {
        fStack_68 = fStack_44;
      }
      if (iVar3 == 0) {
        fStack_64 = local_58;
      }
      else {
        fStack_64 = fStack_40;
      }
      iVar2 = (*DAT_5015cac8)(&fStack_68);
      if (iVar2 != 1) {
        fStack_68 = (local_5c + fStack_44) * 0.5;
        fStack_60 = local_54;
        fStack_64 = (local_58 + fStack_40) * 0.5;
        fStack_48 = local_54 - ((float)param_1 + (float)param_1);
        fStack_50 = fStack_68;
        fStack_4c = fStack_64;
        (*DAT_5015cac0)(&fStack_68,&DAT_5018bf0c,&DAT_5018bf0c,&fStack_50,param_2,0x2020003,
                        auStack_38);
        fVar1 = fStack_28;
        iVar4 = 0;
        param_4 = fStack_28;
        iVar3 = 0;
        do {
          iVar2 = 0;
          do {
            fStack_68 = local_5c;
            if (iVar3 != 0) {
              fStack_68 = fStack_44;
            }
            fStack_64 = local_58;
            if (iVar2 != 0) {
              fStack_64 = fStack_40;
            }
            fStack_50 = fStack_68;
            fStack_4c = fStack_64;
            (*DAT_5015cac0)(&fStack_68,&DAT_5018bf0c,&DAT_5018bf0c,&fStack_50,param_2,0x2020003,
                            auStack_38);
            if ((fStack_34 != 1.0) && (param_4 < fStack_28)) {
              param_4 = fStack_28;
            }
            if ((fStack_34 == 1.0) || ((float)param_1 < fVar1 - fStack_28)) {
              iVar4 = iVar4 + 1;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 2);
        return iVar4 < 3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar4 = iVar4 + 1;
    if (1 < iVar4) {
      return true;
    }
  } while( true );
}

