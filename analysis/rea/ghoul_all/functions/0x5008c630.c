// rea decompile_all
// name: FUN_5008c630
// address: 0x5008c630
// body: available
// range: 0x5008c630-0x5008c822 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_5008c630(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            int param_7,float param_8,float param_9,float param_10,float param_11,float param_12,
            float param_13)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  float10 fVar3;
  longlong lVar4;
  int in_stack_00001038;
  int in_stack_00001040;
  float in_stack_00001044;
  float in_stack_0000104c;
  float in_stack_00001050;
  uint in_stack_00001054;
  float *in_stack_00001058;
  float in_stack_0000105c;
  
  FUN_501074f0();
  FUN_500ae8f0(in_stack_00001040,&param_4);
  FUN_500c2990(&stack0x00000038,&param_4,in_stack_00001050,0,0,0);
  param_7 = 0;
  if (0 < in_stack_00001038) {
    do {
      fVar1 = *(float *)(&stack0x00000038 + param_7 * 4);
      if (((fVar1 != in_stack_0000104c) && (*(int *)((int)fVar1 + 0x30c) != 0)) &&
         (fVar1 != DAT_5015cca0)) {
        FUN_500ae8f0((int)fVar1,&param_11);
        param_8 = param_11 - param_4;
        param_9 = param_12 - param_5;
        param_10 = param_13 - param_6;
        fVar3 = (float10)FUN_500fe050(&param_8);
        if (fVar3 <= (float10)in_stack_00001050) {
          param_1 = *in_stack_00001058;
          param_2 = in_stack_00001058[1];
          param_3 = in_stack_00001058[2];
          FUN_500fe050(&param_1);
          if ((in_stack_0000105c <= param_8 * param_1 + param_2 * param_9 + param_3 * param_10) &&
             (bVar2 = FUN_5008b580((int)fVar1,in_stack_00001040), CONCAT31(extraout_var,bVar2) != 0)
             ) {
            param_1 = *(float *)((int)fVar1 + 4) - param_4;
            param_2 = *(float *)((int)fVar1 + 8) - param_5;
            param_3 = *(float *)((int)fVar1 + 0xc) - param_6;
            lVar4 = __ftol();
            FUN_5008bb10(fVar1,in_stack_00001040,in_stack_00001044,&param_1,&param_4,&param_4,
                         (int)lVar4,(int)lVar4,1,in_stack_00001054,0,0);
          }
        }
      }
      param_7 = param_7 + 1;
    } while (param_7 < in_stack_00001038);
  }
  return;
}

