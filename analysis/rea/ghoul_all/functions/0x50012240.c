// rea decompile_all
// name: FUN_50012240
// address: 0x50012240
// body: available
// range: 0x50012240-0x500122ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_50012240(int param_1,int param_2)

{
  int iVar1;
  
  switch(param_1) {
  default:
    return param_1;
  case 1:
    iVar1 = (*DAT_5015cb20)(0x3faccccd,0x3fd33333);
    return iVar1;
  case 3:
    return param_1;
  case 4:
    return param_1;
  case 5:
  case 0x12:
    return param_1;
  case 6:
    iVar1 = (*DAT_5015cb20)(0x3dcccccd,0x3f000000);
    return iVar1;
  case 7:
  case 0x1d:
    return param_1;
  case 9:
    break;
  case 0xb:
  case 0xe:
    return param_1;
  case 0xc:
    iVar1 = (*DAT_5015cb20)(0x3f000000,0x3f800000);
    return iVar1;
  case 0x10:
  case 0x11:
    return param_1;
  }
  if (param_2 % 3 == 1) {
    return param_2 / 3;
  }
  return param_2 / 3;
}

