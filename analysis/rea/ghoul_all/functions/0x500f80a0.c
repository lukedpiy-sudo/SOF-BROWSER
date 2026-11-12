// rea decompile_all
// name: FUN_500f80a0
// address: 0x500f80a0
// body: available
// range: 0x500f80a0-0x500f84e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f80a0(uint param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float local_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_18 [3];
  float afStack_c [3];
  
  local_5c = 0xbf800000;
  local_58 = 0xbf800000;
  local_54 = 0xbf800000;
  local_68 = 0x3f800000;
  local_64 = 0x3f800000;
  local_60 = 0x3f800000;
  if (*(float *)(DAT_5015ccc0 + 0x18) < 0.0) {
    uVar5 = param_1;
    if (*(float *)(DAT_5015c9d0 + 0x18) == 0.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x5c0) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x68) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 100) = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x5bc) = 0;
      return;
    }
  }
  else {
    if (((((float)_DAT_5015467c != *(float *)(DAT_5015ccc0 + 0x18)) || (DAT_5018b434 == 0)) ||
        (*(int *)(DAT_5018b434 + 0x78) == 0)) ||
       ((*(int *)(DAT_5018b434 + 0x2ec) < 1 || (*(int *)(DAT_5018b434 + 0x450) == 0)))) {
      bVar2 = true;
      local_a8 = 0;
      uVar5 = 0;
      uVar3 = 0;
      if (0.0 < *(float *)(DAT_5015ccc0 + 0x18)) {
        do {
          uVar3 = uVar5;
          if (!bVar2) break;
          do {
            uVar3 = FUN_500c26a0(uVar3,0x1b4,&DAT_5015468c,(void *)0x2);
            if (uVar3 == uVar5) {
              uVar3 = 0;
              bVar2 = false;
              break;
            }
          } while (((uVar3 == 0) || (*(int *)(uVar3 + 0x2ec) < 1)) ||
                  ((*(int **)(uVar3 + 0x450) == (int *)0x0 ||
                   ((iVar4 = (**(code **)(**(int **)(uVar3 + 0x450) + 0x44))(), iVar4 == 0 ||
                    (iVar4 = (**(code **)(**(int **)(uVar3 + 0x450) + 0x7c))(), iVar4 == 0))))));
          local_a8 = local_a8 + 1;
          uVar5 = uVar3;
        } while ((float)local_a8 < *(float *)(DAT_5015ccc0 + 0x18));
      }
      lVar6 = __ftol();
      _DAT_5015467c = (int)lVar6;
      DAT_5018b434 = uVar3;
    }
    uVar5 = DAT_5018b434;
    if (DAT_5018b434 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x5c0) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x68) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 100) = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x5bc) = 0;
      *(undefined4 *)(DAT_5015ccc0 + 0x18) = 0;
      return;
    }
    (**(code **)(**(int **)(DAT_5018b434 + 0x450) + 0xc0))();
  }
  if (uVar5 == 0) {
    uVar5 = param_1;
  }
  local_74 = *(float *)(*(int *)(param_1 + 0x74) + 0x1c);
  fVar1 = *(float *)(uVar5 + 0x14);
  if (fVar1 - _DAT_5018b3ec <= 180.0) {
    if (fVar1 - _DAT_5018b3ec < -180.0) {
      fVar1 = fVar1 + 360.0;
    }
  }
  else {
    fVar1 = fVar1 - 360.0;
  }
  _DAT_5018b3ec = (fVar1 - _DAT_5018b3ec) * 0.25 + _DAT_5018b3ec;
  uStack_6c = 0;
  fStack_70 = _DAT_5018b3ec;
  FUN_500fdd70(&local_74,&fStack_8c,afStack_c,afStack_18);
  fStack_a4 = *(float *)(uVar5 + 4);
  fStack_90 = -*(float *)(DAT_5015c948 + 0x18);
  fStack_98 = fStack_8c * fStack_90;
  fStack_a0 = *(float *)(uVar5 + 8);
  fStack_94 = fStack_88 * fStack_90;
  fStack_90 = fStack_84 * fStack_90;
  fStack_9c = (float)*(int *)(uVar5 + 0x304) + *(float *)(uVar5 + 0xc);
  fStack_b4 = ((fStack_a4 + fStack_98) - _DAT_5018b404) * 0.5;
  fStack_b0 = ((fStack_a0 + fStack_94) - _DAT_5018b408) * 0.5;
  fStack_ac = ((fStack_90 + fStack_9c) - _DAT_5018b40c) * 0.5;
  fStack_c0 = fStack_b4 + _DAT_5018b404;
  fStack_bc = fStack_b0 + _DAT_5018b408;
  fStack_b8 = fStack_ac + _DAT_5018b40c;
  (*DAT_5015cac0)(&fStack_a4,&local_5c,&local_68,&fStack_c0,uVar5,3,auStack_50);
  if (fStack_4c != 1.0) {
    fStack_c0 = fStack_48;
    fStack_bc = fStack_44;
    fStack_b8 = fStack_40;
  }
  fStack_b4 = -fStack_98;
  fStack_b0 = -fStack_94;
  fStack_ac = fStack_90;
  FUN_500fe050(&fStack_b4);
  FUN_500c3570(&fStack_b4,&fStack_80);
  iVar4 = *(int *)(param_1 + 0x74);
  *(float *)(iVar4 + 0x58) = -fStack_80;
  *(undefined4 *)(iVar4 + 0x5c) = uStack_7c;
  *(undefined4 *)(iVar4 + 0x60) = uStack_78;
  iVar4 = *(int *)(param_1 + 0x74);
  *(float *)(iVar4 + 0x4c) = fStack_c0 * 8.0;
  *(float *)(iVar4 + 0x50) = fStack_bc * 8.0;
  *(float *)(iVar4 + 0x54) = fStack_b8 * 8.0;
  _DAT_5018b404 = fStack_c0;
  _DAT_5018b408 = fStack_bc;
  _DAT_5018b40c = fStack_b8;
  return;
}

