// rea decompile_all
// name: FUN_500aec30
// address: 0x500aec30
// body: available
// range: 0x500aec30-0x500aefbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_500aec30(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,float param_7,float param_8,float param_9,float param_10,
            undefined4 param_11,float param_12)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float unaff_retaddr;
  int in_stack_00001064;
  float *in_stack_0000106c;
  int in_stack_00001070;
  float in_stack_00001074;
  float in_stack_00001078;
  float fVar5;
  
  FUN_501074f0();
  uVar2 = FUN_500c26a0(0,0x1b4,s_player_50142e48,(void *)0x0);
  if (uVar2 != 0) {
    param_1 = (float)in_stack_00001070;
    do {
      param_2 = *in_stack_0000106c - *(float *)(uVar2 + 4);
      param_3 = in_stack_0000106c[1] - *(float *)(uVar2 + 8);
      param_4 = in_stack_0000106c[2] - *(float *)(uVar2 + 0xc);
      fVar4 = FUN_500fe130(&param_2);
      unaff_retaddr = (float)fVar4;
      if (fVar4 <= (float10)param_1) {
        param_5 = *(undefined4 *)(uVar2 + 4);
        param_6 = *(undefined4 *)(uVar2 + 8);
        param_7 = (float)*(int *)(uVar2 + 0x304) + *(float *)(uVar2 + 0xc);
        (*DAT_5015cac0)(in_stack_0000106c,0,0,&param_5,uVar2,0x6000081,&param_11);
        if (param_12 < 0.99 == (param_12 == 0.99)) {
          FUN_500fdd70((float *)(*(int *)(uVar2 + 0x74) + 0x1c),&param_8,(float *)0x0,(float *)0x0);
          FUN_500fe050(&param_2);
          fVar5 = param_8 * param_2 + param_9 * param_3 + param_10 * param_4;
          if (0.0 < fVar5) {
            iVar3 = *(int *)(uVar2 + 0x74);
            fVar5 = (((float)in_stack_00001070 * 0.03) / unaff_retaddr) * fVar5;
            if (*(int *)(iVar3 + 0x558) == 0) {
              *(float *)(iVar3 + 0x4e4) = fVar5 + *(float *)(iVar3 + 0x4e4);
            }
            else if (0.4 <= fVar5) {
              *(float *)(iVar3 + 0x4e4) = fVar5 + fVar5 + *(float *)(iVar3 + 0x4e4);
            }
            else {
              *(float *)(iVar3 + 0x4e4) = fVar5 + 0.4 + *(float *)(iVar3 + 0x4e4);
            }
          }
          iVar3 = *(int *)(uVar2 + 0x74);
          if (*(int *)(iVar3 + 0x558) != 0) {
            in_stack_00001078 = in_stack_00001078 * 0.5;
            in_stack_00001074 = (1.0 - in_stack_00001074) * 0.5 + in_stack_00001074;
          }
          if (in_stack_00001074 < *(float *)(iVar3 + 0x4e4)) {
            *(float *)(iVar3 + 0x4e4) = in_stack_00001074;
          }
          iVar3 = *(int *)(uVar2 + 0x74);
          if ((*(float *)(iVar3 + 0x4e8) < 0.0 != (*(float *)(iVar3 + 0x4e8) == 0.0)) ||
             (in_stack_00001078 < *(float *)(iVar3 + 0x4e8))) {
            *(float *)(iVar3 + 0x4e8) = in_stack_00001078;
          }
        }
      }
      uVar2 = FUN_500c26a0(uVar2,0x1b4,s_player_50142e48,(void *)0x0);
    } while (uVar2 != 0);
  }
  param_1 = (float)in_stack_00001070;
  FUN_500c2990(&stack0x00000064,in_stack_0000106c,param_1,0,0,0);
  iVar3 = 0;
  if (0 < in_stack_00001064) {
    do {
      iVar1 = *(int *)(&stack0x00000064 + iVar3 * 4);
      if (*(int *)(iVar1 + 0x450) != 0) {
        param_5 = *(undefined4 *)(iVar1 + 4);
        param_6 = *(undefined4 *)(iVar1 + 8);
        param_7 = (float)*(int *)(iVar1 + 0x304) + *(float *)(iVar1 + 0xc);
        (*DAT_5015cac0)(in_stack_0000106c,0,0,&param_5,iVar1,0x6000081,&param_11);
        if (param_12 < 0.99 == (param_12 == 0.99)) {
          (**(code **)(**(int **)(iVar1 + 0x450) + 0x74))(&param_8);
          param_1 = *in_stack_0000106c - *(float *)(iVar1 + 4);
          param_2 = in_stack_0000106c[1] - *(float *)(iVar1 + 8);
          param_3 = in_stack_0000106c[2] - *(float *)(iVar1 + 0xc);
          fVar4 = (float10)FUN_500fe050(&param_1);
          fVar4 = ((float10)param_7 * (float10)param_1 +
                   (float10)param_8 * (float10)param_2 + (float10)param_9 * (float10)param_3 +
                  (float10)1.25) * (((float10)unaff_retaddr * (float10)0.5) / fVar4);
          fVar5 = (float)fVar4;
          if ((float10)25.0 < fVar4) {
            fVar5 = 25.0;
          }
          (**(code **)(**(int **)(iVar1 + 0x450) + 0x6c))(2,fVar5,2,fVar5);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_stack_00001064);
  }
  return;
}

