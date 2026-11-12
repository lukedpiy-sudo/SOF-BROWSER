// rea decompile_all
// name: FUN_2005f7d0
// address: 0x2005f7d0
// body: available
// range: 0x2005f7d0-0x2005f89d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005f7d0(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t _Count;
  
  iVar6 = param_1 + 4;
  (**(code **)(DAT_20396dd8 + 0x2c))(*(undefined4 *)(param_1 + 0x298),iVar6,param_2);
  _Count = 0x1f;
  pcVar2 = (char *)FUN_20055590(iVar6,&DAT_2011e3b0);
  _strncpy((char *)(param_1 + 0x29c),pcVar2,_Count);
  pcVar3 = (char *)FUN_20055590(iVar6,&DAT_2011d70c);
  iVar5 = -1;
  pcVar2 = pcVar3;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar5 == -2) {
    *(undefined4 *)(param_1 + 0x290) = 5000;
  }
  else {
    iVar5 = FUN_200f9e9e(pcVar3);
    *(int *)(param_1 + 0x290) = iVar5;
    if (iVar5 < 100) {
      *(undefined4 *)(param_1 + 0x290) = 100;
    }
    if (15000 < *(int *)(param_1 + 0x290)) {
      *(undefined4 *)(param_1 + 0x290) = 15000;
    }
  }
  pcVar3 = (char *)FUN_20055590(iVar6,&DAT_2011e388);
  iVar6 = -1;
  pcVar2 = pcVar3;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar6 != -2) {
    uVar4 = FUN_200f9e9e(pcVar3);
    *(undefined4 *)(param_1 + 700) = uVar4;
  }
  return;
}

