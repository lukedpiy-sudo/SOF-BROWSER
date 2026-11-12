// rea decompile_all
// name: FUN_200eaf60
// address: 0x200eaf60
// body: available
// range: 0x200eaf60-0x200eafdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200eaf60(undefined4 param_1)

{
  int local_84;
  undefined1 local_80 [128];
  
  Com_sprintf(local_80,0x80,s_menus__s_rmf_2015955c,param_1);
  FS_LoadFile(local_80,&local_84,0);
  if (local_84 == 0) {
    FUN_200eb490();
    return;
  }
  FUN_200eaec0(local_84);
  FS_FreeFile(local_84);
  return;
}

