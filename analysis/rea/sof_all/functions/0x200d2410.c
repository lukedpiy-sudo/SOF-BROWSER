// rea decompile_all
// name: FUN_200d2410
// address: 0x200d2410
// body: available
// range: 0x200d2410-0x200d25aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200d24dd) */

undefined1 * FUN_200d2410(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  if (param_2 != 0) {
    pcVar2 = *(char **)(param_3 + 4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    iVar3 = __strcmpi(*(char **)(param_2 + 4),pcVar2);
    if (iVar3 != 0) {
      pcVar2 = *(char **)(param_2 + 4);
      uVar5 = 0xffffffff;
      pcVar8 = pcVar2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_2000a6c0();
      if (cVar1 != '\0') {
        pcVar8 = *(char **)(param_3 + 4);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar8 = pcVar8 + 1;
        }
        *(uint *)(param_3 + 8) = uVar5;
        *(undefined1 *)(*(int *)(param_3 + 4) + uVar5) = 0;
      }
      FUN_2000a3a0(param_3,0,0xffffffff);
      FUN_200c8690(*(undefined4 *)(in_ECX + 4));
    }
  }
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = *(uint *)(param_3 + 8);
  if (param_1 == param_3) {
    FUN_20027e40();
    FUN_20027e40();
    return param_1;
  }
  if (uVar5 != 0) {
    puVar4 = *(undefined1 **)(param_3 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_201116cc;
    }
    if ((int)(uint)(byte)puVar4[-1] < -1) {
      FUN_2000a5b0();
      puVar4 = *(undefined1 **)(param_3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return param_1;
    }
  }
  cVar1 = FUN_2000a6c0();
  if (cVar1 != '\0') {
    puVar7 = (undefined4 *)&DAT_201116cc;
    if (*(undefined4 **)(param_3 + 4) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(param_3 + 4);
    }
    puVar9 = *(undefined4 **)(param_1 + 4);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)(param_1 + 8) = uVar5;
    *(undefined1 *)(uVar5 + *(int *)(param_1 + 4)) = 0;
  }
  return param_1;
}

