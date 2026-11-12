// rea decompile_all
// name: FUN_2008b4d0
// address: 0x2008b4d0
// body: available
// range: 0x2008b4d0-0x2008bcdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2008b7a4) */
/* WARNING: Removing unreachable block (ram,0x2008b56c) */
/* WARNING: Removing unreachable block (ram,0x2008b5ea) */
/* WARNING: Removing unreachable block (ram,0x2008baa9) */

void FUN_2008b4d0(void *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int *in_ECX;
  undefined2 extraout_var;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined1 local_3c [4];
  undefined1 *local_38;
  undefined1 auStack_2c [20];
  undefined1 *puStack_18;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c57b;
  pvStack_c = ExceptionList;
  local_48 = local_48 & 0xffffff00;
  local_54 = 0;
  ExceptionList = &pvStack_c;
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    FUN_200be390(&local_48,2);
    FUN_200be390(&local_54,(local_48 & 0xff) * 4 + 4);
  }
  uVar10 = local_54 & 0xffff;
  if (in_ECX[7] == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = in_ECX[9] - in_ECX[7] >> 1;
  }
  if (uVar9 < uVar10) {
    param_1 = operator_new(uVar10 * 2);
    FUN_2008c9c0(in_ECX[7],in_ECX[8],param_1);
    FUN_2008c730(in_ECX[7],in_ECX[8]);
    FUN_200f9f75(in_ECX[7]);
    in_ECX[9] = (int)((int)param_1 + uVar10 * 2);
    iVar3 = FUN_2008c150();
    in_ECX[7] = (int)param_1;
    in_ECX[8] = (int)((int)param_1 + iVar3 * 2);
  }
  pvVar4 = (void *)(local_54 & 0xffff);
  param_1 = pvVar4;
  pvVar5 = (void *)FUN_2008c9f0();
  if (pvVar5 < pvVar4) {
    pvVar4 = operator_new((int)pvVar4 * 8);
    FUN_2008cbe0(in_ECX[0x17],in_ECX[0x18],pvVar4);
    FUN_2008c730(in_ECX[0x17],in_ECX[0x18]);
    FUN_200f9f75(in_ECX[0x17]);
    in_ECX[0x19] = (int)((int)pvVar4 + (int)param_1 * 8);
    iVar3 = FUN_2008ca10();
    in_ECX[0x17] = (int)pvVar4;
    in_ECX[0x18] = (int)((int)pvVar4 + iVar3 * 8);
  }
  local_4c = 0;
  uVar10 = 0;
  if ((ushort)local_54 != 0) {
    do {
      local_44 = local_44 & 0xffffff00;
      local_50 = 0;
      FUN_200be390(&param_1,1);
      if ((char)param_1 != '\0') {
        FUN_200be390(&local_44,2);
        FUN_200be390(&local_50,(local_44 & 0xff) * 4 + 4);
      }
      local_50 = local_50 + uVar10;
      local_48 = local_50 + 1;
      pcVar6 = (char *)FUN_2006a240(local_50);
      local_3c[0] = (char)param_1;
      FUN_2000a5b0(0);
      uVar10 = 0xffffffff;
      pcVar12 = pcVar6;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(pcVar6,~uVar10 - 1);
      local_4 = 0;
      FUN_20087fe0(local_3c,local_50);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      local_4c = local_4c + 1;
      uVar10 = local_48;
    } while ((ushort)local_4c < (ushort)local_54);
  }
  local_44 = local_44 & 0xffffff00;
  local_54 = 0;
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    FUN_200be390(&local_44,2);
    FUN_200be390(&local_54,(local_44 & 0xff) * 4 + 4);
  }
  uVar9 = local_54 & 0xffff;
  uVar10 = FUN_2008ccd0();
  if (uVar10 < uVar9) {
    param_1 = operator_new(uVar9 * 0x18);
    FUN_2008cd30(in_ECX[0x20],in_ECX[0x21],param_1);
    FUN_2008cd00(in_ECX[0x20],in_ECX[0x21]);
    FUN_200f9f75(in_ECX[0x20]);
    pvVar4 = param_1;
    in_ECX[0x22] = (int)((int)param_1 + uVar9 * 0x18);
    iVar3 = FUN_2008c180();
    in_ECX[0x20] = (int)pvVar4;
    in_ECX[0x21] = (int)((int)pvVar4 + iVar3 * 0x18);
  }
  local_4c = 0;
  uVar10 = 0;
  if ((ushort)local_54 != 0) {
    do {
      local_44 = local_44 & 0xffffff00;
      local_50 = 0;
      FUN_200be390(&param_1,1);
      if ((char)param_1 != '\0') {
        FUN_200be390(&local_44,2);
        FUN_200be390(&local_50,(local_44 & 0xff) * 4 + 4);
      }
      local_50 = local_50 + uVar10;
      local_48 = local_50 + 1;
      pcVar6 = (char *)FUN_2006a240(local_50);
      local_3c[0] = (char)param_1;
      FUN_2000a5b0(0);
      uVar10 = 0xffffffff;
      pcVar12 = pcVar6;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(pcVar6,~uVar10 - 1);
      local_4 = 1;
      FUN_20088f10(local_3c,local_50);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      local_4c = local_4c + 1;
      uVar10 = local_48;
    } while ((ushort)local_4c < (ushort)local_54);
  }
  local_44 = local_44 & 0xffffff00;
  local_54 = 0;
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    FUN_200be390(&local_44,2);
    FUN_200be390(&local_54,(local_44 & 0xff) * 4 + 4);
  }
  *(short *)(in_ECX + 4) = (short)local_54;
  local_4c = 0;
  uVar10 = 0;
  if ((short)local_54 != 0) {
    do {
      local_44 = local_44 & 0xffffff00;
      local_50 = 0;
      FUN_200be390(&param_1,1);
      if ((char)param_1 != '\0') {
        FUN_200be390(&local_44,2);
        FUN_200be390(&local_50,(local_44 & 0xff) * 4 + 4);
      }
      local_50 = local_50 + uVar10;
      local_48 = local_50 + 1;
      pcVar6 = (char *)FUN_2006a240(local_50);
      local_3c[0] = (char)param_1;
      FUN_2000a5b0(0);
      uVar10 = 0xffffffff;
      pcVar12 = pcVar6;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(pcVar6,~uVar10 - 1);
      local_4 = 2;
      puVar7 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar7 = &DAT_201116cc;
      }
      (**(code **)(*in_ECX + 0x2c))(puVar7);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      local_4c = local_4c + 1;
      uVar10 = local_48;
    } while ((ushort)local_4c < (ushort)local_54);
  }
  local_44 = local_44 & 0xffffff00;
  local_54 = 0;
  FUN_200be390(&param_1,1);
  if ((char)param_1 != '\0') {
    FUN_200be390(&local_44,2);
    FUN_200be390(&local_54,(local_44 & 0xff) * 4 + 4);
  }
  uVar9 = local_54 & 0xffff;
  uVar10 = FUN_2008cd70();
  if (uVar10 < uVar9) {
    param_1 = operator_new(uVar9 * 0x14);
    FUN_2008cdd0(in_ECX[0x28],in_ECX[0x29],param_1);
    FUN_2008cda0(in_ECX[0x28],in_ECX[0x29]);
    FUN_200f9f75(in_ECX[0x28]);
    pvVar4 = param_1;
    in_ECX[0x2a] = (int)((int)param_1 + uVar9 * 0x14);
    iVar3 = FUN_2008c1b0();
    in_ECX[0x28] = (int)pvVar4;
    in_ECX[0x29] = (int)((int)pvVar4 + iVar3 * 0x14);
  }
  uVar11 = 0;
  iVar3 = 0;
  if ((ushort)local_54 != 0) {
    do {
      FUN_2008e450(&local_50);
      puVar13 = &param_1;
      local_50 = local_50 + iVar3;
      iVar3 = local_50 + 1;
      uVar8 = FUN_2008c3f0(local_50,0);
      FUN_20070070(uVar8,puVar13);
      local_4 = 3;
      FUN_200897f0(local_3c,local_50);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ushort)local_54);
  }
  FUN_2008e450(&local_54);
  FUN_2008c1e0(local_54 & 0xffff);
  uVar11 = 0;
  iVar3 = 0;
  if ((ushort)local_54 != 0) {
    do {
      FUN_200be390(&param_1,1);
      if ((char)param_1 != '\0') {
        FUN_2008e450(&uStack_40);
      }
      FUN_2008e450(&local_50);
      puVar7 = &uStack_57;
      local_50 = local_50 + iVar3;
      iVar3 = local_50 + 1;
      uVar8 = FUN_2008c3f0(local_50,0);
      FUN_20070070(uVar8,puVar7);
      local_4 = 4;
      puVar7 = puStack_18;
      if (puStack_18 == (undefined1 *)0x0) {
        puVar7 = &DAT_201116cc;
      }
      FUN_20070070(puVar7,&uStack_56);
      local_4._0_1_ = 5;
      FUN_20089d90(uStack_40,auStack_2c,local_50);
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ushort)local_54);
  }
  param_1 = operator_new(0xe8);
  local_4 = 6;
  if (param_1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_20077040(CONCAT22(extraout_var,*(undefined2 *)((int)in_ECX + 0xe)));
  }
  local_4 = 0xffffffff;
  in_ECX[0x4c] = iVar3;
  FUN_200786b0(uVar2,&uStack_55,0,in_ECX);
  (**(code **)(*in_ECX + 8))(param_2);
  ExceptionList = pvStack_10;
  return;
}

