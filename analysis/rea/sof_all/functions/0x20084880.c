// rea decompile_all
// name: FUN_20084880
// address: 0x20084880
// body: available
// range: 0x20084880-0x20084913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_20084880(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(in_ECX + 8);
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 7);
    puVar2 = operator_new(0x20);
    puVar2[1] = param_2;
    *(undefined1 *)(puVar2 + 7) = uVar1;
    *(undefined1 *)((int)puVar2 + 0x1d) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[3] = param_1[3];
      puVar2[4] = param_1[4];
      puVar2[5] = param_1[5];
      puVar2[6] = param_1[6];
    }
    *puVar2 = *(undefined4 *)(in_ECX + 8);
    puVar2[2] = *(undefined4 *)(in_ECX + 8);
    if (puVar4 == *(undefined4 **)(in_ECX + 8)) {
      puVar4 = puVar2;
    }
    uVar3 = FUN_20084880(*param_1,puVar2);
    *puVar2 = uVar3;
    uVar3 = FUN_20084880(param_1[2],puVar2);
    puVar2[2] = uVar3;
  }
  return puVar4;
}

