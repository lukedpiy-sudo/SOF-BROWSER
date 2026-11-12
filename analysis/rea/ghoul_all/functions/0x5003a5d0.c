// rea decompile_all
// name: FUN_5003a5d0
// address: 0x5003a5d0
// body: available
// range: 0x5003a5d0-0x5003a763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __cdecl
FUN_5003a5d0(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,undefined4 param_8,undefined4 param_9,float param_10)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int in_stack_0000102c;
  float *in_stack_00001034;
  float *in_stack_00001038;
  int in_stack_00001040;
  
  FUN_501074f0();
  param_2 = *in_stack_00001038 * 50.0 + *in_stack_00001034;
  param_3 = in_stack_00001038[1] * 50.0 + in_stack_00001034[1];
  param_4 = in_stack_00001038[2] * 50.0 + in_stack_00001034[2];
  FUN_500c2990(&stack0x0000002c,&param_2,100.0,1,0,0);
  fVar4 = 1.0;
  param_2 = *in_stack_00001038 * 150.0 + *in_stack_00001034;
  param_3 = in_stack_00001038[1] * 150.0 + in_stack_00001034[1];
  iVar3 = 0;
  param_4 = in_stack_00001038[2] * 150.0 + in_stack_00001034[2];
  if (0 < in_stack_0000102c) {
    do {
      if ((*(int *)(&stack0x0000002c + iVar3 * 4) != in_stack_00001040) &&
         (iVar2 = FUN_500c4530(in_stack_00001034,&param_2,
                               (float *)(*(int *)(&stack0x0000002c + iVar3 * 4) + 4),30.0),
         iVar2 != 0)) {
        iVar2 = *(int *)(&stack0x0000002c + iVar3 * 4);
        param_5 = *(float *)(iVar2 + 4) - *in_stack_00001034;
        param_6 = *(float *)(iVar2 + 8) - in_stack_00001034[1];
        param_7 = *(float *)(iVar2 + 0xc) - in_stack_00001034[2];
        fVar1 = (param_5 * param_5 + param_6 * param_6 + param_7 * param_7) * 4.4444445e-05;
        param_10 = param_7;
        FUN_500fe050(&param_5);
        if (*(int **)(*(int *)(&stack0x0000002c + iVar3 * 4) + 0x450) != (int *)0x0) {
          (**(code **)(**(int **)(*(int *)(&stack0x0000002c + iVar3 * 4) + 0x450) + 200))(&param_5);
        }
        if ((fVar1 < fVar4) && (0.005 < fVar1)) {
          fVar4 = fVar1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_stack_0000102c);
  }
  return (float10)fVar4;
}

