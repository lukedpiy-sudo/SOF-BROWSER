// rea decompile_all
// name: FUN_200edf60
// address: 0x200edf60
// body: available
// range: 0x200edf60-0x200eea1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_200edf60(int param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  size_t _Size;
  int *piVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  int *piVar12;
  char *pcVar13;
  int *local_18 [4];
  undefined4 local_8;
  char *local_4;
  
  ppiVar11 = local_18;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppiVar11 = (int *)0x0;
    ppiVar11 = ppiVar11 + 1;
  }
  local_18[0] = param_2;
  local_18[1] = (int *)param_3;
  local_18[2] = _malloc(param_8);
  if (local_18[2] == (int *)0x0) {
    return 0;
  }
  piVar9 = param_4;
  piVar12 = local_18[2];
  for (uVar7 = param_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *piVar12 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar12 = piVar12 + 1;
  }
  for (param_8 = param_8 & 3; param_8 != 0; param_8 = param_8 - 1) {
    *(char *)piVar12 = (char)*piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
    piVar12 = (int *)((int)piVar12 + 1);
  }
  local_18[3] = (int *)param_5;
  local_8 = param_6;
  if (param_7 == (char *)0x0) {
    local_4 = param_7;
  }
  else {
    uVar7 = 0xffffffff;
    pcVar13 = param_7;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    local_4 = _malloc(uVar7);
    if (local_4 == (char *)0x0) {
      FUN_200f9d32(local_18[2]);
      return 0;
    }
    pcVar13 = local_4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)param_7;
      param_7 = param_7 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *param_7;
      param_7 = param_7 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  piVar9 = local_18[2];
  switch(local_18[0]) {
  case (int *)0x0:
  case (int *)0xc:
    if (*param_4 == 0) break;
    iVar6 = FUN_200fcecc(*param_4);
    *piVar9 = iVar6;
    goto joined_r0x200ee891;
  case (int *)0x1:
    if (*param_4 == 0) break;
    iVar6 = FUN_200fcecc(*param_4);
    *piVar9 = iVar6;
    goto LAB_200ee06d;
  case (int *)0x2:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) {
        FUN_200f9d32(piVar9);
        FUN_200f9d32(local_4);
        return 0;
      }
    }
    goto LAB_200ee878;
  case (int *)0x3:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) goto LAB_200ee0f4;
    }
    goto LAB_200ee466;
  case (int *)0x4:
  case (int *)0x5:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) {
LAB_200ee0f4:
        FUN_200f9d32(piVar9);
        FUN_200f9d32(local_4);
        return 0;
      }
    }
    goto LAB_200ee1f9;
  case (int *)0x6:
  case (int *)0x9:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (param_4[1] == 0) break;
    iVar6 = FUN_200fcecc(param_4[1]);
    piVar9[1] = iVar6;
    goto LAB_200ee06d;
  case (int *)0x7:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) goto LAB_200ee486;
    }
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (param_4[3] != 0) {
      iVar6 = FUN_200fcecc(param_4[3]);
      piVar9[3] = iVar6;
      if (iVar6 == 0) goto LAB_200ee079;
    }
    if (param_4[4] == 0) break;
    iVar6 = FUN_200fcecc(param_4[4]);
    piVar9[4] = iVar6;
    goto LAB_200ee47a;
  case (int *)0x8:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee079;
    }
