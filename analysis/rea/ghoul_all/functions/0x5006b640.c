// rea decompile_all
// name: FUN_5006b640
// address: 0x5006b640
// body: available
// range: 0x5006b640-0x5006b72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5006b72d to 0x5006d520 FUN_5006d520 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5006b640(void)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_5015c4d8 == (int *)0x0) {
    DAT_5015c4d8 = operator_new(0xc);
    if (DAT_5015c4d8 == (int *)0x0) {
      DAT_5015c4d8 = (int *)0x0;
    }
    else {
      *DAT_5015c4d8 = (int)&PTR_FUN_501291e8;
    }
  }
  puVar1 = (undefined4 *)*DAT_5015c4d8;
  lVar3 = __ftol();
  (*(code *)*puVar1)((int)lVar3);
  (*DAT_5015caac)(s_dm_generic_50144cd8);
  iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar2 != 0) {
    (*DAT_5015c9f8)(s_environ_irespawn_50144c24);
    (*DAT_5015c9f8)(s_environ_prespawn_50144cc4);
    (*DAT_5015c9f4)(s_dm_armorpu_wav_50144cb4);
    (*DAT_5015c9f4)(s_dm_irespawn_wav_50144c14);
    (*DAT_5015c9f4)(s_dm_frag_wav_50144ca8);
    (*DAT_5015c9f4)(s_dm_selffrag_wav_50144c98);
    (*DAT_5015c9f4)(s_dm_healthpu_wav_50144c88);
    (*DAT_5015c9f4)(s_dm_prespawn_wav_50144c78);
  }
  (**(code **)(*DAT_5015c4d8 + 8))();
  return;
}

