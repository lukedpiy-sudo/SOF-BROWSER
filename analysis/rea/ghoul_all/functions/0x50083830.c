// rea decompile_all
// name: FUN_50083830
// address: 0x50083830
// body: available
// range: 0x50083830-0x500839ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50083830(int param_1,float *param_2,float *param_3,int param_4)

{
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18 [3];
  float local_c [3];
  
  if (param_1 == DAT_5015cca0) {
    if (param_3 == (float *)0x0) {
      (*DAT_5015ca70)(1);
      (*DAT_5015ca84)(param_2);
      return;
    }
    (*DAT_5015ca70)(0);
    (*DAT_5015ca84)(param_2);
    FUN_50083c20(param_3);
    return;
  }
  if (*(int *)(param_1 + 0x158) == 3) {
    FUN_50083770(param_1,local_18,local_c,param_3,param_2);
    (*DAT_5015ca70)(2);
    (*DAT_5015ca84)(local_18);
    FUN_50083c20(local_c);
    (*DAT_5015ca74)((param_1 - DAT_5015cca0) / 0x464);
    if (*(int *)(param_1 + 0x24) == 0) {
      (*DAT_5015ca70)((int)*(char *)(param_4 + 0x23));
      return;
    }
    if (*(int *)(param_1 + 0x3c0) != 0) {
      (*DAT_5015ca70)(*(int *)(param_1 + 0x3c0));
      return;
    }
    (*DAT_5015ca70)((int)*(char *)(param_4 + 0x23));
    return;
  }
  local_1c = 0;
  local_24 = *param_2 - *(float *)(param_1 + 4);
  local_20 = param_2[1] - *(float *)(param_1 + 8);
  (*DAT_5015ca70)(3);
  (*DAT_5015ca84)(param_2);
  FUN_50083c20(&local_24);
  if ((*(int *)(param_1 + 0x450) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    (*DAT_5015ca70)(*(undefined4 *)(param_1 + 0x3c0));
    return;
  }
  (*DAT_5015ca70)(0x23);
  return;
}

