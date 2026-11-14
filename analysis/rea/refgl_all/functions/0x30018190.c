// rea decompile_all
// name: FUN_30018190
// address: 0x30018190
// body: available
// range: 0x30018190-0x300181fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_30018190(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
      puVar4 = (undefined4 *)(iVar1 + iVar3);
      FUN_3001f8bc((undefined *)*puVar4);
      *puVar4 = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < param_1[1]);
  }
  iVar2 = *param_1;
  param_1[1] = 0;
  if (iVar2 != 0) {
    FUN_30020fde(iVar2,0x1c,*(int *)(iVar2 + -4),FUN_30018620);
    FUN_3001f8bc((undefined *)(iVar2 + -4));
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

