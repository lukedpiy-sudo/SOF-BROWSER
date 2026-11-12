// rea decompile_all
// name: FUN_500bce60
// address: 0x500bce60
// body: available
// range: 0x500bce60-0x500bcf00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500bce60(int param_1,char *param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  char *_Str2;
  
  iVar3 = 0;
  _Str2 = param_2;
  if (0 < param_3) {
    do {
      iVar1 = __strcmpi(*(char **)(param_1 + 0x1e8),_Str2);
      if (iVar1 == 0) {
        if (*(ushort *)(param_2 + iVar3 * 100 + 0x40) != 0xffff) {
          (*DAT_5015c9f4)(&DAT_50165d18 + (uint)*(ushort *)(param_2 + iVar3 * 100 + 0x40) * 0x40);
        }
        iVar1 = 0;
        if (param_2[iVar3 * 100 + 0x42] != '\0') {
          puVar2 = (ushort *)(param_2 + iVar3 * 100 + 0x44);
          do {
            (*DAT_5015c9f4)(&DAT_50165d18 + (uint)*puVar2 * 0x40);
            iVar1 = iVar1 + 1;
            puVar2 = puVar2 + 1;
          } while (iVar1 < (int)(uint)(byte)param_2[iVar3 * 100 + 0x42]);
        }
        return 1;
      }
      iVar3 = iVar3 + 1;
      _Str2 = _Str2 + 100;
    } while (iVar3 < param_3);
  }
  return 0;
}

