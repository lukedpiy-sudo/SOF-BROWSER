// rea decompile_all
// name: flrand
// address: 0x2001f300
// body: available
// range: 0x2001f300-0x2001f34e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 flrand(float param_1,float param_2)

{
                    /* 0x1f300  23  flrand */
  DAT_20121200 = DAT_20121200 * 0x343fd + 0x269ec3;
  return ((float10)param_2 - (float10)param_1) * (float10)(DAT_20121200 >> 0x11) *
         (float10)3.0517578e-05 + (float10)param_1;
}

