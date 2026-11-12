// rea decompile_all
// name: FUN_200f2e40
// address: 0x200f2e40
// body: available
// range: 0x200f2e40-0x200f2ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200f2ea4 to 0x200f96d0 WSOCK32.DLL::Ordinal_116 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f2e40(int *param_1)

{
  if ((code *)param_1[0xdb] != (code *)0x0) {
    (*(code *)param_1[0xdb])(param_1,&DAT_2015ee44,param_1[0xde]);
  }
  if (*param_1 != 0) {
    FUN_200f3990(param_1 + 6,s_QUIT__Later__20159b50);
    FUN_200f36d0(param_1 + 6);
  }
  FUN_200eef10(param_1);
  FUN_200edb50(param_1);
  FUN_200f35f0(param_1 + 6);
  FUN_200f0380(param_1);
  FUN_200f9d32(param_1);
  Ordinal_116();
  return;
}

