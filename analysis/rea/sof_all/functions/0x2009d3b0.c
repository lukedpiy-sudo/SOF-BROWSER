// rea decompile_all
// name: FUN_2009d3b0
// address: 0x2009d3b0
// body: available
// range: 0x2009d3b0-0x2009d425 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009d3b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x30)) {
    do {
      iVar1 = *piVar3;
      iVar5 = 0;
      do {
        iVar4 = *(int *)(iVar1 + 0x24);
        *(undefined4 *)(iVar4 + 0x88 + iVar5) = 0;
        iVar4 = iVar4 + iVar5;
        if (*(char *)(iVar4 + 0x8c) != '\0') {
          uVar2 = FUN_200bfee0(param_1,iVar4 + 4,*(undefined1 *)(iVar4 + 0x15),
                               *(undefined1 *)(iVar4 + 0x16),0);
          *(undefined4 *)(iVar4 + 0x88) = uVar2;
        }
        iVar5 = iVar5 + 0xd8;
      } while (iVar5 < 0x1b0);
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(in_ECX + 0x30));
  }
  return;
}

