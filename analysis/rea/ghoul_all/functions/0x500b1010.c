// rea decompile_all
// name: FUN_500b1010
// address: 0x500b1010
// body: available
// range: 0x500b1010-0x500b1213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_500b1010(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  undefined1 auStack_38 [4];
  float fStack_34;
  float fStack_28;
  
  fVar1 = param_1;
  iVar4 = 0;
  local_5c = *(float *)((int)param_1 + 4) + *(float *)((int)param_1 + 0x11c);
  local_58 = *(float *)((int)param_1 + 8) + *(float *)((int)param_1 + 0x120);
  local_54 = *(float *)((int)param_1 + 0xc) + *(float *)((int)param_1 + 0x124);
  local_44 = *(float *)((int)param_1 + 0x128) + *(float *)((int)param_1 + 4);
  local_40 = *(float *)((int)param_1 + 8) + *(float *)((int)param_1 + 300);
  local_60 = local_54 - 1.0;
  do {
    iVar5 = 0;
    do {
      if (iVar4 == 0) {
        local_68 = local_5c;
      }
      else {
        local_68 = local_44;
      }
      if (iVar5 == 0) {
        local_64 = local_58;
      }
      else {
        local_64 = local_40;
      }
      iVar3 = (*DAT_5015cac8)(&local_68);
      if (iVar3 != 1) {
        local_68 = (local_5c + local_44) * 0.5;
        local_60 = local_54;
        local_64 = (local_58 + local_40) * 0.5;
        fStack_48 = local_54 - 36.0;
        fStack_50 = local_68;
        fStack_4c = local_64;
        (*DAT_5015cac0)(&local_68,&DAT_5018bf0c,&DAT_5018bf0c,&fStack_50,param_1,0x2020003,
                        auStack_38);
        fVar2 = fStack_28;
        iVar5 = 0;
        param_1 = fStack_28;
        iVar4 = 0;
        do {
          iVar3 = 0;
          do {
            local_68 = local_5c;
            if (iVar4 != 0) {
              local_68 = local_44;
            }
            local_64 = local_58;
            if (iVar3 != 0) {
              local_64 = local_40;
            }
            fStack_50 = local_68;
            fStack_4c = local_64;
            (*DAT_5015cac0)(&local_68,&DAT_5018bf0c,&DAT_5018bf0c,&fStack_50,fVar1,0x2020003,
                            auStack_38);
            if ((fStack_34 != 1.0) && (param_1 < fStack_28)) {
              param_1 = fStack_28;
            }
            if ((fStack_34 == 1.0) || (18.0 < fVar2 - fStack_28)) {
              iVar5 = iVar5 + 1;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 2);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 2);
        return iVar5 < 3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar4 = iVar4 + 1;
    if (1 < iVar4) {
      return true;
    }
  } while( true );
}

