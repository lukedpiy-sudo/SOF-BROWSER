// rea decompile_all
// name: FUN_200f3f60
// address: 0x200f3f60
// body: available
// range: 0x200f3f60-0x200f43f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f3f60(char *param_1,int *param_2)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  char *local_4;
  
  piVar2 = param_2;
  local_10 = 0;
  local_8 = 0;
  local_14 = 0;
  local_c = 0;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*param_1 == '\0') {
    return 0;
  }
  uVar9 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar8 != '\0');
  uVar10 = ~uVar9 - 1;
  pcVar3 = _malloc(~uVar9);
  *param_2 = (int)pcVar3;
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar5 = param_1;
  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *(undefined1 *)(uVar10 + *param_2) = 0;
  for (; (*param_1 == '\n' || (*param_1 == '\r')); param_1 = param_1 + 1) {
  }
  if (*param_1 != ':') {
LAB_200f4013:
    cVar8 = *param_1;
    goto joined_r0x200f4016;
  }
  param_1 = param_1 + 1;
  param_2[1] = (int)param_1;
  cVar8 = *param_1;
  if (cVar8 == '\0') goto LAB_200f4013;
  while (cVar8 != ' ') {
    if (cVar8 == '\0') goto LAB_200f4013;
    pcVar3 = param_1 + 1;
    local_10 = local_10 + 1;
    param_1 = param_1 + 1;
    cVar8 = *pcVar3;
  }
  do {
    cVar8 = param_1[1];
    param_1 = param_1 + 1;
joined_r0x200f4016:
  } while (cVar8 == ' ');
  if (*param_1 == '\0') {
LAB_200f404c:
    cVar8 = *param_1;
    goto joined_r0x200f404f;
  }
  param_2[5] = (int)param_1;
  cVar8 = *param_1;
  if (cVar8 != ' ') {
    local_8 = 0;
    do {
      if (cVar8 == '\0') goto LAB_200f404c;
      cVar8 = param_1[1];
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
    } while (cVar8 != ' ');
  }
  do {
    cVar8 = param_1[1];
    param_1 = param_1 + 1;
joined_r0x200f404f:
  } while (cVar8 == ' ');
  if ((*param_1 == ':') || (*param_1 == '\0')) {
LAB_200f408b:
    cVar8 = *param_1;
    goto joined_r0x200f408e;
  }
  param_2[6] = (int)param_1;
  cVar8 = *param_1;
  if (cVar8 != ' ') {
    local_14 = 0;
    do {
      if (cVar8 == '\0') goto LAB_200f408b;
      cVar8 = param_1[1];
      local_14 = local_14 + 1;
      param_1 = param_1 + 1;
    } while (cVar8 != ' ');
  }
  do {
    cVar8 = param_1[1];
    param_1 = param_1 + 1;
joined_r0x200f408e:
  } while (cVar8 == ' ');
  if ((*param_1 != '\0') && (param_2[7] = (int)param_1, *param_1 != '\0')) {
    local_c = 0;
    do {
      pcVar3 = param_1 + 1;
      local_c = local_c + 1;
      param_1 = param_1 + 1;
    } while (*pcVar3 != '\0');
  }
  if (local_10 != 0) {
    puVar11 = (undefined4 *)param_2[1];
    puVar4 = _malloc(local_10 + 1);
    param_2[1] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (uVar9 = local_10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar4 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar9 = local_10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(undefined1 *)(local_10 + param_2[1]) = 0;
    }
    pcVar3 = (char *)param_2[1];
    uVar9 = 0;
    param_2 = (int *)0x0;
    local_4 = (char *)0x0;
    param_1 = (char *)0x0;
    local_10 = 0;
    if ((pcVar3 == (char *)0x0) || (cVar8 = *pcVar3, pcVar5 = pcVar3, cVar8 == '\0')) {
      if (*piVar2 != 0) {
        FUN_200f9d32(*piVar2);
        *piVar2 = 0;
      }
      if (piVar2[1] == 0) {
        return 0;
      }
      FUN_200f9d32(piVar2[1]);
      piVar2[1] = 0;
      return 0;
    }
    do {
      pcVar5 = pcVar5 + 1;
      bVar12 = cVar8 == '!';
      cVar8 = *pcVar5;
      uVar10 = 0;
      pcVar6 = pcVar5;
      if (bVar12) goto joined_r0x200f4139;
      uVar9 = uVar9 + 1;
    } while (cVar8 != '\0');
    goto LAB_200f414c;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
LAB_200f426a:
  if (local_14 == 0) {
    if (local_c != 0) {
      iVar7 = FUN_200f3bb0(piVar2[7],piVar2);
      goto joined_r0x200f42e4;
    }
    piVar2[8] = 0;
    piVar2[9] = 0;
  }
  else {
    iVar7 = FUN_200f3bb0(piVar2[6],piVar2);
joined_r0x200f42e4:
    if (iVar7 == 0) {
      if (*piVar2 != 0) {
        FUN_200f9d32(*piVar2);
        *piVar2 = 0;
      }
      if (piVar2[1] != 0) {
        FUN_200f9d32(piVar2[1]);
        piVar2[1] = 0;
      }
      if (piVar2[2] != 0) {
        FUN_200f9d32(piVar2[2]);
        piVar2[2] = 0;
      }
      if (piVar2[3] != 0) {
        FUN_200f9d32(piVar2[3]);
        piVar2[3] = 0;
      }
      if (piVar2[4] == 0) {
        return 0;
      }
      FUN_200f9d32(piVar2[4]);
      piVar2[4] = 0;
      return 0;
    }
    if (local_c != 0) {
      puVar11 = (undefined4 *)piVar2[7];
      puVar4 = _malloc(local_c + 1);
      piVar2[7] = (int)puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        for (uVar9 = local_c >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar4 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar9 = local_c & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        *(undefined1 *)(local_c + piVar2[7]) = 0;
      }
      goto LAB_200f4362;
    }
  }
  piVar2[7] = 0;
LAB_200f4362:
  if (local_8 == 0) {
    piVar2[5] = 0;
  }
  else {
    puVar11 = (undefined4 *)piVar2[5];
    puVar4 = _malloc(local_8 + 1);
    piVar2[5] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar4 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(undefined1 *)(local_8 + piVar2[5]) = 0;
    }
  }
  if (local_14 == 0) {
    piVar2[6] = 0;
  }
  else {
    puVar11 = (undefined4 *)piVar2[6];
    puVar4 = _malloc(local_14 + 1);
    piVar2[6] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (uVar9 = local_14 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar4 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar9 = local_14 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(undefined1 *)(local_14 + piVar2[6]) = 0;
      return 1;
    }
  }
  return 1;
