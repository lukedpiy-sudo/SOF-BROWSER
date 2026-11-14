// rea decompile_all
// name: FUN_3001fd89
// address: 0x3001fd89
// body: available
// range: 0x3001fd89-0x3001fdf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3001fd89(int param_1)

{
  SIZE_T SVar1;
  int *piVar2;
  void *this;
  
  SVar1 = FUN_30023652((undefined *)DAT_300abb10);
  if (SVar1 < (uint)((int)DAT_300abb0c + (4 - (int)DAT_300abb10))) {
    SVar1 = FUN_30023652((undefined *)DAT_300abb10);
    piVar2 = FUN_300232b2(this,DAT_300abb10,(uint *)(SVar1 + 0x10));
    if (piVar2 == (int *)0x0) {
      return;
    }
    DAT_300abb0c = piVar2 + ((int)DAT_300abb0c - (int)DAT_300abb10 >> 2);
    DAT_300abb10 = piVar2;
  }
  *DAT_300abb0c = param_1;
  DAT_300abb0c = DAT_300abb0c + 1;
  return;
}

