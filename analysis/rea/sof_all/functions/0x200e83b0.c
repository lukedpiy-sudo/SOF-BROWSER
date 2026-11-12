// rea decompile_all
// name: FUN_200e83b0
// address: 0x200e83b0
// body: available
// range: 0x200e83b0-0x200e849d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e83b0(undefined1 param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_201101a8;
  local_c = ExceptionList;
  pcVar5 = (char *)0x0;
  uVar6 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_200eafe0(1);
  pcVar2 = (char *)FUN_200eb440(0);
  uVar3 = 0xffffffff;
  pcVar4 = pcVar2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_2000a6c0(uVar3,1);
  if (cVar1 != '\0') {
    pcVar4 = pcVar5;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    pcVar5[uVar3] = '\0';
    uVar6 = uVar3;
  }
  FUN_200eb460();
  pcVar2 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_200eaf60(pcVar2);
  if (pcVar5 != (char *)0x0) {
    if (pcVar5[-1] != '\0') {
      pcVar5[-1] = pcVar5[-1] + -1;
      ExceptionList = local_c;
      return 1;
    }
    FUN_200f9f75(pcVar5 + -1,param_1,pcVar5,uVar6);
  }
  ExceptionList = local_c;
  return 1;
}

