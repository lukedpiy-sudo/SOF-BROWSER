// rea decompile_all
// name: FUN_2007ed60
// address: 0x2007ed60
// body: available
// range: 0x2007ed60-0x2007f3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007ed60(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  undefined2 extraout_var_01;
  undefined4 *puVar6;
  int *piVar7;
  float10 fVar8;
  undefined1 local_312;
  undefined1 local_311;
  undefined4 *local_310;
  undefined1 local_30c [4];
  undefined4 *puStack_308;
  undefined4 uStack_304;
  int iStack_2fc;
  float local_2f8;
  undefined1 local_2f4 [4];
  undefined4 *local_2f0;
  undefined4 *local_2ec;
  undefined4 local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined1 auStack_2a4 [4];
  undefined1 local_2a0 [20];
  undefined1 auStack_28c [12];
  undefined1 local_280 [4];
  undefined1 local_27c [12];
  undefined1 local_270 [64];
  undefined4 local_230;
  undefined1 local_22c [64];
  undefined4 local_1ec;
  int local_1e8;
  float local_1e4;
  undefined1 local_1e0 [64];
  undefined4 local_1a0;
  undefined1 local_19c [64];
  undefined4 local_15c;
  int local_158;
  float local_154;
  undefined4 local_150 [9];
  undefined1 local_12c [64];
  undefined4 local_ec;
  undefined1 local_e8 [64];
  undefined4 local_a8;
  int local_a4;
  float local_a0;
  undefined1 auStack_9c [64];
  undefined4 local_5c;
  undefined4 local_18;
  int iStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined2 uVar5;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c156;
  local_c = ExceptionList;
  if (((*(char *)(in_ECX + 0x12a) != '\0') && (*(char *)(in_ECX + 0x96) != '\0')) &&
     (*(short *)(in_ECX + 0xae) != 0)) {
    ExceptionList = &local_c;
    fVar8 = (float10)FUN_2007d090(param_1,&local_312,&local_2f8);
    local_2f8 = (float)fVar8;
    iVar2 = FUN_200884a0(CONCAT22(extraout_var_01,*(undefined2 *)(in_ECX + 0xae)),&local_2b4);
    if (iVar2 != 0) {
      local_230 = 0;
      local_1ec = 0;
      local_ec = 0;
      local_a8 = 0;
      FUN_2007cfa0(local_2a0,local_2f8,local_2b4);
      if ((*(short *)(in_ECX + 0x94) == 0) ||
         (cVar1 = FUN_20088d00(CONCAT22((short)((uint)local_12c >> 0x10),
                                        *(undefined2 *)(in_ECX + 0xae)),
                               CONCAT22(extraout_var,*(short *)(in_ECX + 0x94)),local_2a0,local_12c)
         , cVar1 == '\0')) {
        FUN_200a1100(in_ECX + 4,param_2);
        FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
        local_1e8 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
        local_1e4 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
      }
      else {
        local_1a0 = 0;
        local_15c = 0;
        FUN_200a1100(in_ECX + 4,param_2);
        FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
        local_158 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
        local_154 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
        FUN_200a1100(local_e8,local_1e0);
        FUN_200a1100(local_19c,local_12c);
        local_1e8 = local_a4 * local_158;
        local_1e4 = local_154 / local_a0;
      }
      FUN_20083d40(&local_311,0,&local_312);
      local_4 = 0;
      FUN_2008a390(CONCAT22(extraout_var_00,*(undefined2 *)(in_ECX + 0xae)),in_ECX + 0xb4,3,
                   local_30c);
      if (*(char *)(iVar2 + 0x44) == '\0') {
        local_2e4 = *(float *)(iVar2 + 0x2c);
        local_2e0 = *(float *)(iVar2 + 0x30);
        local_2c0 = *(float *)(iVar2 + 0x38) - local_2e4;
        local_2dc = *(float *)(iVar2 + 0x34);
        local_2bc = *(float *)(iVar2 + 0x3c) - local_2e0;
        local_2b8 = *(float *)(iVar2 + 0x40) - local_2dc;
        FUN_200a1410(&local_2d8,&local_2e4);
        FUN_200a14c0(&local_2b0,&local_2c0);
        local_310 = (undefined4 *)0x0;
        do {
          if (((uint)local_310 & 1) == 0) {
            local_2cc = local_2b0 + local_2d8;
          }
          else {
            local_2cc = local_2d8;
          }
          if (((uint)local_310 & 2) == 0) {
            local_2c8 = local_2ac + local_2d4;
          }
          else {
            local_2c8 = local_2d4;
          }
          if (((uint)local_310 & 4) == 0) {
            local_2c4 = local_2a8 + local_2d0;
          }
          else {
            local_2c4 = local_2d0;
          }
          FUN_20067780(&local_2cc);
          local_310 = (undefined4 *)((int)local_310 + 1);
        } while ((int)local_310 < 8);
      }
      puVar3 = (undefined4 *)FUN_200a7710(local_2a0);
      puVar6 = local_150;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      local_2f4[0] = local_311;
      local_2f0 = (undefined4 *)0x0;
      local_2ec = (undefined4 *)0x0;
      local_2e8 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_200a73d0(local_2a0,local_2f4,local_30c);
      puVar3 = local_2f0;
      if (local_2f0 != local_2ec) {
        do {
          if (*(char *)(puVar3 + 1) == '\0') {
            FUN_200a8890(*(undefined4 *)(param_3 + 8),1,puVar3);
            FUN_200842a0(*(undefined4 *)(param_3 + 0x18),1,local_150);
            FUN_200845a0(*(undefined4 *)(param_3 + 0x28),1,local_270);
          }
          else {
            cVar1 = (**(code **)(*(int *)*puVar3 + 0x24))(local_150,&local_2b0,local_280,local_27c);
            if (cVar1 != '\0') {
              FUN_200a1410(auStack_28c,&local_2b0);
              iVar2 = (**(code **)(**(int **)(in_ECX + 0x1c4) + 0x68))();
              FUN_20085880(*(undefined4 *)(iVar2 + 0x160),1,auStack_28c);
            }
          }
          puVar3 = puVar3 + 2;
        } while (puVar3 != local_2ec);
      }
      piVar4 = *(int **)(in_ECX + 0xf0);
      piVar7 = (int *)*piVar4;
      if (piVar7 != piVar4) {
        do {
          uVar5 = (undefined2)((uint)piVar4 >> 0x10);
          local_1a0 = 0;
          local_15c = 0;
          local_5c = 0;
          local_18 = 0;
          if (((short)piVar7[2] == 0) ||
             (cVar1 = FUN_20088d00(CONCAT22(uVar5,*(undefined2 *)(in_ECX + 0xae)),
                                   CONCAT22(uVar5,(short)piVar7[2]),local_2a0,local_1e0),
             cVar1 == '\0')) {
            FUN_2007ed60(param_1,local_270,param_3,param_4);
          }
          else {
            FUN_200a1100(local_1e0,local_270);
            FUN_200a1100(local_22c,local_19c);
            iStack_14 = local_158 * local_1e8;
            fStack_10 = local_154 * local_1e4;
            FUN_2007ed60(param_1,auStack_9c,param_3,param_4);
          }
          piVar7 = (int *)*piVar7;
          piVar4 = *(int **)(in_ECX + 0xf0);
        } while (piVar7 != piVar4);
      }
      FUN_200f9f75(local_2f0);
      puVar3 = puStack_308;
      local_2f0 = (undefined4 *)0x0;
      local_2ec = (undefined4 *)0x0;
      local_2e8 = 0;
      local_310 = (undefined4 *)*puStack_308;
      local_4 = 0xffffffff;
      if (iStack_2fc == 0) {
        iStack_2fc = 0;
        puVar6 = local_310;
        while (local_310 = puVar6, puVar6 != puVar3) {
          FUN_200850b0();
          FUN_200755f0(auStack_2a4,puVar6);
          puVar6 = local_310;
        }
      }
      else {
        FUN_200759d0(puStack_308[1]);
        puStack_308[1] = uStack_304;
        iStack_2fc = 0;
        *puStack_308 = puStack_308;
        puStack_308[2] = puStack_308;
      }
      FUN_200f9f75(puStack_308);
      puStack_308 = (undefined4 *)0x0;
      iStack_2fc = 0;
      FUN_200f9f75(uStack_304);
    }
  }
  ExceptionList = local_c;
  return;
}

