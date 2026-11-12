// rea decompile_all
// name: FUN_500ecd70
// address: 0x500ecd70
// body: available
// range: 0x500ecd70-0x500ecdb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_500ecd70(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      fVar1 = *(float *)(param_1 + (iVar2 + iVar3 * 4) * 4);
      if (iVar3 == iVar2) {
        fVar1 = 1.0 - fVar1;
      }
      if (0.0001 < ABS(fVar1)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      *(undefined4 *)(param_1 + 0x40) = 1;
      return 1;
    }
  } while( true );
}

