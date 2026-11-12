// rea decompile_all
// name: FUN_200ca2f0
// address: 0x200ca2f0
// body: available
// range: 0x200ca2f0-0x200ca393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ca2f0(char *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_201075d0();
  }
  iVar2 = *(int *)(in_ECX + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = 0;
  if ((iVar2 == 0) || (*(char *)(iVar2 + -1) == '\0')) {
    if (uVar3 == 0) {
      FUN_2000a5b0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0x58) < 0x20) && (uVar3 <= *(uint *)(in_ECX + 0x58))) goto LAB_200ca370;
    FUN_2000a5b0(1);
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
    *(undefined4 *)(in_ECX + 0x50) = 0;
    *(undefined4 *)(in_ECX + 0x54) = 0;
    *(undefined4 *)(in_ECX + 0x58) = 0;
    return;
  }
  FUN_2000a840(uVar3);
LAB_200ca370:
  pcVar5 = *(char **)(in_ECX + 0x50);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = *param_1;
    param_1 = param_1 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(uint *)(in_ECX + 0x54) = uVar3;
  *(undefined1 *)(uVar3 + *(int *)(in_ECX + 0x50)) = 0;
  return;
}

