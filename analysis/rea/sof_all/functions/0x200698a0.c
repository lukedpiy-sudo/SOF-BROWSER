// rea decompile_all
// name: FUN_200698a0
// address: 0x200698a0
// body: available
// range: 0x200698a0-0x200699fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200698a0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char local_3e8 [1000];
  
  pcVar2 = *(char **)(param_1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  pcVar5 = local_3e8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_20107ed2(local_3e8);
  iVar3 = -1;
  uVar6 = 0;
  pcVar2 = local_3e8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    do {
      if (local_3e8[uVar6] == 0x2f2f) {
        local_3e8[uVar6] = '/';
      }
      uVar4 = 0xffffffff;
      uVar6 = uVar6 + 1;
      pcVar2 = local_3e8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    } while (uVar6 < ~uVar4 - 1);
  }
  uVar6 = 0xffffffff;
  pcVar2 = local_3e8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (4 < ~uVar6 - 1) {
    uVar6 = 0xffffffff;
    pcVar2 = local_3e8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    for (iVar3 = ~uVar6 - 2;
        ((iVar3 != 0 && (local_3e8[iVar3] != '.')) && (local_3e8[iVar3] != '/')); iVar3 = iVar3 + -1
        ) {
    }
    if (local_3e8[iVar3] == '.') {
      local_3e8[iVar3] = '\0';
    }
  }
  uVar6 = 0xffffffff;
  pcVar2 = local_3e8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  if (0xfffffffd < uVar6) {
    FUN_201075d0();
  }
  iVar3 = *(int *)(param_2 + 4);
  *(undefined4 *)(param_2 + 8) = 0;
  if ((iVar3 == 0) || (*(char *)(iVar3 + -1) == '\0')) {
    if (uVar6 == 0) {
      FUN_2000a5b0(1);
      return;
    }
    if ((*(uint *)(param_2 + 0xc) < 0x20) && (uVar6 <= *(uint *)(param_2 + 0xc))) goto LAB_200699d2;
    FUN_2000a5b0(1);
  }
  else if (uVar6 == 0) {
    *(char *)(iVar3 + -1) = *(char *)(iVar3 + -1) + -1;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    return;
  }
  FUN_2000a840(uVar6);
LAB_200699d2:
  pcVar2 = local_3e8;
  pcVar5 = *(char **)(param_2 + 4);
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(uint *)(param_2 + 8) = uVar6;
  *(undefined1 *)(uVar6 + *(int *)(param_2 + 4)) = 0;
  return;
}

