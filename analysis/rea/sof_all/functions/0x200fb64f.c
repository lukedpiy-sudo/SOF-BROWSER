// rea decompile_all
// name: FUN_200fb64f
// address: 0x200fb64f
// body: available
// range: 0x200fb64f-0x200fb67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200fb64f(void)

{
  if (PTR_FUN_2015abe8 != (undefined *)0x0) {
    (*(code *)PTR_FUN_2015abe8)();
  }
  FUN_200fb737(&DAT_2011c280,&DAT_2011c298);
  FUN_200fb737(&DAT_2011c000,&DAT_2011c27c);
  return;
}

