// rea decompile_all
// name: FUN_3001c450
// address: 0x3001c450
// body: available
// range: 0x3001c450-0x3001c548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_3001c450(void)

{
  char cVar1;
  int iVar2;
  
  (*DAT_3008fde8)(0,s_R_Shutdown_____Shutting_down_300319a4);
  if (DAT_300a4318 != (code *)0x0) {
    cVar1 = (*DAT_300a4318)(0,0);
    if (cVar1 == '\0') {
      (*DAT_3008fde8)(0,s_ref_gl__R_Shutdown_____wglMakeCu_30031974);
    }
  }
  if (DAT_300a4838 != 0) {
    if (DAT_300a44c8 != (code *)0x0) {
      cVar1 = (*DAT_300a44c8)(DAT_300a4838);
      if (cVar1 == '\0') {
        (*DAT_3008fde8)(0,s_ref_gl__R_Shutdown_____wglDelete_30031944);
      }
    }
    DAT_300a4838 = 0;
  }
  if (DAT_300a4830 != (HDC)0x0) {
    iVar2 = ReleaseDC(DAT_300a4834,DAT_300a4830);
    if (iVar2 == 0) {
      (*DAT_3008fde8)(0,s_ref_gl__R_Shutdown_____ReleaseDC_30031918);
    }
    DAT_300a4830 = (HDC)0x0;
  }
  if (DAT_300a4834 != (HWND)0x0) {
    ShowWindow(DAT_300a4834,0);
    DestroyWindow(DAT_300a4834);
    DAT_300a4834 = (HWND)0x0;
  }
  if (DAT_300a484c != (FILE *)0x0) {
    FUN_30020d4b(DAT_300a484c);
    DAT_300a484c = (FILE *)0x0;
  }
  if (DAT_300a4828 != (HINSTANCE)0x0) {
    UnregisterClassA(&DAT_300318f4,DAT_300a4828);
  }
  if (DAT_3008ffc0 != 0) {
    ChangeDisplaySettingsA((DEVMODEA *)0x0,0);
    DAT_3008ffc0 = 0;
  }
  return;
}