LAB_200ee1f9:
    if (param_4[2] == 0) break;
    iVar6 = FUN_200fcecc(param_4[2]);
    piVar9[2] = iVar6;
    goto LAB_200ee47a;
  case (int *)0xa:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) goto LAB_200ee486;
    }
    if (param_4[1] != 0) {
      puVar5 = _malloc(0x1c);
      piVar9[1] = (int)puVar5;
      if (puVar5 == (undefined4 *)0x0) goto LAB_200ee98c;
      puVar10 = (undefined4 *)param_4[1];
      for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    break;
  case (int *)0xb:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) goto LAB_200ee079;
    }
    goto LAB_200ee466;
  case (int *)0xe:
    if (param_4[2] != 0) {
      iVar6 = FUN_200fcecc(param_4[2]);
      piVar9[2] = iVar6;
      if (iVar6 == 0) goto LAB_200ee079;
    }
    if (param_4[3] == 0) break;
    iVar6 = FUN_200fcecc(param_4[3]);
    piVar9[3] = iVar6;
    goto LAB_200ee47a;
  case (int *)0xf:
    if (0 < param_4[1]) {
      pvVar3 = _malloc(param_4[1] * 4);
      piVar9[2] = (int)pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_200ee079;
      iVar6 = 0;
      if (0 < param_4[1]) {
        do {
          iVar2 = *(int *)(param_4[2] + iVar6 * 4);
          if (iVar2 == 0) {
            *(undefined4 *)(piVar9[2] + iVar6 * 4) = 0;
          }
          else {
            uVar4 = FUN_200fcecc(iVar2);
            *(undefined4 *)(piVar9[2] + iVar6 * 4) = uVar4;
            if (*(int *)(piVar9[2] + iVar6 * 4) == 0) goto joined_r0x200ee39b;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_4[1]);
      }
    }
    if (0 < param_4[1]) {
      pvVar3 = _malloc(param_4[1] * 4);
      piVar9[3] = (int)pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_200ee486;
      iVar6 = 0;
      if (0 < param_4[1]) {
        do {
          iVar2 = *(int *)(param_4[3] + iVar6 * 4);
          if (iVar2 == 0) {
            *(undefined4 *)(piVar9[3] + iVar6 * 4) = 0;
          }
          else {
            uVar4 = FUN_200fcecc(iVar2);
            *(undefined4 *)(piVar9[3] + iVar6 * 4) = uVar4;
            if (*(int *)(piVar9[3] + iVar6 * 4) == 0) goto joined_r0x200ee41e;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_4[1]);
      }
    }
    if (param_4[1] < 1) break;
    _Size = param_4[1] * 4;
    puVar5 = _malloc(_Size);
    piVar9[4] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_200ee98c;
    puVar10 = (undefined4 *)param_4[4];
    goto LAB_200ee9e8;
  case (int *)0x10:
LAB_200ee466:
    if (param_4[1] == 0) break;
    iVar6 = FUN_200fcecc(param_4[1]);
    piVar9[1] = iVar6;
    goto LAB_200ee47a;
  case (int *)0x11:
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (param_4[2] == 0) break;
    iVar6 = FUN_200fcecc(param_4[2]);
    piVar9[2] = iVar6;
LAB_200ee06d:
    if (iVar6 == 0) {
LAB_200ee079:
      FUN_200f9d32(piVar9);
      FUN_200f9d32(local_4);
      return 0;
    }
    break;
  case (int *)0x12:
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) {
        FUN_200f9d32(piVar9);
        FUN_200f9d32(local_4);
        return 0;
      }
    }
    if (param_4[2] != 0) {
      puVar5 = _malloc(0x1c);
      piVar9[2] = (int)puVar5;
      if (puVar5 == (undefined4 *)0x0) goto LAB_200ee98c;
      puVar10 = (undefined4 *)param_4[2];
      for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    break;
  case (int *)0x13:
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee079;
    }
    if (param_4[3] == 0) break;
    iVar6 = FUN_200fcecc(param_4[3]);
    piVar9[3] = iVar6;
    goto LAB_200ee47a;
  case (int *)0x14:
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (0 < param_4[2]) {
      pvVar3 = _malloc(param_4[2] * 4);
      piVar9[3] = (int)pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_200ee486;
      iVar6 = 0;
      if (0 < param_4[2]) {
        do {
          iVar2 = *(int *)(param_4[3] + iVar6 * 4);
          if (iVar2 == 0) {
            *(undefined4 *)(piVar9[3] + iVar6 * 4) = 0;
          }
          else {
            uVar4 = FUN_200fcecc(iVar2);
            *(undefined4 *)(piVar9[3] + iVar6 * 4) = uVar4;
            if (*(int *)(piVar9[3] + iVar6 * 4) == 0) goto joined_r0x200ee62e;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_4[2]);
      }
    }
    if (param_4[2] < 1) break;
    _Size = param_4[2] * 4;
    puVar5 = _malloc(_Size);
    piVar9[4] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_200ee98c;
    puVar10 = (undefined4 *)param_4[4];
    goto LAB_200ee9e8;
  case (int *)0x15:
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee486;
    }
    if (param_4[2] != 0) {
      iVar6 = FUN_200fcecc(param_4[2]);
      piVar9[2] = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (param_4[3] != 0) {
      iVar6 = FUN_200fcecc(param_4[3]);
      piVar9[3] = iVar6;
      if (iVar6 == 0) goto LAB_200ee079;
    }
    if (param_4[4] != 0) {
      iVar6 = FUN_200fcecc(param_4[4]);
      piVar9[4] = iVar6;
      if (iVar6 == 0) goto LAB_200ee486;
    }
    if (0 < param_4[5]) {
      pvVar3 = _malloc(param_4[5] * 4);
      piVar9[6] = (int)pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_200ee079;
      iVar6 = 0;
      if (0 < param_4[5]) {
        do {
          iVar2 = *(int *)(param_4[6] + iVar6 * 4);
          if (iVar2 == 0) {
            *(undefined4 *)(piVar9[6] + iVar6 * 4) = 0;
          }
          else {
            uVar4 = FUN_200fcecc(iVar2);
            *(undefined4 *)(piVar9[6] + iVar6 * 4) = uVar4;
            if (*(int *)(piVar9[6] + iVar6 * 4) == 0) goto joined_r0x200ee736;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_4[5]);
      }
    }
    break;
  case (int *)0x16:
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee079;
    }
    if (param_4[2] != 0) {
      iVar6 = FUN_200fcecc(param_4[2]);
      piVar9[2] = iVar6;
      if (iVar6 == 0) goto LAB_200ee486;
    }
    if (param_4[3] == 0) break;
    iVar6 = FUN_200fcecc(param_4[3]);
    piVar9[3] = iVar6;
    goto joined_r0x200ee891;
  case (int *)0x17:
  case (int *)0x1a:
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee079;
    }
    if (param_4[2] == 0) break;
    iVar6 = FUN_200fcecc(param_4[2]);
    piVar9[2] = iVar6;
