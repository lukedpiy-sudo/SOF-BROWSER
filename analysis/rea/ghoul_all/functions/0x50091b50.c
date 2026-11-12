// rea decompile_all
// name: FUN_50091b50
// address: 0x50091b50
// body: available
// range: 0x50091b50-0x50091bde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50091b50(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (*(char **)(param_1 + 0x1c4) == (char *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x50091b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_5015ca24)();
    return;
  }
  uVar1 = FUN_500c2e80(*(char **)(param_1 + 0x1c4));
  *(uint *)(param_1 + 0x2a8) = uVar1;
  if (uVar1 == 0) {
    (*DAT_5015ca24)(s_trigger_elevator_unable_to_find_t_501479c8,*(undefined4 *)(param_1 + 0x1c4));
    return;
  }
  iVar2 = 0xb;
  bVar5 = true;
  pcVar3 = *(char **)(uVar1 + 0x1b4);
  pcVar4 = s_func_train_501431c4;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    (*DAT_5015ca24)(s_trigger_elevator_target__s_is_no_5014799c,*(undefined4 *)(param_1 + 0x1c4));
    return;
  }
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_50091a30;
  *(undefined4 *)(param_1 + 0x118) = 1;
  return;
}

