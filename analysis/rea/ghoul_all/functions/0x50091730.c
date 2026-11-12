// rea decompile_all
// name: FUN_50091730
// address: 0x50091730
// body: available
// range: 0x50091730-0x5009182f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50091730(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_500bcfe0(*(char **)(param_1 + 0x1e8),0);
  *(undefined4 *)(param_1 + 0x404) = uVar2;
  uVar2 = FUN_500bcfe0(*(char **)(param_1 + 0x1e8),1);
  *(undefined4 *)(param_1 + 0x408) = uVar2;
  uVar2 = FUN_500bcfe0(*(char **)(param_1 + 0x1e8),2);
  *(undefined4 *)(param_1 + 0x40c) = uVar2;
  if (*(char **)(param_1 + 0x1c4) == (char *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x50091787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_5015ca24)();
    return;
  }
  uVar3 = FUN_500c2e80(*(char **)(param_1 + 0x1c4));
  if (uVar3 == 0) {
    (*DAT_5015ca24)(s_train_find__target__s_not_found_501478f0,*(undefined4 *)(param_1 + 0x1c4));
    return;
  }
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(uVar3 + 0x1c4);
  *(float *)(param_1 + 4) = *(float *)(uVar3 + 4) - *(float *)(param_1 + 0x11c);
  *(float *)(param_1 + 8) = *(float *)(uVar3 + 8) - *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0xc) = *(float *)(uVar3 + 0xc) - *(float *)(param_1 + 0x124);
  (*DAT_5015cb28)(param_1);
  if (*(int *)(param_1 + 0x1c8) == 0) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    fVar1 = DAT_5015ccdc + 0.1;
    *(code **)(param_1 + 0x2b8) = FUN_50091570;
    *(int *)(param_1 + 0x32c) = param_1;
    *(float *)(param_1 + 0x2b4) = fVar1;
  }
  return;
}

