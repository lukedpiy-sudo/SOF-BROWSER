// rea decompile_all
// name: FUN_20056300
// address: 0x20056300
// body: available
// range: 0x20056300-0x200563a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20056300(char *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  do {
    if (param_2 == '\0') {
      uVar4 = 0xffffffff;
      pcVar6 = (&PTR_s_VERSION_20138848)[iVar5];
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar3 = FUN_200fbba0(param_1,(&PTR_s_VERSION_20138848)[iVar5],~uVar4 - 1);
      if (iVar3 == 0) {
        uVar4 = 0xffffffff;
        pcVar6 = (&PTR_s_VERSION_20138848)[iVar5];
        break;
      }
    }
    else {
      iVar3 = __strcmpi(param_1,(&PTR_s_VERSION_20138848)[iVar5]);
      if (iVar3 == 0) {
        return iVar5;
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 0x16) {
      return -1;
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar2 == '\0') break;
    if (uVar4 == 0) break;
  }
  iVar3 = ~uVar4 - 1;
  cVar2 = param_1[iVar3];
  while (cVar2 == ' ') {
    iVar1 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    cVar2 = param_1[iVar1];
  }
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_200fa360(param_1,param_1 + iVar3,~uVar4 - iVar3);
  return iVar5;
}

