// rea decompile_all
// name: FUN_500c3440
// address: 0x500c3440
// body: available
// range: 0x500c3440-0x500c350a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500c3440(float *param_1,float *param_2)

{
  if (((*param_1 == _DAT_50151450) && (param_1[1] == _DAT_50151454)) &&
     (param_1[2] == _DAT_50151458)) {
    *param_2 = _DAT_5015145c;
    param_2[1] = DAT_50151460;
    param_2[2] = DAT_50151464;
  }
  else if (((*param_1 == _DAT_50151468) && (param_1[1] == _DAT_5015146c)) &&
          (param_1[2] == _DAT_50151470)) {
    *param_2 = _DAT_50151474;
    param_2[1] = DAT_50151478;
    param_2[2] = DAT_5015147c;
  }
  else {
    FUN_500fdd70(param_1,param_2,(float *)0x0,(float *)0x0);
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}

