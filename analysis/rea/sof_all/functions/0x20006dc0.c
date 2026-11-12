// rea decompile_all
// name: FUN_20006dc0
// address: 0x20006dc0
// body: available
// range: 0x20006dc0-0x20006e92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20006dc0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x30) = DAT_2040365c / 2;
  *(int *)(in_ECX + 0x34) = DAT_20403660 / 2;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x38) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x3c) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x40) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x44) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x48) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x4c) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x50) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x54) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(in_ECX + 0x58) = uVar1;
  return;
}

