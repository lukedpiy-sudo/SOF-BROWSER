// rea decompile_all
// name: FUN_3001c810
// address: 0x3001c810
// body: available
// range: 0x3001c810-0x3001ca8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3001c810(int param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float local_d4;
  float local_d0 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4 [4];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [5];
  float local_7c;
  float local_78;
  float local_74;
  float local_6c [4];
  float local_5c;
  undefined4 local_4c;
  float local_48 [9];
  float local_24;
  float local_20 [8];
  
  iVar6 = 0;
  local_d4 = 1.0;
  local_78 = *param_2;
  local_74 = param_2[1];
  local_94 = param_2[2];
  iVar5 = 0;
  do {
    if (ABS(param_2[iVar5]) < local_d4) {
      iVar6 = iVar5;
      local_d4 = ABS(param_2[iVar5]);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  local_d0[2] = 0.0;
  local_d0[1] = 0.0;
  local_d0[0] = 0.0;
  local_d0[iVar6] = 1.0;
  local_d0[3] = 1.0 / (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = (local_d0[2] * param_2[2] + local_d0[0] * *param_2 + local_d0[1] * param_2[1]) *
          local_d0[3];
  local_bc = local_d0[3] * param_2[1];
  local_b4[0] = local_d0[0] - local_d0[3] * *param_2 * fVar1;
  local_90[1] = local_d0[1] - local_bc * fVar1;
  local_d0[2] = local_d0[2] - local_d0[3] * param_2[2] * fVar1;
  fVar1 = SQRT(local_b4[0] * local_b4[0] + local_90[1] * local_90[1] + local_d0[2] * local_d0[2]);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    local_b4[0] = fVar1 * local_b4[0];
    local_90[1] = fVar1 * local_90[1];
    local_d0[2] = fVar1 * local_d0[2];
  }
  local_c0 = local_90[1] * local_94 - local_d0[2] * local_74;
  local_9c = local_d0[2];
  local_b4[1] = local_c0;
  local_b8 = local_b4[0] * local_74 - local_90[1] * local_78;
  local_b4[3] = local_90[1];
  local_a4 = local_d0[2] * local_78 - local_b4[0] * local_94;
  local_98 = local_b8;
  local_b4[2] = local_78;
  local_a0 = local_74;
  pfVar4 = local_b4;
  pfVar7 = local_90;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  fVar8 = (float10)fcos((float10)param_4 * (float10)0.01745329252);
  local_90[2] = local_d0[2];
  pfVar4 = local_6c;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar4 = 0.0;
    pfVar4 = pfVar4 + 1;
  }
  local_4c = 0x3f800000;
  local_5c = (float)fVar8;
  local_6c[0] = (float)fVar8;
  fVar8 = (float10)fsin((float10)param_4 * (float10)0.01745329252);
  local_6c[1] = (float)fVar8;
  local_6c[3] = (float)-fVar8;
  local_90[3] = local_c0;
  local_7c = local_b8;
  FUN_3001cd20(local_b4,local_6c,local_48);
  FUN_3001cd20(local_48,local_90,&local_24);
  iVar6 = 0;
  pfVar4 = local_20;
  do {
    iVar6 = iVar6 + 1;
    *(float *)(param_1 + -4 + iVar6 * 4) =
         *pfVar4 * param_3[1] + pfVar4[-1] * *param_3 + pfVar4[1] * param_3[2];
    pfVar4 = pfVar4 + 3;
  } while (iVar6 < 3);
  return;
}

