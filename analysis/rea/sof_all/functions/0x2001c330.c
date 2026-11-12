// rea decompile_all
// name: FUN_2001c330
// address: 0x2001c330
// body: available
// range: 0x2001c330-0x2001c36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2001c330(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    piVar2 = (int *)(DAT_20248d90 + *(int *)(param_1 + 0x30) * 0x6c + 0x34);
    do {
      if ((*(uint *)(*piVar2 + 0x20) & 0x800) != 0) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x1b;
    } while ((int)uVar1 < *(int *)(param_1 + 0x34));
  }
  return uVar1 & 0xffffff00;
}

