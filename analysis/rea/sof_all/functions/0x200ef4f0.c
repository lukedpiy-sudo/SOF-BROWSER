// rea decompile_all
// name: FUN_200ef4f0
// address: 0x200ef4f0
// body: available
// range: 0x200ef4f0-0x200ef58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ef4f0(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char local_158 [344];
  
  iVar2 = -(int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(local_158 + iVar2)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_200f9600(*(undefined4 *)(param_1 + 0x37c),local_158);
  if (iVar2 != 0) {
    FUN_200f9d32(*(undefined4 *)(iVar2 + 0xd0));
    if (param_3 == (char *)0x0) {
      param_3 = &DAT_2015ee44;
    }
    uVar4 = 0xffffffff;
    pcVar3 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = _malloc(uVar4);
    *(char **)(iVar2 + 0xd0) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)param_3;
        param_3 = param_3 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar3 = *param_3;
        param_3 = param_3 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  return;
}

