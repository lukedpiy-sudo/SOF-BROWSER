// rea decompile_all
// name: Com_sprintf
// address: 0x20055520
// body: available
// range: 0x20055520-0x20055580 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Com_sprintf(void)

{
  int iVar1;
  char *in_stack_00010004;
  int in_stack_00010008;
  
                    /* 0x55520  9  Com_sprintf */
  FUN_200fa720();
  iVar1 = FUN_200fb04d();
  if (in_stack_00010008 <= iVar1) {
    Com_Printf();
  }
  _strncpy(in_stack_00010004,&stack0x00000000,in_stack_00010008 - 1);
  return;
}

