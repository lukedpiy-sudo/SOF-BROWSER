// rea decompile_all
// name: FUN_50088680
// address: 0x50088680
// body: available
// range: 0x50088680-0x500887a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50088680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(float *)(DAT_5015c8c0 + 0x18) != 0.0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (DAT_5015ccdc < *(float *)(iVar1 + 0x5c4)) {
      lVar4 = __ftol();
      (*DAT_5015cab0)(param_1,0x406,(int)(short)lVar4);
      return 1;
    }
    iVar2 = *(int *)(iVar1 + 0x5f0);
    lVar4 = __ftol();
    iVar3 = (int)lVar4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 10;
    }
    if ((*(float *)(iVar1 + 0x5c8 + iVar3 * 4) != 0.0) &&
       (DAT_5015ccdc - *(float *)(iVar1 + 0x5c8 + iVar3 * 4) < *(float *)(DAT_5015c970 + 0x18))) {
      *(float *)(iVar1 + 0x5c4) = DAT_5015ccdc + *(float *)(DAT_5015ccc4 + 0x18);
      lVar4 = __ftol();
      (*DAT_5015cab0)(param_1,0x406,(int)(short)lVar4);
      return 1;
    }
    *(uint *)(iVar1 + 0x5f0) = (iVar2 + 1U) % 10;
    *(float *)(*(int *)(param_1 + 0x74) + 0x5c8 + *(int *)(*(int *)(param_1 + 0x74) + 0x5f0) * 4) =
         DAT_5015ccdc;
  }
  return 0;
}

