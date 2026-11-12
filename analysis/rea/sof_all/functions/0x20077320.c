// rea decompile_all
// name: FUN_20077320
// address: 0x20077320
// body: available
// range: 0x20077320-0x20077607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20077320(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  puVar10 = param_1;
  puVar2 = param_1;
  puVar11 = in_ECX;
  for (iVar6 = 0x24; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)(in_ECX + 0x24) = *(undefined2 *)(param_1 + 0x24);
  *(undefined1 *)((int)in_ECX + 0x92) = *(undefined1 *)((int)param_1 + 0x92);
  in_ECX[0x25] = param_1[0x25];
  if (in_ECX + 0x2c != param_1 + 0x2c) {
    if (param_1[0x2d] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_1[0x2e] - param_1[0x2d];
    }
    puVar9 = (undefined1 *)in_ECX[0x2d];
    if (puVar9 == (undefined1 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = in_ECX[0x2e] - (int)puVar9;
    }
    puVar2 = (undefined4 *)param_1[0x2d];
    if (uVar1 < uVar7) {
      if (puVar2 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = param_1[0x2e] - (int)puVar2;
      }
      if (puVar9 == (undefined1 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = in_ECX[0x2f] - (int)puVar9;
      }
      if (uVar1 < uVar7) {
        FUN_2008c730(puVar9,in_ECX[0x2e]);
        FUN_200f9f75(in_ECX[0x2d]);
        if (puVar10[0x2d] == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = puVar10[0x2e] - puVar10[0x2d];
        }
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        pvVar4 = operator_new(uVar7);
        in_ECX[0x2d] = pvVar4;
        uVar5 = FUN_200823d0(puVar10[0x2d],puVar10[0x2e],pvVar4);
        in_ECX[0x2e] = uVar5;
        in_ECX[0x2f] = uVar5;
      }
      else {
        if (puVar9 == (undefined1 *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = in_ECX[0x2e] - (int)puVar9;
        }
        puVar3 = (undefined1 *)param_1[0x2d];
        puVar8 = puVar3 + iVar6;
        for (; puVar3 != puVar8; puVar3 = puVar3 + 1) {
          *puVar9 = *puVar3;
          puVar9 = puVar9 + 1;
        }
        puVar9 = (undefined1 *)param_1[0x2e];
        iVar6 = in_ECX[0x2e];
        for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
          FUN_200a0430(iVar6,puVar8);
          iVar6 = iVar6 + 1;
        }
        if (puVar10[0x2d] == 0) {
          in_ECX[0x2e] = in_ECX[0x2d];
          puVar10 = param_1;
        }
        else {
          in_ECX[0x2e] = in_ECX[0x2d] + (puVar10[0x2e] - puVar10[0x2d]);
          puVar10 = param_1;
        }
      }
    }
    else {
      puVar11 = (undefined4 *)param_1[0x2e];
      for (; puVar2 != puVar11; puVar2 = (undefined4 *)((int)puVar2 + 1)) {
        *puVar9 = *(undefined1 *)puVar2;
        puVar9 = puVar9 + 1;
      }
      if (param_1[0x2d] == 0) {
        in_ECX[0x2e] = in_ECX[0x2d];
        param_1 = puVar11;
      }
      else {
        in_ECX[0x2e] = in_ECX[0x2d] + (param_1[0x2e] - param_1[0x2d]);
        param_1 = puVar11;
      }
    }
  }
  *(undefined2 *)((int)in_ECX + 0xaa) = *(undefined2 *)((int)puVar10 + 0xaa);
  in_ECX[0x26] = puVar10[0x26];
  in_ECX[0x27] = puVar10[0x27];
  in_ECX[0x28] = puVar10[0x28];
  *(undefined1 *)(in_ECX + 0x29) = *(undefined1 *)(puVar10 + 0x29);
  in_ECX[0x2b] = puVar10[0x2b];
  *(undefined1 *)((int)in_ECX + 0xa5) = *(undefined1 *)((int)puVar10 + 0xa5);
  *(undefined1 *)((int)in_ECX + 0xa6) = *(undefined1 *)((int)puVar10 + 0xa6);
  *(undefined1 *)((int)in_ECX + 0xa7) = *(undefined1 *)((int)puVar10 + 0xa7);
  *(undefined1 *)(in_ECX + 0x2a) = *(undefined1 *)(puVar10 + 0x2a);
  *(undefined1 *)((int)in_ECX + 0xa9) = *(undefined1 *)((int)puVar10 + 0xa9);
  if (in_ECX + 0x35 != puVar10 + 0x35) {
    FUN_20083280(&param_1,*(undefined4 *)in_ECX[0x36],(undefined4 *)in_ECX[0x36]);
    *(undefined1 *)((int)in_ECX + 0xd5) = *(undefined1 *)((int)puVar10 + 0xd5);
    FUN_200833c0(puVar10 + 0x35);
  }
  if (in_ECX + 0x30 != puVar10 + 0x30) {
    FUN_20082ee0(&param_1,*(undefined4 *)in_ECX[0x31],(undefined4 *)in_ECX[0x31]);
    iVar6 = in_ECX[0x31];
    *(undefined1 *)((int)in_ECX + 0xc1) = *(undefined1 *)((int)puVar10 + 0xc1);
    uVar5 = FUN_20084880(*(undefined4 *)(puVar10[0x31] + 4),iVar6);
    *(undefined4 *)(iVar6 + 4) = uVar5;
    puVar2 = (undefined4 *)in_ECX[0x31];
    in_ECX[0x34] = puVar10[0x34];
    if (puVar2[1] != in_ECX[0x32]) {
      uVar5 = FUN_20084c30(puVar2[1]);
      *puVar2 = uVar5;
      iVar6 = in_ECX[0x31];
      uVar5 = FUN_20084c10(*(undefined4 *)(iVar6 + 4));
      *(undefined4 *)(iVar6 + 8) = uVar5;
      return;
    }
    *puVar2 = puVar2;
    *(undefined4 *)(in_ECX[0x31] + 8) = in_ECX[0x31];
  }
  return;
}

