// rea decompile_all
// name: FUN_500f98d0
// address: 0x500f98d0
// body: available
// range: 0x500f98d0-0x500f9951 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f98d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar4 = 0;
  if (0 < param_1) {
    do {
      *(undefined1 *)(iVar1 + param_4) = *(undefined1 *)(iVar4 + param_3);
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar2 + param_4) = *(undefined1 *)(iVar4 + param_2);
      iVar3 = iVar4;
      if (iVar4 < param_1 + -1) {
        do {
          if ((*(byte *)(iVar3 + param_2) + 1 != (uint)*(byte *)(iVar3 + 1 + param_2)) ||
             (*(char *)(iVar3 + param_3) != *(char *)(iVar3 + 1 + param_3))) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_1 + -1);
        if (iVar3 != iVar4) {
          *(byte *)(iVar1 + param_4) = *(byte *)(iVar1 + param_4) | 0x80;
          iVar2 = iVar1 + 2;
          *(undefined1 *)(iVar2 + param_4) = *(undefined1 *)(iVar3 + param_2);
        }
      }
      iVar4 = iVar3 + 1;
      iVar1 = iVar2 + 1;
    } while (iVar4 < param_1);
  }
  return;
}

