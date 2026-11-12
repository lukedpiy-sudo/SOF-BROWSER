// rea decompile_all
// name: FUN_20018fc0
// address: 0x20018fc0
// body: available
// range: 0x20018fc0-0x200190f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20018fc0(byte *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < DAT_2023f2d8) {
    do {
      Z_Free((&DAT_2023f2e0)[iVar7]);
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_2023f2d8);
  }
  DAT_2023f2d8 = 0;
  DAT_2023f420 = 0;
  if (param_2 != 0) {
    param_1 = (byte *)FUN_20018d60(param_1);
  }
  if (param_1 != (byte *)0x0) {
    while( true ) {
      bVar2 = *param_1;
      while ((bVar2 != 0 && (bVar2 < 0x21))) {
        if (bVar2 == 10) {
          return;
        }
        param_1 = param_1 + 1;
        bVar2 = *param_1;
      }
      if ((*param_1 == 10) || (*param_1 == 0)) break;
      if (DAT_2023f2d8 == 1) {
        pbVar3 = param_1;
        do {
          bVar2 = *pbVar3;
          pbVar3[(int)&DAT_2023f420 - (int)param_1] = bVar2;
          pbVar3 = pbVar3 + 1;
        } while (bVar2 != 0);
        uVar6 = 0xffffffff;
        pcVar4 = &DAT_2023f420;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        for (iVar7 = ~uVar6 - 2; (-1 < iVar7 && ((byte)(&DAT_2023f420)[iVar7] < 0x21));
            iVar7 = iVar7 + -1) {
          (&DAT_2023f420)[iVar7] = 0;
        }
      }
      pcVar4 = (char *)FUN_20055470(&param_1);
      if (param_1 == (byte *)0x0) {
        return;
      }
      if (DAT_2023f2d8 < 0x50) {
        uVar6 = 0xffffffff;
        pcVar5 = pcVar4;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar5 = (char *)Z_Malloc(~uVar6);
        (&DAT_2023f2e0)[DAT_2023f2d8] = pcVar5;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        DAT_2023f2d8 = DAT_2023f2d8 + 1;
      }
    }
  }
  return;
}

