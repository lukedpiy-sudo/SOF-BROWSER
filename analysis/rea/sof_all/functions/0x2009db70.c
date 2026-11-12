// rea decompile_all
// name: FUN_2009db70
// address: 0x2009db70
// body: available
// range: 0x2009db70-0x2009dbe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009db70(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  if (DAT_204064ec == '\0') {
    iVar1 = *(int *)(in_ECX + 0x4c);
    if ((iVar1 != 0) && (*(int *)(in_ECX + 0x50) != iVar1)) {
      *(undefined1 *)(param_1 + iVar1) = 1;
    }
    FUN_200bf4e0(param_1);
  }
  else {
    for (uVar2 = 0;
        (*(int *)(in_ECX + 0x3c) != 0 &&
        (uVar2 < (uint)((*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x14)));
        uVar2 = uVar2 + 1) {
      iVar1 = *(int *)(in_ECX + 0x4c);
      if ((iVar1 != 0) && (*(int *)(in_ECX + 0x50) != iVar1)) {
        *(undefined1 *)(uVar2 + iVar1) = 1;
      }
      FUN_200bf4e0(uVar2);
    }
  }
  return;
}

