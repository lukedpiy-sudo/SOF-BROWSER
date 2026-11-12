// rea decompile_all
// name: FUN_2003a580
// address: 0x2003a580
// body: available
// range: 0x2003a580-0x2003a64b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003a580(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5,undefined4 param_6,undefined4 param_7)

{
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  else {
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
    *(undefined4 *)(param_1 + 0x94) = *param_2;
    *(undefined4 *)(param_1 + 0x98) = param_2[1];
    *(undefined4 *)(param_1 + 0x9c) = param_2[2];
  }
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  else {
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 3;
    *(undefined4 *)(param_1 + 0xa0) = *param_3;
    *(undefined4 *)(param_1 + 0xa4) = param_3[1];
    *(undefined4 *)(param_1 + 0xa8) = param_3[2];
  }
  if (param_4 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = *param_4;
    *(undefined4 *)(param_1 + 0xb4) = param_4[1];
    *(undefined4 *)(param_1 + 0xb8) = param_4[2];
  }
  *(undefined4 *)(param_1 + 200) = param_6;
  *(undefined4 *)(param_1 + 0xac) = param_7;
  *(char *)(param_1 + 0xd4) = (char)param_5;
  if (param_5 != 0) {
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 3;
  }
  return;
}

