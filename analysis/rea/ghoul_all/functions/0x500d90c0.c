// rea decompile_all
// name: FUN_500d90c0
// address: 0x500d90c0
// body: available
// range: 0x500d90c0-0x500d91c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500d90c0(uint param_1)

{
  int iVar1;
  void *this;
  int *piVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501156eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x2a0);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_500d8e60(this,param_1);
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x41494841,piVar2 + 0x9c,0x30);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(1);
  }
  FUN_50004390(param_1);
  if (*(int *)(param_1 + 0x294) != 0) {
    for (iVar1 = *(int *)(param_1 + 0x290); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
      puVar3 = operator_new(0x2c);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_LAB_50129a38;
        puVar3[1] = *(undefined4 *)(iVar1 + 4);
        puVar3[2] = *(undefined4 *)(iVar1 + 8);
        puVar3[3] = *(undefined4 *)(iVar1 + 0xc);
        puVar3[4] = *(undefined4 *)(iVar1 + 0x10);
        puVar3[5] = *(undefined4 *)(iVar1 + 0x14);
        puVar3[6] = *(undefined4 *)(iVar1 + 0x18);
        puVar3[7] = *(undefined4 *)(iVar1 + 0x1c);
        puVar3[8] = *(undefined4 *)(iVar1 + 0x20);
        puVar3[9] = *(undefined4 *)(iVar1 + 0x24);
        puVar3[10] = 0;
      }
      (*DAT_5015cb44)(0x48455750,puVar3,0x2c);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

