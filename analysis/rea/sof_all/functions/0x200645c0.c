// rea decompile_all
// name: FUN_200645c0
// address: 0x200645c0
// body: available
// range: 0x200645c0-0x2006471b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20064712 to 0x2001c6e0 Com_Printf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200645c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
  pfVar4 = DAT_204034ec;
  pfVar5 = DAT_204034f0;
  iVar6 = DAT_204034e0;
  while( true ) {
    if (DAT_204034e8 == 1) {
      piVar3 = param_1 + 6;
    }
    else {
      piVar3 = param_1 + 4;
    }
    piVar1 = (int *)piVar3[1];
    while (piVar2 = piVar1, piVar2 != piVar3) {
      piVar1 = (int *)piVar2[1];
      if (((((piVar2[0x36] != 0) || ((char)piVar2[0x26] < '\0')) && ((float)piVar2[0x2d] <= *pfVar5)
           ) && (((float)piVar2[0x2e] <= pfVar5[1] && ((float)piVar2[0x2f] <= pfVar5[2])))) &&
         ((*pfVar4 <= (float)piVar2[0x30] &&
          ((pfVar4[1] <= (float)piVar2[0x31] && (pfVar4[2] <= (float)piVar2[0x32])))))) {
        if (iVar6 == DAT_204034e4) {
          Com_Printf();
          return;
        }
        *(int **)(DAT_204034f4 + iVar6 * 4) = piVar2 + -0x20;
        iVar6 = DAT_204034e0 + 1;
        pfVar4 = DAT_204034ec;
        pfVar5 = DAT_204034f0;
        DAT_204034e0 = iVar6;
      }
    }
    if (*param_1 == -1) break;
    if ((float)param_1[1] < pfVar5[*param_1]) {
      FUN_200645c0(param_1[2]);
      pfVar4 = DAT_204034ec;
      pfVar5 = DAT_204034f0;
      iVar6 = DAT_204034e0;
    }
    if ((float)param_1[1] <= pfVar4[*param_1]) {
      return;
    }
    param_1 = (int *)param_1[3];
  }
  return;
}

