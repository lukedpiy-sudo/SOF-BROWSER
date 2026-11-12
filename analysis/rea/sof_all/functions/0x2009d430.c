// rea decompile_all
// name: FUN_2009d430
// address: 0x2009d430
// body: available
// range: 0x2009d430-0x2009d5cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009d430(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = *(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x30)) {
    do {
      iVar1 = *piVar3;
      iVar2 = *(int *)(iVar1 + 0x24);
      FUN_2009fc20(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                   *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4));
      FUN_2009ed50(param_1,iVar2 + 0x2c);
      iVar2 = *(int *)(iVar1 + 0x24);
      FUN_2009fc20(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                   *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4));
      FUN_2009ed50(param_1,iVar2 + 0x104);
      if (*(char *)(iVar1 + 0x30) == '\0') {
        FUN_20068550(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                     *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),iVar1 + 0x34);
      }
      if (*(char *)(iVar1 + 0x50) == '\0') {
        FUN_20068550(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                     *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),iVar1 + 0x54);
      }
      if (*(char *)(iVar1 + 0x70) == '\0') {
        FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                     *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),iVar1 + 0x74);
      }
      if (*(char *)(iVar1 + 0x88) == '\0') {
        FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                     *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),iVar1 + 0x8c);
      }
      if (*(char *)(iVar1 + 0xa0) == '\0') {
        FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                     *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),iVar1 + 0xa4);
      }
      FUN_20099fd0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                   *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4));
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(in_ECX + 0x30));
  }
  return;
}

