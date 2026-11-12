// rea decompile_all
// name: FUN_500f50a0
// address: 0x500f50a0
// body: available
// range: 0x500f50a0-0x500f5198 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f50a0(int *param_1)

{
  if (param_1[0x1d] != 0) {
    (*DAT_5015ca20)(2,s__s_disconnected_50154630,param_1[0x1d] + 0x2cc);
    (**(code **)(*DAT_5015c4d8 + 0x9c))(param_1);
    FUN_500f7470(param_1);
    FUN_500f74e0(param_1);
    FUN_500f7550(param_1);
    FUN_500efb70((int)param_1);
    FUN_500a5d30(&DAT_5015c79c,(int)param_1);
    (*DAT_5015cb2c)(param_1);
    param_1[0x56] = 0;
    (*DAT_5015cb28)(param_1);
    (*DAT_5015cb2c)(param_1);
    param_1[8] = 0;
    param_1[0x1e] = 0;
    param_1[0x6d] = (int)s_disconnected_50143004;
    *(undefined4 *)(param_1[0x1d] + 0x2f8) = 0;
    (*DAT_5015cb00)(((int)param_1 + (0x1844bc - DAT_5015cca0)) / 0x464 + -1,&DAT_5015911c);
    (**(code **)(*DAT_5015c4d8 + 0xa0))(param_1);
    FUN_5005a350(&DAT_50159680,((int)param_1 - DAT_5015cca0) / 0x464);
  }
  return;
}

