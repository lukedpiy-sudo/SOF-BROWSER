// rea decompile_all
// name: FUN_30016ef0
// address: 0x30016ef0
// body: available
// range: 0x30016ef0-0x30016f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_30016ef0(void *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = *(int *)this;
  iVar3 = *(int *)(param_1 + 0x20);
  fVar5 = (float10)(*DAT_3008fe28)(0,0x3f800000);
  iVar4 = *(int *)(iVar3 + iVar4 * 8 + 4);
  fVar2 = *(float *)(iVar4 + 0x40);
  while (fVar2 < (float)fVar5) {
    pfVar1 = (float *)(iVar4 + 0x9c);
    iVar4 = iVar4 + 0x5c;
    fVar2 = *pfVar1;
  }
  return iVar4;
}

