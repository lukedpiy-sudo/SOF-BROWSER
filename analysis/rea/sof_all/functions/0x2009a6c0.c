// rea decompile_all
// name: FUN_2009a6c0
// address: 0x2009a6c0
// body: available
// range: 0x2009a6c0-0x2009a6fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009a6c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar2 = param_1;
  if (param_2 != puVar1) {
    puVar3 = param_2;
    do {
      puVar4 = puVar3 + 3;
      *puVar2 = *puVar3;
      puVar2[1] = *(undefined4 *)((int)param_2 + (4 - (int)param_1) + (int)puVar2);
      puVar2[2] = puVar3[2];
      puVar2 = puVar2 + 3;
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  *(undefined4 **)(in_ECX + 8) = puVar2;
  return;
}

