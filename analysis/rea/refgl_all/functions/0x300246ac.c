// rea decompile_all
// name: FUN_300246ac
// address: 0x300246ac
// body: available
// range: 0x300246ac-0x30024710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_300246ac(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_3002910b(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
  if ((uVar1 & 0x90) == 0) {
    fVar2 = __frnd(param_1);
    if ((double)fVar2 == param_1) {
      fVar2 = __frnd(param_1 / 2.0);
      if (fVar2 == (float10)(param_1 / 2.0)) {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
  }
  return 0;
}

