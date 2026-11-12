// rea decompile_all
// name: FUN_20024d60
// address: 0x20024d60
// body: available
// range: 0x20024d60-0x20024d8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20024d60(undefined1 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  cVar1 = param_1[1];
  puVar2 = param_1;
  while (cVar1 != '\0') {
    puVar3 = puVar2 + 1;
    if (cVar1 == '/') {
      *puVar3 = 0;
      thunk_FUN_200fb90b(param_1);
      *puVar3 = 0x2f;
    }
    cVar1 = puVar2[2];
    puVar2 = puVar3;
  }
  return;
}

