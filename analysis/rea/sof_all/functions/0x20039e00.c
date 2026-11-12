// rea decompile_all
// name: FUN_20039e00
// address: 0x20039e00
// body: available
// range: 0x20039e00-0x20039e6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20039e00(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 float param_9)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_9);
  *(undefined1 *)(param_1 + 0xb) = param_5;
  *(undefined1 *)((int)param_1 + 0x2e) = param_7;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfffb | 2;
  param_1[4] = param_4;
  *(undefined1 *)((int)param_1 + 0x2d) = param_6;
  param_1[5] = param_9;
  *(undefined1 *)((int)param_1 + 0x2f) = param_8;
  param_1[3] = param_3;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[6] = (float)fVar1;
  fVar1 = (float10)fsin((float10)param_9);
  param_1[7] = (float)fVar1;
  return;
}

