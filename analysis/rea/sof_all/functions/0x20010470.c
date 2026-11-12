// rea decompile_all
// name: FUN_20010470
// address: 0x20010470
// body: available
// range: 0x20010470-0x200105f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20010470(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int local_380;
  char local_2f0 [100];
  char local_28c [652];
  
  iVar6 = 0;
  iVar7 = 0;
  FUN_200360a0();
  FUN_2003c660();
  FUN_2003c830();
  FUN_2003ca20();
  FUN_2003ce10();
  local_380 = 0;
  bVar1 = *param_3;
  param_3 = param_3 + 4;
  if (0.0 < (float)bVar1) {
    do {
      param_3 = param_3 + 4;
      uVar3 = __ftol();
      switch(uVar3) {
      case 1:
        FUN_2003c7d0(&param_3);
        if (param_2 != 0) {
          pcVar4 = local_2f0;
          pcVar5 = (char *)(DAT_20225250 + iVar6);
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *pcVar5 = cVar2;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x100;
        break;
      case 2:
        FUN_2003c9e0(&param_3);
        break;
      case 3:
        FUN_2003cd30(&param_3);
        if (param_2 != 0) {
          pcVar4 = local_28c;
          pcVar5 = (char *)(DAT_20225250 + iVar6);
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *pcVar5 = cVar2;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
        }
      case 0:
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x100;
        break;
      case 4:
        FUN_2003cfe0(&param_3);
      }
      if (2 < param_1) {
        param_3 = param_3 + 8;
      }
      local_380 = local_380 + 1;
    } while ((float)local_380 < (float)bVar1);
  }
  return iVar7;
}