joined_r0x200f4139:
  param_1 = (char *)uVar10;
  param_2 = (int *)pcVar5;
  if (cVar8 == '\0') goto LAB_200f414c;
  pcVar6 = pcVar6 + 1;
  bVar12 = cVar8 == '@';
  cVar8 = *pcVar6;
  uVar10 = 0;
  pcVar1 = pcVar6;
  if (bVar12) goto joined_r0x200f4188;
  uVar10 = (int)param_1 + 1;
  goto joined_r0x200f4139;
joined_r0x200f4188:
  while (local_10 = uVar10, local_4 = pcVar6, cVar8 != '\0') {
    cVar8 = pcVar1[1];
    uVar10 = local_10 + 1;
    pcVar1 = pcVar1 + 1;
  }
LAB_200f414c:
  if (uVar9 == 0) {
    piVar2[2] = 0;
  }
  else {
    pcVar5 = _malloc(uVar9 + 1);
    piVar2[2] = (int)pcVar5;
    if (pcVar5 != (char *)0x0) {
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar5 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      }
      *(undefined1 *)(uVar9 + piVar2[2]) = 0;
    }
  }
  if (param_1 == (char *)0x0) {
    piVar2[3] = 0;
  }
  else {
    pcVar3 = _malloc((int)param_1 + 1);
    piVar2[3] = (int)pcVar3;
    if (pcVar3 != (char *)0x0) {
      for (uVar9 = (uint)param_1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pcVar3 = *param_2;
        param_2 = (int *)((int)param_2 + 4);
        pcVar3 = pcVar3 + 4;
      }
      for (uVar9 = (uint)param_1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar3 = *(char *)param_2;
        param_2 = (int *)((int)param_2 + 1);
        pcVar3 = pcVar3 + 1;
      }
      *(undefined1 *)((int)param_1 + piVar2[3]) = 0;
    }
  }
  if (local_10 == 0) {
    piVar2[4] = 0;
  }
  else {
    pcVar3 = _malloc(local_10 + 1);
    piVar2[4] = (int)pcVar3;
    if (pcVar3 != (char *)0x0) {
      for (uVar9 = local_10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)local_4;
        local_4 = local_4 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar9 = local_10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar3 = *local_4;
        local_4 = local_4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      *(undefined1 *)(local_10 + piVar2[4]) = 0;
    }
  }
  goto LAB_200f426a;
}

