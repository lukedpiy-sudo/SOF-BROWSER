// rea decompile_all
// name: FUN_500f6510
// address: 0x500f6510
// body: available
// range: 0x500f6510-0x500f6709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f6510(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (_DAT_5015d1c8 == 0.0) {
    DAT_5015d8d4 = 0;
    iVar5 = 0;
    lVar6 = __ftol();
    if (0 < (int)lVar6) {
      iVar4 = 0x464;
      do {
        if ((*(int *)(iVar4 + 0x78 + DAT_5015cca0) != 0) &&
           (((int *)(iVar4 + DAT_5015cca0))[0xbb] < 1)) {
          FUN_500f3550((int *)(iVar4 + DAT_5015cca0));
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x464;
        lVar6 = __ftol();
      } while (iVar5 < (int)lVar6);
    }
    _DAT_5015d1c8 = DAT_5015ccdc;
    DAT_5015d1cc = *(uint **)(param_1 + 0x300);
    puVar1 = FUN_50107030(DAT_5015d1cc,&DAT_501504e0);
    if ((puVar1 == (uint *)0x0) && (iVar5 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar5 == 0)) {
      DAT_5015d1d0 = 1;
      *(undefined4 *)(*(int *)(DAT_5015cca0 + 0x4d8) + 0x6c) = 0;
      return;
    }
    DAT_5015d1d0 = 0;
    uVar2 = FUN_500c26a0(0,0x1b4,s_info_player_intermission_5014fe88,(void *)0x0);
    if (uVar2 == 0) {
      uVar2 = FUN_500c26a0(0,0x1b4,s_info_player_start_5014fe74,(void *)0x0);
      if (uVar2 == 0) {
        uVar2 = FUN_500c26a0(0,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0);
      }
    }
    else {
      uVar3 = FUN_50107636();
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar2 = FUN_500c26a0(uVar2,0x1b4,s_info_player_intermission_5014fe88,(void *)0x0);
        if (uVar2 == 0) {
          uVar2 = FUN_500c26a0(0,0x1b4,s_info_player_intermission_5014fe88,(void *)0x0);
        }
      }
    }
    DAT_5015d1d4 = *(undefined4 *)(uVar2 + 4);
    DAT_5015d1d8 = *(undefined4 *)(uVar2 + 8);
    DAT_5015d1dc = *(undefined4 *)(uVar2 + 0xc);
    DAT_5015d1e0 = *(undefined4 *)(uVar2 + 0x10);
    DAT_5015d1e4 = *(undefined4 *)(uVar2 + 0x14);
    DAT_5015d1e8 = *(undefined4 *)(uVar2 + 0x18);
    lVar6 = __ftol();
    iVar5 = 0;
    if (0 < (int)lVar6) {
      do {
        iVar4 = iVar5 + 1;
        if (*(int *)(DAT_5015cca0 + 0x78 + iVar4 * 0x464) != 0) {
          FUN_500f63e0(DAT_5015cca0 + iVar4 * 0x464,(uint)(iVar5 == 0));
        }
        lVar6 = __ftol();
        iVar5 = iVar4;
      } while (iVar4 < (int)lVar6);
    }
  }
  return;
}

