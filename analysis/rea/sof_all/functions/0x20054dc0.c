// rea decompile_all
// name: FUN_20054dc0
// address: 0x20054dc0
// body: available
// range: 0x20054dc0-0x20054e8a inclusive
// range: 0x20054faa-0x20054fac inclusive
// range: 0x20054fb0-0x2005503c inclusive
// range: 0x2005522d-0x2005522d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20054fac with no resolved callee; its no-return basis is unknown.; Ghidra Listing reports a terminal call at 0x2005522d with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20054dc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  
  if ((*(int *)(DAT_203906e8 + 0x18) == 0) || (*(int *)(DAT_20390c18 + 0x18) == 0)) {
    if (DAT_203902d8 != 1) {
      DAT_203902d8 = 1;
      _DAT_203902b8 = &LAB_2005503d;
      _DAT_203902bc = &LAB_20055078;
      _DAT_203902c0 = &LAB_200550b3;
      _DAT_203902c4 = &LAB_200550ee;
      _DAT_203902c8 = &LAB_20055129;
      _DAT_203902cc = &LAB_20055164;
      _DAT_203902d0 = &LAB_2005519c;
      _DAT_203902d4 = &LAB_200551d4;
    }
    if (*(byte *)((int)param_3 + 0x11) < 9) {
                    /* WARNING: Jumptable at 0x20055036 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_203902b8 + (uint)*(byte *)((int)param_3 + 0x11) * 4))();
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_20390c1c != 1) {
    DAT_20390c1c = 1;
    _DAT_20390298 = &LAB_20054e8b;
    _DAT_2039029c = &LAB_20054eaa;
    _DAT_203902a0 = &LAB_20054ecf;
    _DAT_203902a4 = &LAB_20054ef4;
    _DAT_203902a8 = &LAB_20054f10;
    _DAT_203902ac = &LAB_20054f2c;
    _DAT_203902b0 = &LAB_20054f4e;
    _DAT_203902b4 = &LAB_20054f70;
  }
  FastExitMediaState();
  PackedFloatingMUL(*param_2,*param_3);
  PackedFloatingMUL(*param_1,*param_3);
  PackedFloatingMUL(CONCAT44(*(undefined4 *)(param_3 + 1),*(undefined4 *)(param_3 + 1)),
                    CONCAT44(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_2 + 1)));
  if (*(byte *)((int)param_3 + 0x11) < 9) {
                    /* WARNING: Jumptable at 0x20054e84 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_20390298 + (uint)*(byte *)((int)param_3 + 0x11) * 4))();
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

