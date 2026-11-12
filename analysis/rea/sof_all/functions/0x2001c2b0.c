// rea decompile_all
// name: FUN_2001c2b0
// address: 0x2001c2b0
// body: available
// range: 0x2001c2b0-0x2001c32a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_2001c2b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_20246d64;
  for (; -1 < param_1; param_1 = *(int *)(iVar1 + param_1 * 0x3c + 0x34)) {
    iVar2 = FUN_2001c2b0(*(undefined4 *)(iVar1 + 0x30 + param_1 * 0x3c),param_2);
    if (iVar2 != 0) {
      return true;
    }
  }
  iVar1 = *(int *)(DAT_20246ce4 + param_1 * -0x3c + -0x18);
  if (iVar1 == -1) {
    return false;
  }
  return ('\x01' << ((byte)iVar1 & 7) & *(byte *)((iVar1 >> 3) + param_2)) != 0;
}

