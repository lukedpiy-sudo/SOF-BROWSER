// rea decompile_all
// name: FUN_500bf980
// address: 0x500bf980
// body: available
// range: 0x500bf980-0x500bfa4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bf980(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_1;
  lVar2 = __ftol();
  param_1._0_2_ = (ushort)(byte)lVar2;
  (*DAT_5015cb00)(*(int *)(*(int *)(iVar1 + 0x324) + 0x3bc) + 0x487,&param_1);
  if (DAT_5015ccdc - *(float *)(iVar1 + 0x1bc) < *(float *)(iVar1 + 0x21c)) {
    *(float *)(iVar1 + 0x2b4) = DAT_5015ccdc + 0.1;
    return;
  }
  if ((*(byte *)(iVar1 + 0x1b8) & 1) != 0) {
    lVar2 = __ftol();
    *(undefined4 *)(iVar1 + 0x228) = *(undefined4 *)(iVar1 + 0x22c);
    *(float *)(iVar1 + 0x22c) = (float)(int)(char)lVar2;
    *(float *)(iVar1 + 0x230) = *(float *)(iVar1 + 0x230) * -1.0;
  }
  return;
}

