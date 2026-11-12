// rea decompile_all
// name: FUN_2001cb00
// address: 0x2001cb00
// body: available
// range: 0x2001cb00-0x2001cb66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001cb00(char *param_1,undefined1 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc) + 1) {
    if (*param_1 == '\0') {
      Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
    }
    if (*(int *)(param_1 + 8) < 1) {
      Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
    }
    Com_Printf(s_SZ_GetSpace__overflow_20121308);
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[1] = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  *(undefined1 *)(*(int *)(param_1 + 4) + iVar1) = param_2;
  return;
}

