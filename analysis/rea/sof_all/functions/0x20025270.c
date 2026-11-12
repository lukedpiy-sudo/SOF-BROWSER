// rea decompile_all
// name: FUN_20025270
// address: 0x20025270
// body: available
// range: 0x20025270-0x200252c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20025270(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_200faa9a(param_1,param_2);
  if (iVar1 != 0) {
    puVar2 = operator_new(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = iVar1;
      *puVar2 = &PTR_FUN_201118a4;
    }
    iVar1 = 0;
    do {
      if ((&DAT_2026aa00)[iVar1] == 0) {
        (&DAT_2026aa00)[iVar1] = puVar2;
        return iVar1 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
  }
  return 0;
}

