// rea decompile_all
// name: FUN_500efbc0
// address: 0x500efbc0
// body: available
// range: 0x500efbc0-0x500efc9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500efbc0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char acStack_64 [100];
  
  iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar2 == 0) {
    pcVar3 = s_mullins_50146a9c;
    do {
      cVar1 = *pcVar3;
      pcVar3[param_2 + -0x50146a9c] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    return;
  }
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x74) + 0x354) != 0)) &&
     (*(int **)(param_1 + 0x164) != (int *)0x0)) {
    pcVar3 = acStack_64;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    iVar2 = FUN_500a5e10(&DAT_5015c79c,uVar4);
    if (iVar2 != 0) {
      FUN_500fe2b0();
      for (iVar2 = 0; ((acStack_64[0] != '\0' && (acStack_64[0] != '.')) && (iVar2 < 100));
          iVar2 = iVar2 + 1) {
        acStack_64[0] = acStack_64[iVar2 + 1];
      }
      acStack_64[iVar2] = '\0';
      do {
        cVar1 = *pcVar3;
        pcVar3[param_2 - (int)acStack_64] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
    }
  }
  pcVar3 = s_mullins_50146a9c;
  do {
    cVar1 = *pcVar3;
    pcVar3[param_2 + -0x50146a9c] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return;
}

