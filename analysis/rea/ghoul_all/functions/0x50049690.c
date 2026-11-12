// rea decompile_all
// name: FUN_50049690
// address: 0x50049690
// body: available
// range: 0x50049690-0x50049993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50049690(int param_1)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  char local_38;
  char cStack_37;
  float fStack_34;
  
  iVar4 = 0;
  local_54 = 0;
  do {
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 == 0) || ((uint)((*(int *)(param_1 + 8) - iVar3) / 0x88) <= local_54)) {
      return;
    }
    local_50 = *(float *)(iVar4 + 0x18 + iVar3) - 24.0;
    local_4c = *(float *)(iVar4 + 0x1c + iVar3) - 24.0;
    local_48 = *(float *)(iVar4 + 0x20 + iVar3) - 24.0;
    local_44 = *(float *)(iVar4 + 0x18 + iVar3) + 24.0;
    local_40 = *(float *)(iVar4 + 0x1c + iVar3) + 24.0;
    local_3c = *(float *)(iVar4 + 0x20 + iVar3) + 24.0;
    (*DAT_5015cac0)(&DAT_5018bf0c,&local_50,&local_44,&DAT_5018bf0c,0,3,&local_38);
    if (((cStack_37 != '\0') || (local_38 != '\0')) || (fStack_34 <= 0.98)) {
      bVar2 = false;
      iVar3 = 0;
      do {
        if (bVar2) break;
        switch(iVar3) {
        case 0:
          local_50 = local_50 - 8.0;
          local_44 = local_44 - 8.0;
          break;
        case 1:
          local_50 = local_50 + 16.0;
          local_44 = local_44 + 16.0;
          break;
        case 2:
          local_50 = local_50 - 8.0;
          local_44 = local_44 - 8.0;
          local_4c = local_4c - 8.0;
          local_40 = local_40 - 8.0;
          break;
        case 3:
          local_4c = local_4c + 16.0;
          local_40 = local_40 + 16.0;
          break;
        case 4:
          local_4c = local_4c - 8.0;
          local_40 = local_40 - 8.0;
          local_50 = local_50 - 16.0;
          local_44 = local_44 - 16.0;
          break;
        case 5:
          local_50 = local_50 + 32.0;
          local_44 = local_44 + 32.0;
          break;
        case 6:
          local_50 = local_50 - 16.0;
          local_44 = local_44 - 16.0;
          local_4c = local_4c - 16.0;
          local_40 = local_40 - 16.0;
          break;
        case 7:
          local_4c = local_4c + 32.0;
          local_40 = local_40 + 32.0;
        }
        (*DAT_5015cac0)(&DAT_5018bf0c,&local_50,&local_44,&DAT_5018bf0c,0,3,&local_38);
        if (((cStack_37 == '\0') && (local_38 == '\0')) && (0.98 < fStack_34)) {
          bVar2 = true;
          pfVar1 = (float *)(iVar4 + 0x18 + *(int *)(param_1 + 4));
          *pfVar1 = local_50 - -24.0;
          pfVar1[1] = local_4c - -24.0;
          pfVar1[2] = local_48 - -24.0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
    }
    local_54 = local_54 + 1;
    iVar4 = iVar4 + 0x88;
  } while( true );
}

