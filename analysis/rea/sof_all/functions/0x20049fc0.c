// rea decompile_all
// name: FUN_20049fc0
// address: 0x20049fc0
// body: available
// range: 0x20049fc0-0x2004a0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20049fc0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_203645e4 != 0) {
    if (*(float *)(DAT_2036473c + 0x18) == 0.0) {
      DAT_20364754 = 0;
      return;
    }
    if (DAT_20364754 == 0) {
      DAT_20364754 = 1;
      if (DAT_20364660 != 0) {
        DAT_20364748 = SystemParametersInfoA(4,0,&DAT_20135078,0);
      }
      iVar1 = GetSystemMetrics(0);
      iVar2 = GetSystemMetrics(1);
      GetWindowRect(DAT_20403564,(LPRECT)&DAT_20364718);
      if (DAT_20364718 < 0) {
        DAT_20364718 = 0;
      }
      if (DAT_2036471c < 0) {
        DAT_2036471c = 0;
      }
      if (iVar1 <= DAT_20364720) {
        DAT_20364720 = iVar1 + -1;
      }
      if (iVar2 + -1 <= DAT_20364724) {
        DAT_20364724 = iVar2 + -1;
      }
      DAT_20364734 = (DAT_20364724 + DAT_2036471c) / 2;
      DAT_20364730 = (DAT_20364718 + DAT_20364720) / 2;
      SetCursorPos(DAT_20364730,DAT_20364734);
      _DAT_20364728 = DAT_20364730;
      _DAT_2036472c = DAT_20364734;
      SetCapture(DAT_20403564);
      ClipCursor((RECT *)&DAT_20364718);
      do {
        iVar1 = ShowCursor(0);
      } while (-1 < iVar1);
    }
  }
  return;
}

