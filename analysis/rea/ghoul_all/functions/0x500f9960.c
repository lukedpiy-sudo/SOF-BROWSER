// rea decompile_all
// name: FUN_500f9960
// address: 0x500f9960
// body: available
// range: 0x500f9960-0x500f99f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f9960(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar4 = 0;
    iVar5 = 0;
    if (0 < DAT_5015d8c8) {
      do {
        iVar2 = *(int *)(param_1 + 0x74);
        cVar1 = *(char *)(iVar4 + 0x570 + iVar2);
        if (*(char *)(iVar4 + 0x590 + iVar2) != cVar1) {
          local_60[iVar5] = (char)iVar4;
          local_80[iVar5] = cVar1;
          *(char *)(iVar4 + iVar2 + 0x590) = cVar1;
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_5015d8c8);
      if ((iVar5 != 0) &&
         (uVar3 = FUN_500f98d0(iVar5,(int)local_60,(int)local_80,(int)local_40),
         *(int *)(param_1 + 0x458) == 0)) {
        (*DAT_5015caa8)(param_1,uVar3,iVar5,local_40);
      }
    }
  }
  return;
}

