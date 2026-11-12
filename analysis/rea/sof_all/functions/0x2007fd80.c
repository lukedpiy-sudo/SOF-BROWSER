// rea decompile_all
// name: FUN_2007fd80
// address: 0x2007fd80
// body: available
// range: 0x2007fd80-0x200802ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007fd80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int *piVar6;
  float10 fVar7;
  undefined1 local_381;
  float *local_380;
  undefined1 local_379;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  float local_36c;
  undefined4 local_368;
  float local_364;
  undefined1 local_360 [12];
  undefined1 local_354 [4];
  float *local_350;
  undefined4 local_33c;
  undefined1 local_338 [12];
  undefined1 local_32c [4];
  float local_328 [2];
  undefined4 local_320;
  undefined1 local_310 [20];
  float local_2fc [4];
  float local_2ec;
  float local_2dc;
  undefined4 local_2bc;
  undefined1 local_2b8 [64];
  undefined4 local_278;
  int local_274;
  float local_270;
  float local_26c;
  undefined1 local_260 [8];
  undefined1 local_258 [12];
  undefined1 local_24c [64];
  undefined4 local_20c;
  undefined1 local_208 [64];
  undefined4 local_1c8;
  int local_1c4;
  float local_1c0;
  undefined1 local_1bc [64];
  undefined4 local_17c;
  undefined1 local_178 [64];
  undefined4 local_138;
  int local_134;
  float local_130;
  undefined1 local_12c [64];
  undefined4 local_ec;
  undefined1 local_e8 [64];
  undefined4 local_a8;
  int local_a4;
  float local_a0;
  undefined1 local_9c [64];
  undefined4 local_5c;
  undefined4 local_18;
  int local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c18b;
  local_c = ExceptionList;
  if ((*(char *)(in_ECX + 0x96) != '\0') && (*(short *)(in_ECX + 0xae) != 0)) {
    ExceptionList = &local_c;
    fVar7 = (float10)FUN_2007d090(param_1,&local_381,&local_36c);
    local_380 = (float *)(float)fVar7;
    iVar3 = FUN_200884a0(CONCAT22(extraout_var_00,*(undefined2 *)(in_ECX + 0xae)),&local_368);
    if (iVar3 != 0) {
      FUN_2007cfa0(local_310,local_380,local_368);
      local_2bc = 0;
      local_278 = 0;
      local_ec = 0;
      local_a8 = 0;
      if ((*(short *)(in_ECX + 0x94) == 0) ||
         (cVar1 = FUN_20088d00(CONCAT22((short)((uint)local_12c >> 0x10),
                                        *(undefined2 *)(in_ECX + 0xae)),
                               CONCAT22(extraout_var,*(short *)(in_ECX + 0x94)),local_310,local_12c)
         , cVar1 == '\0')) {
        FUN_200a1100(in_ECX + 4,param_2);
        FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
        local_274 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
        local_270 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
      }
      else {
        local_20c = 0;
        local_1c8 = 0;
        FUN_200a1100(in_ECX + 4,param_2);
        FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
        local_1c4 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
        local_1c0 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
        FUN_200a1100(local_e8,local_24c);
        FUN_200a1100(local_208,local_12c);
        local_274 = local_a4 * local_1c4;
        local_270 = local_1c0 / local_a0;
      }
      if (*(char *)(iVar3 + 0x44) == '\0') {
        FUN_200a1410(local_338,param_3);
        FUN_200a14c0(local_360,param_4);
        fVar7 = (float10)FUN_200790d0();
        FUN_200c3870((float)fVar7);
        local_364 = SQRT(local_2fc[0] * local_2fc[0] + local_2ec * local_2ec + local_2dc * local_2dc
                        );
        cVar1 = FUN_20067860(local_338,local_360,local_32c);
        if (cVar1 != '\0') {
          uVar4 = FUN_200a7640();
          FUN_2008a520(CONCAT22(extraout_var_01,*(undefined2 *)(in_ECX + 0xae)),in_ECX + 0xb4,uVar4)
          ;
          FUN_20083e20(&local_379,0,&local_381);
          local_4 = 0;
          FUN_200a72d0(local_310,local_338,local_360,local_354);
          local_380 = (float *)*local_350;
          if (local_380 != local_350) {
            do {
              uVar2 = FUN_20088ea0(*(undefined2 *)(in_ECX + 0xae),local_380[4]);
              local_33c = CONCAT22(local_33c._2_2_,uVar2);
              uVar4 = local_33c;
              local_26c = local_364 * local_380[3];
              FUN_200a1530(&local_378,local_380 + 5);
              fVar7 = (float10)FUN_200790d0();
              local_36c = (float)fVar7;
              if (fVar7 <= (float10)1e-10) {
                local_378 = 0;
                local_374 = 0;
                local_370 = 0;
              }
              else {
                FUN_200c3870(local_36c);
              }
              local_328[0] = local_26c;
              local_320 = uVar4;
              FUN_200802f0(local_258);
              piVar5 = (int *)FUN_20083e90(local_260,local_328);
              iVar3 = *piVar5;
              *(undefined4 *)(iVar3 + 0x18) = local_378;
              *(undefined4 *)(iVar3 + 0x1c) = local_374;
              *(undefined4 *)(iVar3 + 0x20) = local_370;
              FUN_20075f90();
            } while (local_380 != local_350);
          }
          local_4 = 0xffffffff;
          FUN_20082270();
        }
      }
      piVar5 = *(int **)(in_ECX + 0xf0);
      piVar6 = (int *)*piVar5;
      if (piVar6 != piVar5) {
        do {
          local_17c = 0;
          local_138 = 0;
          local_5c = 0;
          local_18 = 0;
          if (((short)piVar6[2] == 0) ||
             (cVar1 = FUN_20088d00(CONCAT22((short)((uint)local_1bc >> 0x10),
                                            *(undefined2 *)(in_ECX + 0xae)),
                                   CONCAT22((short)((uint)piVar5 >> 0x10),(short)piVar6[2]),
                                   local_310,local_1bc), cVar1 == '\0')) {
            FUN_2007fd80(param_1,local_2fc,param_3,param_4,param_5);
          }
          else {
            FUN_200a1100(local_1bc,local_2fc);
            FUN_200a1100(local_2b8,local_178);
            local_14 = local_134 * local_274;
            local_10 = local_130 * local_270;
            FUN_2007fd80(param_1,local_9c,param_3,param_4,param_5);
          }
          piVar6 = (int *)*piVar6;
          piVar5 = *(int **)(in_ECX + 0xf0);
        } while (piVar6 != piVar5);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

