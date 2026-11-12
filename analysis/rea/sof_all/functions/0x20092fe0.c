// rea decompile_all
// name: FUN_20092fe0
// address: 0x20092fe0
// body: available
// range: 0x20092fe0-0x20093021 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_20092fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar4 = param_1;
  if (param_2 == puVar1) {
    *(undefined4 **)(in_ECX + 8) = param_1;
    return param_1;
  }
  do {
    puVar3 = param_2 + 0x11;
    puVar5 = puVar4 + 0x11;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    param_2 = puVar3;
    puVar4 = puVar5;
  } while (puVar3 != puVar1);
  *(undefined4 **)(in_ECX + 8) = puVar5;
  return param_1;
}

