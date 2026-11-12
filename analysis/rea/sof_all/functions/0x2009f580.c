// rea decompile_all
// name: FUN_2009f580
// address: 0x2009f580
// body: available
// range: 0x2009f580-0x2009f84d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2009f5aa) */

void FUN_2009f580(undefined1 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined1 *in_ECX;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint local_8;
  
  *in_ECX = *param_1;
  uVar9 = *(uint *)(param_1 + 0xc);
  if (in_ECX + 4 == param_1 + 4) {
    FUN_20027e40(uVar9,0xffffffff);
    FUN_20027e40(0,0);
  }
  else {
    if (uVar9 != 0) {
      puVar7 = *(undefined1 **)(param_1 + 8);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_201116cc;
      }
      if ((int)(uint)(byte)puVar7[-1] < -1) {
        FUN_2000a5b0(1);
        puVar7 = *(undefined1 **)(param_1 + 8);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_201116cc;
        }
        *(undefined1 **)(in_ECX + 8) = puVar7;
        *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
        puVar7[-1] = puVar7[-1] + '\x01';
        goto LAB_2009f65c;
      }
    }
    cVar2 = FUN_2000a6c0(uVar9,1);
    if (cVar2 != '\0') {
      puVar3 = *(undefined4 **)(param_1 + 8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)&DAT_201116cc;
      }
      puVar11 = *(undefined4 **)(in_ECX + 8);
      for (uVar4 = uVar9 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar11 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar4 = uVar9 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_2000a6a0(uVar9);
    }
  }
LAB_2009f65c:
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  FUN_2009fe10(param_1 + 0x1c);
  in_ECX[0x2c] = param_1[0x2c];
  in_ECX[0x2d] = param_1[0x2d];
  puVar3 = (undefined4 *)(param_1 + 0x30);
  puVar11 = (undefined4 *)(in_ECX + 0x30);
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar11 = puVar11 + 1;
  }
  if (in_ECX + 0x74 != param_1 + 0x74) {
    puVar3 = *(undefined4 **)(param_1 + 0x78);
    if (puVar3 == (undefined4 *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = (*(int *)(param_1 + 0x7c) - (int)puVar3) / 0x44;
    }
    puVar11 = *(undefined4 **)(in_ECX + 0x78);
    if (puVar11 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (*(int *)(in_ECX + 0x7c) - (int)puVar11) / 0x44;
    }
    if (uVar9 < local_8) {
      uVar9 = FUN_200921b0();
      uVar4 = FUN_20093590();
      if (uVar4 < uVar9) {
        FUN_200f9f75(*(undefined4 *)(in_ECX + 0x78));
        iVar8 = FUN_200921b0();
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        pvVar6 = operator_new(iVar8 * 0x44);
        *(void **)(in_ECX + 0x78) = pvVar6;
        iVar8 = FUN_200937d0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),pvVar6)
        ;
        *(int *)(in_ECX + 0x80) = iVar8;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x78);
        iVar5 = FUN_200921b0();
        iVar8 = iVar8 + iVar5 * 0x44;
        FUN_200a0400(*(undefined4 *)(param_1 + 0x78),iVar8,*(undefined4 *)(in_ECX + 0x78));
        FUN_200937d0(iVar8,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(in_ECX + 0x7c));
        iVar8 = FUN_200921b0();
        iVar8 = *(int *)(in_ECX + 0x78) + iVar8 * 0x44;
      }
      *(int *)(in_ECX + 0x7c) = iVar8;
    }
    else {
      puVar1 = *(undefined4 **)(param_1 + 0x7c);
      while (puVar3 != puVar1) {
        puVar10 = puVar3;
        puVar12 = puVar11;
        for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar11 = puVar11 + 0x11;
        puVar3 = puVar3 + 0x11;
      }
      iVar8 = FUN_200921b0();
      *(int *)(in_ECX + 0x7c) = *(int *)(in_ECX + 0x78) + iVar8 * 0x44;
    }
  }
  in_ECX[0x84] = param_1[0x84];
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  in_ECX[0x8c] = param_1[0x8c];
  *(undefined2 *)(in_ECX + 0x8e) = *(undefined2 *)(param_1 + 0x8e);
  *(undefined2 *)(in_ECX + 0x90) = *(undefined2 *)(param_1 + 0x90);
  puVar3 = (undefined4 *)(param_1 + 0x94);
  puVar11 = (undefined4 *)(in_ECX + 0x94);
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar11 = puVar11 + 1;
  }
  return;
}

