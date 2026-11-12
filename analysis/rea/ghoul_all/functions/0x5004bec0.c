// rea decompile_all
// name: FUN_5004bec0
// address: 0x5004bec0
// body: available
// range: 0x5004bec0-0x5004c089 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_5004bec0(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int *extraout_ECX;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int in_stack_00001010;
  float in_stack_00001018;
  float *in_stack_0000101c;
  float in_stack_00001020;
  float *in_stack_00001024;
  
  FUN_501074f0();
  extraout_ECX[0xe] = (int)in_stack_00001018;
  if ((((*(char *)((int)&DAT_5015cdb8 + *extraout_ECX) == '\0') || (in_stack_00001020 != 0.0)) ||
      (3 < DAT_5015d94c)) && (extraout_ECX[0x11] == 0)) {
    pfVar1 = (float *)(extraout_ECX + 1);
    param_1 = *pfVar1 - *(float *)(DAT_5015d1ec + 4);
    param_2 = (float)extraout_ECX[2] - *(float *)(DAT_5015d1ec + 8);
    param_3 = (float)extraout_ECX[3] - *(float *)(DAT_5015d1ec + 0xc);
    fVar6 = (float10)FUN_500fe050(&param_1);
    iVar2 = (*DAT_5015cad0)(pfVar1,DAT_5015d1ec + 4);
    if ((((iVar2 == 0) ||
         ((400.0 < (float)fVar6 &&
          (param_1 * *in_stack_00001024 +
           param_2 * in_stack_00001024[1] + param_3 * in_stack_00001024[2] < 0.5)))) &&
        ((float)fVar6 < 600.0)) &&
       (FUN_500c2990(&stack0x00000010,pfVar1,100.0,1,1,0), in_stack_00001010 == 0)) {
      *in_stack_0000101c = *pfVar1;
      in_stack_0000101c[1] = (float)extraout_ECX[2];
      in_stack_0000101c[2] = (float)extraout_ECX[3];
      return 1;
    }
  }
  iVar3 = (*DAT_5015cb24)(0,0x50d);
  iVar2 = extraout_ECX[4];
  iVar4 = 0;
  iVar5 = DAT_50159124;
  if (0 < iVar2) {
    do {
      if ((*(float *)(*(int *)(extraout_ECX[5] + (iVar3 % iVar2) * 0xc) * 0x50 + 0x38 + iVar5) !=
           in_stack_00001018) &&
         (iVar2 = FUN_5004bec0(in_stack_00001018,(float)in_stack_0000101c,in_stack_00001020),
         iVar5 = DAT_50159124, iVar2 != 0)) {
        return 1;
      }
      iVar2 = extraout_ECX[4];
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}

