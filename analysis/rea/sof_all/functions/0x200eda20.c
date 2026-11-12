// rea decompile_all
// name: FUN_200eda20
// address: 0x200eda20
// body: available
// range: 0x200eda20-0x200eda6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200eda20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong local_4;
  
  iVar2 = 0;
  local_4 = 0;
  puVar1 = &DAT_2040659c + param_1 * 3;
  do {
    if ((CFeelEffect *)*puVar1 != (CFeelEffect *)0x0) {
      CFeelEffect::GetStatus((CFeelEffect *)*puVar1,&local_4);
      if ((local_4 & 1) != 0) {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 3);
  return 0;
}

