// rea decompile_all
// name: FUN_500f2e20
// address: 0x500f2e20
// body: available
// range: 0x500f2e20-0x500f2fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_500f2e20(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  float local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  local_14 = 99999.0;
  local_18 = 99999.0;
  local_1c = 0;
  local_20 = 0;
  uVar1 = FUN_500c26a0(0,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0);
  iVar5 = 0;
  if (uVar1 != 0) {
    do {
      iVar4 = iVar5;
      iVar5 = iVar4 + 1;
      local_24 = 9999999.0;
      iVar3 = 1;
      lVar8 = __ftol();
      if (0 < (int)lVar8) {
        iVar6 = 0x464;
        iVar2 = DAT_5015cca0;
        do {
          if ((*(int *)(iVar6 + 0x78 + iVar2) != 0) && (0 < *(int *)(iVar6 + 0x2ec + iVar2))) {
            local_c = *(float *)(uVar1 + 4) - *(float *)(iVar6 + 4 + iVar2);
            iVar2 = iVar6 + 4 + iVar2;
            local_8 = *(float *)(uVar1 + 8) - *(float *)(iVar2 + 4);
            local_4 = *(float *)(uVar1 + 0xc) - *(float *)(iVar2 + 8);
            fVar7 = FUN_500fe130(&local_c);
            iVar2 = DAT_5015cca0;
            if (fVar7 < (float10)local_24) {
              local_24 = (float)fVar7;
            }
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x464;
          lVar8 = __ftol();
        } while (iVar3 <= (int)lVar8);
      }
      if (local_18 <= local_24) {
        if (local_24 < local_14) {
          local_14 = local_24;
          local_1c = uVar1;
        }
      }
      else {
        local_18 = local_24;
        local_20 = uVar1;
      }
      uVar1 = FUN_500c26a0(uVar1,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0);
    } while (uVar1 != 0);
    if (iVar5 != 0) {
      if (iVar5 < 3) {
        local_1c = 0;
        local_20 = 0;
      }
      else {
        iVar5 = iVar4 + -1;
      }
      uVar1 = FUN_50107636();
      iVar5 = (int)uVar1 % iVar5;
      uVar1 = 0;
      do {
        uVar1 = FUN_500c26a0(uVar1,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0);
        if ((uVar1 == local_20) || (iVar3 = iVar5, uVar1 == local_1c)) {
          iVar3 = iVar5 + 1;
        }
        iVar5 = iVar3 + -1;
      } while (iVar3 != 0);
      return uVar1;
    }
  }
  return 0;
}

