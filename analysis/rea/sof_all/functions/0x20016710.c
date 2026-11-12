// rea decompile_all
// name: FUN_20016710
// address: 0x20016710
// body: available
// range: 0x20016710-0x20016762 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20016710(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_2023f2d0;
  if (DAT_2023f2d0 < 0x20) {
    iVar1 = DAT_2023f2d0 * 0x1c;
    iVar2 = DAT_2023f2d0 * 7;
    DAT_2023f2d0 = DAT_2023f2d0 + 1;
    (&DAT_20230330)[iVar2] = *param_1;
    (&DAT_20230334)[iVar3 * 7] = param_1[1];
    *(undefined4 *)(&DAT_20230338 + iVar1) = param_1[2];
    (&DAT_20230348)[iVar3 * 7] = param_2;
    (&DAT_2023033c)[iVar3 * 7] = param_3;
    (&DAT_20230340)[iVar3 * 7] = param_4;
    (&DAT_20230344)[iVar3 * 7] = param_5;
  }
  return;
}

