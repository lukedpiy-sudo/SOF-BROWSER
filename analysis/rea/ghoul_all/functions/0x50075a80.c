// rea decompile_all
// name: FUN_50075a80
// address: 0x50075a80
// body: available
// range: 0x50075a80-0x50075b70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_50075a80(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iStack_24;
  undefined4 *local_20;
  undefined1 local_1c [4];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_5011479b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0x10);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  *puVar3 = &PTR_FUN_5012965c;
  local_20 = puVar3;
  (*DAT_5015cb48)(0x53534947,local_1c,0x10,0);
  iVar4 = FUN_500ba8c0(iStack_18);
  puVar3[1] = iVar4;
  puVar3[2] = iStack_14;
  puVar3[3] = uStack_10;
  if (iStack_14 != 0) {
    (*DAT_5015cb48)(0x53434944,&iStack_24,4,0);
    piVar5 = &DAT_501451d0;
    puVar2 = PTR_FUN_501451d4;
    while (puVar2 != (undefined *)0x0) {
      if (*piVar5 == iStack_24) {
        uVar6 = (*(code *)piVar5[1])(param_1);
        goto LAB_50075b3d;
      }
      piVar1 = piVar5 + 3;
      piVar5 = piVar5 + 2;
      puVar2 = (undefined *)*piVar1;
    }
    (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
    uVar6 = 0;
LAB_50075b3d:
    puVar3[2] = uVar6;
  }
  ExceptionList = local_c;
  return puVar3;
}

