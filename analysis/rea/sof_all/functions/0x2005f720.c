// rea decompile_all
// name: FUN_2005f720
// address: 0x2005f720
// body: available
// range: 0x2005f720-0x2005f7ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2005f7c8 to 0x200f4f10 FUN_200f4f10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005f720(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_20396eec;
  if ((*(float *)(DAT_203feca4 + 0x18) != 0.0) &&
     (*(float *)(DAT_203fecd0 + 0x18) < 1.0 == (*(float *)(DAT_203fecd0 + 0x18) == 1.0))) {
    iVar3 = 0;
    iVar1 = __ftol();
    if (0 < iVar1) {
      do {
        if (*piVar2 == 3) {
          iVar3 = iVar3 + 1;
        }
        piVar2 = piVar2 + 0x34ab;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (DAT_20396de4 < DAT_20396efc) {
      DAT_20396efc = DAT_20396de4;
    }
    if ((DAT_201398ac != iVar3) || (149999 < DAT_20396de4 - DAT_20396efc)) {
      DAT_20396efc = DAT_20396de4;
      DAT_201398ac = iVar3;
      if (DAT_204076d0 != 0) {
        Com_DPrintf(s_Sending_heartbeat_to_GameSpy____20139c50);
        FUN_200f4f10();
        return;
      }
    }
  }
  return;
}

