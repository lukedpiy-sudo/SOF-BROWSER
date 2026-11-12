// rea decompile_all
// name: FUN_200f8ab0
// address: 0x200f8ab0
// body: available
// range: 0x200f8ab0-0x200f8dfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f8ab0(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iStack_704;
  undefined4 local_700;
  int local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined1 auStack_6f0 [2];
  short sStack_6ee;
  int iStack_6ec;
  uint local_6e0;
  undefined4 auStack_6dc [64];
  undefined1 auStack_5dc [1500];
  
  iVar9 = 0;
  iVar2 = param_1[0x1b];
  iVar10 = 0;
  uVar8 = 0;
  local_6fc = 0;
  local_6f8 = 0;
  local_6f4 = 0;
  local_700 = 0x10;
  local_6e0 = 0;
  if (0 < iVar2) {
    puVar7 = (undefined4 *)param_1[2];
    do {
      if ((puVar7[1] != 0) && (iVar10 = iVar10 + 1, uVar8 < 0x40)) {
        auStack_6dc[uVar8] = *puVar7;
        uVar8 = local_6e0 + 1;
        local_6e0 = uVar8;
      }
      puVar7 = puVar7 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_6fc = iVar10;
    if ((((0 < iVar10) && (iVar2 = Ordinal_18(0x40,&local_6e0,0,0,&local_6f8), iVar2 != -1)) &&
        (iVar2 != 0)) && (iStack_704 = 0, 0 < (int)param_1[0x1b])) {
      do {
        if ((*(int *)(param_1[2] + 4 + iVar9) != 0) &&
           (iVar2 = Ordinal_151(*(undefined4 *)(param_1[2] + iVar9),&local_6e0), iVar2 != 0)) {
          local_700 = 0x10;
          iVar10 = Ordinal_17(*(undefined4 *)(param_1[2] + iVar9),auStack_5dc,0x5db,0,auStack_6f0,
                              &local_700);
          iVar2 = param_1[2] + iVar9;
          if ((iStack_6ec == *(int *)(param_1[2] + 0x10 + iVar9)) &&
             (sStack_6ee == *(short *)(iVar2 + 0xe))) {
            if (iVar10 == -1) {
              *(undefined4 *)(iVar2 + 4) = 0;
            }
            else {
              auStack_5dc[iVar10] = 0;
              iVar10 = FUN_200fa6a0(auStack_5dc,s__final__2015a8e8);
              iVar2 = *(int *)(param_1[2] + 4 + iVar9);
              if (*(short *)(iVar2 + 6) == 9999) {
                DVar3 = GetTickCount();
                *(short *)(iVar2 + 6) = (short)DVar3 - *(short *)(param_1[2] + 8 + iVar9);
              }
              FUN_200f79c0(iVar2,auStack_5dc);
              if (iVar10 != 0) {
                iVar10 = FUN_200f44a0(param_1[1]);
                (*(code *)param_1[0x1e])
                          (param_1,2,param_1[0x1f],iVar2,(param_1[0x1c] * 100) / iVar10);
                *(undefined4 *)(param_1[2] + 4 + iVar9) = 0;
              }
            }
          }
        }
        iStack_704 = iStack_704 + 1;
        iVar9 = iVar9 + 0x1c;
      } while (iStack_704 < (int)param_1[0x1b]);
    }
  }
  iVar2 = 0;
  if (0 < (int)param_1[0x1b]) {
    iVar9 = 0;
    do {
      if (*(int *)(iVar9 + 4 + param_1[2]) != 0) {
        iVar10 = iVar9 + param_1[2];
        DVar3 = GetTickCount();
        if (3000 < DVar3 - *(int *)(iVar10 + 8)) {
          *(undefined4 *)(iVar10 + 4) = 0;
        }
      }
      iVar2 = iVar2 + 1;
      iVar9 = iVar9 + 0x1c;
    } while (iVar2 < (int)param_1[0x1b]);
  }
  if ((param_1[0x1d] == 0) &&
     ((iVar2 = FUN_200f44a0(param_1[1]), (int)param_1[0x1c] < iVar2 || (local_6fc != 0)))) {
    iVar2 = 0;
    if ((int)param_1[0x1b] < 1) {
      return 0;
    }
    iVar9 = 0;
    do {
      iVar10 = param_1[0x1c];
      iVar4 = FUN_200f44a0(param_1[1]);
      if (iVar4 <= iVar10) {
        return 0;
      }
      if (*(int *)(iVar9 + 4 + param_1[2]) == 0) {
        piVar5 = (int *)FUN_200f44b0(param_1[1],iVar10);
        iVar10 = *piVar5;
        param_1[0x1c] = param_1[0x1c] + 1;
        *(int *)(iVar9 + 4 + param_1[2]) = iVar10;
        *(undefined2 *)(iVar9 + 0xc + param_1[2]) = 2;
        uVar6 = FUN_200f7bb0(iVar10);
        uVar6 = Ordinal_10(uVar6);
        *(undefined4 *)(iVar9 + 0x10 + param_1[2]) = uVar6;
        uVar6 = FUN_200f7bc0(iVar10);
        uVar1 = Ordinal_9(uVar6);
        *(undefined2 *)(iVar9 + 0xe + param_1[2]) = uVar1;
        Ordinal_20(*(undefined4 *)(param_1[2] + iVar9),
                   (&PTR_s__basic__2015a958)[*(int *)(iVar10 + 8)],
                   *(undefined4 *)(&DAT_201133d0 + *(int *)(iVar10 + 8) * 4),0,
                   (undefined4 *)(param_1[2] + iVar9) + 3,0x10);
        DVar3 = GetTickCount();
        *(DWORD *)(iVar9 + 8 + param_1[2]) = DVar3;
      }
      iVar2 = iVar2 + 1;
      iVar9 = iVar9 + 0x1c;
    } while (iVar2 < (int)param_1[0x1b]);
    return 0;
  }
  iVar2 = 0;
  if (0 < (int)param_1[0x1b]) {
    iVar9 = 0;
    do {
      Ordinal_3(*(undefined4 *)(param_1[2] + iVar9));
      iVar2 = iVar2 + 1;
      iVar9 = iVar9 + 0x1c;
    } while (iVar2 < (int)param_1[0x1b]);
  }
  *param_1 = 0;
  (*(code *)param_1[0x1e])(param_1,1,param_1[0x1f],0,0);
  return 0;
}

