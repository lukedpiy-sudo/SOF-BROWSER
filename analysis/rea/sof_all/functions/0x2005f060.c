// rea decompile_all
// name: FUN_2005f060
// address: 0x2005f060
// body: available
// range: 0x2005f060-0x2005f0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005f060(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  iVar1 = __ftol();
  if (0 < iVar1) {
    do {
      iVar1 = DAT_20396eec + iVar5;
      if (*(int *)(DAT_20396eec + iVar5) == 3) {
        iVar2 = 0;
        iVar6 = 0;
        piVar3 = (int *)(iVar1 + 0x224);
        iVar4 = 0x10;
        do {
          if (0 < *piVar3) {
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + *piVar3;
          }
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar6 == 0) {
          *(undefined4 *)(iVar1 + 0x264) = 0;
        }
        else {
          *(int *)(iVar1 + 0x264) = iVar2 / iVar6;
        }
        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x298) + 0x74) + 200) =
             *(undefined4 *)(iVar1 + 0x264);
      }
      local_4 = local_4 + 1;
      iVar5 = iVar5 + 0xd2ac;
      iVar1 = __ftol();
    } while (local_4 < iVar1);
  }
  return;
}

