// rea decompile_all
// name: FUN_200594e0
// address: 0x200594e0
// body: available
// range: 0x200594e0-0x20059589 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20059580 to 0x200f9dec __ftol (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200594e0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  pcVar5 = param_1;
  if (*param_1 != '\0') {
    while (iVar6 < 4) {
      cVar2 = *pcVar5;
      *(undefined1 *)((int)&param_1 + iVar6) = 0;
      while (('/' < cVar2 && (cVar2 < ':'))) {
        cVar3 = *(char *)((int)&param_1 + iVar6) * '\n' + cVar2;
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
        *(char *)((int)&param_1 + iVar6) = cVar3 + -0x30;
      }
      if ((*pcVar5 == '\0') || (*pcVar5 == ':')) break;
      pcVar1 = pcVar5 + 1;
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 1;
      if (*pcVar1 == '\0') break;
    }
  }
  iVar6 = 0;
  if (0 < DAT_20392dd0) {
    do {
      if (((&DAT_20392dd8)[iVar6 * 2] & (uint)param_1) == (&DAT_20392ddc)[iVar6 * 2]) {
        uVar4 = __ftol();
        return uVar4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_20392dd0);
  }
  if (*(float *)(DAT_203fec78 + 0x18) == 0.0) {
    return 1;
  }
  return 0;
}

