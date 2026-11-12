// rea decompile_all
// name: FUN_5010ead1
// address: 0x5010ead1
// body: available
// range: 0x5010ead1-0x5010ec10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_5010ead1(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_50158b5c + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_50158b90 + param_4 * 4);
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
        iVar2 = *(int *)(&DAT_50158b60 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_50158b94 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_50158b5c + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_50158b90 + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_50158908 = param_3;
    DAT_50158910 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_5015890c = iVar1;
  }
  else {
    DAT_50158920 = ((param_8 * 0x3c + param_9) * 0x3c + DAT_50158878 + param_10) * 1000 + param_11;
    if (DAT_50158920 < 0) {
      DAT_50158920 = DAT_50158920 + 86400000;
      DAT_5015891c = iVar1 + -1;
    }
    else {
      DAT_5015891c = iVar1;
      if (86399999 < DAT_50158920) {
        DAT_50158920 = DAT_50158920 + -86400000;
        DAT_5015891c = iVar1 + 1;
      }
    }
    DAT_50158918 = param_3;
  }
  return;
}

