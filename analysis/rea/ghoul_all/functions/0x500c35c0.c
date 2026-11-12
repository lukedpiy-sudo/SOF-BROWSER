// rea decompile_all
// name: FUN_500c35c0
// address: 0x500c35c0
// body: available
// range: 0x500c35c0-0x500c3683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c35c0(int *param_1)

{
  int iVar1;
  
  param_1[0x1e] = 1;
  param_1[0x6d] = (int)s_noclass_50142f34;
  iVar1 = DAT_5015cca0;
  param_1[0xa5] = 0x3f000000;
  param_1[0xa2] = 0x3f800000;
  param_1[0xa1] = 0x3f800000;
  param_1[0xa3] = 0x3f800000;
  *param_1 = ((int)param_1 - iVar1) / 0x464;
  param_1[0xa4] = 0;
  param_1[0x59] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xc6] = 0;
  param_1[9] = -1;
  param_1[0x5a] = 0x447a0000;
  param_1[0x5b] = 0x447a0000;
  param_1[0x5c] = 0x447a0000;
  param_1[0x5d] = -0x3b860000;
  param_1[0x5e] = -0x3b860000;
  param_1[0x5f] = -0x3b860000;
  param_1[0x60] = 0x461c4000;
  param_1[0x61] = 0x461c4000;
  param_1[0x62] = 0x461c4000;
  param_1[99] = -1;
  return;
}

