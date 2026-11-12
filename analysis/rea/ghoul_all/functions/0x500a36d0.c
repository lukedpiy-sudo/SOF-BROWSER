// rea decompile_all
// name: FUN_500a36d0
// address: 0x500a36d0
// body: available
// range: 0x500a36d0-0x500a37f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a36d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114e26;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x1c);
  local_4 = 0;
  local_10 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = FUN_500a69e0();
    puVar1[1] = uVar2;
    puVar1[2] = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_LAB_50129848;
    puVar1[3] = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar3 = FUN_500ba390(*(int *)(param_1 + 0x10));
    puVar1[4] = iVar3;
    local_18 = *(uint *)(param_1 + 0x14);
    if (local_18 == 0) {
      puVar1[5] = 0;
      *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_1 + 0x18);
    }
    else {
      FUN_5006b100(&DAT_5018b468,&local_14,&local_18);
      if (local_14 == DAT_5018b46c) {
        puVar1[5] = 0;
        *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_1 + 0x18);
      }
      else {
        puVar1[5] = *(undefined4 *)(local_14 + 0x10);
        *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_1 + 0x18);
      }
    }
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x47474f49,puVar1 + 3,0x10);
  puVar1[4] = 0;
  FUN_500a3bd0(puVar1);
  FUN_50106b60((undefined *)puVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_500baf10();
  }
  ExceptionList = pvStack_c;
  return;
}

