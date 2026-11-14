// rea decompile_all
// name: FUN_3001ce10
// address: 0x3001ce10
// body: available
// range: 0x3001ce10-0x3001ceda inclusive
// range: 0x3001cffa-0x3001cffc inclusive
// range: 0x3001d000-0x3001d08c inclusive
// range: 0x3001d27d-0x3001d27d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3001cffc with no resolved callee; its no-return basis is unknown.; Ghidra Listing reports a terminal call at 0x3001d27d with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3001ce10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  
  if ((*(int *)(DAT_300a4e18 + 0x18) == 0) || (*(int *)(DAT_300a5348 + 0x18) == 0)) {
    if (DAT_300a4a08 != 1) {
      DAT_300a4a08 = 1;
      _DAT_300a49e8 = &LAB_3001d08d;
      _DAT_300a49ec = &LAB_3001d0c8;
      _DAT_300a49f0 = &LAB_3001d103;
      _DAT_300a49f4 = &LAB_3001d13e;
      _DAT_300a49f8 = &LAB_3001d179;
      _DAT_300a49fc = &LAB_3001d1b4;
      _DAT_300a4a00 = &LAB_3001d1ec;
      _DAT_300a4a04 = &LAB_3001d224;
    }
    if (*(byte *)((int)param_3 + 0x11) < 9) {
                    /* WARNING: Jumptable at 0x3001d086 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_300a49e8 + (uint)*(byte *)((int)param_3 + 0x11) * 4))();
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_300a534c != 1) {
    DAT_300a534c = 1;
    _DAT_300a49c8 = &LAB_3001cedb;
    _DAT_300a49cc = &LAB_3001cefa;
    _DAT_300a49d0 = &LAB_3001cf1f;
    _DAT_300a49d4 = &LAB_3001cf44;
    _DAT_300a49d8 = &LAB_3001cf60;
    _DAT_300a49dc = &LAB_3001cf7c;
    _DAT_300a49e0 = &LAB_3001cf9e;
    _DAT_300a49e4 = &LAB_3001cfc0;
  }
  FastExitMediaState();
  PackedFloatingMUL(*param_2,*param_3);
  PackedFloatingMUL(*param_1,*param_3);
  PackedFloatingMUL(CONCAT44(*(undefined4 *)(param_3 + 1),*(undefined4 *)(param_3 + 1)),
                    CONCAT44(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_2 + 1)));
  if (*(byte *)((int)param_3 + 0x11) < 9) {
                    /* WARNING: Jumptable at 0x3001ced4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_300a49c8 + (uint)*(byte *)((int)param_3 + 0x11) * 4))();
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

