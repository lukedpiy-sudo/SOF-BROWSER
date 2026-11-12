// rea decompile_all
// name: FUN_2009ecc0
// address: 0x2009ecc0
// body: available
// range: 0x2009ecc0-0x2009ed46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009ecc0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  if (*in_ECX != '\0') {
    for (iVar2 = 0x11; in_ECX = in_ECX + 4, iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *(undefined4 *)in_ECX;
      param_2 = param_2 + 1;
    }
    return;
  }
  if (*param_1 == param_1[4]) {
    iVar2 = param_1[6];
    iVar1 = param_1[2];
    if ((iVar1 == iVar2 + 1) || (iVar2 == iVar1 + 1)) {
      FUN_200a1020(*(int *)(in_ECX + 0x4c) + iVar1 * 0x44,*(int *)(in_ECX + 0x4c) + iVar2 * 0x44,
                   param_1[8]);
      return;
    }
  }
  puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x4c) + param_1[2] * 0x44);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

