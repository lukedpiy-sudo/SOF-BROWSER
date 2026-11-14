// rea decompile_all
// name: FUN_30008ff0
// address: 0x30008ff0
// body: available
// range: 0x30008ff0-0x30009289 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30008ff0(float *param_1,float *param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = param_1;
  if (*(int *)(DAT_3008fc6c + 0xe0) == 0) {
    param_2[2] = 1.0;
    param_2[1] = 1.0;
    *param_2 = 1.0;
    return;
  }
  uVar4 = param_3 & 0xff;
  DAT_3007c658 = (float)((int)DAT_3007c658 + 1);
  lVar7 = __ftol();
  lVar8 = __ftol();
  lVar9 = __ftol();
  param_3 = (((uint)lVar7 | uVar4 << 8) << 8 | (uint)lVar8) << 8 | (uint)lVar9;
  FUN_3000a0b0(&DAT_3004c640,(int *)&local_30,&param_3);
  if (local_30 == DAT_3004c644) {
    local_24 = DAT_3007c658;
    if (uVar4 == 0xff) {
      local_28 = pfVar2[2] - 2048.0;
      local_30 = (float *)*pfVar2;
      local_2c = pfVar2[1];
    }
    else {
      FUN_30008ee0(pfVar2,256.0,(float *)(DAT_3008fe30 + uVar4 * 0xc),(float *)&local_30);
    }
    local_30 = (float *)FUN_30008930(*(int **)(DAT_3008fc6c + 0xa0),pfVar2,(float *)&local_30);
    if ((float)(int)local_30 == -1.0) {
      local_18 = 0.1;
      local_1c = 0.1;
      local_20 = 0.1;
    }
    else {
      FUN_30008ec0(&DAT_3004c620,&local_20);
    }
    pfVar6 = param_2;
    param_2[2] = local_18;
    *param_2 = local_20;
    local_14 = param_3;
    param_2[1] = local_1c;
    local_c = local_20;
    local_8 = local_1c;
    local_10 = local_24;
    local_4 = local_18;
    piVar3 = (int *)FUN_30009c00(&DAT_3004c640,&local_30,&local_14);
    iVar1 = *piVar3;
    *(float *)(iVar1 + 0x10) = local_24;
    *(float *)(iVar1 + 0x14) = local_20;
    *(float *)(iVar1 + 0x18) = local_1c;
    *(float *)(iVar1 + 0x1c) = local_18;
  }
  else {
    local_30[4] = DAT_3007c658;
    *param_2 = local_30[5];
    param_2[1] = local_30[6];
    param_2[2] = local_30[7];
    pfVar6 = param_2;
  }
  if ((200 < DAT_3004c650) &&
     (FUN_30009cc0(&DAT_3004c640,&param_2), pfVar5 = param_2, param_2 != DAT_3004c644)) {
    do {
      param_1 = pfVar5;
      FUN_300085b0((int *)&param_1);
      if ((int)pfVar5[4] + 100 < (int)DAT_3007c658) {
        FUN_30009cd0(&DAT_3004c640,&local_30,(int *)pfVar5);
      }
      pfVar5 = param_1;
    } while (param_1 != DAT_3004c644);
  }
  while (1000 < DAT_3004c650) {
    FUN_30009cd0(&DAT_3004c640,&param_2,(int *)*DAT_3004c644);
  }
  FUN_30008f20(pfVar2,pfVar6);
  return;
}

