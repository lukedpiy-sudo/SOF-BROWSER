// rea decompile_all
// name: FUN_50044330
// address: 0x50044330
// body: available
// range: 0x50044330-0x50044406 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50044330(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_500c26a0(0,0x1b4,s_func_areaportal_5014268c,(void *)0x0);
  piVar3 = DAT_5015cca0;
  while (DAT_5015cca0 = piVar3, uVar1 != 0) {
    (*DAT_5015cad8)(*(undefined4 *)(uVar1 + 0x3bc),1);
    uVar1 = FUN_500c26a0(uVar1,0x1b4,s_func_areaportal_5014268c,(void *)0x0);
    piVar3 = DAT_5015cca0;
  }
  if (piVar3 < piVar3 + 0x46400) {
    do {
      if ((piVar3[0x1e] != 0) &&
         ((((piVar3[0x114] != 0 ||
            (iVar2 = _strncmp((char *)piVar3[0x6d],&DAT_501426ac,4), iVar2 == 0)) ||
           (iVar2 = _strncmp((char *)piVar3[0x6d],s_trigger_501426a4,6), iVar2 == 0)) ||
          (iVar2 = _strncmp((char *)piVar3[0x6d],s_spawner_5014269c,7), iVar2 == 0)))) {
        FUN_500c3880(piVar3);
      }
      piVar3 = piVar3 + 0x119;
    } while (piVar3 < DAT_5015cca0 + 0x46400);
  }
  return;
}

