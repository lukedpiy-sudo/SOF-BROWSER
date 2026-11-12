// rea decompile_all
// name: FUN_5003b3f0
// address: 0x5003b3f0
// body: available
// range: 0x5003b3f0-0x5003b549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5003b3f0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  int in_stack_0000100c;
  int in_stack_00001014;
  float *in_stack_00001018;
  float in_stack_0000101c;
  
  FUN_501074f0();
  FUN_500c2990(&stack0x0000000c,(float *)(in_stack_00001014 + 4),in_stack_0000101c,1,1,0);
  iVar5 = 0;
  if (0 < in_stack_0000100c) {
    do {
      iVar1 = *(int *)(&stack0x0000000c + iVar5 * 4);
      if (iVar1 != in_stack_00001014) {
        fVar2 = *(float *)(iVar1 + 4) - *(float *)(in_stack_00001014 + 4);
        fVar3 = *(float *)(iVar1 + 8) - *(float *)(in_stack_00001014 + 8);
        fVar4 = *(float *)(iVar1 + 0xc) - *(float *)(in_stack_00001014 + 0xc);
        fVar6 = (float10)FUN_500fe050((float *)&stack0x00000000);
        if (0.0 <= fVar2 * *in_stack_00001018 +
                   fVar3 * in_stack_00001018[1] + fVar4 * in_stack_00001018[2]) {
          fVar2 = -fVar2;
          fVar6 = (fVar6 / (float10)in_stack_0000101c) * (fVar6 / (float10)in_stack_0000101c);
          if (fVar3 * *in_stack_00001018 +
              fVar2 * in_stack_00001018[1] + fVar4 * in_stack_00001018[2] <= 0.0) {
            fVar7 = ((float10)1.0 - fVar6) * (float10)-1.0;
          }
          else {
            fVar7 = (float10)1.0 - fVar6;
          }
          *in_stack_00001018 = (float)(fVar7 * (float10)fVar3 + fVar6 * (float10)*in_stack_00001018)
          ;
          in_stack_00001018[1] =
               (float)(fVar7 * (float10)fVar2 + fVar6 * (float10)in_stack_00001018[1]);
          in_stack_00001018[2] =
               (float)((float10)fVar4 * fVar7 + fVar6 * (float10)in_stack_00001018[2]);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_stack_0000100c);
  }
  in_stack_00001018[2] = 0.0;
  FUN_500fe050(in_stack_00001018);
  return;
}

