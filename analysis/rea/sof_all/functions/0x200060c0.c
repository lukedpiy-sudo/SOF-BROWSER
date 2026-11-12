// rea decompile_all
// name: FUN_200060c0
// address: 0x200060c0
// body: available
// range: 0x200060c0-0x200063d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200060c0(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 local_94 [4];
  int local_90;
  int local_88;
  undefined4 local_80;
  undefined1 local_68 [12];
  undefined4 *local_5c;
  int local_58;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ab88;
  local_c = ExceptionList;
  uVar2 = DAT_201c23f4 & 0x3f;
  ExceptionList = &local_c;
  *(undefined4 *)(&DAT_201e7bb4 + uVar2 * 4) = DAT_201c1f0c;
  DAT_2015ecc0 = DAT_20403528 - DAT_2015ee04;
  if (DAT_2015ecc0 == 0) {
    DAT_2015ecc0 = 1;
  }
  else if (200 < DAT_2015ecc0) {
    DAT_2015ecc0 = 200;
  }
  puVar4 = &local_80;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (DAT_201e7f58._3_1_ == '\0') {
    FUN_20004b20(&local_80);
    FUN_2004aa00(&local_80);
  }
  else {
    puVar4 = &local_80;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if (DAT_201ca520 != '\0') {
      DAT_201ca520 = '\0';
      local_80._1_1_ = local_80._1_1_ | 0x40;
    }
  }
  FUN_20005240(&local_80,_DAT_201e7efc & 0xff);
  iVar5 = DAT_201c1f00;
  DAT_2015ee04 = DAT_20403528;
  puVar4 = &local_80;
  puVar8 = (undefined4 *)(&DAT_201e75b4 + uVar2 * 0x18);
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = &local_80;
  puVar8 = &DAT_201e759c;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  if (6 < iVar5) {
    if (iVar5 == 7) {
      if ((DAT_201c240c != 0) || (1000 < DAT_20390d38 - DAT_201c23c8)) {
        FUN_2004d400(&DAT_201c23b8,0,0);
      }
    }
    else {
      if (DAT_2024b1d0 != 0) {
        DAT_2024b1d0 = 0;
        FUN_2001cb00(&DAT_201c2400,3);
        uVar3 = FUN_20022c60(2);
        FUN_2001cd00(&DAT_201c2400,uVar3);
      }
      FUN_2001e700(local_94,local_4c,0x40);
      FUN_2001cb00(local_94,2);
      iVar5 = local_88;
      FUN_2001cb00(local_94,0);
      if ((DAT_201e7e60 == 0) || (uVar3 = DAT_201e7e64, DAT_201ca518 != 0)) {
        uVar3 = 0xffffffff;
      }
      FUN_2001cbf0(local_94,uVar3);
      FUN_200bdaf0(100);
      local_4 = 0;
      uVar2 = DAT_201c23f4 - 2;
      puVar4 = &local_80;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      FUN_20005d70(local_68,&local_80,&DAT_201e75b4 + (uVar2 & 0x3f) * 0x18);
      uVar7 = DAT_201c23f4 - 1;
      FUN_20005d70(local_68,&DAT_201e75b4 + (uVar2 & 0x3f) * 0x18,
                   &DAT_201e75b4 + (uVar7 & 0x3f) * 0x18);
      FUN_20005d70(local_68,&DAT_201e75b4 + (uVar7 & 0x3f) * 0x18,
                   &DAT_201e75b4 + (DAT_201c23f4 & 0x3f) * 0x18);
      if (local_5c == (undefined4 *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_58 - (int)local_5c;
      }
      puVar4 = (undefined4 *)FUN_2001e740(local_94,iVar6);
      if (local_5c == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = local_58 - (int)local_5c;
      }
      puVar8 = local_5c;
      for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      uVar1 = FUN_2001f1b0(local_90 + 1 + iVar5,(local_88 - iVar5) + -1,DAT_201c23f4);
      *(undefined1 *)(local_90 + iVar5) = uVar1;
      FUN_2004d400(&DAT_201c23b8,local_88,local_90);
      FUN_200f9f75(local_5c);
    }
  }
  ExceptionList = local_c;
  return;
}

