// rea decompile_all
// name: FUN_500bb2d0
// address: 0x500bb2d0
// body: available
// range: 0x500bb2d0-0x500bb3ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500bb2d0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uStack_19;
  int local_18;
  undefined1 *puStack_14;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_501151be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*DAT_5015cb48)(0x4f494e4d,&local_18,4,0);
  iVar2 = 0;
  if (0 < local_18) {
    do {
      puVar1 = operator_new(0x70);
      puStack_14 = puVar1;
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = (undefined1 *)0x0;
      }
      else {
        *puVar1 = uStack_19;
        *(undefined4 *)(puVar1 + 4) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
        *(undefined4 *)(puVar1 + 0xc) = 0;
        puStack_10 = (undefined4 *)(puVar1 + 0x14);
        *(undefined4 *)(puVar1 + 0x18) = 0;
        uStack_4._0_1_ = 2;
        uStack_4._1_3_ = 0;
        *puStack_10 = &PTR_FUN_501298a8;
        *(undefined4 *)(puVar1 + 0x1c) = 0;
        FUN_500b6980((int)puStack_10);
        puStack_10 = (undefined4 *)(puVar1 + 0x28);
        *(undefined4 *)(puVar1 + 0x2c) = 0;
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        *puStack_10 = &PTR_FUN_501298b0;
        *(undefined4 *)(puVar1 + 0x30) = 0;
        FUN_500b70f0((int)puStack_10);
        *(undefined4 *)(puVar1 + 0x10) = 0;
        *(undefined4 *)(puVar1 + 0x1c) = 0;
        *(undefined4 *)(puVar1 + 0x30) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_500b6c40(puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_18);
  }
  ExceptionList = pvStack_c;
  return;
}

