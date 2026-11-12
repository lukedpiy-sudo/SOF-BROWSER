// rea decompile_all
// name: FUN_500f67f0
// address: 0x500f67f0
// body: available
// range: 0x500f67f0-0x500f6bf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f67f0(int param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 auStack_38 [40];
  int iStack_10;
  undefined4 uStack_c;
  
  iVar4 = param_1;
  *(undefined2 *)(*(int *)(param_1 + 0x74) + 0xa6) = *(undefined2 *)(param_1 + 0x2ec);
  uVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x70))();
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xa8) = uVar5;
  uVar5 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x74) + 0x34c) + 0x74))();
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xac) = uVar5;
  uVar5 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x74) + 0x34c) + 0x6c))();
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xaa) = uVar5;
  if (_DAT_5015d1c8 == 0.0) {
    uVar5 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x74) + 0x34c) + 0x5c))();
  }
  else {
    uVar5 = 0;
  }
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xb0) = uVar5;
  uVar5 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x74) + 0x34c) + 100))();
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xa4) = uVar5;
  uVar5 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x74) + 0x34c) + 0x68))();
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xb2) = uVar5;
  uVar5 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x74) + 0x34c) + 0x80))();
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xae) = uVar5;
  iVar7 = *(int *)(iVar4 + 0x74);
  iVar6 = (**(code **)(**(int **)(iVar7 + 0x34c) + 0x84))();
  *(ushort *)(iVar7 + 0xb4) = (ushort)(iVar6 != 0) | *(byte *)(iVar7 + 0xb4) & 0xf0;
  iVar7 = *(int *)(iVar4 + 0x74);
  if ((*(float *)(iVar7 + 0x560) + 0.5 <= DAT_5015ccdc) && (*(int *)(iVar7 + 0x5b0) < 1)) {
    *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) & 0xffffbfff;
  }
  if (*(float *)(iVar7 + 0x564) <= DAT_5015ccdc) {
    if ((*(int *)(iVar7 + 0x554) != 0) && (piVar3 = *(int **)(iVar4 + 0x164), piVar3 != (int *)0x0))
    {
      (**(code **)(*piVar3 + 0x3c))(auStack_50,auStack_4c,auStack_48,&param_1);
      uStack_c = 0x3f800000;
      (**(code **)(*piVar3 + 0x38))(unaff_EDI,unaff_ESI,unaff_EBP,0x3f800000);
      *(undefined4 *)(*(int *)(iVar4 + 0x74) + 0x554) = 0;
    }
  }
  else if ((*(int *)(iVar7 + 0x554) == 0) &&
          (piVar3 = *(int **)(iVar4 + 0x164), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x3c))(auStack_48,auStack_4c,auStack_50,&param_1);
    uStack_c = 0x3f000000;
    (**(code **)(*piVar3 + 0x38))(unaff_EBP,unaff_ESI,unaff_EDI,0x3f000000);
    *(undefined4 *)(*(int *)(iVar4 + 0x74) + 0x554) = 1;
  }
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xb6) = 0;
  iVar7 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar7 == 0) {
    iVar7 = *(int *)(iVar4 + 0x74);
    if ((*(int *)(iVar7 + 0x470) != 0) || (*(int *)(iVar7 + 0x478) != 0)) {
      *(ushort *)(iVar7 + 0xb6) = *(ushort *)(iVar7 + 0xb6) | 1;
    }
  }
  else {
    iVar7 = *(int *)(iVar4 + 0x74);
    if ((((*(int *)(iVar7 + 0x2fc) < 1) || (_DAT_5015d1c8 != 0.0)) || (*(int *)(iVar7 + 0x470) != 0)
        ) || (DAT_5015ccdc < *(float *)(iVar7 + 0x568))) {
      *(ushort *)(iVar7 + 0xb6) = *(ushort *)(iVar7 + 0xb6) | 1;
    }
    pbVar1 = (byte *)(*(int *)(iVar4 + 0x74) + 0xb6);
    *pbVar1 = *pbVar1 | 2;
  }
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xb8) = *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0x308);
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xa0) = 0;
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xc2) = *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xa2);
  *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xa2) = 0;
  if (*(short *)(*(int *)(iVar4 + 0x74) + 0xb4) != 0) {
    uStack_44 = *(undefined4 *)(iVar4 + 4);
    uStack_40 = *(undefined4 *)(iVar4 + 8);
    fStack_3c = *(float *)(iVar4 + 0xc) + 10000.0;
    (*DAT_5015cac0)(iVar4 + 4,iVar4 + 0x11c,iVar4 + 0x128,&uStack_44,iVar4,0x2020003,auStack_38);
    if ((*(byte *)(iStack_10 + 0x20) & 4) != 0) {
      puVar2 = (ushort *)(*(int *)(iVar4 + 0x74) + 0xb4);
      *puVar2 = *puVar2 | 4;
    }
  }
  if ((DAT_5015d238 != -1) && (DAT_5015d238 <= DAT_5015d234)) {
    pbVar1 = (byte *)(*(int *)(iVar4 + 0x74) + 0xb4);
    *pbVar1 = *pbVar1 | 8;
  }
  if (DAT_5015d240 != 0) {
    pbVar1 = (byte *)(*(int *)(iVar4 + 0x74) + 0xb4);
    *pbVar1 = *pbVar1 | 0x40;
  }
  if (DAT_5015d244 == 1) {
    pbVar1 = (byte *)(*(int *)(iVar4 + 0x74) + 0xb4);
    *pbVar1 = *pbVar1 | 0x80;
  }
  else if (DAT_5015d244 == 2) {
    pbVar1 = (byte *)(*(int *)(iVar4 + 0x74) + 0xb5);
    *pbVar1 = *pbVar1 | 1;
  }
  else if ((DAT_5015d244 == 3) && (DAT_5015ccdc - _DAT_5015c788 < 5.0)) {
    pbVar1 = (byte *)(*(int *)(iVar4 + 0x74) + 0xb5);
    *pbVar1 = *pbVar1 | 4;
  }
  if (*(float *)(DAT_5015c9a4 + 0x18) != 0.0) {
    (**(code **)(*DAT_5015c4d8 + 200))(iVar4);
  }
  if (DAT_5015d248 != 0) {
    *(undefined2 *)(*(int *)(iVar4 + 0x74) + 0xbc) = 1;
  }
  if (0.5 < *(float *)(*(int *)(iVar4 + 0x74) + 0x4e4)) {
    pbVar1 = (byte *)(*(int *)(iVar4 + 0x74) + 0xb5);
    *pbVar1 = *pbVar1 | 8;
  }
  return;
}

