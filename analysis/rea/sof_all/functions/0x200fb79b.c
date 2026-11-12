// rea decompile_all
// name: FUN_200fb79b
// address: 0x200fb79b
// body: available
// range: 0x200fb79b-0x200fb7ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200fb79b(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if ((*(byte *)(param_3 + 3) & 0x83) != 0) {
    FUN_200fa9ae(param_3);
  }
  param_3[2] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[1] = 0;
  FUN_20100286(param_1,param_2,0x40,param_3);
  return;
}

