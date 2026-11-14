// rea decompile_all
// name: FUN_30019260
// address: 0x30019260
// body: available
// range: 0x30019260-0x30019375 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_30019260(float param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float local_18 [6];
  
  local_18[2] = 37800.0;
  iVar2 = 0;
  local_18[0] = param_1 * 37800.0;
  piVar3 = (int *)(&DAT_3002ff10 + param_3 * 0xc);
  local_18[1] = param_2 * 37800.0;
  do {
    iVar1 = *piVar3;
    if (iVar1 < 0) {
      local_18[iVar2 + 3] = -*(float *)((int)local_18 - (iVar1 * 4 + 4));
    }
    else {
      local_18[iVar2 + 3] = (float)*(undefined4 *)(&stack0xffffffe4 + iVar1 * 4);
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 3);
  param_1 = (param_1 + 1.0) * 0.5;
  if (DAT_300a41cc <= param_1) {
    if (DAT_300a41c8 < param_1) {
      param_1 = DAT_300a41c8;
    }
  }
  else {
    param_1 = DAT_300a41cc;
  }
  (*DAT_300a42f4)(param_1);
  (*DAT_300a4520)(local_18 + 1);
  return;
}

