// rea decompile_all
// name: FUN_200d8060
// address: 0x200d8060
// body: available
// range: 0x200d8060-0x200d81f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d8060(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  char *pcVar7;
  undefined4 unaff_retaddr;
  
  *(undefined1 *)(in_ECX + 0x62) = 1;
  *(undefined4 *)(in_ECX + 0x80) = 3;
  *(undefined4 *)(in_ECX + 0x1c) = 0x3f800000;
  FUN_200eafe0(2);
  pcVar3 = (char *)FUN_200eb440(0);
  uVar5 = 0xffffffff;
  pcVar7 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_2000a6c0(uVar5,1);
  if (cVar1 != '\0') {
    pcVar7 = *(char **)(in_ECX + 0x9c);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(uint *)(in_ECX + 0xa0) = uVar5;
    *(undefined1 *)(*(int *)(in_ECX + 0x9c) + uVar5) = 0;
  }
  pcVar3 = (char *)FUN_200eb440(1);
  uVar5 = 0xffffffff;
  pcVar7 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_2000a6c0(uVar5,1);
  if (cVar1 != '\0') {
    pcVar7 = *(char **)(in_ECX + 0xac);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(uint *)(in_ECX + 0xb0) = uVar5;
    *(undefined1 *)(*(int *)(in_ECX + 0xac) + uVar5) = 0;
  }
  if (*(int *)(in_ECX + 0x7c) == 0) {
    FUN_200eb490(param_1,s_Could_not_owning_ghoul_model_20158d60);
    return;
  }
  puVar4 = *(undefined1 **)(in_ECX + 0x9c);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_201116cc;
  }
  sVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x7c) + 0x8c) + 0x1c))(puVar4);
  *(short *)(in_ECX + 0x84) = sVar2;
  if (sVar2 == 0) {
    puVar4 = *(undefined1 **)(in_ECX + 0x9c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_201116cc;
    }
    FUN_200eb490(unaff_retaddr,s_Could_not_find_bolt__s_20158d48,puVar4);
    return;
  }
  if (*(int **)(in_ECX + 0x8c) != (int *)0x0) {
    puVar4 = *(undefined1 **)(in_ECX + 0xac);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_201116cc;
    }
    sVar2 = (**(code **)(**(int **)(in_ECX + 0x8c) + 0x1c))(puVar4);
    *(short *)(in_ECX + 0x96) = sVar2;
    if (sVar2 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 0xac);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      FUN_200eb490(unaff_EBX,s_Could_not_find_nut__s_20158d30,puVar4);
    }
  }
  return;
}

