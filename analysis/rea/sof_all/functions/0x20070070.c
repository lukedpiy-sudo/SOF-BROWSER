// rea decompile_all
// name: FUN_20070070
// address: 0x20070070
// body: available
// range: 0x20070070-0x20070127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20070070(char *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *in_ECX;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  *in_ECX = *param_2;
  uVar2 = 0xffffffff;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  pcVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  if (0xfffffffd < uVar2) {
    FUN_201075d0();
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  if ((*(int *)(in_ECX + 4) == 0) || (*(char *)(*(int *)(in_ECX + 4) + -1) == '\0')) {
    if (uVar2 == 0) {
      FUN_2000a5b0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (uVar2 <= *(uint *)(in_ECX + 0xc))) goto LAB_200700fe;
    FUN_2000a5b0(1);
  }
  else if (uVar2 == 0) {
    FUN_2000a5b0(1);
    return;
  }
  FUN_2000a840(uVar2);
LAB_200700fe:
  pcVar4 = *(char **)(in_ECX + 4);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = *param_1;
    param_1 = param_1 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(uint *)(in_ECX + 8) = uVar2;
  *(undefined1 *)(uVar2 + *(int *)(in_ECX + 4)) = 0;
  return;
}

