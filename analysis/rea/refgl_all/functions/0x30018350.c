// rea decompile_all
// name: FUN_30018350
// address: 0x30018350
// body: available
// range: 0x30018350-0x300185ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_30018350(void *this,int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int extraout_ECX;
  undefined *puVar6;
  int extraout_ECX_00;
  int *piVar7;
  int *extraout_EDX;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_10;
  float local_c;
  
  local_c = 0.0;
  if (*(float *)(param_2 + 0x7c) != 0.0) {
    local_c = -(*(float *)(param_1 + 0x58) * *(float *)(param_2 + 0x7c));
  }
  FUN_3001ca90((float *)&DAT_3008fd10,(float *)&DAT_300a40e0,(float *)&DAT_300a37d0,
               (float *)&DAT_300a40ec);
  iVar9 = 0;
  local_10 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar10 = 0;
      piVar7 = (int *)(*(int *)this + iVar9);
      if (0 < piVar7[1]) {
        iVar8 = 0;
        do {
          fVar3 = local_c + *(float *)(*piVar7 + iVar8);
          pfVar5 = (float *)(*piVar7 + iVar8);
          *pfVar5 = fVar3;
          fVar1 = pfVar5[1];
          pfVar5[2] = pfVar5[2];
          pfVar5[1] = fVar1;
          fVar1 = (10000.0 - (ABS(fVar3 - DAT_3008fd04) + ABS(fVar1 - DAT_3008fd08))) * 0.0001;
          pfVar5[8] = fVar1;
          if (fVar1 < 0.0) {
            pfVar5[8] = 0.0;
          }
          pfVar5[8] = pfVar5[8] * 0.5;
          uVar4 = FUN_30017dd0(pfVar5);
          *(undefined4 *)(extraout_ECX + 0x34) = uVar4;
          if (*(float *)(DAT_3008ffb4 + 0x18) != 0.0) {
            *(undefined4 *)(extraout_ECX + 0x20) = 0x3f800000;
          }
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 0x38;
          piVar7 = extraout_EDX;
        } while (iVar10 < extraout_EDX[1]);
      }
      local_10 = local_10 + 1;
      iVar9 = iVar9 + 0x1c;
    } while (local_10 < *(int *)((int)this + 4));
  }
  iVar9 = *(int *)((int)this + 8);
  iVar10 = iVar9;
  if (iVar9 == 0) {
    iVar10 = *(int *)((int)this + 4);
  }
  iVar8 = *(int *)this;
  pfVar5 = *(float **)(iVar8 + (iVar10 + -1) * 0x1c);
  iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 8) * *(int *)(param_1 + 8);
  if (*pfVar5 < DAT_3008fd04 - (float)iVar10 * 0.5) {
    fVar1 = *pfVar5;
    iVar2 = iVar9;
    if (iVar9 == 0) {
      iVar2 = *(int *)((int)this + 4);
    }
    *(int *)((int)this + 8) = iVar2 + -1;
    FUN_30017e30((void *)(iVar8 + *(int *)((int)this + 8) * 0x1c),param_2,param_1,
                 (float)iVar10 + fVar1,(int *)(iVar8 + iVar9 * 0x1c));
  }
  DAT_300a40f8 = 0;
  FUN_30018200(this);
  iVar9 = 0x20;
  fVar1 = *(float *)(param_2 + 0x7c);
  puVar6 = &DAT_300a37e0;
  do {
    FUN_30017960(puVar6,fVar1);
    puVar6 = (undefined *)(extraout_ECX_00 + 0x48);
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  DAT_300a4610 = 0x302;
  DAT_300a43fc = 0x303;
  if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 | 1;
  if (((byte)DAT_300a4588 & 1) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a446c)(0x1d01);
  FUN_300062a0(0x2100);
  (*DAT_300a43c8)(0);
  (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
  puVar6 = &DAT_300a37e0;
  iVar9 = 0x20;
  do {
    FUN_30017a50((int)puVar6);
    puVar6 = puVar6 + 0x48;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  (*DAT_300a43c8)(1);
  return;
}

