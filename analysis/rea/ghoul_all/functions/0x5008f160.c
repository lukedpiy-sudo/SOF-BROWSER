// rea decompile_all
// name: FUN_5008f160
// address: 0x5008f160
// body: available
// range: 0x5008f160-0x5008f221 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008f160(int *param_1)

{
  uint *puVar1;
  
  param_1[0x67] = 0;
  if (param_1[0x56] != 1) {
    param_1[0x56] = 0;
  }
  param_1[0x57] = 0x2030003;
  param_1[0x47] = -0x3f600000;
  param_1[0x48] = -0x3f600000;
  param_1[0x49] = -0x3f200000;
  param_1[0x4a] = 0x40a00000;
  param_1[0x4b] = 0x40a00000;
  param_1[0x4c] = 0x41400000;
  param_1[8] = 0;
  FUN_500b2c20((int)param_1);
  (*DAT_5015cb28)(param_1);
  (*DAT_5015c9f8)(param_1[0x7a]);
  param_1[0xb1] = (int)&LAB_5008f0e0;
  if ((uint *)param_1[0x7a] != (uint *)0x0) {
    puVar1 = FUN_50107030((uint *)param_1[0x7a],&DAT_5014746c);
    if ((puVar1 != (uint *)0x0) && (DAT_5015c514 != '\0')) {
      FUN_500c3880(param_1);
    }
  }
  return;
}

