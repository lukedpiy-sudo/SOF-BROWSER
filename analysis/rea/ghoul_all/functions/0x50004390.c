// rea decompile_all
// name: FUN_50004390
// address: 0x50004390
// body: available
// range: 0x50004390-0x50004652 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50004390(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  int iStack_1c;
  uint uStack_18;
  undefined4 *puStack_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50112f2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = operator_new(0x270);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_500037e0(local_10,param_1);
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x41494149,piVar1,0x24c);
  piVar1[99] = 0;
  FUN_500099f0(&DAT_5018b530,(undefined4 *)0x0);
  piVar1[100] = 0;
  FUN_500099f0(&DAT_5018b530,(undefined4 *)0x0);
  piVar1[0x8b] = 0;
  FUN_5000a030(&DAT_5018b4e0,(undefined4 *)0x0);
  piVar1[0x8c] = 0;
  FUN_5000a1e0(&DAT_5018b468,(undefined4 *)0x0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
  }
  iStack_1c = *(int *)(param_1 + 0x254);
  (*DAT_5015cb44)(0x4149534c,&iStack_1c,4);
  if (iStack_1c != 0) {
    puVar2 = operator_new(iStack_1c << 2);
    piVar1 = (int *)**(int **)(param_1 + 0x250);
    puVar6 = puVar2;
    if (piVar1 != *(int **)(param_1 + 0x250)) {
      do {
        uVar3 = FUN_50009950(&DAT_5018b558,piVar1[2]);
        *puVar6 = uVar3;
        piVar1 = (int *)*piVar1;
        puVar6 = puVar6 + 1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x250));
    }
    (*DAT_5015cb44)(0x41495345,puVar2,iStack_1c * 4);
    FUN_50106b60((undefined *)puVar2);
  }
  iStack_1c = *(int *)(param_1 + 0x26c);
  (*DAT_5015cb44)(0x4149444c,&iStack_1c,4);
  if (iStack_1c != 0) {
    puVar2 = operator_new(iStack_1c << 2);
    piVar1 = (int *)**(int **)(param_1 + 0x268);
    puVar6 = puVar2;
    if (piVar1 != *(int **)(param_1 + 0x268)) {
      do {
        puStack_14 = (undefined4 *)piVar1[2];
        uVar3 = 0;
        if (puStack_14 != (undefined4 *)0x0) {
          piVar4 = (int *)FUN_5006b100(&DAT_5018b508,(int *)&local_10,(uint *)&puStack_14);
          if (*piVar4 == DAT_5018b50c) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*piVar4 + 0x10);
          }
        }
        *puVar6 = uVar3;
        piVar1 = (int *)*piVar1;
        puVar6 = puVar6 + 1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x268));
    }
    (*DAT_5015cb44)(0x41494445,puVar2,iStack_1c * 4);
    FUN_50106b60((undefined *)puVar2);
  }
  iStack_1c = *(int *)(param_1 + 0x260);
  (*DAT_5015cb44)(0x4149414c,&iStack_1c,4);
  if (iStack_1c != 0) {
    puVar2 = operator_new(iStack_1c * 4);
    piVar1 = (int *)**(int **)(param_1 + 0x25c);
    puVar6 = puVar2;
    if (piVar1 != *(int **)(param_1 + 0x25c)) {
      do {
        uStack_18 = piVar1[2];
        uVar3 = 0;
        if (uStack_18 != 0) {
          puStack_14 = FUN_5000a7f0(&DAT_5018b530,&uStack_18);
          if ((puStack_14 == DAT_5018b534) || (uStack_18 < (uint)puStack_14[3])) {
            local_10 = DAT_5018b534;
            ppuVar5 = &local_10;
          }
          else {
            ppuVar5 = &puStack_14;
          }
          if (*ppuVar5 == DAT_5018b534) {
            uVar3 = 0;
          }
          else {
            uVar3 = (*ppuVar5)[4];
          }
        }
        *puVar6 = uVar3;
        piVar1 = (int *)*piVar1;
        puVar6 = puVar6 + 1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x25c));
    }
    (*DAT_5015cb44)(0x41494145,puVar2,iStack_1c * 4);
    FUN_50106b60((undefined *)puVar2);
  }
  ExceptionList = pvStack_c;
  return;
}

