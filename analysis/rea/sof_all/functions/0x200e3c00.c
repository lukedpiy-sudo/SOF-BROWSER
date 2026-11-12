// rea decompile_all
// name: FUN_200e3c00
// address: 0x200e3c00
// body: available
// range: 0x200e3c00-0x200e3c7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200e3c00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar2 = param_1;
  if (param_2 != puVar1) {
    puVar3 = param_2;
    do {
      *puVar2 = *puVar3;
      puVar2[1] = *(undefined4 *)((int)puVar2 + (int)param_2 + (4 - (int)param_1));
      FUN_2000a3a0(puVar3 + 2,0,0xffffffff);
      puVar3 = puVar3 + 6;
      puVar2 = puVar2 + 6;
    } while (puVar3 != puVar1);
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar3 = puVar2;
  if (puVar2 == puVar1) {
    *(undefined4 **)(in_ECX + 8) = puVar2;
    return param_1;
  }
  do {
    FUN_200dfe60();
    puVar3 = puVar3 + 6;
  } while (puVar3 != puVar1);
  *(undefined4 **)(in_ECX + 8) = puVar2;
  return param_1;
}

