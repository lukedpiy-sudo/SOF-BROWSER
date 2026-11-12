// rea decompile_all
// name: GetGameAPI
// address: 0x500ad9b0
// body: available
// range: 0x500ad9b0-0x500adb1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl GetGameAPI(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = &DAT_5015c9f0;
                    /* 0xad9b0  1  GetGameAPI */
  for (iVar1 = 99; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  DAT_5015d28c = (int *)(*DAT_5015cae0)();
  iVar1 = (*DAT_5015cb4c)(s_ghl_mip_5014cd78,&DAT_50144958,1,0);
  FUN_5010777b((double)(*(float *)(iVar1 + 0x18) + 0.5));
  lVar3 = __ftol();
  iVar1 = (int)lVar3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (2 < iVar1) {
    iVar1 = 2;
  }
  (**(code **)(*DAT_5015d28c + 0x98))(iVar1);
  _DAT_5015c8d0 = 3;
  _DAT_5015c8d4 = &LAB_500ac970;
  _DAT_5015c8d8 = &LAB_500ad5b0;
  _DAT_5015c8dc = FUN_500bdb50;
  _DAT_5015c8e0 = &LAB_500bb0e0;
  _DAT_5015c8e4 = &LAB_500bb1d0;
  _DAT_5015c8e8 = &LAB_500bb4a0;
  _DAT_5015c8ec = &LAB_500bb590;
  _DAT_5015c908 = FUN_500f53a0;
  _DAT_5015c8f4 = &LAB_500f4de0;
  _DAT_5015c8f0 = FUN_500f4d70;
  _DAT_5015c8fc = FUN_500f4730;
  _DAT_5015c900 = FUN_500f50a0;
  _DAT_5015c8f8 = FUN_500f4070;
  _DAT_5015c904 = &LAB_5008a6d0;
  _DAT_5015c90c = &LAB_500ad990;
  _DAT_5015c910 = &LAB_500ae7d0;
  _DAT_5015c914 = &LAB_500ae850;
  _DAT_5015c918 = FUN_500ad5f0;
  _DAT_5015c91c = &LAB_500ad820;
  _DAT_5015c920 = &LAB_500ad970;
  _DAT_5015c924 = &LAB_500ad5e0;
  _DAT_5015c928 = &LAB_500ad5d0;
  _DAT_5015c92c = &LAB_500ae340;
  _DAT_5015c934 = 0x464;
  return &DAT_5015c8d0;
}

