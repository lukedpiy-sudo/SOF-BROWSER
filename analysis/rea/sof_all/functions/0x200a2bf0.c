// rea decompile_all
// name: FUN_200a2bf0
// address: 0x200a2bf0
// body: available
// range: 0x200a2bf0-0x200a2de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a2bf0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char local_3e8 [1000];
  
  pcVar2 = *(char **)(param_1 + 4);
  pcVar6 = local_3e8;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
    pcVar6 = local_3e8;
  }
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_20107ed2(local_3e8);
  iVar3 = -1;
  uVar7 = 0;
  pcVar2 = local_3e8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    do {
      if (local_3e8[uVar7] == '\\') {
        local_3e8[uVar7] = '/';
      }
      uVar4 = 0xffffffff;
      uVar7 = uVar7 + 1;
      pcVar2 = local_3e8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    } while (uVar7 < ~uVar4 - 1);
  }
  uVar7 = 0xffffffff;
  pcVar2 = local_3e8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar5 = ~uVar7 - 2;
  iVar3 = 0;
  if (iVar5 != 0) {
    do {
      if (local_3e8[iVar5] == '.') {
        local_3e8[iVar5] = '\0';
      }
      if (local_3e8[iVar5] == '/') {
        iVar3 = iVar5 + 1;
        goto LAB_200a2c80;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar3 = 0;
  }
LAB_200a2c80:
  if (iVar3 < 1) {
    uVar7 = 0xffffffff;
    pcVar2 = local_3e8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    if (0xfffffffd < uVar7) {
      FUN_201075d0();
    }
    *(undefined4 *)(param_2 + 8) = 0;
    if ((*(int *)(param_2 + 4) == 0) || (*(char *)(*(int *)(param_2 + 4) + -1) == '\0')) {
      if (uVar7 == 0) {
        FUN_2000a5b0(1);
        return;
      }
      if ((*(uint *)(param_2 + 0xc) < 0x20) && (uVar7 <= *(uint *)(param_2 + 0xc)))
      goto LAB_200a2dbc;
      FUN_2000a5b0(1);
    }
    else if (uVar7 == 0) {
      FUN_2000a5b0(1);
      return;
    }
    FUN_2000a840(uVar7);
LAB_200a2dbc:
    pcVar2 = local_3e8;
    pcVar6 = *(char **)(param_2 + 4);
    for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(uint *)(param_2 + 8) = uVar7;
    *(undefined1 *)(*(int *)(param_2 + 4) + uVar7) = 0;
    return;
  }
  uVar7 = 0xffffffff;
  pcVar2 = local_3e8 + iVar3;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar7 - 1;
  uVar7 = FUN_2000a830();
  if (uVar7 < uVar4) {
    FUN_201075d0();
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if ((*(int *)(param_2 + 4) == 0) || (*(char *)(*(int *)(param_2 + 4) + -1) == '\0')) {
    if (uVar4 == 0) {
      FUN_2000a5b0(1);
      return;
    }
    if ((*(uint *)(param_2 + 0xc) < 0x20) && (uVar4 <= *(uint *)(param_2 + 0xc))) goto LAB_200a2d13;
    FUN_2000a5b0(1);
  }
  else if (uVar4 == 0) {
    FUN_2000a5b0(1);
    return;
  }
  FUN_2000a840(uVar4);
LAB_200a2d13:
  pcVar2 = local_3e8 + iVar3;
  pcVar6 = *(char **)(param_2 + 4);
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar7 = uVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(uint *)(param_2 + 8) = uVar4;
  *(undefined1 *)(uVar4 + *(int *)(param_2 + 4)) = 0;
  return;
}

