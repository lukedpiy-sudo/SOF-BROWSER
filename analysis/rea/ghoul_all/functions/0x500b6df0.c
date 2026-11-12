// rea decompile_all
// name: FUN_500b6df0
// address: 0x500b6df0
// body: available
// range: 0x500b6df0-0x500b6f7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500b6df0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iStack_1c;
  uint uStack_18;
  undefined4 *puStack_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_5011511b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = operator_new(0x70);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = FUN_500b6a50(local_10,param_1);
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x45444f49,puVar1 + 0x10,0x60);
  if (puVar1 != (undefined *)0x0) {
    uVar2 = FUN_500b75b0(*(undefined4 **)(puVar1 + 8),*(undefined4 **)(puVar1 + 8),
                         *(undefined4 **)(puVar1 + 4));
    FUN_50043230();
    *(undefined4 *)(puVar1 + 8) = uVar2;
    *(undefined ***)(puVar1 + 0x28) = &PTR_LAB_501298f0;
    *(undefined4 *)(puVar1 + 0x30) = 0;
    FUN_500b6970((undefined4 *)(puVar1 + 0x14));
    FUN_5006af10((int)puVar1);
    FUN_50106b60(puVar1);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iStack_1c = 0;
  }
  else {
    iStack_1c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  (*DAT_5015cb44)(0x4544424e,&iStack_1c,4);
  if (iStack_1c != 0) {
    puVar3 = operator_new(iStack_1c * 4);
    puVar5 = *(uint **)(param_1 + 4);
    puVar6 = puVar3;
    if (puVar5 != *(uint **)(param_1 + 8)) {
      do {
        uStack_18 = *puVar5;
        uVar2 = 0;
        if (uStack_18 != 0) {
          puStack_14 = FUN_5000a7f0(&DAT_5018b490,&uStack_18);
          if ((puStack_14 == DAT_5018b494) || (uStack_18 < (uint)puStack_14[3])) {
            local_10 = DAT_5018b494;
            ppuVar4 = &local_10;
          }
          else {
            ppuVar4 = &puStack_14;
          }
          if (*ppuVar4 == DAT_5018b494) {
            uVar2 = 0;
          }
          else {
            uVar2 = (*ppuVar4)[4];
          }
        }
        *puVar6 = uVar2;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (puVar5 != *(uint **)(param_1 + 8));
    }
    (*DAT_5015cb44)(0x4544424c,puVar3,iStack_1c * 4);
    FUN_50106b60((undefined *)puVar3);
  }
  ExceptionList = pvStack_c;
  return;
}

