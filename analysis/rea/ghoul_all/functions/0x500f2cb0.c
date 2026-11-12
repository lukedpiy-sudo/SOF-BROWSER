// rea decompile_all
// name: FUN_500f2cb0
// address: 0x500f2cb0
// body: available
// range: 0x500f2cb0-0x500f2d54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500f2cb0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = 0;
  if (0 < DAT_5015d8c8) {
    iVar5 = 0;
    iVar3 = 0x464;
    do {
      iVar1 = iVar3 + DAT_5015cca0;
      if (*(int *)(iVar3 + 0x78 + DAT_5015cca0) != 0) {
        *(undefined4 *)(iVar5 + 0x2fc + DAT_5015d6c4) = *(undefined4 *)(iVar1 + 0x2ec);
        *(undefined4 *)(iVar5 + 0x300 + DAT_5015d6c4) = *(undefined4 *)(iVar1 + 0x2f0);
        uVar2 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x74) + 0x34c) + 0x5c))();
        *(undefined4 *)(iVar5 + 0x2f0 + DAT_5015d6c4) = uVar2;
        lVar6 = __ftol();
        *(int *)(iVar5 + 0x2f4 + DAT_5015d6c4) = (int)lVar6;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x464;
      iVar5 = iVar5 + 0x600;
    } while (iVar4 < DAT_5015d8c8);
  }
  return;
}

