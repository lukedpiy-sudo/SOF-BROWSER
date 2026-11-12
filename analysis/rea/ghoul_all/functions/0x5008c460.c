// rea decompile_all
// name: FUN_5008c460
// address: 0x5008c460
// body: available
// range: 0x5008c460-0x5008c623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_5008c460(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,undefined4 param_11,
            undefined4 param_12,float param_13,float param_14,float param_15)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int in_stack_00001064;
  int in_stack_0000106c;
  float in_stack_00001070;
  float *in_stack_00001074;
  float in_stack_00001080;
  float in_stack_00001084;
  uint in_stack_00001088;
  uint in_stack_0000108c;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_501074f0();
  FUN_500c2990(&stack0x00000064,in_stack_00001074,in_stack_00001080,0,0,0);
  DAT_5015c790 = 0;
  param_1 = 0;
  if (0 < in_stack_00001064) {
    do {
      fVar1 = *(float *)(&stack0x00000064 + param_1 * 4);
      if ((((fVar1 != in_stack_00001084) && (*(int *)((int)fVar1 + 0x30c) != 0)) &&
          (*(int *)((int)fVar1 + 0x2fc) == 0)) &&
         ((fVar1 != DAT_5015cca0 && (-1 < *(char *)((int)fVar1 + 0x118))))) {
        FUN_500ae8f0((int)fVar1,&param_5);
        param_8 = *in_stack_00001074 - param_5;
        param_9 = in_stack_00001074[1] - param_6;
        param_10 = in_stack_00001074[2] - param_7;
        FUN_500fe130(&param_8);
        bVar2 = FUN_5008b580((int)fVar1,in_stack_0000106c);
        if (CONCAT31(extraout_var,bVar2) != 0) {
          (*DAT_5015cac0)(in_stack_00001074,0,0,&param_5,in_stack_0000106c,0x6000001,&param_11);
          param_2 = param_13 - *in_stack_00001074;
          param_3 = param_14 - in_stack_00001074[1];
          param_4 = param_15 - in_stack_00001074[2];
          lVar5 = __ftol();
          iVar3 = (int)lVar5;
          uVar9 = 0;
          uVar4 = in_stack_0000108c | 1;
          uVar8 = 0;
          iVar6 = iVar3;
          uVar7 = in_stack_00001088;
          if ((char)in_stack_0000108c < '\0') {
            lVar5 = __ftol();
            iVar3 = (int)lVar5;
          }
          FUN_5008bb10(fVar1,in_stack_0000106c,in_stack_00001070,&param_2,&param_13,
                       in_stack_00001074,iVar3,iVar6,uVar4,uVar7,uVar8,uVar9);
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < in_stack_00001064);
  }
  return;
}

