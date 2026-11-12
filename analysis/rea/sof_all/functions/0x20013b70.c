// rea decompile_all
// name: FUN_20013b70
// address: 0x20013b70
// body: available
// range: 0x20013b70-0x20013da1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20013b70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iStack0000000c;
  int local_10;
  undefined4 local_8;
  float local_4;
  
  local_10 = __ftol();
  _DAT_20225a5c = 0;
  pcVar7 = &DAT_2022ff10;
  local_8 = 0xdc00fe00;
  iVar2 = __ftol();
  iVar6 = DAT_20225a38;
  iVar5 = iVar2;
  do {
    iVar5 = iVar5 + 8;
    iVar9 = 0;
    do {
      if ((pcVar7[iVar9] == '\n') || (pcVar7[iVar9] == '\0')) break;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x68);
    iVar3 = 10;
    iStack0000000c = 10;
    if (10 < iVar6) {
      iVar6 = 10;
      DAT_20225a38 = 10;
    }
    if (DAT_20225a40 < 10) {
      DAT_20225a40 = 10;
    }
    if (iVar2 < DAT_20225a3c) {
      DAT_20225a3c = iVar2;
    }
    if (DAT_20225a44 < iVar2) {
      DAT_20225a44 = iVar2;
    }
    iVar8 = 0;
    if (0 < iVar9) {
      local_4 = (float)iVar2;
      do {
        (*DAT_204035dc)((float)iStack0000000c,(float)iVar2,0x3f800000,&local_8,(int)pcVar7[iVar8]);
        iVar4 = local_10 + -1;
        if (local_10 == 0) {
          if (DAT_2022feec != iVar8) {
            (*DAT_20390d94)(s_misc_type_wav_2011f690);
            DAT_2022feec = iVar8;
          }
          (*DAT_204035dc)((float)(iStack0000000c + 8),(float)iVar2,0x3f800000,&local_8,0x5f);
          return;
        }
        iVar8 = iVar8 + 1;
        iVar3 = iStack0000000c + 8;
        iVar6 = DAT_20225a38;
        iStack0000000c = iVar3;
        local_10 = iVar4;
      } while (iVar8 < iVar9);
    }
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
      DAT_20225a38 = iVar3;
    }
    if (DAT_20225a40 < iVar3) {
      DAT_20225a40 = iVar3;
    }
    if (iVar5 < DAT_20225a3c) {
      DAT_20225a3c = iVar5;
    }
    if (DAT_20225a44 < iVar5) {
      DAT_20225a44 = iVar5;
    }
    cVar1 = *pcVar7;
    iVar2 = iVar2 + 8;
    if (cVar1 == '\0') {
      return;
    }
    while (cVar1 != '\n') {
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\0') {
        return;
      }
    }
    if (*pcVar7 == '\0') {
      return;
    }
    pcVar7 = pcVar7 + 1;
  } while( true );
}

