// rea decompile_all
// name: FUN_5008a540
// address: 0x5008a540
// body: available
// range: 0x5008a540-0x5008a6c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5008a540(void)

{
  int iVar1;
  int *unaff_ESI;
  longlong lVar2;
  int unaff_retaddr;
  int *piStack_34;
  int iStack_30;
  
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar1 == 0) {
    (*DAT_5015cb60)(s_stat_moneyadd_50146c5c);
    lVar2 = __ftol();
    DAT_5015d26c = (int)lVar2;
    (*DAT_5015cb54)(s_stat_moneyadd_50146c5c,0);
    FUN_500ad5f0();
    piStack_34 = *(int **)(*(int *)(DAT_5015cca0 + 0x4d8) + 0x34c);
    if (piStack_34 != (int *)0x0) {
      iStack_30 = DAT_5015cca0 + 0x464;
      (**(code **)(*piStack_34 + 0xf4))(&piStack_34);
      (**(code **)(*unaff_ESI + 0x104))(1,*(undefined4 *)(unaff_retaddr + 0x2ec));
    }
    DAT_5015d8d8 = DAT_5015d8d8 + DAT_5015d250;
    DAT_5015d250 = 0;
    DAT_5015d8dc = DAT_5015d8dc + DAT_5015d254;
    DAT_5015d8e0 = DAT_5015d8e0 + DAT_5015d258;
    DAT_5015d8e4 = DAT_5015d8e4 + DAT_5015d25c;
    DAT_5015d8e8 = DAT_5015d8e8 + DAT_5015d260;
    DAT_5015d8ec = DAT_5015d8ec + DAT_5015d264;
    _DAT_5015d8f8 = (DAT_5015ccdc - _DAT_5015d270) + _DAT_5015d8f8;
    DAT_5015d8f0 = DAT_5015d8f0 + DAT_5015d268;
    DAT_5015d254 = 0;
    DAT_5015d8f4 = DAT_5015d8f4 + DAT_5015d26c;
    DAT_5015d258 = 0;
    DAT_5015d25c = 0;
    DAT_5015d260 = 0;
    DAT_5015d264 = 0;
    DAT_5015d268 = 0;
    DAT_5015d26c = 0;
    DAT_5015ccdc = 0.0;
    _DAT_5015d270 = 0.0;
  }
  return;
}

