// rea decompile_all
// name: FUN_2005c210
// address: 0x2005c210
// body: available
// range: 0x2005c210-0x2005c295 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005c210(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x200) == 0) {
    iVar1 = (param_1 - *(int *)(DAT_20396dd8 + 0x60)) / *(int *)(DAT_20396dd8 + 100);
    if (iVar1 < 1) {
      return;
    }
    iVar2 = __ftol();
    if (iVar2 < iVar1) {
      return;
    }
    iVar1 = iVar1 * 0xd2ac + -0xd2ac + DAT_20396eec;
    if (param_2 == 0) {
      iVar1 = iVar1 + 0x2c4;
    }
    else {
      iVar1 = iVar1 + 0x52b4;
    }
    FUN_2001e7b0(iVar1,DAT_203f6c38,DAT_203f6c40);
  }
  FUN_2001e730(&DAT_203f6c34);
  return;
}

