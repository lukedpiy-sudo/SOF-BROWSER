// rea decompile_all
// name: FUN_500514d0
// address: 0x500514d0
// body: available
// range: 0x500514d0-0x50051559 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500514d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  iVar2 = DAT_5015cca0 + 0x464;
  if (0 < DAT_5015d8c8) {
    iVar4 = 0x464;
    do {
      if ((((*(int *)(iVar2 + 0x78) != 0) && (iVar1 = *(int *)(iVar2 + 0x74), iVar1 != 0)) &&
          (*(int *)(iVar1 + 800) == 0)) &&
         ((iVar2 != param_1 &&
          (*(int *)(iVar1 + 0x324) != *(int *)(*(int *)(param_1 + 0x74) + 0x324))))) {
        iVar2 = (**(code **)(**(int **)(iVar1 + 0x34c) + 0x54))(7);
        if (iVar2 != 0) {
          return 1;
        }
      }
      iVar4 = iVar4 + 0x464;
      iVar3 = iVar3 + 1;
      iVar2 = DAT_5015cca0 + iVar4;
    } while (iVar3 <= DAT_5015d8c8);
  }
  return 0;
}

