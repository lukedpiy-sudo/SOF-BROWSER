// rea decompile_all
// name: FUN_500ba790
// address: 0x500ba790
// body: available
// range: 0x500ba790-0x500ba8be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ba790(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50115178;
  pvStack_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  FUN_500826d0(local_1c,'\0');
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      FUN_500ba520((int)param_1,param_2);
      piVar3 = param_1 + 4;
      param_1 = param_1 + 4;
      iVar1 = *piVar3;
    }
  }
  (*DAT_5015cb44)(param_3,param_2,param_4);
  uVar7 = 0;
  puVar6 = (undefined4 *)*DAT_50165b54;
  if (DAT_50165b58 != 0) {
    do {
      puVar5 = (undefined1 *)puVar6[3];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_50129750;
      }
      (*DAT_5015cb44)(0x53545247,puVar5,puVar6[4] + 1);
      puVar6 = (undefined4 *)*puVar6;
      uVar7 = uVar7 + 1;
    } while (uVar7 < DAT_50165b58);
  }
  piVar4 = DAT_50165b54;
  piVar3 = (int *)*DAT_50165b54;
  while (piVar3 != piVar4) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_500bc0c0(piVar3 + 2,0);
    FUN_50106b60((undefined *)piVar3);
    DAT_50165b58 = DAT_50165b58 - 1;
    piVar3 = piVar2;
  }
  if (iStack_18 != 0) {
    if (*(char *)(iStack_18 + -1) != '\0') {
      *(char *)(iStack_18 + -1) = *(char *)(iStack_18 + -1) + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_50106b60((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}

