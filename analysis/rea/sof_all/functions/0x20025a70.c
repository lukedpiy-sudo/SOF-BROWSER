// rea decompile_all
// name: FUN_20025a70
// address: 0x20025a70
// body: available
// range: 0x20025a70-0x20025ba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20025a70(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_4;
  
  local_4 = param_1;
  bVar4 = false;
  pcVar7 = param_1;
  pcVar8 = param_2;
  do {
    if (*pcVar7 == '*') {
      do {
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 == '*');
      bVar4 = true;
      param_2 = pcVar8;
      local_4 = pcVar7;
    }
    if (*pcVar7 == '\0') {
      if (*pcVar8 == '\0') {
        return true;
      }
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + -1;
        if (pcVar7 <= param_1) break;
      } while (*pcVar7 == '?');
      if (((*pcVar7 == '*') && (param_1 < pcVar7)) && (pcVar8[-2] != '\\')) {
        return true;
      }
      if (!bVar4) {
        return false;
      }
      pcVar8 = param_2 + 1;
      pcVar7 = local_4;
      param_2 = pcVar8;
    }
    else if (*pcVar8 == '\0') {
      cVar2 = *pcVar7;
      while (cVar2 == '*') {
        pcVar8 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
        cVar2 = *pcVar8;
      }
      return *pcVar7 == '\0';
    }
    if ((*pcVar7 == '\\') && ((pcVar7[1] == '*' || (pcVar7[1] == '?')))) {
      pcVar7 = pcVar7 + 1;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    iVar5 = FUN_200fb36e((int)*pcVar7);
    iVar6 = FUN_200fb36e((int)*pcVar8);
    if ((iVar5 == iVar6) || ((*pcVar7 == '?' && (!bVar3)))) {
      if (*pcVar7 != '\0') {
        pcVar7 = pcVar7 + 1;
      }
      if (*pcVar8 != '\0') {
        pcVar8 = pcVar8 + 1;
      }
    }
    else {
      if (!bVar4) {
        return false;
      }
      pcVar8 = param_2 + 1;
      pcVar7 = local_4;
      param_2 = pcVar8;
    }
  } while( true );
}

