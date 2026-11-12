// rea decompile_all
// name: FUN_200e12b0
// address: 0x200e12b0
// body: available
// range: 0x200e12b0-0x200e13a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e12b0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *in_ECX;
  char *pcVar4;
  
  cVar1 = FUN_200eafe0(1);
  do {
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x28))();
      return 1;
    }
    pcVar4 = s_weapons_2011e738;
    pcVar2 = (char *)FUN_200eb440(0);
    iVar3 = __strcmpi(pcVar2,pcVar4);
    if (iVar3 == 0) {
      in_ECX[0x2b] = 0;
    }
    else {
      pcVar4 = s_items_2011e740;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar4);
      if (iVar3 == 0) {
        in_ECX[0x2b] = 1;
      }
      else {
        pcVar4 = &DAT_20159050;
        pcVar2 = (char *)FUN_200eb440(0);
        iVar3 = __strcmpi(pcVar2,pcVar4);
        if (iVar3 == 0) {
          in_ECX[0x2b] = 2;
        }
        else {
          pcVar4 = &DAT_20159048;
          pcVar2 = (char *)FUN_200eb440(0);
          iVar3 = __strcmpi(pcVar2,pcVar4);
          if (iVar3 == 0) {
            in_ECX[0x2b] = 3;
          }
          else {
            cVar1 = FUN_200cf890(param_1);
            if (cVar1 == '\0') {
              FUN_200eb490(param_1,s_Unrecognised_selection_keyword_20159028);
              return 0;
            }
          }
        }
      }
    }
    cVar1 = FUN_200eafe0(1);
  } while( true );
}

