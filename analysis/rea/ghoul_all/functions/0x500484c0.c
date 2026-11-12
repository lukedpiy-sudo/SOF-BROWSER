// rea decompile_all
// name: FUN_500484c0
// address: 0x500484c0
// body: available
// range: 0x500484c0-0x5004872b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500484c0(void *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float *local_20;
  float local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  float local_c [3];
  
  pfVar2 = param_1;
  local_1c = 0.0;
  local_20 = (float *)0x0;
  local_14 = 0;
  local_18 = 9999999.0;
  if ((*(int *)((int)this + 4) == 0) ||
     ((uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x88) < 2)) {
    local_10 = 0;
  }
  else {
    uVar4 = 1;
    uVar6 = FUN_50049a70((int)this);
    if (1 < uVar6) {
      iVar3 = 0x88;
      do {
        FUN_50048330((float *)(*(int *)((int)this + 4) + 0x18 + iVar3),param_1,local_c);
        fVar7 = FUN_500fe130(local_c);
        if (fVar7 < (float10)local_18) {
          local_18 = (float)fVar7;
          local_14 = uVar4;
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x88;
        uVar6 = FUN_50049a70((int)this);
      } while (uVar4 < uVar6);
    }
    local_1c = local_18;
    local_10 = local_14;
  }
  uVar6 = 0;
  local_14 = 0;
  param_1 = (float *)0x4b18967f;
  if ((*(int *)((int)this + 0x186a18) == 0) ||
     ((uint)((*(int *)((int)this + 0x186a1c) - *(int *)((int)this + 0x186a18)) / 0x88) < 2)) {
    local_14 = 0;
  }
  else {
    iVar3 = FUN_50049a70((int)this + 0x186a14);
    if (iVar3 != 0) {
      local_18 = 0.0;
      do {
        FUN_50048330((float *)((int)local_18 + 0x18 + *(int *)((int)this + 0x186a18)),pfVar2,local_c
                    );
        fVar7 = FUN_500fe130(local_c);
        if (fVar7 < (float10)(float)param_1) {
          param_1 = (float *)(float)fVar7;
          local_14 = uVar6;
        }
        local_18 = (float)((int)local_18 + 0x88);
        uVar6 = uVar6 + 1;
        uVar4 = FUN_50049a70((int)this + 0x186a14);
      } while (uVar6 < uVar4);
    }
    local_20 = param_1;
    if ((float)param_1 < 0.0 == ((float)param_1 == 0.0)) goto LAB_5004865e;
  }
  if (local_1c < 0.0 != (local_1c == 0.0)) {
    return;
  }
LAB_5004865e:
  if (((float)local_20 <= 0.0) || (local_1c <= (float)local_20)) {
    if (128.0 < local_1c) {
      return;
    }
    iVar5 = local_10 * 0x88;
    pfVar1 = (float *)(iVar5 + 0x18 + *(int *)((int)this + 4));
    *pfVar1 = *pfVar2;
    pfVar1[1] = pfVar2[1];
    pfVar1[2] = pfVar2[2];
    iVar3 = *(int *)((int)this + 4);
  }
  else {
    if (128.0 < (float)local_20) {
      return;
    }
    iVar5 = local_14 * 0x88;
    pfVar1 = (float *)(iVar5 + 0x18 + *(int *)((int)this + 0x186a18));
    *pfVar1 = *pfVar2;
    pfVar1[1] = pfVar2[1];
    pfVar1[2] = pfVar2[2];
    iVar3 = *(int *)((int)this + 0x186a18);
  }
  iVar3 = *(int *)(iVar5 + 0x48 + iVar3);
  *(float *)(iVar3 + 4) = *pfVar2;
  *(float *)(iVar3 + 8) = pfVar2[1];
  *(float *)(iVar3 + 0xc) = pfVar2[2];
  FUN_500adb20((byte *)s_Point_moved_50142960);
  return;
}

