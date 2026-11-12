// rea decompile_all
// name: Sys_Error
// address: 0x20065450
// body: available
// range: 0x20065450-0x200654c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Sys_Error(int param_1)

{
  CHAR local_400 [1024];
  
                    /* 0x65450  17  Sys_Error */
  if (param_1 != 0) {
    FUN_200fb04d(local_400,param_1,&stack0x00000008);
    Com_Printf(&DAT_2011d990,param_1);
  }
  FUN_2000dde0();
  FUN_2001fb10();
  if (param_1 != 0) {
    MessageBoxA((HWND)0x0,local_400,s_Error_2013a870,0x30);
    if (param_1 != 0) {
      FUN_200fb67c(1);
    }
  }
  return;
}

