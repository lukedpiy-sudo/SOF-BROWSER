// rea decompile_all
// name: FUN_3000c950
// address: 0x3000c950
// body: available
// range: 0x3000c950-0x3000cad4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3000c950(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_5c;
  float *pfStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 *puStack_4c;
  float fStack_48;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = param_1[3] - *param_1;
  local_14 = param_1[4] - param_1[1];
  local_10 = param_1[5] - param_1[2];
  local_c = *param_1 - DAT_3008fecc;
  local_8 = param_1[1] - DAT_3008fed0;
  local_4 = param_1[2] - DAT_3008fed4;
  FUN_3001d2d0(&local_c,&local_18,&local_24);
  fStack_48 = 4.6852794e-10;
  FUN_3001d280(&local_24);
  fVar1 = param_1[6];
  fVar6 = *param_1;
  fVar5 = param_1[1];
  fVar2 = param_1[2];
  (*DAT_300a42f4)();
  (*DAT_300a4520)();
  fVar3 = -param_1[6];
  fStack_48 = 0.0;
  fVar7 = (local_24 * fVar1 + fVar6) * fVar3 + *param_1;
  fVar5 = (local_20 * fVar1 + fVar5) * fVar3 + param_1[1];
  fVar6 = param_1[2];
  puStack_4c = (undefined1 *)0x3000ca38;
  (*DAT_300a42f4)();
  puStack_4c = &stack0xffffffbc;
  fStack_50 = 4.685356e-10;
  (*DAT_300a4520)();
  fVar4 = -param_1[6];
  fStack_48 = fVar7 * fVar4 + param_1[3];
  fVar5 = fVar5 * fVar4 + param_1[4];
  fStack_50 = 1.0;
  fStack_54 = 1.0;
  fVar6 = ((local_1c * fVar1 + fVar2) * fVar3 + fVar6) * fVar4 + param_1[5];
  pfStack_58 = (float *)0x3000ca81;
  (*DAT_300a42f4)();
  pfStack_58 = &fStack_50;
  uStack_5c = 0x3000ca8c;
  (*DAT_300a4520)();
  fVar1 = param_1[6];
  uStack_5c = 0;
  fStack_54 = fStack_48 * fVar1 + param_1[3];
  fStack_50 = fVar5 * fVar1 + param_1[4];
  puStack_4c = (undefined1 *)(fVar6 * fVar1 + param_1[5]);
  (*DAT_300a42f4)(0x3f800000);
  (*DAT_300a4520)(&uStack_5c);
  return;
}

