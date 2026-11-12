// rea decompile_all
// name: FUN_20024d90
// address: 0x20024d90
// body: available
// range: 0x20024d90-0x20024def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20024d90(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  do {
    param_1[~uVar3 - 7] = (char)(iVar4 / 10) + '0';
    param_1[~uVar3 - 6] = (char)(iVar4 % 10) + '0';
    iVar2 = FUN_200faa9a(param_1,&DAT_201311d4);
    if (iVar2 == 0) break;
    FUN_200fa9ae(iVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 100);
  return iVar4 != 100;
}

