// rea decompile_all
// name: FUN_200c3980
// address: 0x200c3980
// body: available
// range: 0x200c3980-0x200c3b69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200c3980(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *in_ECX;
  local_8 = in_ECX[1];
  local_1c = in_ECX[2];
  local_24 = *in_ECX;
  local_20 = in_ECX[1];
  local_18 = local_8 * _DAT_20406530 - local_1c * _DAT_2040652c;
  local_14 = local_1c * _DAT_20406528 - _DAT_20406530 * local_c;
  local_10 = _DAT_2040652c * local_c - _DAT_20406528 * local_8;
  local_2c = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
  FUN_200802f0(&local_24);
  fVar1 = _DAT_2040653c * local_8 - _DAT_20406538 * local_4;
  fVar4 = _DAT_20406534 * local_4 - _DAT_2040653c * local_c;
  fVar3 = _DAT_20406538 * local_c - _DAT_20406534 * local_8;
  fVar2 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3);
  if (local_2c < fVar2) {
    local_2c = fVar2;
    local_18 = fVar1;
    local_14 = fVar4;
    local_10 = fVar3;
  }
  local_24 = *in_ECX;
  local_1c = in_ECX[2];
  local_20 = in_ECX[1];
  FUN_200802f0(&local_24);
  local_24 = _DAT_20406524 * local_8 - _DAT_20406520 * local_4;
  local_20 = _DAT_2040651c * local_4 - _DAT_20406524 * local_c;
  local_1c = _DAT_20406520 * local_c - _DAT_2040651c * local_8;
  if (local_2c < SQRT(local_20 * local_20 + local_24 * local_24 + local_1c * local_1c)) {
    FUN_200802f0(&local_24);
  }
  FUN_200802f0(&local_18);
  return;
}

