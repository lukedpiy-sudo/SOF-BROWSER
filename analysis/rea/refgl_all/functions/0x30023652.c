// rea decompile_all
// name: FUN_30023652
// address: 0x30023652
// body: available
// range: 0x30023652-0x300236b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


SIZE_T __cdecl FUN_30023652(undefined *param_1)

{
  uint uVar1;
  byte *pbVar2;
  SIZE_T SVar3;
  undefined4 local_c;
  uint local_8;
  
  if (DAT_300abb34 == 3) {
    uVar1 = FUN_30021c32((int)param_1);
    if (uVar1 != 0) {
      return *(int *)(param_1 + -4) - 9;
    }
  }
  else if ((DAT_300abb34 == 2) &&
          (pbVar2 = (byte *)FUN_3002298d(param_1,&local_c,&local_8), pbVar2 != (byte *)0x0)) {
    return (uint)*pbVar2 << 4;
  }
  SVar3 = HeapSize(DAT_300abb30,0,param_1);
  return SVar3;
}

