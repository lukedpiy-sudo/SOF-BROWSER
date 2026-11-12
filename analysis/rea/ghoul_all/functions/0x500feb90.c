// rea decompile_all
// name: FUN_500feb90
// address: 0x500feb90
// body: available
// range: 0x500feb90-0x500fecba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500feb90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = FUN_500a5c10(&DAT_5015c79c,s_Items_Projectiles_501338d4,s_flashpak_50143c40,1,
                          (char *)0x0,(char *)0x0,'\0');
    FUN_500a4de0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x500febd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_5015c9f4)();
    return;
  case 2:
    puVar1 = FUN_500a5c10(&DAT_5015c79c,s_Items_Projectiles_501338d4,&DAT_50144358,1,(char *)0x0,
                          (char *)0x0,'\0');
    FUN_500a4de0(puVar1);
    (*DAT_5015c9f4)(s_Weapons_C4_c4attch_wav_501559d0);
                    /* WARNING: Could not recover jumptable at 0x500fec0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_5015c9f4)();
    return;
  case 3:
    (*DAT_5015c9f4)(s_Weapons_Goggles_on_wav_501559a4);
                    /* WARNING: Could not recover jumptable at 0x500fec2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_5015c9f4)();
    return;
  case 4:
    puVar1 = FUN_500a5c10(&DAT_5015c79c,s_Items_Projectiles_501338d4,s_claymore_50143c20,1,
                          (char *)0x0,(char *)0x0,'\0');
    FUN_500a4de0(puVar1);
    (*DAT_5015c9f8)(s_weapons_world_claymore_50155974);
    (*DAT_5015c9f4)(s_Weapons_C4_c4attch_wav_501559d0);
                    /* WARNING: Could not recover jumptable at 0x500fec75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_5015c9f4)();
    return;
  default:
    return;
  case 6:
    puVar1 = FUN_500a5c10(&DAT_5015c79c,s_Items_Projectiles_501338d4,s_grenade_501338e8,1,
                          (char *)0x0,(char *)0x0,'\0');
    FUN_500a4de0(puVar1);
    (*DAT_5015c9f8)(s_weapons_world_grenadeexplode_50155938);
                    /* WARNING: Could not recover jumptable at 0x500fecb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_5015c9f4)();
    return;
  }
}

