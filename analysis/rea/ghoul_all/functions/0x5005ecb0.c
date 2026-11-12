// rea decompile_all
// name: FUN_5005ecb0
// address: 0x5005ecb0
// body: available
// range: 0x5005ecb0-0x5005f3d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005ecb0(void *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  uint local_9c;
  int local_94;
  uint local_7c;
  float local_78;
  int local_74;
  ushort local_70;
  int local_6c;
  float local_64;
  float local_5c;
  char local_58 [88];
  
  if (*(int *)((int)this + 0x18) == 0) {
    local_74 = 0;
  }
  else {
    local_74 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0x45c) + 0x4c);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x40) + 0xc);
  if (iVar10 == 0) {
    local_94 = 0;
  }
  else {
    local_94 = *(int *)(iVar10 + 0xc);
  }
  local_6c = 0;
  local_78 = 0.0;
  bVar6 = false;
  iVar10 = *(int *)((int)this + 0x18) + iVar2 * 0x34;
  iVar11 = 8;
  pcVar7 = local_58;
  do {
    pcVar7[-0xffffffff00000008] = '\0';
    pcVar7[-0xffffffff00000007] = '\0';
    pcVar7[-0xffffffff00000006] = '\0';
    pcVar7[-0xffffffff00000005] = '\0';
    pcVar7[-0xffffffff00000004] = '\0';
    pcVar7[-0xffffffff00000003] = '\0';
    pcVar7[-0xffffffff00000002] = '\0';
    pcVar7[-0xffffffff00000001] = '\0';
    *pcVar7 = '\0';
    pcVar7 = pcVar7 + 0xc;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  local_9c = 0;
  bVar5 = false;
  local_64 = 9999999.0;
  if (*(int *)(param_1 + 0x45c) == 0) {
    return;
  }
  if ((*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) != 0) &&
     (uVar8 = FUN_5005ec00(this,param_1), (char)uVar8 != '\0')) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x44) =
       *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x40);
  iVar16 = *(int *)(param_1 + 0x45c);
  iVar11 = iVar2 + -1;
  if (*(int *)(iVar16 + 0x50) != 1) {
    iVar11 = iVar2 + 1;
  }
  if ((0 < iVar11) && (iVar11 < local_74)) {
    piVar18 = *(int **)(iVar10 + 0x30);
    if (piVar18 != (int *)0x0) {
      do {
        if ((DAT_50159a78 == 0) ||
           ((uint)((DAT_50159a7c - DAT_50159a78) / 0x34) <= (*(ushort *)(piVar18 + 1) & 0x7fff))) {
          iVar15 = 0;
        }
        else {
          iVar15 = DAT_50159a78 + (*(ushort *)(piVar18 + 1) & 0x7fff) * 0x34;
        }
        if (iVar15 == iVar11 * 0x34 + *(int *)((int)this + 0x18)) {
          local_6c = iVar11 * 0x34 + *(int *)((int)this + 0x18);
          goto LAB_5005ef18;
        }
        piVar18 = (int *)*piVar18;
      } while (piVar18 != (int *)0x0);
    }
  }
  iVar11 = *(int *)(iVar10 + 0x28);
  if (iVar11 == 0) {
    bVar6 = true;
    local_9c = (uint)(*(int *)(iVar16 + 0x50) == 0);
  }
  else {
    bVar5 = true;
    local_6c = *(int *)((int)this + 0x18) + iVar11 * 0x34;
    iVar15 = iVar11 + -1;
    if (iVar11 < 2) {
      iVar15 = iVar11 + 1;
    }
    local_7c = (uint)(iVar11 >= iVar15);
    piVar18 = *(int **)(local_6c + 0x30);
    local_9c = (uint)(iVar11 < iVar15);
    if (piVar18 == (int *)0x0) {
LAB_5005eefb:
      *(uint *)(iVar16 + 0x50) = local_9c;
    }
    else {
      do {
        if ((DAT_50159a78 == 0) ||
           ((uint)((DAT_50159a7c - DAT_50159a78) / 0x34) <= (*(ushort *)(piVar18 + 1) & 0x7fff))) {
          iVar11 = 0;
        }
        else {
          iVar11 = DAT_50159a78 + (*(ushort *)(piVar18 + 1) & 0x7fff) * 0x34;
        }
        if (iVar11 == *(int *)((int)this + 0x18) + iVar15 * 0x34) {
          local_9c = local_7c;
          goto LAB_5005eefb;
        }
        piVar18 = (int *)*piVar18;
      } while (piVar18 != (int *)0x0);
      *(uint *)(iVar16 + 0x50) = local_9c;
    }
  }
