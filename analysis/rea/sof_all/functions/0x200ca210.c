// rea decompile_all
// name: FUN_200ca210
// address: 0x200ca210
// body: available
// range: 0x200ca210-0x200ca2ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ca210(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar3 = Cvar_Get(param_1,&DAT_2011c4ac,0,0);
  *(undefined4 *)(in_ECX + 0x38) = uVar3;
  uVar4 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  if (0xfffffffd < uVar4) {
    FUN_201075d0();
  }
  iVar2 = *(int *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = 0;
  if ((iVar2 == 0) || (*(char *)(iVar2 + -1) == '\0')) {
    if (uVar4 == 0) {
      FUN_2000a5b0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0x48) < 0x20) && (uVar4 <= *(uint *)(in_ECX + 0x48))) goto LAB_200ca2a7;
    FUN_2000a5b0(1);
  }
  else if (uVar4 == 0) {
    *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
    *(undefined4 *)(in_ECX + 0x40) = 0;
    *(undefined4 *)(in_ECX + 0x44) = 0;
    *(undefined4 *)(in_ECX + 0x48) = 0;
    return;
  }
  FUN_2000a840(uVar4);
LAB_200ca2a7:
  pcVar6 = *(char **)(in_ECX + 0x40);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *param_2;
    param_2 = param_2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(uint *)(in_ECX + 0x44) = uVar4;
  *(undefined1 *)(uVar4 + *(int *)(in_ECX + 0x40)) = 0;
  return;
}

