// rea decompile_all
// name: FUN_500f2d60
// address: 0x500f2d60
// body: available
// range: 0x500f2d60-0x500f2e18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __cdecl FUN_500f2d60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = 9999999.0;
  iVar1 = 1;
  lVar5 = __ftol();
  if (0 < (int)lVar5) {
    iVar2 = 0x464;
    iVar3 = DAT_5015cca0;
    do {
      if ((*(int *)(iVar2 + 0x78 + iVar3) != 0) && (0 < *(int *)(iVar2 + 0x2ec + iVar3))) {
        local_c = *(float *)(param_1 + 4) - *(float *)(iVar2 + 4 + iVar3);
        iVar3 = iVar2 + 4 + iVar3;
        local_8 = *(float *)(param_1 + 8) - *(float *)(iVar3 + 4);
        local_4 = *(float *)(param_1 + 0xc) - *(float *)(iVar3 + 8);
        fVar4 = FUN_500fe130(&local_c);
        iVar3 = DAT_5015cca0;
        if (fVar4 < (float10)local_10) {
          local_10 = (float)fVar4;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x464;
      lVar5 = __ftol();
    } while (iVar1 <= (int)lVar5);
  }
  return (float10)local_10;
}

