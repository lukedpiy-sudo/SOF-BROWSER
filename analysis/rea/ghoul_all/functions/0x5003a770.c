// rea decompile_all
// name: FUN_5003a770
// address: 0x5003a770
// body: available
// range: 0x5003a770-0x5003aad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl
FUN_5003a770(float *param_1,float *param_2,float *param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  int iStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  int local_104;
  float local_100 [6];
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float fStack_d4;
  float afStack_d0 [5];
  float fStack_bc;
  float afStack_b8 [3];
  float afStack_ac [16];
  float fStack_6c;
  float fStack_34;
  
  local_d8 = *(float *)((int)param_5 + 0x124) + 16.0;
  local_dc = *(undefined4 *)((int)param_5 + 0x120);
  local_e0 = *(undefined4 *)((int)param_5 + 0x11c);
  local_100[0] = 0.0;
  local_100[1] = 0.0;
  local_100[2] = 0.0;
  local_100[5] = *param_2 * 60.0 + *param_1;
  local_100[3] = 0.0;
  local_100[4] = 0.0;
  fVar11 = 9.550895e-38;
  pfVar3 = local_100 + 5;
  fVar8 = (float)((int)param_5 + 0x128);
  local_e8 = param_2[1] * 60.0 + param_1[1];
  puVar7 = &local_e0;
  local_104 = 0x28;
  local_e4 = param_2[2] * 60.0 + param_1[2];
  pfVar9 = param_1;
  fVar10 = param_5;
  (*DAT_5015cac0)();
  fVar4 = FUN_5003a5d0(param_1,(float)param_2,0.0,param_5,(float)pfVar9,(float)puVar7,fVar8,pfVar3,
                       fVar10,fVar11);
  afStack_ac[2] = param_2[2];
  local_100[0] = (float)((float10)fStack_6c * fVar4);
  afStack_ac[0] = *param_2;
  afStack_ac[1] = param_2[1];
  if ((float)((float10)fStack_6c * fVar4) < 0.99) {
    iStack_114 = 1;
    pfVar3 = afStack_ac + 3;
    do {
      iVar1 = (*DAT_5015cb24)(0,1);
      fStack_108 = param_2[2];
      fVar4 = (float10)(iVar1 * 2 + -1) * (float10)local_104;
      fStack_d4 = (float)fVar4;
      fVar4 = fVar4 * (float10)0.017453292519943295;
      fVar5 = (float10)fcos(fVar4);
      fVar4 = (float10)fsin(fVar4);
      fStack_10c = (float)fVar5 * param_2[1] - (float)fVar4 * *param_2;
      fStack_110 = (float)((float10)(float)fVar5 * (float10)*param_2 + fVar4 * (float10)param_2[1]);
      local_e4 = fStack_108;
      FUN_5003c720(param_1,60.0,&fStack_110,afStack_b8);
      pfVar9 = afStack_b8;
      fVar11 = 9.550895e-38;
      fVar8 = (float)((int)param_5 + 0x128);
      puVar7 = &local_e0;
      pfVar6 = param_1;
      fVar10 = param_5;
      (*DAT_5015cac0)();
      fVar5 = FUN_5003a5d0(param_1,(float)&fStack_110,0.0,param_5,(float)pfVar6,(float)puVar7,fVar8,
                           pfVar9,fVar10,fVar11);
      fVar4 = (float10)fStack_6c;
      pfVar3[1] = fStack_10c;
      local_100[iStack_114] = (float)(fVar5 * fVar4);
      *pfVar3 = fStack_110;
      pfVar3[2] = fStack_108;
      if ((float10)0.99 < fVar5 * fVar4) break;
      fStack_108 = param_2[2];
      fVar4 = (float10)fStack_d4 * (float10)-1.0 * (float10)0.017453292519943295;
      fVar5 = (float10)fcos(fVar4);
      fVar4 = (float10)fsin(fVar4);
      fStack_10c = (float)fVar5 * param_2[1] - (float)fVar4 * *param_2;
      fStack_110 = (float)((float10)(float)fVar5 * (float10)*param_2 + fVar4 * (float10)param_2[1]);
      fStack_bc = fStack_108;
      FUN_5003c720(param_1,60.0,&fStack_110,afStack_d0);
      pfVar9 = afStack_d0;
      fVar11 = 9.550895e-38;
      fVar8 = (float)((int)param_5 + 0x128);
      puVar7 = &local_e0;
      pfVar6 = param_1;
      fVar10 = param_5;
      (*DAT_5015cac0)();
      fVar5 = FUN_5003a5d0(param_1,(float)&fStack_110,0.0,param_5,(float)pfVar6,(float)puVar7,fVar8,
                           pfVar9,fVar10,fVar11);
      fVar4 = (float10)fStack_34;
      pfVar3[4] = fStack_10c;
      local_100[iStack_114 + 1] = (float)(fVar5 * fVar4);
      pfVar3[3] = fStack_110;
      pfVar3[5] = fStack_108;
      if ((float10)0.99 < fVar5 * fVar4) break;
      pfVar3 = pfVar3 + 6;
      local_104 = local_104 + 0x28;
      iStack_114 = iStack_114 + 2;
    } while (iStack_114 < 5);
  }
  fVar8 = 0.2;
  iVar1 = -1;
  iVar2 = 0;
  do {
    if (fVar8 < local_100[iVar2]) {
      fVar8 = local_100[iVar2];
      iVar1 = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (iVar1 < 0) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    return 0;
  }
  *param_3 = afStack_ac[iVar1 * 3];
  fVar8 = afStack_ac[iVar1 * 3 + 1];
  param_3[2] = afStack_ac[iVar1 * 3 + 2];
  param_3[1] = fVar8;
  return 1;
}

