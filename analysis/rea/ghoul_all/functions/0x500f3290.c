// rea decompile_all
// name: FUN_500f3290
// address: 0x500f3290
// body: available
// range: 0x500f3290-0x500f3512 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f3290(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  char *_Str2;
  int iVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  float fStack_18;
  float fStack_14;
  uint uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*DAT_5015c4d8 + 0x84))();
    if (iVar2 == 0) {
      uStack_10 = 0;
      fStack_14 = 0.0;
      uVar3 = FUN_500c26a0(0,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0);
      if (uVar3 == 0) {
LAB_500f33e4:
        uStack_10 = FUN_500c26a0(0,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0);
      }
      else {
        do {
          fStack_18 = 9999999.0;
          iVar2 = 1;
          lVar7 = __ftol();
          if (0 < (int)lVar7) {
            iVar5 = 0x464;
            iVar4 = DAT_5015cca0;
            do {
              if ((*(int *)(iVar5 + 0x78 + iVar4) != 0) && (0 < *(int *)(iVar5 + 0x2ec + iVar4))) {
                fStack_c = *(float *)(uVar3 + 4) - *(float *)(iVar5 + 4 + iVar4);
                iVar4 = iVar5 + 4 + iVar4;
                fStack_8 = *(float *)(uVar3 + 8) - *(float *)(iVar4 + 4);
                fStack_4 = *(float *)(uVar3 + 0xc) - *(float *)(iVar4 + 8);
                fVar6 = FUN_500fe130(&fStack_c);
                iVar4 = DAT_5015cca0;
                if (fVar6 < (float10)fStack_18) {
                  fStack_18 = (float)fVar6;
                }
              }
              iVar2 = iVar2 + 1;
              iVar5 = iVar5 + 0x464;
              lVar7 = __ftol();
            } while (iVar2 <= (int)lVar7);
          }
          if (fStack_14 < fStack_18) {
            fStack_14 = fStack_18;
            uStack_10 = uVar3;
          }
          uVar3 = FUN_500c26a0(uVar3,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0);
        } while (uVar3 != 0);
        if (uStack_10 == 0) goto LAB_500f33e4;
      }
      if (uStack_10 != 0) {
        if (*(int *)(param_1 + 0x458) != 0) {
          uVar1 = FUN_500616c0(&DAT_50159a60,*(uint *)(uStack_10 + 0x318));
          *(undefined2 *)(*(int *)(param_1 + 0x45c) + 0x408) = uVar1;
        }
        goto LAB_500f342c;
      }
    }
    else {
      uStack_10 = FUN_500f2fd0(param_1);
LAB_500f342c:
      if (uStack_10 != 0) goto LAB_500f34dd;
    }
    (*DAT_5015cb10)(s_Couldn_t_find_deathmatch_spawn_p_50154510);
    if (uStack_10 != 0) goto LAB_500f34dd;
  }
  for (uStack_10 = FUN_500c26a0(0,0x1b4,s_info_player_start_5014fe74,(void *)0x0); uStack_10 != 0;
      uStack_10 = FUN_500c26a0(uStack_10,0x1b4,s_info_player_start_5014fe74,(void *)0x0)) {
    _Str2 = *(char **)(uStack_10 + 0x1c8);
    if (DAT_5015d6c8 == '\0') {
LAB_500f3487:
      if (_Str2 == (char *)0x0) goto LAB_500f34dd;
    }
    else if (_Str2 != (char *)0x0) {
      _Str2 = (char *)__strcmpi(&DAT_5015d6c8,_Str2);
      goto LAB_500f3487;
    }
  }
  if (DAT_5015d6c8 == '\0') {
    uStack_10 = FUN_500c26a0(0,0x1b4,s_info_player_start_5014fe74,(void *)0x0);
  }
  if (uStack_10 == 0) {
    (*DAT_5015cb10)(s_Couldn_t_find_spawn_point__s_501544f0,&DAT_5015d6c8);
  }
LAB_500f34dd:
  *param_2 = *(undefined4 *)(uStack_10 + 4);
  param_2[1] = *(undefined4 *)(uStack_10 + 8);
  param_2[2] = *(float *)(uStack_10 + 0xc) + 9.0;
  *param_3 = *(undefined4 *)(uStack_10 + 0x10);
  param_3[1] = *(undefined4 *)(uStack_10 + 0x14);
  param_3[2] = *(undefined4 *)(uStack_10 + 0x18);
  return;
}

