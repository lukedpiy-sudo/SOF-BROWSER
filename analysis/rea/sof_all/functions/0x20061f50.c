// rea decompile_all
// name: FUN_20061f50
// address: 0x20061f50
// body: available
// range: 0x20061f50-0x200622e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_20061f50(float *param_1,int param_2,uint param_3,int param_4,float param_5,float param_6,
                 float param_7,int param_8)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  float local_10 [4];
  
  if ((param_5 < 0.0) || (1.0 < param_5)) {
    Com_Error(0,s_SV_StartSound__volume____f_2013a2f0,(double)param_5);
  }
  if ((param_6 < 0.0) || (4.0 < param_6)) {
    Com_Error(0,s_SV_StartSound__attenuation____f_2013a2d0,(double)param_6);
  }
  if ((param_7 < 0.0) || (0.255 < param_7)) {
    Com_Error(0,s_SV_StartSound__timeofs____f_2013a2b4,(double)param_7);
  }
  iVar1 = (param_2 - *(int *)(DAT_20396dd8 + 0x60)) / *(int *)(DAT_20396dd8 + 100);
  bVar8 = (param_3 & 8) != 0;
  if (bVar8) {
    param_3 = param_3 & 7;
  }
  local_10[0] = (float)(iVar1 * 8 | param_3 & 7);
  uVar6 = 0;
  if (0xff < param_4) {
    uVar6 = 0x20;
  }
  if (param_5 != 1.0) {
    uVar6 = uVar6 | 1;
  }
  if (param_6 != 1.0) {
    uVar6 = uVar6 | 2;
  }
  if ((((*(byte *)(param_2 + 0x118) & 1) != 0) || (*(int *)(param_2 + 0x158) == 3)) ||
     (param_1 != (float *)0x0)) {
    uVar6 = uVar6 | 4;
  }
  uVar7 = uVar6 | 8;
  if (param_7 != 0.0) {
    uVar7 = uVar6 | 0x18;
  }
  if (param_1 == (float *)0x0) {
    param_1 = local_10 + 1;
    if (*(int *)(param_2 + 0x158) == 3) {
      iVar5 = 0;
      pfVar2 = (float *)(param_2 + 0x11c);
      do {
        iVar5 = iVar5 + 1;
        local_10[iVar5] = (pfVar2[3] + *pfVar2) * 0.5 + pfVar2[-0x46];
        pfVar2 = pfVar2 + 1;
      } while (iVar5 < 3);
    }
    else {
      local_10[1] = *(float *)(param_2 + 4);
      local_10[2] = *(float *)(param_2 + 8);
      local_10[3] = *(float *)(param_2 + 0xc);
    }
  }
  FUN_2001cb00(&DAT_203f6c34,10);
  iVar5 = DAT_203f6c40;
  FUN_2001cb00(&DAT_203f6c34,uVar7);
  FUN_2001cb00(&DAT_203f6c34,param_4);
  if ((uVar7 & 1) != 0) {
    uVar3 = __ftol();
    FUN_2001cb00(&DAT_203f6c34,uVar3);
  }
  if ((uVar7 & 2) != 0) {
    uVar3 = __ftol();
    FUN_2001cb00(&DAT_203f6c34,uVar3);
  }
  if ((uVar7 & 0x10) != 0) {
    uVar3 = __ftol();
    FUN_2001cb00(&DAT_203f6c34,uVar3);
  }
  if ((uVar7 & 8) != 0) {
    FUN_2001cb70(&DAT_203f6c34,local_10[0]);
  }
  FUN_2001ce00(&DAT_203f6c34,param_1);
  if (param_8 != 0) {
    if (((0 < iVar1) && (iVar4 = __ftol(), iVar1 <= iVar4)) &&
       ((*(uint *)(*(int *)(DAT_20396dd8 + 100) * iVar1 + 0x118 + *(int *)(DAT_20396dd8 + 0x60)) &
        0x200) == 0)) {
      iVar1 = iVar1 * 0xd2ac + DAT_20396eec;
      iVar4 = DAT_203f6c40 + -6;
      *(byte *)(DAT_203f6c38 + iVar5) = *(byte *)(DAT_203f6c38 + iVar5) & 0xfb;
      FUN_2001e7b0(iVar1 + -0xcfe8,DAT_203f6c38,iVar4);
      FUN_2001e730(&DAT_203f6c34);
      return;
    }
    FUN_2001e730(&DAT_203f6c34);
    return;
  }
  if ((param_3 & 0x10) == 0) {
    if (param_6 != 0.0 && !bVar8) {
      FUN_20061ca0(param_1,1,iVar5);
      return;
    }
    FUN_20061ca0(param_1,0,iVar5);
    return;
  }
  if (param_6 != 0.0 && !bVar8) {
    FUN_20061ca0(param_1,4,iVar5);
    return;
  }
  FUN_20061ca0(param_1,3,iVar5);
  return;
}

