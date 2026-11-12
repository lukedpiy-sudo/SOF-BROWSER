// rea decompile_all
// name: FUN_201021ff
// address: 0x201021ff
// body: available
// range: 0x201021ff-0x2010233e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_201021ff(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_2015dc8c + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_2015dcc0 + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_2015dc90 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_2015dcc4 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_2015dc8c + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_2015dcc0 + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_2015d708 = param_3;
    DAT_2015d710 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_2015d70c = iVar1;
  }
  else {
    DAT_2015d720 = ((param_8 * 0x3c + param_9) * 0x3c + DAT_2015d678 + param_10) * 1000 + param_11;
    if (DAT_2015d720 < 0) {
      DAT_2015d720 = DAT_2015d720 + 86400000;
      DAT_2015d71c = iVar1 + -1;
    }
    else {
      DAT_2015d71c = iVar1;
      if (86399999 < DAT_2015d720) {
        DAT_2015d720 = DAT_2015d720 + -86400000;
        DAT_2015d71c = iVar1 + 1;
      }
    }
    DAT_2015d718 = param_3;
  }
  return;
}

