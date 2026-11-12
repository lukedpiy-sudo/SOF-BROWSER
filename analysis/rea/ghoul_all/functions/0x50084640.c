// rea decompile_all
// name: FUN_50084640
// address: 0x50084640
// body: available
// range: 0x50084640-0x500847e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50084640(int param_1,short param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 < 0x33) {
    if (DAT_5015c514 == '\0') {
      pcVar3 = s_gore_bloodcloud_s_50133bf8;
    }
    else {
      pcVar3 = s_gore_noblood_s_50133bd8;
    }
    iVar2 = (*DAT_5015c9f8)(pcVar3);
    if (iVar2 == 0) {
      return;
    }
    (*DAT_5015ca70)(5);
    (*DAT_5015ca70)(iVar2);
    uVar1 = DAT_5015c518 | 4;
    if (DAT_5015c51c != 0) {
      uVar1 = DAT_5015c518 | 0x84;
    }
  }
  else {
    if (DAT_5015c514 != '\0') {
      iVar2 = (*DAT_5015c9f8)(s_gore_noblood_50133be8);
      if (iVar2 == 0) {
        return;
      }
      (*DAT_5015ca70)(5);
      (*DAT_5015ca70)(iVar2);
      uVar1 = DAT_5015c518 | 4;
      if (DAT_5015c51c != 0) {
        uVar1 = DAT_5015c518 | 0x84;
      }
      DAT_5015c518 = uVar1;
      (*DAT_5015ca70)(DAT_5015c518);
      goto LAB_500847b6;
    }
    iVar2 = (*DAT_5015c9f8)(s_gore_bloodcloud_50133c0c);
    if (iVar2 == 0) {
      return;
    }
    (*DAT_5015ca70)(5);
    (*DAT_5015ca70)(iVar2);
    uVar1 = DAT_5015c518 | 4;
    if (DAT_5015c51c != 0) {
      uVar1 = DAT_5015c518 | 0x84;
    }
  }
  DAT_5015c518 = uVar1;
  (*DAT_5015ca70)(DAT_5015c518);
LAB_500847b6:
  (*DAT_5015ca74)((param_1 - DAT_5015cca0) / 0x464);
  (*DAT_5015ca74)(param_2);
  FUN_50085190(&DAT_5015c518,param_1 + 4,1,0);
  return;
}

