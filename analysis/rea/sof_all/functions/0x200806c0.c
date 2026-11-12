// rea decompile_all
// name: FUN_200806c0
// address: 0x200806c0
// body: available
// range: 0x200806c0-0x20080a36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200806c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 extraout_var;
  int *piVar2;
  int in_ECX;
  undefined2 extraout_var_00;
  undefined1 *puVar4;
  int *piVar5;
  float10 fVar6;
  undefined1 local_27d;
  int local_27c;
  float local_278;
  undefined4 local_274;
  undefined1 local_270 [24];
  char local_258;
  undefined1 local_257;
  undefined1 local_254 [20];
  undefined1 local_240 [64];
  undefined4 local_200;
  undefined1 local_1fc [64];
  undefined4 local_1bc;
  int local_1b8;
  float local_1b4;
  undefined1 local_1b0 [64];
  undefined4 local_170;
  undefined1 local_16c [64];
  undefined4 local_12c;
  int local_128;
  float local_124;
  undefined1 local_120 [64];
  undefined4 local_e0;
  undefined1 local_dc [64];
  undefined4 local_9c;
  int local_98;
  float local_94;
  undefined1 local_90 [64];
  undefined4 local_50;
  undefined4 local_c;
  int local_8;
  float local_4;
  undefined2 uVar3;
  
  if (*(char *)(in_ECX + 0x96) == '\0') {
    return;
  }
  if (*(short *)(in_ECX + 0xae) != 0) {
    fVar6 = (float10)FUN_2007d090(param_1,&local_27d,&local_27c);
    local_278 = (float)fVar6;
    local_27c = FUN_200884a0(CONCAT22(extraout_var_00,*(undefined2 *)(in_ECX + 0xae)),&local_274);
    if (local_27c == 0) {
      return;
    }
    FUN_2007cfa0(local_254,local_278,local_274);
    local_170 = 0;
    local_12c = 0;
    local_e0 = 0;
    local_9c = 0;
    if ((*(short *)(in_ECX + 0x94) == 0) ||
       (cVar1 = FUN_20088d00(CONCAT22((short)((uint)local_120 >> 0x10),
                                      *(undefined2 *)(in_ECX + 0xae)),
                             CONCAT22(extraout_var,*(short *)(in_ECX + 0x94)),local_254,local_120),
       cVar1 == '\0')) {
      FUN_200a1100(in_ECX + 4,param_2);
      FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
      local_128 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
      local_124 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
    }
    else {
      local_200 = 0;
      local_1bc = 0;
      FUN_200a1100(in_ECX + 4,param_2);
      FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
      local_1b8 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
      local_1b4 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
      FUN_200a1100(local_dc,local_240);
      FUN_200a1100(local_1fc,local_120);
      local_128 = local_98 * local_1b8;
      local_124 = local_1b4 / local_94;
    }
    if ((short)param_4 == 0) {
      if (*(char *)(local_27c + 0x44) == '\0') {
        local_258 = 1;
        local_257 = 0;
        FUN_20067ac0(local_27c + 0x2c,local_1b0);
        FUN_200677e0(local_270);
      }
      piVar2 = *(int **)(in_ECX + 0xf0);
      piVar5 = (int *)*piVar2;
      if (piVar5 != piVar2) {
        do {
          uVar3 = (undefined2)((uint)piVar2 >> 0x10);
          local_200 = 0;
          local_1bc = 0;
          local_50 = 0;
          local_c = 0;
          if (((short)piVar5[2] == 0) ||
             (cVar1 = FUN_20088d00(CONCAT22(uVar3,*(undefined2 *)(in_ECX + 0xae)),
                                   CONCAT22(uVar3,(short)piVar5[2]),local_254,local_240),
             cVar1 == '\0')) {
            puVar4 = local_1b0;
          }
          else {
            FUN_200a1100(local_240,local_1b0);
            FUN_200a1100(local_16c,local_1fc);
            puVar4 = local_90;
            local_8 = local_1b8 * local_128;
            local_4 = local_1b4 * local_124;
          }
          FUN_200806c0(param_1,puVar4,param_3,0);
          piVar5 = (int *)*piVar5;
          piVar2 = *(int **)(in_ECX + 0xf0);
        } while (piVar5 != piVar2);
      }
    }
    else {
      local_258 = '\x01';
      local_257 = 0;
      cVar1 = FUN_20088dd0(*(undefined2 *)(in_ECX + 0xae),param_4,local_270);
      if ((cVar1 != '\0') && (local_258 == '\0')) {
        FUN_20067ac0(local_270,local_1b0);
        return;
      }
    }
    return;
  }
  return;
}

