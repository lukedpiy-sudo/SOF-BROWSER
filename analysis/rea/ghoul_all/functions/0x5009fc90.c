// rea decompile_all
// name: FUN_5009fc90
// address: 0x5009fc90
// body: available
// range: 0x5009fc90-0x5009fe5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_5009fc90(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 4) - *(float *)(param_1 + 0x358);
  fVar2 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x35c);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2) - 167.0;
  fVar2 = SQRT(*(float *)(param_1 + 0x250) * *(float *)(param_1 + 0x250) +
               *(float *)(param_1 + 0x24c) * *(float *)(param_1 + 0x24c)) * 0.1;
  if (((DAT_5018bf0c == *(float *)(param_1 + 0x24c)) &&
      (DAT_5018bf10 == *(float *)(param_1 + 0x250))) &&
     (DAT_5018bf14 == *(float *)(param_1 + 0x254))) {
    *(code **)(param_1 + 0x2b8) = FUN_5009fb10;
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  }
  else if ((*(byte *)(param_1 + 0x1b8) & 8) == 0) {
    if (fVar1 < fVar2) {
      *(float *)(param_1 + 0x24c) = (fVar1 / fVar2) * *(float *)(param_1 + 0x24c);
      *(undefined4 *)(param_1 + 0x254) = 0;
      *(float *)(param_1 + 0x250) = (fVar1 / fVar2) * *(float *)(param_1 + 0x250);
      *(code **)(param_1 + 0x2b8) = FUN_5009fb10;
      *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
      iVar3 = (*DAT_5015c9f4)(s_Ambient_Locs_Subway_Train_Move_w_5014b0ec);
      if ((*(int *)(param_1 + 0x3c) == iVar3) && ((*(byte *)(param_1 + 0x1b8) & 0x12) == 0)) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      return 0;
    }
  }
  else if (fVar1 < fVar2 * 5.0) {
    fVar1 = fVar1 / (fVar2 * 6.0);
    *(float *)(param_1 + 0x24c) = fVar1 * *(float *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x254) = 0;
    *(float *)(param_1 + 0x250) = fVar1 * *(float *)(param_1 + 0x250);
    *(code **)(param_1 + 0x2b8) = FUN_5009fb80;
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
    (*DAT_5015c9f4)(s_Ambient_Locs_Subway_Train_Move_w_5014b0ec);
    return 0;
  }
  return 1;
}

