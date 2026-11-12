// rea decompile_all
// name: FUN_500aeb50
// address: 0x500aeb50
// body: available
// range: 0x500aeb50-0x500aec27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500aeb50(undefined4 param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int in_stack_00001014;
  float *in_stack_0000101c;
  int in_stack_00001020;
  int in_stack_00001024;
  undefined4 in_stack_00001028;
  
  FUN_501074f0();
  FUN_500c2990(&stack0x00000014,in_stack_0000101c,(float)in_stack_00001024,0,0,0);
  iVar3 = 0;
  if (0 < in_stack_00001014) {
    do {
      iVar1 = *(int *)(&stack0x00000014 + iVar3 * 4);
      if (*(int *)(iVar1 + 0x74) != 0) {
        param_2 = *(float *)(iVar1 + 4) - *in_stack_0000101c;
        param_3 = *(float *)(iVar1 + 8) - in_stack_0000101c[1];
        param_4 = *(float *)(iVar1 + 0xc) - in_stack_0000101c[2];
        fVar4 = FUN_500fe130(&param_2);
        iVar2 = 4;
        do {
          if ((float)*(int *)(iVar2 * 4 + 0x5014cdd4) <
              (float)(((float10)1.0 - fVar4 / (float10)in_stack_00001024) *
                     (float10)in_stack_00001020)) break;
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
        FUN_50083b60(iVar1,iVar2 + 0x10,in_stack_00001028);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_stack_00001014);
  }
  return;
}

