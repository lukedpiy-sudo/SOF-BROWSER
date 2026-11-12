// rea decompile_all
// name: FUN_200fb751
// address: 0x200fb751
// body: available
// range: 0x200fb751-0x200fb79a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_200fb751(undefined1 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  while( true ) {
    _DAT_2015ac34 = _DAT_2015ac34 + -1;
    if (_DAT_2015ac34 < 0) {
      uVar1 = FUN_20101608(&PTR_DAT_2015ac30);
    }
    else {
      uVar1 = (uint)(byte)*PTR_DAT_2015ac30;
      PTR_DAT_2015ac30 = PTR_DAT_2015ac30 + 1;
    }
    if (uVar1 == 10) goto LAB_200fb793;
    if (uVar1 == 0xffffffff) break;
    *puVar2 = (char)uVar1;
    puVar2 = puVar2 + 1;
  }
  if (puVar2 == param_1) {
    param_1 = (undefined1 *)0x0;
  }
  else {
LAB_200fb793:
    *puVar2 = 0;
  }
  return param_1;
}

