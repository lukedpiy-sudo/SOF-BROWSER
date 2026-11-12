// rea decompile_all
// name: FUN_20024b60
// address: 0x20024b60
// body: available
// range: 0x20024b60-0x20024ba5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20024b60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_200fade8(*(int *)(in_ECX + 4));
  FUN_200faf40(*(undefined4 *)(in_ECX + 4),0,2);
  uVar2 = FUN_200fade8(*(undefined4 *)(in_ECX + 4));
  FUN_200faf40(*(undefined4 *)(in_ECX + 4),uVar1,0);
  return uVar2;
}

