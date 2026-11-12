// rea decompile_all
// name: FUN_2001ead0
// address: 0x2001ead0
// body: available
// range: 0x2001ead0-0x2001ebb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001ead0(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_400 [20];
  undefined1 local_3ec;
  char local_200 [512];
  
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    while( true ) {
      pcVar5 = local_400;
      while ((cVar1 != '\0' && (cVar1 != '\\'))) {
        *pcVar5 = cVar1;
        pcVar4 = param_1 + 1;
        pcVar5 = pcVar5 + 1;
        param_1 = param_1 + 1;
        cVar1 = *pcVar4;
      }
      if ((int)pcVar5 - (int)local_400 < 0x14) {
        uVar2 = 0x14 - ((int)pcVar5 - (int)local_400);
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined **)pcVar5 = &DAT_20202020;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar5 = ' ';
          pcVar5 = pcVar5 + 1;
        }
        local_3ec = 0;
      }
      else {
        *pcVar5 = '\0';
      }
      Com_Printf(&DAT_2011d114,local_400);
      if (*param_1 == '\0') break;
      pcVar5 = local_200;
      cVar1 = param_1[1];
      pcVar4 = param_1;
      while ((param_1 = pcVar4 + 1, cVar1 != '\0' && (cVar1 != '\\'))) {
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
        cVar1 = pcVar4[2];
        pcVar4 = param_1;
      }
      cVar1 = *param_1;
      *pcVar5 = '\0';
      if (cVar1 != '\0') {
        param_1 = pcVar4 + 2;
      }
      Com_Printf(&DAT_2011d990,local_200);
      cVar1 = *param_1;
      if (cVar1 == '\0') {
        return;
      }
    }
    Com_Printf(s_MISSING_VALUE_20121408);
  }
  return;
}

