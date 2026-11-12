// rea decompile_all
// name: FUN_50089d50
// address: 0x50089d50
// body: available
// range: 0x50089d50-0x5008a0a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50089d50(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  undefined3 extraout_var;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 in_stack_0000009a;
  int in_stack_00001008;
  int in_stack_0000100c;
  int in_stack_00001010;
  
  FUN_501074f0();
  iVar4 = (*DAT_5015ca14)();
  if ((iVar4 < 2) && (in_stack_00001010 == 0)) {
    return;
  }
  iVar4 = (**(code **)(*DAT_5015c4d8 + 0x58))();
  if (iVar4 == 0) {
    in_stack_0000100c = 0;
  }
  FUN_500fe2b0();
  if (in_stack_00001010 == 0) {
    pcVar5 = (char *)(*DAT_5015ca1c)();
    if (*pcVar5 == '\"') {
      pcVar5 = pcVar5 + 1;
      uVar6 = 0xffffffff;
      pcVar9 = pcVar5;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      pcVar5[~uVar6 - 2] = '\0';
    }
    uVar6 = 0xffffffff;
    pcVar9 = pcVar5;
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar9 = &stack0x00000804;
    do {
      pcVar11 = pcVar9;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar2 != '\0');
    pcVar9 = pcVar10 + -uVar6;
    pcVar10 = pcVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar5 = &stack0x00000004;
    do {
      pcVar10 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar9 + -uVar6;
    pcVar9 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
  }
  else {
    pcVar5 = (char *)(*DAT_5015ca18)();
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar5 = &stack0x00000804;
    do {
      pcVar10 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar9 + -uVar6;
    pcVar9 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar4 = -1;
    pcVar5 = &stack0x00000804;
    do {
      pcVar9 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    *(undefined2 *)(pcVar9 + -1) = DAT_501431b0;
    pcVar5 = (char *)(*DAT_5015ca1c)();
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar5 = &stack0x00000804;
    do {
      pcVar10 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar9 + -uVar6;
    pcVar9 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pcVar5 = (char *)(*DAT_5015ca18)();
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar5 = &stack0x00000004;
    do {
      pcVar10 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar9 + -uVar6;
    pcVar9 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar4 = -1;
    pcVar5 = &stack0x00000004;
    do {
      pcVar9 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    *(undefined2 *)(pcVar9 + -1) = DAT_501431b0;
    pcVar5 = (char *)(*DAT_5015ca1c)();
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pcVar5 = &stack0x00000004;
    do {
      pcVar10 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar9 + -uVar6;
    pcVar9 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar5 = &stack0x00000804;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  if (~uVar6 - 1 < 0x97) {
    uVar6 = 0xffffffff;
    pcVar5 = &stack0x00000004;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (~uVar6 - 1 < 0x97) goto LAB_50089f73;
  }
  (*DAT_5015ca28)();
LAB_50089f73:
  iVar4 = -1;
  pcVar5 = &stack0x00000804;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uVar6 = 0xffffffff;
  pcVar5 = &stack0x00000004;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  if (0x96 < ~uVar6 - 1) {
    in_stack_0000009a = 0;
  }
  iVar4 = -1;
  pcVar5 = &stack0x00000804;
  do {
    pcVar9 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar2 != '\0');
  iVar4 = -1;
  *(undefined2 *)(pcVar9 + -1) = DAT_50133a14;
  pcVar5 = &stack0x00000004;
  do {
    pcVar9 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar2 != '\0');
  *(undefined2 *)(pcVar9 + -1) = DAT_50133a14;
  iVar4 = FUN_50088680(in_stack_00001008);
  if (iVar4 == 0) {
    if (*(float *)(DAT_5015c8ac + 0x18) != 0.0) {
      (*DAT_5015ca28)();
    }
    iVar4 = 1;
    if (0 < DAT_5015d8c8) {
      iVar8 = 0x464;
      do {
        iVar1 = DAT_5015cca0 + iVar8;
        if ((((*(int *)(DAT_5015cca0 + 0x78 + iVar8) != 0) && (*(int *)(iVar1 + 0x74) != 0)) &&
            (*(int *)(iVar1 + 0x458) == 0)) &&
           ((in_stack_0000100c == 0 ||
            (bVar3 = FUN_500887e0(in_stack_00001008,iVar1), CONCAT31(extraout_var,bVar3) != 0)))) {
          (*DAT_5015ca2c)();
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 0x464;
      } while (iVar4 <= DAT_5015d8c8);
    }
  }
  return;
}

