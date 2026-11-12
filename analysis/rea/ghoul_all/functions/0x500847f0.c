// rea decompile_all
// name: FUN_500847f0
// address: 0x500847f0
// body: available
// range: 0x500847f0-0x500848a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500847f0(int param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_5015c514 == '\0') {
    iVar2 = (*DAT_5015c9f8)(s_gore_headcloud_50133c1c);
    if (iVar2 != 0) {
      (*DAT_5015ca70)(5);
      (*DAT_5015ca70)(iVar2);
      uVar1 = DAT_5015c518 | 4;
      if (DAT_5015c51c != 0) {
        uVar1 = DAT_5015c518 | 0x84;
      }
      DAT_5015c518 = uVar1;
      (*DAT_5015ca70)(DAT_5015c518);
      (*DAT_5015ca74)((param_1 - DAT_5015cca0) / 0x464);
      (*DAT_5015ca74)(param_2);
      FUN_50085190(&DAT_5015c518,param_1 + 4,1,0);
    }
  }
  return;
}

