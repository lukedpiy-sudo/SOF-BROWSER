// rea decompile_all
// name: FUN_20030aa0
// address: 0x20030aa0
// body: available
// range: 0x20030aa0-0x20030b61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20030aa0(void)

{
  short sVar1;
  int *piVar2;
  
  if ((*(float *)(DAT_2027c474 + 0x18) == 0.0) && (DAT_201e7f58._3_1_ == '\0')) {
    sVar1 = DAT_201e7f06;
    if (DAT_20225820 != 0) {
      sVar1 = DAT_2022592c._2_2_;
    }
    if (((_DAT_2027c454 <= DAT_2027c478 - 0.1) || (sVar1 == 0xc)) && (DAT_201e7f00 != (int *)0x0)) {
      piVar2 = (int *)(**(code **)(*DAT_201e7f00 + 0x88))();
      if (piVar2 != (int *)0x0) {
        sVar1 = (**(code **)(*piVar2 + 0x1c))(s_flash_20131568);
        if (sVar1 != 0) {
          (**(code **)(*DAT_201e7f00 + 0x9c))();
          if (_DAT_2027c454 < DAT_2027c478 - 0.1) {
            _DAT_2027c454 = _DAT_2027c454 + 0.1;
          }
        }
      }
    }
  }
  return;
}

