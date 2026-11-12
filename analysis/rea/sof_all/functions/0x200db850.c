// rea decompile_all
// name: FUN_200db850
// address: 0x200db850
// body: available
// range: 0x200db850-0x200db99c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200db900) */

void FUN_200db850(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  
  FUN_200e3940(*(undefined4 *)(in_ECX + 0xe4),*(undefined4 *)(in_ECX + 0xe8));
  uVar1 = FUN_200e4810(*(undefined4 *)(in_ECX + 0xf8),*(undefined4 *)(in_ECX + 0xf8),
                       *(undefined4 *)(in_ECX + 0xf4));
  FUN_200e39f0(uVar1,*(undefined4 *)(in_ECX + 0xf8));
  *(undefined4 *)(in_ECX + 0xf8) = uVar1;
  piVar3 = *(int **)(in_ECX + 0xd4);
  if (piVar3 != *(int **)(in_ECX + 0xd8)) {
    do {
      *piVar3 = in_ECX;
      if (piVar3[5] == 0) {
        FUN_20027630(*(undefined4 *)(in_ECX + 0xe8),1,piVar3);
      }
      if (piVar3[5] == 1) {
        FUN_20027630(*(undefined4 *)(in_ECX + 0xf8),1,piVar3);
      }
      piVar3 = piVar3 + 0x10;
    } while (piVar3 != *(int **)(in_ECX + 0xd8));
  }
  uVar1 = *(undefined4 *)(in_ECX + 0xd4);
  FUN_200e39f0(uVar1,*(undefined4 *)(in_ECX + 0xd8));
  *(undefined4 *)(in_ECX + 0xd8) = uVar1;
  if (*(int *)(in_ECX + 0xe4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0xe8) - *(int *)(in_ECX + 0xe4) >> 6;
  }
  FUN_200fbfd9(*(undefined4 *)(in_ECX + 0xe4),iVar2,0x40,FUN_200da4f0);
  if (*(int *)(in_ECX + 0xf4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0xf8) - *(int *)(in_ECX + 0xf4) >> 6;
  }
  FUN_200fbfd9(*(undefined4 *)(in_ECX + 0xf4),iVar2,0x40,FUN_200da4f0);
  return;
}

