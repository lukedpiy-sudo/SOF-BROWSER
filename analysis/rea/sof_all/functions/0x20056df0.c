// rea decompile_all
// name: FUN_20056df0
// address: 0x20056df0
// body: available
// range: 0x20056df0-0x20056ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20056df0(uint *param_1,uint *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  
  if (*(char **)(in_ECX + 0xc) != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar6 = *(char **)(in_ECX + 0xc);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 - 1;
    pcVar3 = operator_new(~uVar4);
    pcVar6 = *(char **)(in_ECX + 0xc);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    *param_2 = 0xffffffff;
    *param_1 = 0xffffffff;
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        iVar9 = iVar8;
        if (pcVar3[iVar8] == '%') {
          iVar9 = iVar8 + 1;
          switch(pcVar3[iVar8 + 1]) {
          case 'd':
            param_3 = param_3 + 4;
            break;
          case 'h':
            iVar9 = iVar8 + 2;
            if ((pcVar3[iVar8 + 2] == 'd') || (pcVar3[iVar8 + 2] == 'u')) {
              param_3 = param_3 + 2;
            }
            break;
          case 'p':
            if (*param_1 == 0xffffffff) {
              *param_1 = (uint)*param_3;
            }
            else {
              *param_2 = (uint)*param_3;
            }
            param_3 = param_3 + 1;
            break;
          case 's':
            uVar4 = 0xffffffff;
            pbVar10 = param_3;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              bVar2 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar2 != 0);
            param_3 = param_3 + ~uVar4;
          }
        }
        iVar8 = iVar9 + 1;
      } while (iVar8 < iVar5);
    }
  }
  return;
}