LAB_200ee47a:
    if (iVar6 == 0) {
LAB_200ee486:
      FUN_200f9d32(piVar9);
      FUN_200f9d32(local_4);
      return 0;
    }
    break;
  case (int *)0x18:
    if (param_4[1] != 0) {
      iVar6 = FUN_200fcecc(param_4[1]);
      piVar9[1] = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (0 < param_4[2]) {
      pvVar3 = _malloc(param_4[2] * 4);
      piVar9[3] = (int)pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_200ee486;
      iVar6 = 0;
      if (0 < param_4[2]) {
        do {
          iVar2 = *(int *)(param_4[3] + iVar6 * 4);
          if (iVar2 == 0) {
            *(undefined4 *)(piVar9[3] + iVar6 * 4) = 0;
          }
          else {
            uVar4 = FUN_200fcecc(iVar2);
            *(undefined4 *)(piVar9[3] + iVar6 * 4) = uVar4;
            if (*(int *)(piVar9[3] + iVar6 * 4) == 0) {
              while (iVar6 = iVar6 + -1, -1 < iVar6) {
                FUN_200f9d32(*(undefined4 *)(piVar9[3] + iVar6 * 4));
              }
              FUN_200f9d32(piVar9[3]);
              FUN_200f9d32(piVar9);
              FUN_200f9d32(local_4);
              return 0;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_4[2]);
      }
    }
    break;
  case (int *)0x19:
LAB_200ee878:
    if (param_4[1] == 0) break;
    iVar6 = FUN_200fcecc(param_4[1]);
    piVar9[1] = iVar6;
joined_r0x200ee891:
    if (iVar6 == 0) {
LAB_200ee98c:
      FUN_200f9d32(piVar9);
      FUN_200f9d32(local_4);
      return 0;
    }
    break;
  case (int *)0x1b:
    if (*param_4 != 0) {
      iVar6 = FUN_200fcecc(*param_4);
      *piVar9 = iVar6;
      if (iVar6 == 0) goto LAB_200ee98c;
    }
    if (0 < param_4[1]) {
      pvVar3 = _malloc(param_4[1] * 4);
      piVar9[2] = (int)pvVar3;
      if (pvVar3 == (void *)0x0) {
        FUN_200f9d32(piVar9);
        FUN_200f9d32(local_4);
        return 0;
      }
      iVar6 = 0;
      if (0 < param_4[1]) {
        do {
          iVar2 = *(int *)(param_4[2] + iVar6 * 4);
          if (iVar2 == 0) {
            *(undefined4 *)(piVar9[2] + iVar6 * 4) = 0;
          }
          else {
            uVar4 = FUN_200fcecc(iVar2);
            *(undefined4 *)(piVar9[2] + iVar6 * 4) = uVar4;
            if (*(int *)(piVar9[2] + iVar6 * 4) == 0) {
              while (iVar6 = iVar6 + -1, -1 < iVar6) {
                FUN_200f9d32(*(undefined4 *)(piVar9[2] + iVar6 * 4));
              }
              FUN_200f9d32(piVar9[2]);
              FUN_200f9d32(piVar9);
              FUN_200f9d32(local_4);
              return 0;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_4[1]);
      }
    }
    if (param_4[1] < 1) break;
    _Size = param_4[1] * 4;
    puVar5 = _malloc(_Size);
    piVar9[3] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_200ee98c;
    puVar10 = (undefined4 *)param_4[3];
LAB_200ee9e8:
    for (uVar7 = _Size >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  FUN_200f44d0(*(undefined4 *)(param_1 + 0x390),local_18);
  return 1;
joined_r0x200ee736:
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    FUN_200f9d32(*(undefined4 *)(piVar9[6] + iVar6 * 4));
  }
  FUN_200f9d32(piVar9[6]);
  goto LAB_200ee3b9;
joined_r0x200ee62e:
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    FUN_200f9d32(*(undefined4 *)(piVar9[3] + iVar6 * 4));
  }
  FUN_200f9d32(piVar9[3]);
  goto LAB_200ee43c;
joined_r0x200ee39b:
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    FUN_200f9d32(*(undefined4 *)(piVar9[2] + iVar6 * 4));
  }
  FUN_200f9d32(piVar9[2]);
LAB_200ee3b9:
  FUN_200f9d32(piVar9);
  FUN_200f9d32(local_4);
  return 0;
joined_r0x200ee41e:
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    FUN_200f9d32(*(undefined4 *)(piVar9[3] + iVar6 * 4));
  }
  FUN_200f9d32(piVar9[3]);
LAB_200ee43c:
  FUN_200f9d32(piVar9);
  FUN_200f9d32(local_4);
  return 0;
}

