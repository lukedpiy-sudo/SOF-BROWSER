// rea decompile_all
// name: FUN_500f3550
// address: 0x500f3550
// body: available
// range: 0x500f3550-0x500f35c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f3550(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar1 != 0) {
    FUN_500ef7b0(param_1);
    FUN_500f38a0((int)param_1);
    if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
      FUN_50083bb0((int)param_1,0xf);
      *(undefined1 *)(param_1[0x1d] + 0x10) = 0x20;
      *(undefined1 *)(param_1[0x1d] + 0x11) = 0xe;
    }
    param_1[0xc] = param_1[0xc] | 0x4000;
    *(undefined4 *)(param_1[0x1d] + 0x560) = DAT_5015ccdc;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x500f35bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015cb78)();
  return;
}

