// rea decompile_all
// name: FUN_20096940
// address: 0x20096940
// body: available
// range: 0x20096940-0x20096b05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20096940(int *param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 4) == '\0') {
    FUN_20068550(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                 *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),in_ECX + 8);
  }
  if (*(char *)(in_ECX + 0x24) == '\0') {
    FUN_20068550(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                 *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),in_ECX + 0x28);
  }
  if (*(char *)(in_ECX + 0x44) == '\0') {
    FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                 *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),in_ECX + 0x48);
  }
  if (*(char *)(in_ECX + 0x78) == '\0') {
    FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                 *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),in_ECX + 0x7c);
  }
  if (*(char *)(in_ECX + 0x90) == '\0') {
    FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                 *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),in_ECX + 0x94);
  }
  if (*(char *)(in_ECX + 0xa8) == '\0') {
    FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                 *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),in_ECX + 0xac);
  }
  if (*(char *)(in_ECX + 0xe0) == '\0') {
    FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                 *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),in_ECX + 0xe4);
  }
  if (*(char *)(in_ECX + 0xf8) == '\0') {
    FUN_2009a1d0(*(int *)(*(int *)(param_1[3] + 0x14) + *param_1 * 4) +
                 *(int *)(*(int *)(param_1[3] + 4) + *param_1 * 4),in_ECX + 0xfc);
  }
  FUN_200c3150(param_1,in_ECX + 4,param_2,0);
  FUN_200c3490(param_1,in_ECX + 0xc0,param_2);
  FUN_200c3490(param_1,in_ECX + 0x110,param_2);
  FUN_200c3490(param_1,in_ECX + 0x130,param_2);
  return;
}

