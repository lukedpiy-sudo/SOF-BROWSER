// rea decompile_all
// name: FUN_500bccc0
// address: 0x500bccc0
// body: available
// range: 0x500bccc0-0x500bcd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_500bccc0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  
  if ((param_2 != 0xff) && (0 < param_2)) {
    pbVar5 = (byte *)(param_3 + 0x42);
    do {
      pcVar6 = param_1;
      do {
        cVar1 = *pcVar6;
        pcVar6[(int)(pbVar5 + (-0x42 - (int)param_1))] = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        pcVar6 = param_1 + 1;
        param_1 = param_1 + 1;
        cVar1 = *pcVar6;
      }
      *(undefined2 *)(pbVar5 + -2) = *(undefined2 *)(param_1 + 0xb);
      iVar7 = 0;
      bVar2 = param_1[0xd];
      pcVar6 = param_1 + 0xf;
      *pbVar5 = bVar2;
      pbVar4 = pbVar5;
      if (bVar2 != 0) {
        do {
          uVar3 = *(undefined2 *)pcVar6;
          pcVar6 = pcVar6 + 2;
          *(undefined2 *)(pbVar4 + 2) = uVar3;
          iVar7 = iVar7 + 1;
          pbVar4 = pbVar4 + 2;
        } while (iVar7 < (int)(uint)*pbVar5);
      }
      param_1 = pcVar6 + 6;
      pbVar5 = pbVar5 + 100;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return param_1;
  }
  return param_1;
}

