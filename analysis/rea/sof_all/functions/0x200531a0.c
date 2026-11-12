// rea decompile_all
// name: FUN_200531a0
// address: 0x200531a0
// body: available
// range: 0x200531a0-0x200534f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200531a0(void)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_20;
  float local_18 [6];
  
  sVar1 = *(short *)(DAT_20390290 + 0x26);
  sVar2 = *(short *)(DAT_20390290 + 0x28);
  _DAT_20390240 = 0;
  _DAT_2039024c = 0;
  VectorNormalize(&DAT_20390238);
  VectorNormalize(&DAT_20390244);
  iVar8 = 0;
  do {
    iVar6 = iVar8 + 4;
    *(float *)((int)local_18 + iVar8 + 0xc) =
         (float)(int)sVar1 * *(float *)((int)&DAT_20390238 + iVar8) +
         (float)(int)sVar2 * *(float *)((int)&DAT_20390244 + iVar8);
    iVar8 = iVar6;
  } while (iVar6 < 8);
  local_18[5] = 0.0;
  FUN_20052db0(local_18 + 3);
  local_18[0] = local_18[3];
  local_18[1] = local_18[4];
  local_18[2] = local_18[5];
  fVar9 = (float10)VectorNormalize(local_18);
  iVar8 = DAT_20390290;
  local_20 = (float)fVar9;
  fVar5 = _DAT_201375f4;
  if (((*(byte *)(DAT_20390290 + 0x10) & 1) != 0) && ((*(byte *)(DAT_20390290 + 0x10) & 4) != 0)) {
    fVar5 = _DAT_201375f8;
  }
  if (fVar5 < local_20) {
    local_18[5] = (fVar5 / local_20) * local_18[5];
    local_20 = fVar5;
  }
  fVar5 = local_20 -
          (DAT_2039022c * local_18[0] + DAT_20390230 * local_18[1] + local_18[2] * DAT_20390234);
  bVar3 = fVar5 < 0.0;
  bVar4 = fVar5 == 0.0;
  if (DAT_20390288 == 0) {
    if (*(int *)(DAT_20390290 + 0xe4) == 0) {
      if (bVar3 == bVar4) {
        local_20 = _DAT_20137600 * _DAT_2039028c * DAT_2039025c * local_20;
        if (fVar5 < local_20) {
          local_20 = fVar5;
        }
        iVar6 = 0;
        do {
          iVar7 = iVar6 + 4;
          *(float *)((int)&DAT_2039022c + iVar6) =
               local_20 * *(float *)((int)local_18 + iVar6) + *(float *)((int)&DAT_2039022c + iVar6)
          ;
          iVar6 = iVar7;
        } while (iVar7 < 0xc);
      }
      DAT_20390234 = DAT_20390234 - (float)(int)*(short *)(iVar8 + 0x12) * DAT_2039025c;
    }
    else {
      if (bVar3 == bVar4) {
        local_20 = _DAT_201375fc * _DAT_2039028c * DAT_2039025c * local_20;
        if (fVar5 < local_20) {
          local_20 = fVar5;
        }
        iVar8 = 0;
        do {
          iVar6 = iVar8 + 4;
          *(float *)((int)&DAT_2039022c + iVar8) =
               local_20 * *(float *)((int)local_18 + iVar8) + *(float *)((int)&DAT_2039022c + iVar8)
          ;
          iVar8 = iVar6;
        } while (iVar6 < 0xc);
      }
      DAT_20390234 = 0.0;
      if (DAT_2039022c == 0.0) {
        if (DAT_20390230 == 0.0) {
          DAT_20390234 = 0.0;
          return;
        }
        FUN_20052a10(1);
        return;
      }
    }
  }
  else {
    if (bVar3 == bVar4) {
      local_20 = _DAT_201375fc * _DAT_2039028c * DAT_2039025c * local_20;
      if (fVar5 < local_20) {
        local_20 = fVar5;
      }
      iVar6 = 0;
      do {
        iVar7 = iVar6 + 4;
        *(float *)((int)&DAT_2039022c + iVar6) =
             local_20 * *(float *)((int)local_18 + iVar6) + *(float *)((int)&DAT_2039022c + iVar6);
        iVar6 = iVar7;
      } while (iVar7 < 0xc);
    }
    if (local_18[5] == 0.0) {
      if (DAT_20390234 <= 0.0) {
        DAT_20390234 = (float)(int)*(short *)(iVar8 + 0x12) * DAT_2039025c + DAT_20390234;
        if (0.0 < DAT_20390234) {
          DAT_20390234 = 0.0;
          FUN_20052a10(1);
          return;
        }
      }
      else {
        DAT_20390234 = DAT_20390234 - (float)(int)*(short *)(iVar8 + 0x12) * DAT_2039025c;
        if (DAT_20390234 < 0.0) {
          DAT_20390234 = 0.0;
          FUN_20052a10(1);
          return;
        }
      }
    }
  }
  FUN_20052a10(1);
  return;
}

