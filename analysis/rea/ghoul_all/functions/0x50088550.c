// rea decompile_all
// name: FUN_50088550
// address: 0x50088550
// body: available
// range: 0x50088550-0x500885df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50088550(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = DAT_5015cca0;
  iVar2 = *(int *)(param_1 + 0x74);
  iVar3 = *(int *)(iVar2 + 0x538);
  if (iVar3 != 0) {
    iVar5 = (iVar3 - DAT_5015cca0) / 0x464;
    lVar6 = __ftol();
    do {
      iVar5 = iVar5 + 1;
      if ((int)lVar6 < iVar5) {
        iVar5 = 1;
      }
      iVar1 = iVar4 + iVar5 * 0x464;
    } while (((*(int *)(iVar4 + 0x78 + iVar5 * 0x464) == 0) ||
             (*(int *)(*(int *)(iVar1 + 0x74) + 800) != 0)) && (iVar1 != iVar3));
    *(int *)(iVar2 + 0x538) = iVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x53c) = 1;
  }
  return;
}

