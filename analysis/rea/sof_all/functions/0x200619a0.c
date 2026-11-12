// rea decompile_all
// name: FUN_200619a0
// address: 0x200619a0
// body: available
// range: 0x200619a0-0x200619f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200619a0(undefined4 param_1)

{
  undefined1 local_400 [1024];
  
  if (DAT_203a1f20 != 0) {
    FUN_200fb04d(local_400,param_1,&stack0x00000008);
    FUN_2001cb00(&DAT_203f6c34,0xd);
    FUN_2001cd00(&DAT_203f6c34,local_400);
    FUN_20061a80(0,3,0);
  }
  return;
}

