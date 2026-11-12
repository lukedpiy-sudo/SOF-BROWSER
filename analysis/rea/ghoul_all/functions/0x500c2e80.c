// rea decompile_all
// name: FUN_500c2e80
// address: 0x500c2e80
// body: available
// range: 0x500c2e80-0x500c2f5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500c2e80(char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint auStack_20 [8];
  
  uVar1 = 0;
  iVar5 = 0;
  if (param_1 == (char *)0x0) {
    (*DAT_5015ca24)(s_G_PickTarget_called_with_NULL_ta_501514a4);
    return 0;
  }
  do {
    uVar4 = DAT_5015cca0;
    if (uVar1 != 0) {
      uVar4 = uVar1 + 0x464;
    }
    uVar1 = uVar4;
    iVar3 = DAT_5015c938;
    uVar4 = DAT_5015cca0;
    if (DAT_5015cca0 + DAT_5015c938 * 0x464 <= uVar1) break;
    while (((*(int *)(uVar1 + 0x78) == 0 || (*(char **)(uVar1 + 0x1c8) == (char *)0x0)) ||
           (iVar2 = __strcmpi(*(char **)(uVar1 + 0x1c8),param_1), iVar3 = DAT_5015c938,
           uVar4 = DAT_5015cca0, iVar2 != 0))) {
      uVar1 = uVar1 + 0x464;
      if (uVar4 + iVar3 * 0x464 <= uVar1) goto LAB_500c2f2f;
    }
    auStack_20[iVar5] = uVar1;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
LAB_500c2f2f:
  if (iVar5 != 0) {
    uVar1 = FUN_50107636();
    return auStack_20[(int)uVar1 % iVar5];
  }
  (*DAT_5015ca24)(s_G_PickTarget__target__s_not_foun_50151480,param_1);
  return 0;
}

