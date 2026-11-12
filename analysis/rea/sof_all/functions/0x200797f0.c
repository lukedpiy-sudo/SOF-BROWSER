// rea decompile_all
// name: FUN_200797f0
// address: 0x200797f0
// body: available
// range: 0x200797f0-0x20079bf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200797f0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 auStack_2c [4];
  undefined4 *puStack_1c;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010bf18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  auStack_2c[0] = (**(code **)(*in_ECX + 0x9c))();
  FUN_200bdaf0(param_2);
  uStack_4 = 0;
  FUN_200bde30(param_5);
  FUN_200bdca0(auStack_2c,0x10);
  FUN_200bdca0(in_ECX + 1,0x480);
  FUN_200bdca0(in_ECX + 0x25,0x10);
  FUN_200bdca0((int)in_ECX + 0x96,8);
  FUN_200bdca0(in_ECX + 0x26,0x20);
  FUN_200bdca0(in_ECX + 0x27,0x20);
  FUN_200bdca0(in_ECX + 0x28,0x20);
  FUN_200bdca0(in_ECX + 0x29,0x20);
  FUN_200bdca0(in_ECX + 0x2a,8);
  FUN_200bdca0((int)in_ECX + 0xa9,8);
  FUN_200bdca0((int)in_ECX + 0xaa,8);
  FUN_200bdca0((int)in_ECX + 0xab,8);
  FUN_200bdca0(in_ECX + 0x2b,8);
  FUN_200bdca0((int)in_ECX + 0xad,8);
  FUN_200bdca0((int)in_ECX + 0xae,0x10);
  FUN_200bdca0(in_ECX + 0x2c,0x20);
  if (in_ECX[0x2e] == 0) {
    iStack_38 = 0;
  }
  else {
    iStack_38 = in_ECX[0x2f] - in_ECX[0x2e];
  }
  FUN_200bdca0(&iStack_38,0x20);
  iStack_34 = 0;
  if (0 < iStack_38) {
    do {
      FUN_200bdca0(in_ECX[0x2e] + iStack_34,8);
      iStack_34 = iStack_34 + 1;
    } while (iStack_34 < iStack_38);
  }
  iStack_38 = in_ECX[0x35];
  FUN_200bdca0(&iStack_38,0x20);
  iStack_30 = *(int *)in_ECX[0x32];
  if ((int *)iStack_30 != (int *)in_ECX[0x32]) {
    do {
      FUN_200bdca0(iStack_30 + 0xc,0x80);
      FUN_20027950();
    } while (iStack_30 != in_ECX[0x32]);
  }
  FUN_200bdca0(in_ECX + 0x48,0x20);
  FUN_200bdca0(in_ECX + 0x49,0x20);
  FUN_200bdca0(in_ECX + 0x4a,8);
  FUN_200bdca0((int)in_ECX + 0x129,8);
  FUN_200bdca0((int)in_ECX + 0x12a,8);
  iStack_38 = in_ECX[0x52];
  FUN_200bdca0(&iStack_38,0x20);
  piVar1 = (int *)in_ECX[0x4f];
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    iStack_34 = 0;
    if (0 < param_4) {
      do {
        if (*(int *)(param_3 + iStack_34 * 4) == piVar2[4]) break;
        iStack_34 = iStack_34 + 1;
      } while (iStack_34 < param_4);
    }
    if (iStack_34 == param_4) {
      iStack_34 = -1;
    }
    FUN_200bdca0(&iStack_34,0x20);
    FUN_200bdca0(piVar2 + 3,0x10);
    FUN_20085230();
    piVar1 = (int *)in_ECX[0x4f];
  }
  iStack_38 = in_ECX[0x57];
  FUN_200bdca0(&iStack_38,0x20);
  piVar1 = (int *)in_ECX[0x54];
  piVar2 = (int *)*piVar1;
  do {
    if (piVar2 == piVar1) {
      if (puStack_1c == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iStack_18 - (int)puStack_1c;
      }
      if (param_2 < iVar3) {
        FUN_2008e9e0(s_GhoulInst_savegame_packet_overfl_20157020);
      }
      if (puStack_1c == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = iStack_18 - (int)puStack_1c;
      }
      puVar6 = puStack_1c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = *puVar6;
        puVar6 = puVar6 + 1;
        param_1 = param_1 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      if (puStack_1c == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iStack_18 - (int)puStack_1c;
      }
      FUN_200f9f75(puStack_1c);
      ExceptionList = pvStack_c;
      return iVar3;
    }
    iStack_34 = 0;
    if (0 < param_4) {
      do {
        if (*(int *)(param_3 + iStack_34 * 4) == piVar2[5]) break;
        iStack_34 = iStack_34 + 1;
      } while (iStack_34 < param_4);
    }
    if (iStack_34 == param_4) {
      iStack_34 = -1;
    }
    FUN_200bdca0(&iStack_34,0x20);
    FUN_200bdca0(piVar2 + 3,0x40);
    FUN_20020020();
    piVar1 = (int *)in_ECX[0x54];
  } while( true );
}

