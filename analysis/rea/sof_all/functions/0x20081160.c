// rea decompile_all
// name: FUN_20081160
// address: 0x20081160
// body: available
// range: 0x20081160-0x20081658 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20081160(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
  undefined1 local_399;
  int *local_398;
  undefined1 local_391;
  undefined4 local_390;
  float local_38c;
  undefined4 local_388;
  int local_384 [2];
  undefined4 local_37c;
  undefined1 local_378 [4];
  int *local_374;
  undefined1 local_364 [24];
  undefined1 local_34c;
  undefined1 local_34b;
  undefined1 local_348 [20];
  undefined1 local_334 [8];
  undefined1 local_32c [64];
  undefined4 local_2ec;
  undefined1 local_2e8 [64];
  undefined4 local_2a8;
  int local_2a4;
  float local_2a0;
  undefined1 local_29c [20];
  undefined1 local_288 [64];
  undefined4 local_248;
  undefined1 local_244 [64];
  undefined4 local_204;
  int local_200;
  float local_1fc;
  undefined1 local_1f8 [64];
  undefined4 local_1b8;
  undefined1 local_1b4 [64];
  undefined4 local_174;
  int local_170;
  float local_16c;
  undefined1 local_168 [64];
  undefined4 local_128;
  undefined1 local_124 [64];
  undefined4 local_e4;
  int local_e0;
  float local_dc;
  undefined1 local_d8 [64];
  undefined4 local_98;
  undefined4 local_54;
  int local_50;
  float local_4c;
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c1cb;
  local_c = ExceptionList;
  if ((*(char *)(in_ECX + 0x96) != '\0') && (*(short *)(in_ECX + 0xae) != 0)) {
    ExceptionList = &local_c;
    fVar7 = (float10)FUN_2007d090(param_1,&local_399,&local_38c);
    local_38c = (float)fVar7;
    iVar3 = FUN_200884a0(CONCAT22(extraout_var_00,*(undefined2 *)(in_ECX + 0xae)),&local_390);
    if (iVar3 != 0) {
      FUN_2007cfa0(local_348,local_38c,local_390);
      local_2ec = 0;
      local_2a8 = 0;
      local_1b8 = 0;
      local_174 = 0;
      if ((*(short *)(in_ECX + 0x94) == 0) ||
         (cVar1 = FUN_20088d00(CONCAT22((short)((uint)local_1f8 >> 0x10),
                                        *(undefined2 *)(in_ECX + 0xae)),
                               CONCAT22(extraout_var,*(short *)(in_ECX + 0x94)),local_348,local_1f8)
         , cVar1 == '\0')) {
        FUN_200a1100(in_ECX + 4,param_2);
        FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
        local_2a4 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
        local_2a0 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
      }
      else {
        local_248 = 0;
        local_204 = 0;
        FUN_200a1100(in_ECX + 4,param_2);
        FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
        local_200 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
        local_1fc = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
        FUN_200a1100(local_1b4,local_288);
        FUN_200a1100(local_244,local_1f8);
        local_2a4 = local_170 * local_200;
        local_2a0 = local_1fc / local_16c;
      }
      if (*(char *)(iVar3 + 0x44) == '\0') {
        local_34c = 1;
        local_34b = 0;
        FUN_20067ac0(param_6,local_2e8);
        cVar1 = FUN_20067640(iVar3 + 0x2c,0x3f800000);
        if (cVar1 != '\0') {
          uVar4 = FUN_200a7640();
          FUN_2008a520(CONCAT22(extraout_var_01,*(undefined2 *)(in_ECX + 0xae)),in_ECX + 0xb4,uVar4)
          ;
          FUN_20083fe0(&local_391,0,&local_399);
          local_4 = 0;
          FUN_2007cfa0(local_29c,local_38c,local_390);
          FUN_200a7320(local_29c,param_3,param_4,param_5,local_364,local_32c,local_378);
          local_398 = (int *)*local_374;
          if (local_398 != local_374) {
            do {
              uVar2 = FUN_20088ea0(*(undefined2 *)(in_ECX + 0xae),local_398[4]);
              local_388 = CONCAT22(local_388._2_2_,uVar2);
              local_384[0] = local_398[3];
              local_37c = local_388;
              uVar4 = FUN_20084250(local_384,local_48);
              FUN_20084050(local_334,uVar4);
              piVar5 = local_398;
              FUN_200802f0(local_398 + 5);
              FUN_200802f0(piVar5 + 8);
              FUN_20086850();
            } while (local_398 != local_374);
          }
          local_4 = 0xffffffff;
          FUN_20082320();
        }
      }
      piVar5 = *(int **)(in_ECX + 0xf0);
      piVar6 = (int *)*piVar5;
      if (piVar6 != piVar5) {
        do {
          uVar2 = (undefined2)((uint)piVar5 >> 0x10);
          local_128 = 0;
          local_e4 = 0;
          local_98 = 0;
          local_54 = 0;
          if (((short)piVar6[2] == 0) ||
             (cVar1 = FUN_20088d00(CONCAT22(uVar2,*(undefined2 *)(in_ECX + 0xae)),
                                   CONCAT22(uVar2,(short)piVar6[2]),local_348,local_168),
             cVar1 == '\0')) {
            FUN_20081160(param_1,local_32c,param_3,param_4,param_5,param_6,param_7);
          }
          else {
            FUN_200a1100(local_168,local_32c);
            FUN_200a1100(local_2e8,local_124);
            local_50 = local_e0 * local_2a4;
            local_4c = local_dc * local_2a0;
            FUN_20081160(param_1,local_d8,param_3,param_4,param_5,param_6,param_7);
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

