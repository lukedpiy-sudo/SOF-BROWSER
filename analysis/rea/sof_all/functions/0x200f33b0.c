// rea decompile_all
// name: FUN_200f33b0
// address: 0x200f33b0
// body: available
// range: 0x200f33b0-0x200f33df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f33b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (*param_1 != 0) {
    FUN_200f3a80(param_1 + 6,s_WHOIS__s_20159c00,param_3);
    FUN_200f0640(param_1,param_3,param_2);
  }
  return;
}

