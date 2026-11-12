// rea decompile_all
// name: FUN_2000edd0
// address: 0x2000edd0
// body: available
// range: 0x2000edd0-0x2000ee25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000edd0(int param_1,int param_2)

{
  if (2.0 <= *(float *)(DAT_201e7530 + 0x18)) {
    if ((&PTR_s_svc_bad_2011e7a0)[param_1] == (undefined *)0x0) {
      Com_Printf(s__3i_BAD_CMD__i_2011ef7c,param_2,param_1);
      return;
    }
    Com_Printf(s__3i__s_2011ef74,DAT_20367ecc - param_2,(&PTR_s_svc_bad_2011e7a0)[param_1]);
  }
  return;
}