LAB_5005ef18:
  iVar11 = 0;
  puVar13 = (undefined4 *)0x0;
  pfVar12 = &local_5c;
  while( true ) {
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = *(undefined4 **)(iVar10 + 0x30);
    }
    else {
      puVar13 = (undefined4 *)*puVar13;
    }
    if (puVar13 == (undefined4 *)0x0) break;
    uVar1 = *(ushort *)(puVar13 + 1);
    iVar11 = iVar11 + 1;
    *pfVar12 = (float)puVar13[2];
    pfVar12[-1] = (float)(*(int *)((int)this + 0x18) + (uVar1 & 0x7fff) * 0x34);
    pfVar12 = pfVar12 + 3;
  }
  iVar16 = 1;
  do {
    bVar4 = false;
    if (0 < iVar11) {
      pcVar7 = local_58;
      iVar15 = iVar11;
      bVar4 = false;
      do {
        if ((*pcVar7 == '\0') &&
           (uVar9 = *(int *)(*(int *)(pcVar7 + -8) + 0xc) - iVar2, uVar14 = (int)uVar9 >> 0x1f,
           (uVar9 ^ uVar14) - uVar14 == iVar16)) {
          bVar4 = true;
          *pcVar7 = '\x01';
        }
        pcVar7 = pcVar7 + 0xc;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    iVar16 = iVar16 + 1;
  } while (bVar4);
  if (0 < iVar11) {
    pfVar12 = &local_5c;
    do {
      if ((*(char *)(pfVar12 + 1) == '\0') && (*pfVar12 < local_64)) {
        local_64 = *pfVar12;
        local_78 = pfVar12[-1];
      }
      pfVar12 = pfVar12 + 3;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  local_70 = (ushort)iVar2;
  if (!bVar5) {
    if ((!bVar6) && (*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) == 0)) goto LAB_5005f3b8;
    if (local_78 != 0.0) {
      iVar10 = *(int *)((int)local_78 + 0xc);
      if (iVar10 <= local_94) {
        iVar11 = iVar10 + 1;
        iVar16 = iVar10 + -1;
      }
      else {
        iVar11 = iVar10 + -1;
        iVar16 = iVar10 + 1;
      }
      local_9c = (uint)(iVar10 > local_94);
      uVar9 = iVar2 - local_94 >> 0x1f;
      uVar14 = iVar10 - local_94 >> 0x1f;
      piVar18 = *(int **)((int)local_78 + 0x30);
      if (piVar18 != (int *)0x0) {
        piVar17 = piVar18;
        do {
          if ((DAT_50159a78 == 0) ||
             ((uint)((DAT_50159a7c - DAT_50159a78) / 0x34) <= (*(ushort *)(piVar17 + 1) & 0x7fff)))
          {
            iVar15 = 0;
          }
          else {
            iVar15 = DAT_50159a78 + (*(ushort *)(piVar17 + 1) & 0x7fff) * 0x34;
          }
          if (iVar15 == *(int *)((int)this + 0x18) + iVar11 * 0x34) {
            bVar5 = true;
            goto LAB_5005f0e6;
          }
          piVar17 = (int *)*piVar17;
        } while (piVar17 != (int *)0x0);
      }
      bVar5 = false;
LAB_5005f0e6:
      if (piVar18 != (int *)0x0) {
        do {
          if ((DAT_50159a78 == 0) ||
             ((uint)((DAT_50159a7c - DAT_50159a78) / 0x34) <= (*(ushort *)(piVar18 + 1) & 0x7fff)))
          {
            iVar15 = 0;
          }
          else {
            iVar15 = DAT_50159a78 + (*(ushort *)(piVar18 + 1) & 0x7fff) * 0x34;
          }
          if (iVar15 == *(int *)((int)this + 0x18) + iVar16 * 0x34) {
            bVar4 = true;
            goto LAB_5005f14f;
          }
          piVar18 = (int *)*piVar18;
        } while (piVar18 != (int *)0x0);
      }
      bVar4 = false;
LAB_5005f14f:
      if (((((0 < iVar11) && (iVar11 < local_74)) &&
           ((int)((iVar10 - local_94 ^ uVar14) - uVar14) < (int)((iVar2 - local_94 ^ uVar9) - uVar9)
           )) && (bVar5)) || (bVar6)) {
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x50);
        **(ushort **)(*(int *)(param_1 + 0x45c) + 0x40c) = local_70;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x40c) + 4) = uVar8;
        if (!bVar6) {
          *(int *)(*(int *)(param_1 + 0x45c) + 0x40) = *(int *)((int)this + 0x18) + iVar10 * 0x34;
          *(uint *)(*(int *)(param_1 + 0x45c) + 0x50) = local_9c;
          return;
        }
        if (bVar5) {
          *(int *)(*(int *)(param_1 + 0x45c) + 0x40) = *(int *)((int)this + 0x18) + iVar10 * 0x34;
          *(uint *)(*(int *)(param_1 + 0x45c) + 0x50) = local_9c;
          return;
        }
        if (bVar4) {
          *(int *)(*(int *)(param_1 + 0x45c) + 0x40) = *(int *)((int)this + 0x18) + iVar10 * 0x34;
          *(uint *)(*(int *)(param_1 + 0x45c) + 0x50) = (uint)(local_9c == 0);
          return;
        }
        *(uint *)(*(int *)(param_1 + 0x45c) + 0x50) =
             (uint)(*(int *)(*(int *)(param_1 + 0x45c) + 0x50) == 0);
        *(uint *)(*(int *)(param_1 + 0x45c) + 0x50) = local_9c;
        return;
      }
      goto LAB_5005f3b8;
    }
  }
  if (bVar6) {
    iVar2 = *(int *)(param_1 + 0x45c);
    puVar3 = *(ushort **)(iVar2 + 0x40c);
    if (*(int *)(puVar3 + 2) == 0) {
      iVar11 = *puVar3 + 1;
    }
    else {
      iVar11 = *puVar3 - 1;
    }
    if ((0 < iVar11) && (iVar11 < local_74)) {
      piVar18 = *(int **)(iVar10 + 0x30);
      if (piVar18 != (int *)0x0) {
        do {
          if ((DAT_50159a78 == 0) ||
             ((uint)((DAT_50159a7c - DAT_50159a78) / 0x34) <= (*(ushort *)(piVar18 + 1) & 0x7fff)))
          {
            iVar10 = 0;
          }
          else {
            iVar10 = DAT_50159a78 + (*(ushort *)(piVar18 + 1) & 0x7fff) * 0x34;
          }
          if (iVar10 == *(int *)((int)this + 0x18) + iVar11 * 0x34) {
            uVar8 = *(undefined4 *)(iVar2 + 0x50);
            *puVar3 = local_70;
            *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x50) =
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x40c) + 4);
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x40c) + 4) = uVar8;
            *(int *)(*(int *)(param_1 + 0x45c) + 0x40) = *(int *)((int)this + 0x18) + iVar11 * 0x34;
            return;
          }
          piVar18 = (int *)*piVar18;
        } while (piVar18 != (int *)0x0);
      }
    }
    *(uint *)(iVar2 + 0x50) = local_9c;
    return;
  }
LAB_5005f3b8:
  *(int *)(*(int *)(param_1 + 0x45c) + 0x40) = local_6c;
  return;
}

