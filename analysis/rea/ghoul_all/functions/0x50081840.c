// rea decompile_all
// name: FUN_50081840
// address: 0x50081840
// body: available
// range: 0x50081840-0x500818cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5008189b to 0x500814a0 FUN_500814a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x500818c9 to 0x500814a0 FUN_500814a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50081840(void *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if ((*(int *)(DAT_5015c97c + 0x18) == 0x40000000) && (DAT_501451cc != '\0')) {
    DAT_501451cc = '\0';
    (*DAT_5015cb78)(s_stopsound_50145e88);
  }
  piVar2 = (int *)**(int **)((int)param_1 + 0x180);
  if (piVar2 != *(int **)((int)param_1 + 0x180)) {
    while( true ) {
      bVar1 = FUN_5007c8e0(param_1,piVar2[2]);
      if (bVar1) break;
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)*(int *)((int)param_1 + 0x180)) {
        FUN_500814a0((int)param_1);
        return;
      }
    }
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_50106b60((undefined *)piVar2);
    *(int *)((int)param_1 + 0x184) = *(int *)((int)param_1 + 0x184) + -1;
  }
  FUN_500814a0((int)param_1);
  return;
}

