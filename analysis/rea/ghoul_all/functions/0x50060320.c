// rea decompile_all
// name: FUN_50060320
// address: 0x50060320
// body: available
// range: 0x50060320-0x50060985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50060320(void *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  void *pvVar11;
  char cVar12;
  int *piVar13;
  undefined4 *puVar14;
  char local_a5;
  int local_a4;
  char *local_a0;
  int local_9c;
  char *local_98;
  char *local_94;
  uint local_90;
  char local_8c [2];
  short local_8a;
  short local_88;
  undefined1 local_84 [4];
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined1 local_74;
  char *local_70 [3];
  undefined1 local_64 [88];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_5011427b;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0x18) == 0) {
    local_a0 = (char *)0x0;
  }
  else {
    local_a0 = (char *)((*(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18)) / 0x34);
  }
  local_80 = (undefined4 *)0x0;
  local_7c = (undefined4 *)0x0;
  local_78 = 0;
  local_8c[0] = '\0';
  local_8a = 0;
  local_88 = 0;
  local_74 = 0;
  DAT_50159b14 = 0;
  local_4 = 0;
  puVar4 = local_64;
  iVar9 = 8;
  do {
    *(undefined4 *)(puVar4 + -8) = 0;
    *(undefined4 *)(puVar4 + -4) = 0;
    *puVar4 = 0;
    puVar4 = puVar4 + 0xc;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_a5 = '\0';
  ExceptionList = &local_c;
  FUN_50063bf0((void *)((int)param_1 + 0x94),*(undefined1 **)((int)param_1 + 0x98),
               *(int *)((int)param_1 + 0x9c));
  puVar14 = *(undefined4 **)((int)param_1 + 0xa8);
  if (puVar14 != *(undefined4 **)((int)param_1 + 0xac)) {
    do {
      puVar3 = (undefined *)*puVar14;
      if (puVar3 != (undefined *)0x0) {
        *puVar3 = 0;
        FUN_50106b60(puVar3);
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != *(undefined4 **)((int)param_1 + 0xac));
  }
  FUN_500634e0((void *)((int)param_1 + 0xa4),*(undefined4 **)((int)param_1 + 0xa8),
               *(undefined4 **)((int)param_1 + 0xac));
  FUN_500639c0((void *)((int)param_1 + 0x94),*(undefined1 **)((int)param_1 + 0x9c),local_8c);
  local_9c = 1;
  local_a4 = 1;
  if (1 < (int)local_a0) {
    do {
      if (0xfe < local_a5) break;
      local_8a = 0;
      local_88 = 0;
      local_74 = 0;
      FUN_500634e0(local_84,local_80,local_7c);
      DAT_50159b14 = 0;
      uVar5 = FUN_50060b30(param_1,(short)local_a4);
      if ((char)uVar5 == '\0') {
        if (*(int *)((int)param_1 + 0x98) == 0) {
          local_8c[0] = '\0';
        }
        else {
          iVar9 = *(int *)((int)param_1 + 0x9c) - *(int *)((int)param_1 + 0x98);
          local_8c[0] = ((char)(iVar9 / 0x1c) + (char)(iVar9 >> 0x1f)) -
                        (char)((longlong)iVar9 * 0x92492493 >> 0x3f);
        }
        iVar9 = local_a4 * 0x34;
        local_8a = (short)local_a4;
        while( true ) {
          piVar13 = *(int **)(*(int *)((int)param_1 + 0x18) + 0x30 + iVar9);
          if (piVar13 == (int *)0x0) break;
          local_98 = (char *)(iVar9 + 0x34 + *(int *)((int)param_1 + 0x18));
          while( true ) {
            uVar1 = *(ushort *)(piVar13 + 1);
            uVar6 = FUN_50056bf0(0x50159a74);
            if ((uVar1 & 0x7fff) < uVar6) {
              pcVar7 = (char *)(DAT_50159a78 + (uVar1 & 0x7fff) * 0x34);
            }
            else {
              pcVar7 = (char *)0x0;
            }
            if (pcVar7 == local_98) break;
            piVar13 = (int *)*piVar13;
            if (piVar13 == (int *)0x0) goto LAB_50060528;
          }
          uVar5 = FUN_50060b30(param_1,(short)local_a4 + 1);
          if ((char)uVar5 != '\0') break;
          local_a4 = local_a4 + 1;
          iVar9 = iVar9 + 0x34;
        }
LAB_50060528:
        local_88 = (short)local_a4;
        FUN_500639c0((void *)((int)param_1 + 0x94),*(undefined1 **)((int)param_1 + 0x9c),local_8c);
        local_a5 = local_a5 + '\x01';
        local_9c = local_9c + 1;
      }
      local_a4 = local_a4 + 1;
    } while (local_a4 < (int)local_a0);
  }
  if (0xfe < local_a5) {
    FUN_500adb20((byte *)s_Too_many_paths___some_paths_will_50143280);
  }
  FUN_5005ddd0((int)param_1);
  local_a4 = 1;
  if (1 < local_9c) {
    iVar9 = 0x1c;
    do {
      iVar8 = FUN_50060a00(param_1,(float)(*(int *)((int)param_1 + 0x18) +
                                          (uint)*(ushort *)
                                                 (iVar9 + 2 + *(int *)((int)param_1 + 0x98)) * 0x34)
                           ,0x4000);
      if (iVar8 == 0) {
        uVar2 = *(undefined2 *)(iVar9 + 2 + *(int *)((int)param_1 + 0x98));
        local_70[0] = operator_new(8);
        if (local_70[0] == (char *)0x0) {
          local_70[0] = (char *)0x0;
        }
        else {
          *local_70[0] = (char)local_a4;
          local_70[0][1] = '\0';
          *(undefined2 *)(local_70[0] + 2) = uVar2;
          local_70[0][4] = '\0';
          local_70[0][5] = '\0';
          local_70[0][7] = '\0';
          local_70[0][6] = '\0';
        }
        FUN_500632d0((void *)((int)param_1 + 0xa4),*(undefined4 **)((int)param_1 + 0xac),1,local_70)
        ;
        pvVar11 = (void *)(*(int *)((int)param_1 + 0x98) + iVar9);
        pcVar7 = local_70[0];
LAB_50060773:
        FUN_50062940(pvVar11,pcVar7);
      }
      else {
        uVar1 = *(ushort *)(iVar8 + 0xc);
        local_90 = (uint)uVar1;
        if (*(int *)((int)param_1 + 0x98) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (*(int *)((int)param_1 + 0x9c) - *(int *)((int)param_1 + 0x98)) / 0x1c;
        }
        iVar8 = iVar8 + -1;
        if (0 < iVar8) {
          puVar10 = (ushort *)(*(int *)((int)param_1 + 0x98) + 4 + iVar8 * 0x1c);
          do {
            if ((puVar10[-1] <= uVar1) && (uVar1 <= *puVar10)) {
              cVar12 = (char)iVar8;
              goto LAB_5006065e;
            }
            iVar8 = iVar8 + -1;
            puVar10 = puVar10 + -0xe;
          } while (0 < iVar8);
        }
        cVar12 = '\0';
LAB_5006065e:
        uVar2 = *(undefined2 *)(iVar9 + 2 + *(int *)((int)param_1 + 0x98));
        local_94 = operator_new(8);
        if (local_94 == (char *)0x0) {
          local_94 = (char *)0x0;
        }
        else {
          *local_94 = (char)local_a4;
          local_94[1] = cVar12;
          *(undefined2 *)(local_94 + 2) = uVar2;
          *(undefined2 *)(local_94 + 4) = (undefined2)local_90;
          local_94[7] = '\0';
          local_94[6] = '\0';
        }
        uVar6 = FUN_50062b90((void *)(*(int *)((int)param_1 + 0x98) + iVar9),local_94);
        if ((char)uVar6 == '\0') {
          FUN_500632d0((void *)((int)param_1 + 0xa4),*(undefined4 **)((int)param_1 + 0xac),1,
                       &local_94);
          FUN_50062940((void *)(*(int *)((int)param_1 + 0x98) + iVar9),local_94);
          pvVar11 = (void *)(*(int *)((int)param_1 + 0x98) + cVar12 * 0x1c);
          pcVar7 = local_94;
          goto LAB_50060773;
        }
        if (local_94 != (char *)0x0) {
          *local_94 = '\0';
          FUN_50106b60(local_94);
        }
      }
      iVar8 = FUN_50060a00(param_1,(float)(*(int *)((int)param_1 + 0x18) +
                                          (uint)*(ushort *)
                                                 (iVar9 + 4 + *(int *)((int)param_1 + 0x98)) * 0x34)
                           ,0x4000);
      if (iVar8 == 0) {
        uVar2 = *(undefined2 *)(iVar9 + 4 + *(int *)((int)param_1 + 0x98));
        local_98 = operator_new(8);
        if (local_98 == (char *)0x0) {
          local_98 = (char *)0x0;
        }
        else {
          local_98[1] = '\0';
          *local_98 = (char)local_a4;
          *(undefined2 *)(local_98 + 2) = uVar2;
          local_98[4] = '\0';
          local_98[5] = '\0';
          local_98[7] = '\0';
          local_98[6] = '\0';
        }
        FUN_500632d0((void *)((int)param_1 + 0xa4),*(undefined4 **)((int)param_1 + 0xac),1,&local_98
                    );
        pvVar11 = (void *)(*(int *)((int)param_1 + 0x98) + iVar9);
        pcVar7 = local_98;
LAB_50060922:
        FUN_50062940(pvVar11,pcVar7);
      }
      else {
        uVar1 = *(ushort *)(iVar8 + 0xc);
        local_90 = (uint)uVar1;
        if (*(int *)((int)param_1 + 0x98) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (*(int *)((int)param_1 + 0x9c) - *(int *)((int)param_1 + 0x98)) / 0x1c;
        }
        iVar8 = iVar8 + -1;
        if (0 < iVar8) {
          puVar10 = (ushort *)(*(int *)((int)param_1 + 0x98) + 4 + iVar8 * 0x1c);
          do {
            if ((puVar10[-1] <= uVar1) && (uVar1 <= *puVar10)) {
              cVar12 = (char)iVar8;
              goto LAB_50060806;
            }
            iVar8 = iVar8 + -1;
            puVar10 = puVar10 + -0xe;
          } while (0 < iVar8);
        }
        cVar12 = '\0';
LAB_50060806:
        uVar2 = *(undefined2 *)(iVar9 + 4 + *(int *)((int)param_1 + 0x98));
        local_a0 = operator_new(8);
        if (local_a0 == (char *)0x0) {
          local_a0 = (char *)0x0;
        }
        else {
          *local_a0 = (char)local_a4;
          local_a0[1] = cVar12;
          *(undefined2 *)(local_a0 + 2) = uVar2;
          *(undefined2 *)(local_a0 + 4) = (undefined2)local_90;
          local_a0[7] = '\0';
          local_a0[6] = '\0';
        }
        uVar6 = FUN_50062b90((void *)(*(int *)((int)param_1 + 0x98) + iVar9),local_a0);
        if ((char)uVar6 == '\0') {
          FUN_500632d0((void *)((int)param_1 + 0xa4),*(undefined4 **)((int)param_1 + 0xac),1,
                       &local_a0);
          FUN_50062940((void *)(*(int *)((int)param_1 + 0x98) + iVar9),local_a0);
          pvVar11 = (void *)(*(int *)((int)param_1 + 0x98) + cVar12 * 0x1c);
          pcVar7 = local_a0;
          goto LAB_50060922;
        }
        if (local_a0 != (char *)0x0) {
          *local_a0 = '\0';
          FUN_50106b60(local_a0);
        }
      }
      local_a4 = local_a4 + 1;
      iVar9 = iVar9 + 0x1c;
    } while (local_a4 < local_9c);
  }
  if (*(float *)(DAT_5015c978 + 0x18) != 0.0) {
    FUN_500623e0((int)param_1);
  }
  local_7c = local_80;
  FUN_50106b60((undefined *)local_80);
  ExceptionList = local_c;
  return;
}

