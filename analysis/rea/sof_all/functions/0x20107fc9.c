// rea decompile_all
// name: FUN_20107fc9
// address: 0x20107fc9
// body: available
// range: 0x20107fc9-0x20108012 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20107fc9(int param_1)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_20113bcc;
  iVar1 = *(int *)(param_1 + 8);
  in_ECX[2] = iVar1;
  if (iVar1 == 0) {
    in_ECX[1] = *(undefined4 *)(param_1 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_1 + 4));
    pvVar3 = operator_new(sVar2 + 1);
    in_ECX[1] = pvVar3;
    if (pvVar3 != (void *)0x0) {
      FUN_20101cf0(pvVar3,*(undefined4 *)(param_1 + 4));
    }
  }
  return;
}

