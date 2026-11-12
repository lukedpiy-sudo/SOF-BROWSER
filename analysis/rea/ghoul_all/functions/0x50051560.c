// rea decompile_all
// name: FUN_50051560
// address: 0x50051560
// body: available
// range: 0x50051560-0x500515f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50051560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 1;
  iVar4 = 1;
  if ((*(int *)(param_1 + 0x45c) != 0) && (iVar3 = DAT_5015cca0, 0 < DAT_5015d8c8)) {
    while ((((*(int *)(iVar3 + 0x4dc) == 0 ||
             ((((iVar1 = *(int *)(iVar3 + 0x4d8), iVar1 == 0 || (*(int *)(iVar1 + 800) != 0)) ||
               (*(int *)(*(int *)(param_1 + 0x74) + 0x2dc) != 0)) ||
              ((iVar3 + 0x464 == param_1 ||
               (*(int *)(iVar1 + 0x324) != *(int *)(*(int *)(param_1 + 0x74) + 0x324))))))) ||
            (*(int *)(iVar3 + 0x8c0) == 0)) ||
           ((*(int *)(*(int *)(iVar3 + 0x8c0) + 0x3bc) != 1 && (*(int *)(iVar3 + 0x8bc) != 0))))) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x464;
      if (DAT_5015d8c8 < iVar4) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

