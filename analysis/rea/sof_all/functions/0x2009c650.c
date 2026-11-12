// rea decompile_all
// name: FUN_2009c650
// address: 0x2009c650
// body: available
// range: 0x2009c650-0x2009c6a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009c650(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 2;
  }
  FUN_200692e0(param_1,iVar1);
  FUN_200faa48(param_2,s_Materials_201573a0);
  iVar1 = *(int *)(in_ECX + 0x2c);
  if (iVar1 != *(int *)(in_ECX + 0x30)) {
    do {
      FUN_2009be00(param_1,param_2);
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(in_ECX + 0x30));
  }
  return;
}

