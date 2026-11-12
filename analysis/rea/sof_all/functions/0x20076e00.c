// rea decompile_all
// name: FUN_20076e00
// address: 0x20076e00
// body: available
// range: 0x20076e00-0x20076e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_20076e00(void)

{
  short sVar1;
  int in_ECX;
  undefined1 local_4 [4];
  
  if (*(int *)(in_ECX + 0x10) != 0) {
    sVar1 = *(short *)(**(int **)(in_ECX + 4) + 0xc);
    FUN_200719a0(local_4,**(int **)(in_ECX + 4));
    return sVar1;
  }
  if (0x7ffe < *(short *)(in_ECX + 0x14)) {
    FUN_2008e9e0(s__Out_of_uuids_2015700f + 1);
  }
  sVar1 = *(short *)(in_ECX + 0x14);
  *(short *)(in_ECX + 0x14) = sVar1 + 1;
  return sVar1;
}

