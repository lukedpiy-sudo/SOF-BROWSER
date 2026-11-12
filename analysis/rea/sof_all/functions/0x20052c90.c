// rea decompile_all
// name: FUN_20052c90
// address: 0x20052c90
// body: available
// range: 0x20052c90-0x20052dae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20052c90(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = SQRT(DAT_20390234 * DAT_20390234 +
               DAT_20390230 * DAT_20390230 + DAT_2039022c * DAT_2039022c);
  if (1.0 <= fVar1) {
    fVar2 = 0.0;
    if ((((*(int *)(DAT_20390290 + 0xe4) != 0) && (DAT_20390260 != 0)) &&
        ((*(byte *)(DAT_20390260 + 0x20) & 2) == 0)) || (DAT_20390288 != 0)) {
      fVar2 = fVar1;
      if (fVar1 < _DAT_201375f0) {
        fVar2 = _DAT_201375f0;
      }
      fVar2 = DAT_2039025c * fVar2 * _DAT_20137608;
    }
    if ((*(int *)(DAT_20390290 + 0xec) != 0) && (DAT_20390288 == 0)) {
      fVar2 = (float)*(int *)(DAT_20390290 + 0xec) * _DAT_2013760c * DAT_2039025c * fVar1 + fVar2;
    }
    fVar2 = fVar1 - fVar2;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = fVar2 / fVar1;
    DAT_2039022c = DAT_2039022c * fVar2;
    DAT_20390230 = DAT_20390230 * fVar2;
    DAT_20390234 = DAT_20390234 * fVar2;
    return;
  }
  DAT_2039022c = 0.0;
  DAT_20390230 = 0.0;
  return;
}

