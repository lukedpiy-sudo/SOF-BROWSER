// rea decompile_all
// name: FUN_5009fb80
// address: 0x5009fb80
// body: available
// range: 0x5009fb80-0x5009fc8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009fb80(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_500b4b50(param_1);
  fVar1 = *(float *)((int)param_1 + 4) - *(float *)((int)param_1 + 0x358);
  fVar2 = *(float *)((int)param_1 + 8) - *(float *)((int)param_1 + 0x35c);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2) - 167.0;
  fVar2 = SQRT(*(float *)((int)param_1 + 0x250) * *(float *)((int)param_1 + 0x250) +
               *(float *)((int)param_1 + 0x24c) * *(float *)((int)param_1 + 0x24c));
  fVar3 = fVar2 * 0.1;
  if (fVar2 < 20.0) {
    fVar1 = fVar1 / fVar3;
    *(float *)((int)param_1 + 0x24c) = fVar1 * *(float *)((int)param_1 + 0x24c);
    *(undefined4 *)((int)param_1 + 0x254) = 0;
    *(float *)((int)param_1 + 0x250) = fVar1 * *(float *)((int)param_1 + 0x250);
    *(code **)((int)param_1 + 0x2b8) = FUN_5009fb10;
    *(float *)((int)param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
    return;
  }
  fVar1 = fVar1 / (fVar3 * 6.0);
  *(float *)((int)param_1 + 0x24c) = fVar1 * *(float *)((int)param_1 + 0x24c);
  *(undefined4 *)((int)param_1 + 0x254) = 0;
  *(float *)((int)param_1 + 0x250) = fVar1 * *(float *)((int)param_1 + 0x250);
  *(float *)((int)param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

