// rea decompile_all
// name: FUN_500b1950
// address: 0x500b1950
// body: available
// range: 0x500b1950-0x500b1acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500b1950(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  int in_stack_0000101c;
  int in_stack_00001024;
  float in_stack_00001028;
  float in_stack_0000102c;
  
  FUN_501074f0();
  FUN_500ae8f0(in_stack_00001024,&param_4);
  FUN_500c2990(&stack0x0000001c,&param_4,in_stack_0000102c,0,0,0);
  iVar2 = 0;
  if (0 < in_stack_0000101c) {
    do {
      iVar1 = *(int *)(&stack0x0000001c + iVar2 * 4);
      if (((*(int *)(iVar1 + 0x450) != 0) && (0 < *(int *)(iVar1 + 0x2ec))) &&
         (iVar1 != DAT_5015cca0)) {
        param_1 = param_4 - ((*(float *)(iVar1 + 0x128) + *(float *)(iVar1 + 0x11c)) * 0.5 +
                            *(float *)(iVar1 + 4));
        param_2 = param_5 - ((*(float *)(iVar1 + 0x120) + *(float *)(iVar1 + 300)) * 0.5 +
                            *(float *)(iVar1 + 8));
        param_3 = param_6 - ((*(float *)(iVar1 + 0x124) + *(float *)(iVar1 + 0x130)) * 0.5 +
                            *(float *)(iVar1 + 0xc));
        fVar3 = FUN_500fe130(&param_1);
        fVar3 = ((float10)1.0 - fVar3 / (float10)in_stack_0000102c) * (float10)in_stack_00001028;
        fVar4 = (float)fVar3;
        if ((float10)0.0 < fVar3) {
          if (100.0 < fVar4) {
            fVar4 = 100.0;
          }
          (**(code **)(**(int **)(iVar1 + 0x450) + 0x6c))(4,fVar4,2,fVar4);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_stack_0000101c);
  }
  return;
}

