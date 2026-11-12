// rea decompile_all
// name: FUN_2003a000
// address: 0x2003a000
// body: available
// range: 0x2003a000-0x2003a075 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003a000(undefined4 *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 0x20;
  param_1[0x25] = param_2;
  param_1[0x1c] = &LAB_20039e70;
  param_1[0x29] = DAT_2027c478;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0xc61b3800;
  *param_1 = 0x40a00000;
  param_1[1] = 0x40a00000;
  param_1[2] = 0x40a00000;
  param_1[0x2e] = DAT_2027c478;
  fVar1 = (float)param_3 * 0.001 + DAT_2027c478;
  param_1[0x2a] = fVar1;
  param_1[0x1b] = fVar1 + 2.0;
  return;
}

