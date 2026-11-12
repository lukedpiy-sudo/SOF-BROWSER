// rea decompile_all
// name: FUN_200251c0
// address: 0x200251c0
// body: available
// range: 0x200251c0-0x2002526b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200251c0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      if (param_1[iVar5] == '\\') {
        param_1[iVar5] = '/';
      }
      cVar1 = FUN_200fb2a2((int)param_1[iVar5]);
      param_1[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  for (iVar4 = ~uVar3 - 2; (0 < iVar4 && (param_1[iVar4] == ' ')); iVar4 = iVar4 + -1) {
    param_1[iVar4] = '\0';
  }
  pcVar2 = (char *)FUN_200fa6a0(param_1,s__BASE__20131204);
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_200fa360(param_1,pcVar2 + 6,~uVar3);
  }
  pcVar2 = (char *)FUN_200fa6a0(param_1,s__GHOUL__201311fc);
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_200fa360(param_1,pcVar2 + 1,~uVar3);
  }
  return;
}

