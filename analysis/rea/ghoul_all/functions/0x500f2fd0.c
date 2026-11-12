// rea decompile_all
// name: FUN_500f2fd0
// address: 0x500f2fd0
// body: available
// range: 0x500f2fd0-0x500f3285 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500f303a to 0x500f2e20 FUN_500f2e20 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500f2fd0(int param_1)

{
  undefined2 uVar1;
  char *_Str1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  float local_2c;
  char *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 0x324);
  if (iVar2 == 1) {
LAB_500f303f:
    local_28 = s_info_player_team1_50143254;
    local_24 = 1;
  }
  else {
    if (iVar2 != 2) {
      _Str1 = FUN_500fe320((byte *)(*(int *)(param_1 + 0x74) + 0xcc),(byte *)s_teamname_50144e40);
      iVar2 = __strcmpi(_Str1,&DAT_50146a90);
      if (iVar2 == 0) goto LAB_500f303f;
      iVar2 = __strcmpi(_Str1,&DAT_50146a98);
      if (iVar2 != 0) {
        uVar3 = FUN_500f2e20();
        return uVar3;
      }
    }
    local_28 = s_info_player_team2_50143240;
    local_24 = 2;
  }
  local_14 = 99999.0;
  local_18 = 99999.0;
  local_1c = 0;
  local_20 = 0;
  uVar3 = FUN_500c26a0(0,0x1b4,local_28,(void *)0x0);
  iVar2 = 0;
  if (uVar3 != 0) {
    do {
      iVar6 = iVar2;
      iVar2 = iVar6 + 1;
      local_2c = 9999999.0;
      iVar5 = 1;
      lVar9 = __ftol();
      if (0 < (int)lVar9) {
        iVar7 = 0x464;
        iVar4 = DAT_5015cca0;
        do {
          if ((*(int *)(iVar7 + 0x78 + iVar4) != 0) && (0 < *(int *)(iVar7 + 0x2ec + iVar4))) {
            local_c = *(float *)(uVar3 + 4) - *(float *)(iVar7 + 4 + iVar4);
            iVar4 = iVar7 + 4 + iVar4;
            local_8 = *(float *)(uVar3 + 8) - *(float *)(iVar4 + 4);
            local_4 = *(float *)(uVar3 + 0xc) - *(float *)(iVar4 + 8);
            fVar8 = FUN_500fe130(&local_c);
            iVar4 = DAT_5015cca0;
            if (fVar8 < (float10)local_2c) {
              local_2c = (float)fVar8;
            }
          }
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 0x464;
          lVar9 = __ftol();
        } while (iVar5 <= (int)lVar9);
      }
      if (local_18 <= local_2c) {
        if (local_2c < local_14) {
          local_14 = local_2c;
          local_1c = uVar3;
        }
      }
      else {
        local_18 = local_2c;
        local_20 = uVar3;
      }
      uVar3 = FUN_500c26a0(uVar3,0x1b4,local_28,(void *)0x0);
    } while (uVar3 != 0);
    if (iVar2 != 0) {
      if (iVar2 < 3) {
        local_1c = 0;
        local_20 = 0;
      }
      else {
        iVar2 = iVar6 + -1;
      }
      uVar3 = FUN_50107636();
      iVar2 = (int)uVar3 % iVar2;
      uVar3 = 0;
      do {
        uVar3 = FUN_500c26a0(uVar3,0x1b4,local_28,(void *)0x0);
        if ((uVar3 == local_20) || (iVar5 = iVar2, uVar3 == local_1c)) {
          iVar5 = iVar2 + 1;
        }
        iVar2 = iVar5 + -1;
      } while (iVar5 != 0);
      if (local_24 == 1) {
        if (uVar3 == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x458) == 0) {
          return uVar3;
        }
        uVar1 = FUN_500617f0(&DAT_50159a60,*(uint *)(uVar3 + 0x318));
      }
      else {
        if (local_24 != 2) {
          return uVar3;
        }
        if (uVar3 == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x458) == 0) {
          return uVar3;
        }
        uVar1 = FUN_50061920(&DAT_50159a60,*(uint *)(uVar3 + 0x318));
      }
      *(undefined2 *)(*(int *)(param_1 + 0x45c) + 0x408) = uVar1;
      return uVar3;
    }
  }
  uVar3 = FUN_500f2e20();
  if ((uVar3 != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    uVar1 = FUN_500616c0(&DAT_50159a60,*(uint *)(uVar3 + 0x318));
    *(undefined2 *)(*(int *)(param_1 + 0x45c) + 0x408) = uVar1;
    return uVar3;
  }
  return uVar3;
}

