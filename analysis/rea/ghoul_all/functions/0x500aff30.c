// rea decompile_all
// name: FUN_500aff30
// address: 0x500aff30
// body: available
// range: 0x500aff30-0x500b0036 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500aff30(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (param_1[0x71] == 0) {
    piVar5 = param_1 + 1;
    puVar1 = FUN_500c33f0();
    (*DAT_5015ca24)(s__s_with_no_target_at__s_5014ceec,param_1[0x6d],puVar1,piVar5);
    FUN_500c3880(param_1);
    return;
  }
  uVar4 = param_1[0x6e] & 2;
  if ((uVar4 != 0) && (param_1[0xc6] == 0)) {
    piVar5 = param_1 + 1;
    puVar1 = FUN_500c33f0();
    (*DAT_5015ca24)(s__s_with_no_count_at__s_5014ced4,param_1[0x6d],puVar1,piVar5);
    FUN_500c3880(param_1);
    return;
  }
  uVar2 = param_1[0x6e] & 1;
  if ((uVar2 != 0) && (param_1[0xc6] == 0)) {
    param_1[0xc6] = 0xe10;
  }
  param_1[0xcb] = 0;
  if (uVar2 == 0) {
    if (uVar4 != 0) {
      param_1[0xd8] = 0;
      param_1[0xbb] = param_1[0xc6];
    }
  }
  else {
    param_1[0xbb] = 0;
    param_1[0xd8] = (int)(float)param_1[0xc6];
  }
  iVar3 = (*DAT_5015cb38)(0x10,0x2fe);
  param_1[0x6b] = iVar3;
  param_1[0xae] = (int)FUN_500afba0;
  if ((*(byte *)(param_1 + 0x6e) & 4) != 0) {
    param_1[0xb1] = (int)&LAB_500afef0;
    return;
  }
  param_1[0xad] = (int)(DAT_5015ccdc + 1.0);
  return;
}

