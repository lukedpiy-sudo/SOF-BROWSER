// rea decompile_all
// name: FUN_500f7550
// address: 0x500f7550
// body: available
// range: 0x500f7550-0x500f75b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500f7599 to 0x500c3880 FUN_500c3880 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x500f75ae to 0x500c3880 FUN_500c3880 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f7550(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[0xd0];
  piVar3 = param_1;
  while( true ) {
    piVar2 = piVar1;
    if ((piVar2 == (int *)0x0) || (piVar2 == param_1)) {
      return;
    }
    if ((piVar2[0x68] & 0x200000U) != 0) break;
    piVar1 = (int *)piVar2[0xd0];
    piVar3 = piVar2;
  }
  piVar1 = (int *)piVar3[0xd0];
  if ((piVar3 == param_1) && (piVar1 == piVar3)) {
    param_1[0xd0] = 0;
    FUN_500c3880(piVar1);
    return;
  }
  piVar3[0xd0] = piVar1[0xd0];
  FUN_500c3880(piVar1);
  return;
}

