// rea decompile_all
// name: FUN_20024df0
// address: 0x20024df0
// body: available
// range: 0x20024df0-0x20024e46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_20024df0(int param_1)

{
  undefined4 *puVar1;
  
  _DAT_2026ab14 = 1;
  FS_FOpenFile(param_1,&param_1,0);
  _DAT_2026ab14 = 0;
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = &DAT_2026a9fc + param_1;
  if ((undefined4 *)(&DAT_2026a9fc)[param_1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(&DAT_2026a9fc)[param_1])(1);
    *puVar1 = 0;
  }
  return 1;
}

