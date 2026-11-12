// rea decompile_all
// name: FUN_5006ab80
// address: 0x5006ab80
// body: available
// range: 0x5006ab80-0x5006ae28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x5006adac) */
/* WARNING: Removing unreachable block (ram,0x5006adc3) */
/* WARNING: Removing unreachable block (ram,0x5006adcf) */
/* WARNING: Removing unreachable block (ram,0x5006add6) */

void __fastcall FUN_5006ab80(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puStack_48;
  int iStack_44;
  int local_40;
  undefined4 *puStack_3c;
  int local_38;
  uint uStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_50114668;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_38 = param_1;
  (*DAT_5015cb48)(0x504c4e4d,&local_40,4,0);
  iStack_44 = 0;
  iVar3 = param_1;
  if (0 < local_40) {
    iVar6 = param_1 + 0xa4;
    do {
      puVar1 = operator_new(0x10);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = &PTR_LAB_50128750;
        puVar1[2] = 0;
      }
      ppuStack_1c = &PTR_LAB_50128750;
      iStack_14 = 0;
      uStack_4 = 0;
      puStack_48 = puVar1;
      (*DAT_5015cb48)(0x504c5049,&ppuStack_1c,0x10,0);
      puVar1[1] = uStack_18;
      uVar2 = FUN_500ba8c0(iStack_14);
      puVar1[2] = uVar2;
      puVar1[3] = uStack_10;
      if ((((uVar2 != 0) && (iVar3 = *(int *)(uVar2 + 0x460), 0 < iVar3)) && (iVar3 < 0x28)) &&
         (*(int *)(&DAT_5015c7bc + iVar3 * 4) != 0)) {
        uStack_34 = uVar2;
        puStack_30 = puVar1;
        FUN_5000a3d0((void *)(*(int *)(&DAT_5015c7bc + iVar3 * 4) + 0x148),&uStack_2c,&uStack_34);
        FUN_50010d30(auStack_24,&uStack_2c,auStack_28);
      }
      puVar1 = *(undefined4 **)(param_1 + 0xac);
      uStack_4 = 0xffffffff;
      ppuStack_1c = &PTR_LAB_50128750;
      iStack_14 = 0;
      if (*(int *)(param_1 + 0xb0) - (int)puVar1 >> 2 == 0) {
        uVar2 = FUN_50056bd0(iVar6);
        if (uVar2 < 2) {
          iVar3 = 1;
        }
        else {
          iVar3 = FUN_50056bd0(iVar6);
        }
        iVar4 = FUN_50056bd0(iVar6);
        iVar4 = iVar4 + iVar3;
        iVar3 = iVar4;
        if (iVar4 < 0) {
          iVar3 = 0;
        }
        puVar5 = operator_new(iVar3 * 4);
        puStack_3c = (undefined4 *)FUN_50064470(*(undefined4 **)(param_1 + 0xa8),puVar1,puVar5);
        FUN_5006b350(puStack_3c,1,&puStack_48);
        FUN_50064470(puVar1,*(undefined4 **)(param_1 + 0xac),puStack_3c + 1);
        FUN_50043230();
        FUN_50106b60(*(undefined **)(param_1 + 0xa8));
        *(undefined4 **)(param_1 + 0xb0) = puVar5 + iVar4;
        iVar3 = FUN_50056bd0(iVar6);
        *(undefined4 **)(param_1 + 0xa8) = puVar5;
        *(undefined4 **)(param_1 + 0xac) = puVar5 + iVar3 + 1;
      }
      else {
        FUN_50064470(puVar1,puVar1,puVar1 + 1);
        FUN_5006b350(*(undefined4 **)(param_1 + 0xac),
                     1 - ((int)*(undefined4 **)(param_1 + 0xac) - (int)puVar1 >> 2),&puStack_48);
        puVar5 = *(undefined4 **)(param_1 + 0xac);
        for (; puVar1 != puVar5; puVar1 = puVar1 + 1) {
          *puVar1 = puStack_48;
        }
        *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 4;
      }
      iStack_44 = iStack_44 + 1;
      iVar3 = local_38;
    } while (iStack_44 < local_40);
  }
  (*DAT_5015cb48)(0x504c5741,iVar3 + 0xb8,1,0);
  ExceptionList = pvStack_c;
  return;
}

