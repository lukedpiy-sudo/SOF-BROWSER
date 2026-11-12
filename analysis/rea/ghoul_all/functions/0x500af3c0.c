// rea decompile_all
// name: FUN_500af3c0
// address: 0x500af3c0
// body: available
// range: 0x500af3c0-0x500af4bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500af3c0(int *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(int **)(param_2 + 0x2a8) == param_1) {
    pcVar1 = (char *)param_1[0x71];
    if (pcVar1 != (char *)0x0) {
      *(char **)(param_2 + 0x1c4) = pcVar1;
      uVar2 = FUN_500c2e80(pcVar1);
      *(uint *)(param_2 + 0x2a8) = uVar2;
      *(uint *)(param_2 + 0x2a4) = uVar2;
      if (uVar2 == 0) {
        iVar5 = param_1[0x71];
        puVar3 = FUN_500c33f0();
        (*DAT_5015ca24)(s__s_at__s_target__s_does_not_exis_5014ce90,param_1[0x6d],puVar3,iVar5);
        *(int **)(param_2 + 0x2a8) = param_1;
      }
      param_1[0x71] = 0;
    }
    if (*(int **)(param_2 + 0x2a8) == param_1) {
      *(undefined4 *)(param_2 + 0x1c4) = 0;
      *(undefined4 *)(param_2 + 0x2a8) = 0;
      *(undefined4 *)(param_2 + 0x2a4) = *(undefined4 *)(param_2 + 0x324);
    }
    if (param_1[0x77] != 0) {
      iVar5 = param_1[0x71];
      param_1[0x71] = param_1[0x77];
      iVar4 = *(int *)(param_2 + 0x324);
      if ((((iVar4 == 0) || (*(int *)(iVar4 + 0x74) == 0)) &&
          ((iVar4 = *(int *)(param_2 + 0x328), iVar4 == 0 || (*(int *)(iVar4 + 0x74) == 0)))) &&
         ((iVar4 = *(int *)(param_2 + 0x32c), iVar4 == 0 || (*(int *)(iVar4 + 0x74) == 0)))) {
        iVar4 = param_2;
      }
      FUN_500c2f80(param_1,iVar4);
      param_1[0x71] = iVar5;
    }
  }
  return;
}

