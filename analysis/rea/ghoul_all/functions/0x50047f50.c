// rea decompile_all
// name: FUN_50047f50
// address: 0x50047f50
// body: available
// range: 0x50047f50-0x50048322 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50047f50(void *this,float *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  int *piVar9;
  float fVar10;
  float *pfVar11;
  void *pvVar12;
  float10 fVar13;
  float local_20;
  float local_1c;
  float local_18;
  float *local_14;
  int local_10;
  float local_c [3];
  
  fVar8 = 0.0;
  local_20 = 0.0;
  local_18 = 9999999.0;
  if ((*(int *)((int)this + 4) != 0) &&
     (1 < (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x88))) {
    fVar10 = 1.4013e-45;
    uVar3 = FUN_50049a70((int)this);
    if (1 < uVar3) {
      iVar7 = 0x88;
      do {
        FUN_50048330((float *)(iVar7 + 0x18 + *(int *)((int)this + 4)),param_1,local_c);
        fVar13 = FUN_500fe130(local_c);
        if (fVar13 < (float10)local_18) {
          local_18 = (float)fVar13;
          fVar8 = fVar10;
        }
        fVar10 = (float)((int)fVar10 + 1);
        iVar7 = iVar7 + 0x88;
        fVar4 = (float)FUN_50049a70((int)this);
      } while ((uint)fVar10 < (uint)fVar4);
    }
    local_20 = local_18;
  }
  iVar7 = (int)this + 0x186a14;
  local_14 = (float *)0x0;
  local_1c = 9999999.0;
  local_18 = fVar8;
  local_10 = iVar7;
  uVar3 = FUN_50049a70(iVar7);
  if (uVar3 < 2) {
    param_1 = (float *)0x0;
  }
  else {
    pfVar11 = (float *)0x0;
    iVar5 = FUN_50049a70(iVar7);
    if (iVar5 != 0) {
      iVar5 = 0;
      do {
        FUN_50048330((float *)(iVar5 + 0x18 + *(int *)((int)this + 0x186a18)),param_1,local_c);
        fVar13 = FUN_500fe130(local_c);
        if (fVar13 < (float10)local_1c) {
          local_1c = (float)fVar13;
          local_14 = pfVar11;
        }
        pfVar11 = (float *)((int)pfVar11 + 1);
        iVar5 = iVar5 + 0x88;
        pfVar6 = (float *)FUN_50049a70(iVar7);
      } while (pfVar11 < pfVar6);
    }
    param_1 = local_14;
    fVar8 = local_1c;
    if (local_1c < 0.0 == (local_1c == 0.0)) goto LAB_500480b1;
  }
  fVar8 = 1024.0;
LAB_500480b1:
  if (local_20 < 0.0 != (local_20 == 0.0)) {
    local_20 = 1024.0;
  }
  if (local_20 <= fVar8) {
    if (local_20 <= 128.0) {
      iVar7 = (int)local_18 * 0x88;
      FUN_500c3880(*(int **)(iVar7 + 0x48 + *(int *)((int)this + 4)));
      uVar3 = 0;
      param_1 = (float *)0x0;
      while ((iVar5 = *(int *)((int)this + 4), iVar5 != 0 &&
             (uVar3 < (uint)((*(int *)((int)this + 8) - iVar5) / 0x88)))) {
        pvVar12 = (void *)(iVar5 + (int)param_1);
        local_14 = (float *)**(float **)((int)pvVar12 + 4);
        if (local_14 == *(float **)((int)pvVar12 + 4)) {
LAB_500482b3:
          uVar3 = uVar3 + 1;
          param_1 = param_1 + 0x22;
        }
        else {
          do {
            if (local_14[2] == local_18) {
              FUN_500499f0(pvVar12,(int *)&local_1c,(int *)local_14);
              goto LAB_500482b3;
            }
            FUN_50049a30(&local_14,&local_10);
          } while (local_14 != *(float **)((int)pvVar12 + 4));
          uVar3 = uVar3 + 1;
          param_1 = param_1 + 0x22;
        }
      }
      iVar7 = *(int *)((int)this + 4) + iVar7;
      pvVar1 = *(void **)((int)this + 8);
      pvVar12 = (void *)(iVar7 + 0x88);
      if (pvVar12 != pvVar1) {
        iVar7 = iVar7 - (int)pvVar12;
        do {
          FUN_5004ab80((void *)((int)pvVar12 + iVar7),pvVar12);
          pvVar12 = (void *)((int)pvVar12 + 0x88);
        } while (pvVar12 != pvVar1);
      }
      FUN_50049d30((void *)((int)*(void **)((int)this + 8) + -0x88),*(void **)((int)this + 8));
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x88;
      FUN_500adb20((byte *)s_Point_deleted_50142920);
    }
  }
  else if (fVar8 <= 128.0) {
    FUN_500c3880(*(int **)((int)param_1 * 0x88 + 0x48 + *(int *)((int)this + 0x186a18)));
    iVar7 = 0;
    local_18 = 0.0;
    do {
      while( true ) {
        iVar2 = local_10;
        iVar5 = *(int *)((int)this + 4);
        if ((iVar5 == 0) || ((uint)((*(int *)((int)this + 8) - iVar5) / 0x88) <= (uint)local_18)) {
          piVar9 = (int *)(*(int *)((int)this + 0x186a18) + (int)param_1 * 0x88);
          FUN_5004a3c0(piVar9 + 0x22,*(int **)(local_10 + 8),piVar9);
          FUN_50049d30((void *)((int)*(void **)(iVar2 + 8) + -0x88),*(void **)(iVar2 + 8));
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -0x88;
          FUN_500adb20((byte *)s_Combat_Point_deleted_50142930);
          return;
        }
        pfVar11 = *(float **)(iVar5 + 0x10 + iVar7);
        local_14 = (float *)*pfVar11;
        if (local_14 != pfVar11) break;
LAB_50048191:
        local_18 = (float)((int)local_18 + 1);
        iVar7 = iVar7 + 0x88;
      }
      do {
        if ((float *)local_14[2] == param_1) {
          FUN_500499f0((void *)(iVar5 + 0xc + iVar7),(int *)&local_20,(int *)local_14);
          goto LAB_50048191;
        }
        FUN_50049a30(&local_14,&local_1c);
      } while (local_14 != *(float **)(iVar5 + 0x10 + iVar7));
      local_18 = (float)((int)local_18 + 1);
      iVar7 = iVar7 + 0x88;
    } while( true );
  }
  return;
}

