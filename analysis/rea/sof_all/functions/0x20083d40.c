// rea decompile_all
// name: FUN_20083d40
// address: 0x20083d40
// body: available
// range: 0x20083d40-0x20083dad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20083d40(undefined1 *param_1,undefined1 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 *in_ECX;
  
  *in_ECX = *param_3;
  in_ECX[1] = *param_1;
  in_ECX[0xc] = param_2;
  pvVar2 = operator_new(0x14);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x10) = 1;
  *(undefined1 *)((int)pvVar2 + 0x11) = 0;
  *(void **)(in_ECX + 8) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x11) = 1;
  **(undefined4 **)(in_ECX + 8) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 8) + 8) = 0;
  uVar1 = *(undefined4 *)(in_ECX + 8);
  pvVar2 = operator_new(0x14);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x10) = 0;
  *(undefined1 *)((int)pvVar2 + 0x11) = 0;
  *(void **)(in_ECX + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

