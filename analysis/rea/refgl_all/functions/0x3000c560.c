// rea decompile_all
// name: FUN_3000c560
// address: 0x3000c560
// body: available
// range: 0x3000c560-0x3000c944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3000c560(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fStack_50;
  float fStack_4c;
  undefined1 *puStack_48;
  float local_18 [2];
  float local_10;
  float local_c [2];
  float local_4;
  
  if (((uint)param_1[0xe] & 0x10) == 0) {
    pfVar4 = (float *)&DAT_3008fd94;
    pfVar3 = (float *)&DAT_3008ff30;
  }
  else {
    FUN_3001cbf0(local_18,param_1 + 8);
    puStack_48 = (undefined1 *)0x3000c58e;
    FUN_3001d2d0(param_1 + 8,local_18,local_c);
    pfVar4 = local_c;
    pfVar3 = local_18;
  }
  if (param_1[6] == 1.0) {
    (*DAT_300a42f4)();
    local_4 = -param_1[4];
    (*DAT_300a4520)();
    puStack_48 = (undefined1 *)0x3000c62f;
    (*DAT_300a42f4)();
    puStack_48 = &stack0xffffffc8;
    local_10 = -param_1[4];
    fStack_4c = 4.684828e-10;
    (*DAT_300a4520)();
    fStack_4c = 1.0;
    fStack_50 = 1.0;
    (*DAT_300a42f4)();
    (*DAT_300a4520)(&stack0xffffffbc);
    (*DAT_300a42f4)(0x3f800000,0);
    fVar2 = -param_1[3];
    fVar1 = param_1[4];
    fStack_50 = fVar2 * *pfVar4 + *param_1;
    fStack_4c = fVar2 * pfVar4[1] + param_1[1];
    puStack_48 = (undefined1 *)(fVar2 * pfVar4[2] + param_1[2]);
  }
  else {
    (*DAT_300a42f4)();
    local_4 = -(param_1[6] * param_1[4]) - -(param_1[7] * param_1[3]);
    (*DAT_300a4520)();
    puStack_48 = (undefined1 *)0x3000c7ca;
    (*DAT_300a42f4)();
    puStack_48 = &stack0xffffffc8;
    local_10 = -(param_1[6] * param_1[4]) - param_1[7] * param_1[3];
    fStack_4c = 4.6850684e-10;
    (*DAT_300a4520)();
    fStack_4c = 1.0;
    fStack_50 = 1.0;
    (*DAT_300a42f4)();
    (*DAT_300a4520)(&stack0xffffffbc);
    (*DAT_300a42f4)(0x3f800000,0);
    fVar1 = param_1[7] * param_1[4] - param_1[3] * param_1[6];
    fStack_50 = fVar1 * *pfVar4 + *param_1;
    fStack_4c = fVar1 * pfVar4[1] + param_1[1];
    puStack_48 = (undefined1 *)(fVar1 * pfVar4[2] + param_1[2]);
    fVar1 = param_1[6] * param_1[4] - -(param_1[7] * param_1[3]);
  }
  fStack_50 = fVar1 * *pfVar3 + fStack_50;
  fStack_4c = fVar1 * pfVar3[1] + fStack_4c;
  puStack_48 = (undefined1 *)(fVar1 * pfVar3[2] + (float)puStack_48);
  (*DAT_300a4520)(&fStack_50);
  return;
}

