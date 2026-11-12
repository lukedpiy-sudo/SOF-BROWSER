// rea decompile_all
// name: FUN_20025480
// address: 0x20025480
// body: available
// range: 0x20025480-0x20025538 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20025480(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  piVar2 = *(int **)(in_ECX + 8);
  piVar3 = (int *)*piVar2;
  if (*(int *)(in_ECX + 0x14) == 0) {
    while (piVar3 != piVar2) {
      FUN_20049b90();
      FUN_20049770(local_4,piVar3);
    }
  }
  else {
    FUN_20027580(piVar2[1]);
    *(undefined4 *)(*(int *)(in_ECX + 8) + 4) = *(undefined4 *)(in_ECX + 0xc);
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 8);
    *(int *)(*(int *)(in_ECX + 8) + 8) = *(int *)(in_ECX + 8);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}

