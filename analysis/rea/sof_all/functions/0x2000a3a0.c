// rea decompile_all
// name: FUN_2000a3a0
// address: 0x2000a3a0
// body: available
// range: 0x2000a3a0-0x2000a5a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000a3a0(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_201077fc();
  }
  uVar5 = *(uint *)(param_1 + 8) - param_2;
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  if (in_ECX == param_1) {
    uVar5 = uVar5 + param_2;
    if (*(uint *)(in_ECX + 8) < uVar5) {
      FUN_201077fc();
    }
    iVar2 = *(int *)(in_ECX + 8) - uVar5;
    iVar6 = -1;
    if ((iVar2 == -1) || (iVar6 = iVar2, iVar2 != 0)) {
      FUN_2000a930();
      iVar2 = *(int *)(in_ECX + 4) + uVar5;
      FUN_200fa360(iVar2,iVar2 + iVar6,(*(int *)(in_ECX + 8) - uVar5) - iVar6);
      iVar6 = *(int *)(in_ECX + 8) - iVar6;
      cVar1 = FUN_2000a6c0(iVar6,0);
      if (cVar1 != '\0') {
        *(int *)(in_ECX + 8) = iVar6;
        *(undefined1 *)(iVar6 + *(int *)(in_ECX + 4)) = 0;
      }
    }
    if (*(uint *)(in_ECX + 8) < param_2) {
      param_2 = *(uint *)(in_ECX + 8);
    }
    if (param_2 == 0) {
      return;
    }
    FUN_2000a930();
    FUN_200fa360(*(int *)(in_ECX + 4),*(int *)(in_ECX + 4) + param_2,*(int *)(in_ECX + 8) - param_2)
    ;
    iVar6 = *(int *)(in_ECX + 8) - param_2;
    cVar1 = FUN_2000a6c0(iVar6,0);
    if (cVar1 == '\0') {
      return;
    }
    FUN_2000a6a0(iVar6);
    return;
  }
  if ((uVar5 != 0) && (uVar5 == *(uint *)(param_1 + 8))) {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_201116cc;
    }
    if ((int)(uint)(byte)puVar3[-1] < -1) {
      iVar6 = *(int *)(in_ECX + 4);
      if (iVar6 != 0) {
        if (*(char *)(iVar6 + -1) == '\0') {
          FUN_200f9f75((char *)(iVar6 + -1));
        }
        else {
          *(char *)(iVar6 + -1) = *(char *)(iVar6 + -1) + -1;
        }
      }
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      puVar3 = *(undefined1 **)(param_1 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      *(undefined1 **)(in_ECX + 4) = puVar3;
      *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
      puVar3[-1] = puVar3[-1] + '\x01';
      return;
    }
  }
  uVar4 = FUN_2000a830();
  if (uVar4 < uVar5) {
    FUN_201075d0();
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  if ((*(int *)(in_ECX + 4) == 0) || (*(char *)(*(int *)(in_ECX + 4) + -1) == '\0')) {
    if (uVar5 == 0) {
      FUN_2000a5b0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (uVar5 <= *(uint *)(in_ECX + 0xc))) goto LAB_2000a56d;
    FUN_2000a5b0(1);
  }
  else if (uVar5 == 0) {
    FUN_2000a5b0(1);
    return;
  }
  FUN_2000a840(uVar5);
LAB_2000a56d:
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_201116cc;
  }
  puVar7 = (undefined4 *)(puVar3 + param_2);
  puVar8 = *(undefined4 **)(in_ECX + 4);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(uint *)(in_ECX + 8) = uVar5;
  *(undefined1 *)(uVar5 + *(int *)(in_ECX + 4)) = 0;
  return;
}

