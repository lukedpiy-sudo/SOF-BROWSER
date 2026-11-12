// rea decompile_all
// name: FUN_200e3940
// address: 0x200e3940
// body: available
// range: 0x200e3940-0x200e39ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200e3940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(in_ECX + 8);
  puVar3 = param_1;
  if (param_2 != puVar2) {
    puVar4 = param_2 + 6;
    do {
      *puVar3 = puVar4[-6];
      FUN_2000a3a0((int)puVar3 + (int)param_2 + (4 - (int)param_1),0,0xffffffff);
      puVar3[5] = puVar4[-1];
      puVar3[6] = *puVar4;
      puVar3[7] = puVar4[1];
      FUN_2000a3a0(puVar4 + 2,0,0xffffffff);
      FUN_2000a3a0(puVar4 + 6,0,0xffffffff);
      puVar3 = puVar3 + 0x10;
      puVar1 = puVar4 + 10;
      puVar4 = puVar4 + 0x10;
    } while (puVar1 != puVar2);
  }
  puVar2 = *(undefined4 **)(in_ECX + 8);
  puVar4 = puVar3;
  if (puVar3 == puVar2) {
    *(undefined4 **)(in_ECX + 8) = puVar3;
    return param_1;
  }
  do {
    FUN_20025fd0();
    puVar4 = puVar4 + 0x10;
  } while (puVar4 != puVar2);
  *(undefined4 **)(in_ECX + 8) = puVar3;
  return param_1;
}

