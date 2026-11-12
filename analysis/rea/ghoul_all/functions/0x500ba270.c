// rea decompile_all
// name: FUN_500ba270
// address: 0x500ba270
// body: available
// range: 0x500ba270-0x500ba387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500ba270(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50115158;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  local_1c[0] = param_1._0_1_;
  uVar5 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  uVar3 = FUN_50082c70(local_1c,uVar5,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar8 = param_1;
    pcVar9 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_18[uVar5] = '\0';
    local_14 = uVar5;
  }
  iVar2 = DAT_50165b54;
  local_4 = 0;
  piVar7 = *(int **)(DAT_50165b54 + 4);
  piVar4 = operator_new(0x18);
  *piVar4 = iVar2;
  if (piVar7 == (int *)0x0) {
    piVar7 = piVar4;
  }
  piVar4[1] = (int)piVar7;
  *(int **)(iVar2 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  FUN_500a6db0((undefined1 *)(piVar4 + 2),local_1c);
  DAT_50165b58 = DAT_50165b58 + 1;
  if (local_18 != (char *)0x0) {
    if (local_18[-1] == '\0') {
      FUN_50106b60(local_18 + -1);
    }
    else {
      local_18[-1] = local_18[-1] + -1;
    }
  }
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  ExceptionList = local_c;
  return ~uVar5;
}

