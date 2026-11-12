// rea decompile_all
// name: FUN_200ce1a0
// address: 0x200ce1a0
// body: available
// range: 0x200ce1a0-0x200ce45f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200ce2cf) */
/* WARNING: Removing unreachable block (ram,0x200ce205) */
/* WARNING: Removing unreachable block (ram,0x200ce399) */

void FUN_200ce1a0(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = param_1;
  puVar7 = in_ECX;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_2000a3a0(param_1 + 5,0,0xffffffff);
  FUN_2000a3a0(param_1 + 9,0,0xffffffff);
  FUN_2000a3a0(param_1 + 0xd,0,0xffffffff);
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  uVar1 = param_1[0x15];
  if (in_ECX + 0x13 == param_1 + 0x13) {
    FUN_20027e40(uVar1,0xffffffff);
    FUN_20027e40(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = (undefined1 *)param_1[0x14];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      if ((int)(uint)(byte)puVar3[-1] < -1) {
        FUN_2000a5b0(1);
        puVar3 = (undefined1 *)param_1[0x14];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_201116cc;
        }
        in_ECX[0x14] = puVar3;
        in_ECX[0x15] = param_1[0x15];
        in_ECX[0x16] = param_1[0x16];
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_200ce2b5;
      }
    }
    cVar2 = FUN_2000a6c0(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)param_1[0x14];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_201116cc;
      }
      puVar7 = (undefined4 *)in_ECX[0x14];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_2000a6a0(uVar1);
    }
  }
LAB_200ce2b5:
  in_ECX[0x17] = param_1[0x17];
  uVar1 = param_1[0x1a];
  if (in_ECX + 0x18 == param_1 + 0x18) {
    FUN_20027e40(uVar1,0xffffffff);
    FUN_20027e40(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = (undefined1 *)param_1[0x19];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      if ((int)(uint)(byte)puVar3[-1] < -1) {
        FUN_2000a5b0(1);
        puVar3 = (undefined1 *)param_1[0x19];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_201116cc;
        }
        in_ECX[0x19] = puVar3;
        in_ECX[0x1a] = param_1[0x1a];
        in_ECX[0x1b] = param_1[0x1b];
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_200ce37f;
      }
    }
    cVar2 = FUN_2000a6c0(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)param_1[0x19];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_201116cc;
      }
      puVar7 = (undefined4 *)in_ECX[0x19];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_2000a6a0(uVar1);
    }
  }
LAB_200ce37f:
  in_ECX[0x1c] = param_1[0x1c];
  uVar1 = param_1[0x1f];
  if (in_ECX + 0x1d == param_1 + 0x1d) {
    FUN_20027e40(uVar1,0xffffffff);
    FUN_20027e40(0,0);
    return;
  }
  if (uVar1 != 0) {
    puVar3 = &DAT_201116cc;
    if ((undefined1 *)param_1[0x1e] != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)param_1[0x1e];
    }
    if ((int)(uint)(byte)puVar3[-1] < -1) {
      FUN_2000a5b0(1);
      puVar3 = (undefined1 *)param_1[0x1e];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      in_ECX[0x1e] = puVar3;
      in_ECX[0x1f] = param_1[0x1f];
      in_ECX[0x20] = param_1[0x20];
      puVar3[-1] = puVar3[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_2000a6c0(uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)param_1[0x1e];
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&DAT_201116cc;
    }
    puVar7 = (undefined4 *)in_ECX[0x1e];
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    in_ECX[0x1f] = uVar1;
    *(undefined1 *)(uVar1 + in_ECX[0x1e]) = 0;
  }
  return;
}

