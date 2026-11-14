// rea decompile_all
// name: FUN_300088e0
// address: 0x300088e0
// body: available
// range: 0x300088e0-0x3000892d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_300088e0(void)

{
  int iVar1;
  float *pfVar2;
  
  DAT_3004c638 = DAT_3008fd90 + 1;
  iVar1 = 0;
  pfVar2 = DAT_3008fd54;
  if (0 < DAT_3008fd50) {
    do {
      FUN_30008800(pfVar2,1 << ((byte)iVar1 & 0x1f),*(int **)(DAT_3008fc6c + 0xa0));
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 7;
    } while (iVar1 < DAT_3008fd50);
  }
  return;
}

