// rea decompile_all
// name: FUN_500b9c60
// address: 0x500b9c60
// body: available
// range: 0x500b9c60-0x500b9d40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b9c60(float *param_1)

{
  switch(param_1[0x67]) {
  case 0.0:
    FUN_500b7650((int)param_1);
    return;
  case 1.4013e-45:
    param_1[4] = param_1[0x96] * 0.1 + param_1[4];
    param_1[5] = param_1[0x97] * 0.1 + param_1[5];
    param_1[6] = param_1[0x98] * 0.1 + param_1[6];
    param_1[1] = param_1[0x93] * 0.1 + param_1[1];
    param_1[2] = param_1[0x94] * 0.1 + param_1[2];
    param_1[3] = param_1[0x95] * 0.1 + param_1[3];
    (*DAT_5015cb28)(param_1);
    FUN_500b7650((int)param_1);
    return;
  case 2.8026e-45:
  case 4.2039e-45:
    FUN_500b87c0((float)param_1);
    return;
  default:
    (*DAT_5015cb10)(s_SV_Physics__bad_movetype__i_5014d538,param_1[0x67]);
    return;
  case 7.00649e-45:
    FUN_500b8df0(param_1);
    return;
  case 8.40779e-45:
  case 9.80909e-45:
  case 1.12104e-44:
  case 1.26117e-44:
    FUN_500b8970(param_1);
    return;
  case 1.4013e-44:
  case 1.54143e-44:
    FUN_500b9470(param_1);
    return;
  }
}

