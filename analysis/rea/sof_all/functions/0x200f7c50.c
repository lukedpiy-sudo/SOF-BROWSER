// rea decompile_all
// name: FUN_200f7c50
// address: 0x200f7c50
// body: available
// range: 0x200f7c50-0x200f7ccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200f7c50(int param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 local_8 [2];
  
  iVar2 = 5;
  bVar5 = true;
  pcVar3 = param_2;
  pcVar4 = &DAT_2011dd30;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    return (int)*(short *)(param_1 + 6);
  }
  puVar1 = (undefined4 *)FUN_200f9600(*(undefined4 *)(param_1 + 0x10),&param_2);
  if (puVar1 != (undefined4 *)0x0) {
    local_8[0] = *puVar1;
    iVar2 = FUN_200f9600(*(undefined4 *)(param_1 + 0xc),local_8);
    if (iVar2 != 0) {
      iVar2 = FUN_200f9e9e(*(undefined4 *)(iVar2 + 4));
      return iVar2;
    }
  }
  return param_3;
}

