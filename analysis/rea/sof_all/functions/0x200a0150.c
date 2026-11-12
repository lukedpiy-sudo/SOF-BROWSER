// rea decompile_all
// name: FUN_200a0150
// address: 0x200a0150
// body: available
// range: 0x200a0150-0x200a01c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a0150(undefined1 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined1 *in_ECX;
  int iVar3;
  
  *in_ECX = *param_1;
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  pvVar2 = operator_new(iVar1 * 0x44);
  *(void **)(in_ECX + 4) = pvVar2;
  iVar1 = *(int *)(param_1 + 8);
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != iVar1; iVar3 = iVar3 + 0x44) {
    FUN_20093840(pvVar2,iVar3);
    pvVar2 = (void *)((int)pvVar2 + 0x44);
  }
  *(void **)(in_ECX + 8) = pvVar2;
  *(void **)(in_ECX + 0xc) = pvVar2;
  return;
}

