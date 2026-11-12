// rea decompile_all
// name: FUN_5008c220
// address: 0x5008c220
// body: available
// range: 0x5008c220-0x5008c452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_5008c220(float param_1,float param_2,float param_3,int param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11,float param_12,
            float param_13,undefined4 param_14,undefined4 param_15,float param_16,float param_17,
            float param_18)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  longlong lVar6;
  int in_stack_00001070;
  int in_stack_00001078;
  float in_stack_0000107c;
  float in_stack_00001084;
  float in_stack_00001088;
  uint in_stack_0000108c;
  uint in_stack_00001090;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_501074f0();
  FUN_500ae8f0(in_stack_00001078,&param_1);
  FUN_500c2990(&stack0x00000070,&param_1,in_stack_00001088,0,0,0);
  DAT_5015c790 = 0;
  param_4 = 0;
  if (0 < in_stack_00001070) {
    do {
      fVar1 = *(float *)(&stack0x00000070 + param_4 * 4);
      if ((((fVar1 != in_stack_00001084) && (*(int *)((int)fVar1 + 0x30c) != 0)) &&
          (*(int *)((int)fVar1 + 0x2fc) == 0)) &&
         ((fVar1 != DAT_5015cca0 && (-1 < *(char *)((int)fVar1 + 0x118))))) {
        FUN_500ae8f0((int)fVar1,&param_5);
        param_11 = param_1 - param_5;
        param_12 = param_2 - param_6;
        param_13 = param_3 - param_7;
        fVar5 = FUN_500fe130(&param_11);
        if (((fVar5 <= (float10)in_stack_00001088) &&
            ((in_stack_0000108c != 0x1b || (*(float *)((int)fVar1 + 0x36c) <= DAT_5015ccdc)))) &&
           (bVar2 = FUN_5008b580((int)fVar1,in_stack_00001078), CONCAT31(extraout_var,bVar2) != 0))
        {
          (*DAT_5015cac0)(&param_1,0,0,&param_5,in_stack_00001078,0x6000001,&param_14);
          param_8 = param_16 - param_1;
          param_9 = param_17 - param_2;
          param_10 = param_18 - param_3;
          lVar6 = __ftol();
          iVar3 = (int)lVar6;
          uVar10 = 0;
          uVar9 = 0;
          iVar7 = iVar3;
          uVar8 = in_stack_0000108c;
          if ((char)in_stack_00001090 < '\0') {
            uVar4 = in_stack_00001090 | 1;
            lVar6 = __ftol();
            iVar3 = (int)lVar6;
          }
          else {
            uVar4 = in_stack_00001090 | 1;
          }
          FUN_5008bb10(fVar1,in_stack_00001078,in_stack_0000107c,&param_8,&param_16,&param_1,iVar3,
                       iVar7,uVar4,uVar8,uVar9,uVar10);
        }
      }
      param_4 = param_4 + 1;
    } while (param_4 < in_stack_00001070);
  }
  return;
}

