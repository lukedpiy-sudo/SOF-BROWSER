// rea decompile_all
// name: FUN_50076110
// address: 0x50076110
// body: available
// range: 0x50076110-0x50076163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50076110(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  (*DAT_5015cb48)(0x53434944,&local_4,4,0);
  iVar1 = param_1[1];
  while( true ) {
    if (iVar1 == 0) {
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      return 0;
    }
    if (*param_1 == local_4) break;
    iVar1 = param_1[3];
    param_1 = param_1 + 2;
  }
  uVar2 = (*(code *)param_1[1])(param_2);
  return uVar2;
}

