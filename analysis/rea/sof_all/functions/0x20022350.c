// rea decompile_all
// name: Cvar_SetValue
// address: 0x20022350
// body: available
// range: 0x20022350-0x200223ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cvar_SetValue(undefined4 param_1,float param_2)

{
  int iVar1;
  undefined1 local_20 [32];
  
                    /* 0x22350  12  Cvar_SetValue */
  iVar1 = __ftol();
  if ((float)iVar1 == param_2) {
    Com_sprintf(local_20,0x20,&DAT_2011ee58,iVar1);
  }
  else {
    Com_sprintf(local_20,0x20,&DAT_20130cc0,(double)param_2);
  }
  FUN_20021d70(param_1,local_20,0);
  return;
}

