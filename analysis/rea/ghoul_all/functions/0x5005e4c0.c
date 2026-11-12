// rea decompile_all
// name: FUN_5005e4c0
// address: 0x5005e4c0
// body: available
// range: 0x5005e4c0-0x5005e538 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005e4c0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_50159684 == 7) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x34;
      if (0 < iVar1) {
        iVar4 = 0;
        while( true ) {
          cVar2 = (**(code **)(*DAT_5015c4d8 + 0xf4))(*(int *)(param_1 + 0x18) + iVar4);
          if (cVar2 != '\0') break;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x34;
          if (iVar1 <= iVar3) {
            return;
          }
        }
        DAT_50159464 = *(int *)(param_1 + 0x18) + iVar3 * 0x34;
      }
    }
  }
  return;
}

