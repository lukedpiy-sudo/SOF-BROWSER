// rea decompile_all
// name: FUN_20027bd0
// address: 0x20027bd0
// body: available
// range: 0x20027bd0-0x20027e35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x20027cbf) */
/* WARNING: Removing unreachable block (ram,0x20027bf3) */
/* WARNING: Removing unreachable block (ram,0x20027d79) */

undefined4 * FUN_20027bd0(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *in_ECX = *param_1;
  uVar1 = param_1[3];
  if (in_ECX + 1 == param_1 + 1) {
    FUN_20027e40(uVar1,0xffffffff);
    FUN_20027e40(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = (undefined1 *)param_1[2];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      if ((int)(uint)(byte)puVar3[-1] < -1) {
        FUN_2000a5b0(1);
        puVar3 = (undefined1 *)param_1[2];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_201116cc;
        }
        in_ECX[2] = puVar3;
        in_ECX[3] = param_1[3];
        in_ECX[4] = param_1[4];
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_20027c99;
      }
    }
    cVar2 = FUN_2000a6c0(uVar1,1);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)param_1[2];
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_201116cc;
      }
      puVar6 = (undefined4 *)in_ECX[2];
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_2000a6a0(uVar1);
    }
  }
LAB_20027c99:
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  uVar1 = param_1[10];
  if (in_ECX + 8 == param_1 + 8) {
    FUN_20027e40(uVar1,0xffffffff);
    FUN_20027e40(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = (undefined1 *)param_1[9];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      if ((int)(uint)(byte)puVar3[-1] < -1) {
        FUN_2000a5b0(1);
        puVar3 = (undefined1 *)param_1[9];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_201116cc;
        }
        in_ECX[9] = puVar3;
        in_ECX[10] = param_1[10];
        in_ECX[0xb] = param_1[0xb];
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_20027d65;
      }
    }
    cVar2 = FUN_2000a6c0(uVar1,1);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)param_1[9];
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_201116cc;
      }
      puVar6 = (undefined4 *)in_ECX[9];
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_2000a6a0(uVar1);
    }
  }
LAB_20027d65:
  uVar1 = param_1[0xe];
  if (in_ECX + 0xc == param_1 + 0xc) {
    FUN_20027e40(uVar1,0xffffffff);
    FUN_20027e40(0,0);
    return in_ECX;
  }
  if (uVar1 != 0) {
    puVar3 = (undefined1 *)param_1[0xd];
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_201116cc;
    }
    if ((int)(uint)(byte)puVar3[-1] < -1) {
      FUN_2000a5b0(1);
      puVar3 = (undefined1 *)param_1[0xd];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      in_ECX[0xd] = puVar3;
      in_ECX[0xe] = param_1[0xe];
      in_ECX[0xf] = param_1[0xf];
      puVar3[-1] = puVar3[-1] + '\x01';
      return in_ECX;
    }
  }
  cVar2 = FUN_2000a6c0(uVar1,1);
  if (cVar2 != '\0') {
    puVar5 = (undefined4 *)param_1[0xd];
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)&DAT_201116cc;
    }
    puVar6 = (undefined4 *)in_ECX[0xd];
    for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    in_ECX[0xe] = uVar1;
    *(undefined1 *)(in_ECX[0xd] + uVar1) = 0;
  }
  return in_ECX;
}

