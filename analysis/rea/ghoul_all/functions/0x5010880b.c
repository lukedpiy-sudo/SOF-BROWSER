// rea decompile_all
// name: FUN_5010880b
// address: 0x5010880b
// body: available
// range: 0x5010880b-0x50108873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5010880b(undefined *param_1)

{
  undefined *lpMem;
  uint *puVar1;
  byte *pbVar2;
  int local_8;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    if (DAT_5018c964 == 3) {
      puVar1 = (uint *)FUN_5010d4e6((int)param_1);
      if (puVar1 != (uint *)0x0) {
        FUN_5010d511(puVar1,(int)lpMem);
        return;
      }
    }
    else if ((DAT_5018c964 == 2) &&
            (pbVar2 = (byte *)FUN_5010e241(param_1,&local_8,(uint *)&param_1), pbVar2 != (byte *)0x0
            )) {
      FUN_5010e298(local_8,(int)param_1,pbVar2);
      return;
    }
    HeapFree(DAT_5018c960,0,lpMem);
  }
  return;
}

