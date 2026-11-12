// rea decompile_all
// name: FUN_2001aae0
// address: 0x2001aae0
// body: available
// range: 0x2001aae0-0x2001ab42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_2001aae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  DAT_20244cb8 = param_3;
  DAT_20248d84 = param_4;
  DAT_20244cc8 = 0;
  DAT_20244cc4 = param_1;
  DAT_20244cb4 = param_2;
  DAT_20246cfc = 0xffffffff;
  FUN_2001aa00(*(undefined4 *)(DAT_20246d00 + 0x28));
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = DAT_20246cfc;
  }
  return DAT_20244cc8;
}

