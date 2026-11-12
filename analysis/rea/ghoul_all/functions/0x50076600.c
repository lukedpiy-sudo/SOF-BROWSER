// rea decompile_all
// name: FUN_50076600
// address: 0x50076600
// body: available
// range: 0x50076600-0x500767c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50076600(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *local_114;
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501148fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_50107654(local_110,(byte *)s_ds__s_os_501455a8);
  this = operator_new(0x4b4);
  local_4 = 0;
  if (this == (void *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = FUN_50079d60(this,local_110,param_1);
  }
  *(char **)(param_1 + 0x454) = pcVar3;
  iVar1 = DAT_5015c504;
  local_4 = 0xffffffff;
  piVar6 = *(int **)(DAT_5015c504 + 4);
  piVar4 = operator_new(0xc);
  *piVar4 = iVar1;
  if (piVar6 == (int *)0x0) {
    piVar6 = piVar4;
  }
  piVar4[1] = (int)piVar6;
  *(int **)(iVar1 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = *(int *)(param_1 + 0x454);
  }
  local_114 = &DAT_5015cc34;
  DAT_5015c508 = DAT_5015c508 + 1;
  do {
    pcVar3 = (char *)*local_114;
    if (pcVar3 == (char *)0x0) break;
    iVar1 = *(int *)(param_1 + 0x454);
    puVar5 = operator_new(0x8c);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar5 + 1),&DAT_501455a0,0x40);
      puVar5[0x11] = 4;
      puVar5[0x12] = 0xffffffff;
      *puVar5 = &PTR_FUN_50129528;
      _strncpy((char *)(puVar5 + 0x13),pcVar3,0x40);
    }
    iVar2 = *(int *)(iVar1 + 0x168);
    piVar6 = *(int **)(iVar2 + 4);
    piVar4 = operator_new(0xc);
    *piVar4 = iVar2;
    if (piVar6 == (int *)0x0) {
      piVar6 = piVar4;
    }
    piVar4[1] = (int)piVar6;
    *(int **)(iVar2 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    if (piVar4 + 2 != (int *)0x0) {
      piVar4[2] = (int)puVar5;
    }
    local_114 = local_114 + 1;
    *(int *)(iVar1 + 0x16c) = *(int *)(iVar1 + 0x16c) + 1;
  } while ((int)local_114 < 0x5015cc74);
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_50076570;
  ExceptionList = local_c;
  return;
}

