// rea decompile_all
// name: FUN_500be7a0
// address: 0x500be7a0
// body: available
// range: 0x500be7a0-0x500be897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500be7a0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x31c)) {
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
    DAT_50188928._0_1_ = 0x79;
    break;
  case 7:
    DAT_50188928._1_1_ = 0x79;
    DAT_50188928._2_1_ = 0x79;
    DAT_50188928._3_1_ = 0x79;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    DAT_5018892c = 0x79;
    DAT_5018892d = 0x79;
    DAT_5018892e = 0x79;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x20:
  case 0x22:
    DAT_5018892f = 0x79;
    DAT_50188930 = 0x79;
    DAT_50188931 = 0x79;
    DAT_50188932 = 0x79;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    DAT_50188937 = 0x79;
    DAT_50188938 = 0x79;
    DAT_50188939 = 0x79;
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
    DAT_50188933 = 0x79;
    DAT_50188934 = 0x79;
    DAT_50188935 = 0x79;
    DAT_50188936 = 0x79;
  }
  switch(*(undefined4 *)(param_1 + 0x3c0)) {
  case 0xe:
  case 0xf:
  case 0x10:
    DAT_501889a7 = 1;
    return;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2a:
    DAT_501889a5 = 1;
    return;
  case 0x20:
    DAT_50188933 = 0x79;
    DAT_501889a5 = 1;
    DAT_50188950._0_1_ = 1;
    DAT_501889ab = 1;
    return;
  case 0x25:
    DAT_50188928._1_1_ = 0x79;
    DAT_501889a4 = 1;
    DAT_501889a3 = 1;
    DAT_501889a2 = 1;
    return;
  case 0x26:
    DAT_50188928._1_1_ = 0x79;
    DAT_50188933 = 0x79;
    DAT_501889a2 = 1;
    DAT_501889a3 = 1;
    DAT_501889a4 = 1;
    return;
  case 0x27:
    DAT_5018893d = 0x79;
    DAT_501889a6 = 1;
    return;
  case 0x29:
    DAT_5018893e = 0x79;
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x28:
    DAT_501889a6 = 1;
  default:
    return;
  }
}

