// rea decompile_all
// name: FUN_200d39e0
// address: 0x200d39e0
// body: available
// range: 0x200d39e0-0x200d3ad5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d39e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  char *pcVar4;
  
  if (((*(int *)(in_ECX + 0x50) != 0) && ((*(byte *)(*(int *)(in_ECX + 0x50) + 0xc) & 0x10) != 0))
     && (3 < DAT_201c1f00)) {
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x9c);
  if (param_1 == 1) {
    *(int *)(in_ECX + 0x9c) = iVar1 + 1;
    if (*(int *)(in_ECX + 0xb0) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 0xb4) - *(int *)(in_ECX + 0xb0) >> 4;
    }
    if (iVar1 + 1 == iVar3) {
      *(undefined4 *)(in_ECX + 0x9c) = 0;
    }
  }
  else {
    if (param_1 != 2) goto LAB_200d3a9f;
    *(int *)(in_ECX + 0x9c) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      if (*(int *)(in_ECX + 0xb0) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_ECX + 0xb4) - *(int *)(in_ECX + 0xb0) >> 4;
      }
      *(int *)(in_ECX + 0x9c) = iVar3 + -1;
    }
  }
  FUN_200d3640();
  iVar3 = FUN_200d3830();
  *(int *)(in_ECX + 0x9c) = iVar3;
  if (iVar3 == iVar1) {
    pcVar4 = s_menu_small_invalid_wav_20158370;
  }
  else {
    pcVar4 = s_menu_small_select_wav_20158548;
  }
  (*DAT_20390d94)(pcVar4);
LAB_200d3a9f:
  for (puVar2 = *(undefined4 **)(in_ECX + 0x88); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    if ((param_1 == puVar2[1]) || (puVar2[1] == 0)) {
      (*DAT_20390d94)(s_menu_small_select_wav_20158548);
      FUN_200c7190(in_ECX);
    }
  }
  return;
}

