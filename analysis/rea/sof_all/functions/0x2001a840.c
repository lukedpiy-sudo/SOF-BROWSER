// rea decompile_all
// name: FUN_2001a840
// address: 0x2001a840
// body: available
// range: 0x2001a840-0x2001a8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2001a840(float *param_1,float *param_2)

{
  *(float *)(DAT_20248de8 + 0xc) = *param_2;
  *(float *)(DAT_20248de8 + 0x20) = -*param_2;
  *(float *)(DAT_20248de8 + 0x34) = *param_1;
  *(float *)(DAT_20248de8 + 0x48) = -*param_1;
  *(float *)(DAT_20248de8 + 0x5c) = param_2[1];
  *(float *)(DAT_20248de8 + 0x70) = -param_2[1];
  *(float *)(DAT_20248de8 + 0x84) = param_1[1];
  *(float *)(DAT_20248de8 + 0x98) = -param_1[1];
  *(float *)(DAT_20248de8 + 0xac) = param_2[2];
  *(float *)(DAT_20248de8 + 0xc0) = -param_2[2];
  *(float *)(DAT_20248de8 + 0xd4) = param_1[2];
  *(float *)(DAT_20248de8 + 0xe8) = -param_1[2];
  return DAT_20248df0;
}

