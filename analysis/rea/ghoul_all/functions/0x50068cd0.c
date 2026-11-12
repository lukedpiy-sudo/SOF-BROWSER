// rea decompile_all
// name: FUN_50068cd0
// address: 0x50068cd0
// body: available
// range: 0x50068cd0-0x50068dba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50068cd0(int param_1,int param_2,byte *param_3)

{
  int iVar1;
  int *piVar2;
  CHAR aCStack_440 [64];
  byte local_400 [1024];
  
  FUN_501082c2(local_400,param_3,(undefined4 *)&stack0x00000010);
  if (param_2 == 1) {
    FUN_500adb20(local_400);
    return;
  }
  if ((param_2 == 2) && (iVar1 = *(int *)(param_1 + 0xb4), iVar1 != 0)) {
    piVar2 = *(int **)(iVar1 + 0x30);
    if (piVar2 == (int *)0x0) {
      (*DAT_5015cb6c)();
      FUN_500fe2b0();
      if (*(char *)(iVar1 + 0x34) == '\0') {
        piVar2 = (int *)FUN_50107c80(aCStack_440,&DAT_50144220);
        *(undefined1 *)(iVar1 + 0x34) = 1;
      }
      else {
        piVar2 = (int *)FUN_50107c80(aCStack_440,&DAT_50144224);
      }
      *(int **)(iVar1 + 0x30) = piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    FUN_50108290(piVar2,&DAT_50142f40);
    FUN_50108183(*(int **)(iVar1 + 0x30));
    FUN_50107c0a(*(FILE **)(iVar1 + 0x30));
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  return;
}

