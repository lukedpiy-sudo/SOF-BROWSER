// rea decompile_all
// name: FUN_50068dc0
// address: 0x50068dc0
// body: available
// range: 0x50068dc0-0x500697ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50068dc0(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  longlong lVar15;
  int *local_16c;
  uint local_168;
  int local_164;
  int local_160;
  char local_15c [32];
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  char local_100 [256];
  
  __ftol();
  pcVar13 = local_100;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13 = pcVar13 + 4;
  }
  FUN_50068cd0((int)this,param_1,(byte *)s_______begin_pickup_list____map___50144910);
  FUN_50068cd0((int)this,param_1,(byte *)s___classname_index_count_location_501448d0);
  if (*(int *)((int)this + 0xb4) != 0) {
    FUN_50068cd0((int)this,param_1,(byte *)s_type_of___of_times_average_avera_50144850);
    FUN_50068cd0((int)this,param_1,(byte *)s_creation_picked_up_pickup_respaw_501447d0);
    FUN_50068cd0((int)this,param_1,(byte *)s_delay_pickup_delay_50144750);
  }
  local_16c = *(int **)((int)this + 0xa8);
  local_168 = 0;
  if (local_16c != *(int **)((int)this + 0xac)) {
    do {
      iVar6 = *(int *)(*local_16c + 8);
      iVar12 = *(int *)(*local_16c + 4);
      if ((iVar12 < 1) || (0x27 < iVar12)) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(&DAT_5015c7bc + iVar12 * 4);
      }
      pcVar4 = FUN_5011290c(local_168,local_15c,10);
      pcVar13 = local_100;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar13 = cVar1;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      iVar7 = -1;
      pcVar13 = local_100;
      do {
        pcVar4 = pcVar13;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar4 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar4;
      } while (cVar1 != '\0');
      uVar8 = 0xffffffff;
      *(undefined2 *)(pcVar4 + -1) = DAT_5014474c;
      pcVar13 = local_15c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      if ((int)uVar8 < 6) {
        iVar7 = 6 - uVar8;
        uVar8 = uVar8 + iVar7;
        do {
          iVar9 = -1;
          pcVar13 = local_100;
          do {
            pcVar4 = pcVar13;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar4 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar4;
          } while (cVar1 != '\0');
          iVar7 = iVar7 + -1;
          *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
        } while (iVar7 != 0);
      }
      _strncat(local_100,*(char **)(iVar6 + 0x1b4),0x20);
      uVar10 = 0xffffffff;
      pcVar13 = *(char **)(iVar6 + 0x1b4);
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      iVar7 = uVar8 + (~uVar10 - 1);
      if (iVar7 < 0x20) {
        iVar9 = 0x20 - iVar7;
        iVar7 = iVar7 + iVar9;
        do {
          iVar11 = -1;
          pcVar13 = local_100;
          do {
            pcVar4 = pcVar13;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar4 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar4;
          } while (cVar1 != '\0');
          iVar9 = iVar9 + -1;
          *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
        } while (iVar9 != 0);
      }
      pcVar13 = FUN_5011290c(*(uint *)(iVar12 + 0x54),local_15c,10);
      uVar8 = 0xffffffff;
      do {
        pcVar4 = pcVar13;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar4 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar4;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar12 = -1;
      pcVar13 = local_100;
      do {
        pcVar14 = pcVar13;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar13 = pcVar4 + -uVar8;
      pcVar4 = pcVar14 + -1;
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar4 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar4 = pcVar4 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar13 = local_15c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + (~uVar8 - 1);
      if (iVar7 < 0x27) {
        iVar12 = 0x27 - iVar7;
        iVar7 = iVar7 + iVar12;
        do {
          iVar9 = -1;
          pcVar13 = local_100;
          do {
            pcVar4 = pcVar13;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar4 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar4;
          } while (cVar1 != '\0');
          iVar12 = iVar12 + -1;
          *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
        } while (iVar12 != 0);
      }
      pcVar13 = FUN_5011290c(*(uint *)(iVar6 + 0x318),local_15c,10);
      uVar8 = 0xffffffff;
      do {
        pcVar4 = pcVar13;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar4 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar4;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar6 = -1;
      pcVar13 = local_100;
      do {
        pcVar14 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar13 = pcVar4 + -uVar8;
      pcVar4 = pcVar14 + -1;
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar4 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar4 = pcVar4 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar13 = local_15c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + (~uVar8 - 1);
      if (iVar7 < 0x2e) {
        iVar6 = 0x2e - iVar7;
        iVar7 = iVar7 + iVar6;
        do {
          iVar12 = -1;
          pcVar13 = local_100;
          do {
            pcVar4 = pcVar13;
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            pcVar4 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar4;
          } while (cVar1 != '\0');
          iVar6 = iVar6 + -1;
          *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
        } while (iVar6 != 0);
      }
      pcVar4 = FUN_500c33f0();
      pcVar13 = local_15c;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar13 = cVar1;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      uVar8 = 0xffffffff;
      pcVar13 = local_15c;
      do {
        pcVar4 = pcVar13;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar4 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar4;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar6 = -1;
      pcVar13 = local_100;
      do {
        pcVar14 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar13 = pcVar4 + -uVar8;
      pcVar4 = pcVar14 + -1;
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar4 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar4 = pcVar4 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar13 = local_15c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      iVar6 = *(int *)((int)this + 0xb4);
      iVar7 = iVar7 + (~uVar8 - 1);
      if (iVar6 != 0) {
        if (iVar7 < 0x45) {
          iVar12 = 0x45 - iVar7;
          iVar7 = iVar7 + iVar12;
          do {
            iVar9 = -1;
            pcVar13 = local_100;
            do {
              pcVar4 = pcVar13;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar4 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar4;
            } while (cVar1 != '\0');
            iVar12 = iVar12 + -1;
            *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
          } while (iVar12 != 0);
        }
        iVar12 = *local_16c;
        if ((iVar12 == 0) || (iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar12 + 4)), iVar9 == 0))
        {
LAB_500691f9:
          iVar6 = -1;
          pcVar13 = local_100;
          do {
            pcVar4 = pcVar13;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar4 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar4;
          } while (cVar1 != '\0');
          *(undefined4 *)(pcVar4 + -1) = s_Dropped_5014473c._0_4_;
          *(undefined4 *)(pcVar4 + 3) = s_Dropped_5014473c._4_4_;
          pcVar13 = s_Dropped_5014473c;
        }
        else {
          iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar12 + 4));
          local_120 = *(int *)(iVar9 + 0x54);
          FUN_5006b1a0((void *)(iVar6 + 4),&local_11c,&local_120);
          if ((local_11c == *(int *)(iVar6 + 8)) ||
             ((iVar6 = FUN_500672d0(*(void **)(local_11c + 0x10),iVar12), iVar6 == 0 ||
              (*(int *)(iVar6 + 0x34) != 1)))) goto LAB_500691f9;
          iVar6 = -1;
          pcVar13 = local_100;
          do {
            pcVar4 = pcVar13;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar4 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar4;
          } while (cVar1 != '\0');
          *(undefined4 *)(pcVar4 + -1) = s_Design_50144744._0_4_;
          *(undefined2 *)(pcVar4 + 3) = s_Design_50144744._4_2_;
          pcVar4[5] = s_Design_50144744[6];
          pcVar13 = s_Design_50144744;
        }
        uVar8 = 0xffffffff;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        iVar7 = iVar7 + (~uVar8 - 1);
        if (iVar7 < 0x4f) {
          iVar6 = 0x4f - iVar7;
          iVar7 = iVar7 + iVar6;
          do {
            iVar12 = -1;
            pcVar13 = local_100;
            do {
              pcVar4 = pcVar13;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar4 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar4;
            } while (cVar1 != '\0');
            iVar6 = iVar6 + -1;
            *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
          } while (iVar6 != 0);
        }
        iVar6 = *local_16c;
        iVar12 = *(int *)((int)this + 0xb4);
        if ((iVar6 == 0) || (iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4)), iVar9 == 0)) {
LAB_500692b9:
          uVar8 = 0xffffffff;
        }
        else {
          iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4));
          local_134 = *(int *)(iVar9 + 0x54);
          FUN_5006b1a0((void *)(iVar12 + 4),&local_114,&local_134);
          if ((local_114 == *(int *)(iVar12 + 8)) ||
             (iVar6 = FUN_500672d0(*(void **)(local_114 + 0x10),iVar6), iVar6 == 0))
          goto LAB_500692b9;
          uVar8 = *(uint *)(iVar6 + 8);
        }
        pcVar13 = FUN_5011290c(uVar8,local_15c,10);
        uVar8 = 0xffffffff;
        do {
          pcVar4 = pcVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar4 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar4;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar13 = local_100;
        do {
          pcVar14 = pcVar13;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        pcVar13 = pcVar4 + -uVar8;
        pcVar4 = pcVar14 + -1;
        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar4 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar13 = local_15c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        iVar7 = iVar7 + (~uVar8 - 1);
        if (iVar7 < 0x5a) {
          iVar6 = 0x5a - iVar7;
          iVar7 = iVar7 + iVar6;
          do {
            iVar12 = -1;
            pcVar13 = local_100;
            do {
              pcVar4 = pcVar13;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar4 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar4;
            } while (cVar1 != '\0');
            iVar6 = iVar6 + -1;
            *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
          } while (iVar6 != 0);
        }
        iVar6 = *local_16c;
        iVar12 = *(int *)((int)this + 0xb4);
        if ((iVar6 != 0) && (iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4)), iVar9 != 0)) {
          iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4));
          local_12c = *(int *)(iVar9 + 0x54);
          FUN_5006b1a0((void *)(iVar12 + 4),&local_13c,&local_12c);
          if (local_13c != *(int *)(iVar12 + 8)) {
            FUN_500672d0(*(void **)(local_13c + 0x10),iVar6);
          }
        }
        pcVar13 = local_15c;
        uVar8 = 10;
        lVar15 = __ftol();
        pcVar13 = FUN_5011290c((uint)lVar15,pcVar13,uVar8);
        uVar8 = 0xffffffff;
        do {
          pcVar4 = pcVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar4 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar4;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar13 = local_100;
        do {
          pcVar14 = pcVar13;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        pcVar13 = pcVar4 + -uVar8;
        pcVar4 = pcVar14 + -1;
        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar4 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar13 = local_15c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        iVar7 = iVar7 + (~uVar8 - 1);
        if (iVar7 < 99) {
          iVar6 = 99 - iVar7;
          iVar7 = iVar7 + iVar6;
          do {
            iVar12 = -1;
            pcVar13 = local_100;
            do {
              pcVar4 = pcVar13;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar4 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar4;
            } while (cVar1 != '\0');
            iVar6 = iVar6 + -1;
            *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
          } while (iVar6 != 0);
        }
        iVar6 = *local_16c;
        iVar12 = *(int *)((int)this + 0xb4);
        if ((iVar6 != 0) && (iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4)), iVar9 != 0)) {
          iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4));
          local_124 = *(int *)(iVar9 + 0x54);
          FUN_5006b1a0((void *)(iVar12 + 4),&local_118,&local_124);
          if (local_118 != *(int *)(iVar12 + 8)) {
            iVar12 = *(int *)(local_118 + 0x10);
            piVar5 = (int *)FUN_500fc2d0((void *)(iVar12 + 8),&local_10c);
            local_164 = *piVar5;
            if (local_164 != *(int *)(iVar12 + 0xc)) {
              do {
                if (*(int *)(*(int *)(local_164 + 8) + 4) == iVar6) break;
                FUN_50049a30(&local_164,&local_108);
              } while (local_164 != *(int *)(iVar12 + 0xc));
            }
          }
        }
        pcVar13 = local_15c;
        uVar8 = 10;
        lVar15 = __ftol();
        pcVar13 = FUN_5011290c((uint)lVar15,pcVar13,uVar8);
        uVar8 = 0xffffffff;
        do {
          pcVar4 = pcVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar4 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar4;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar13 = local_100;
        do {
          pcVar14 = pcVar13;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        pcVar13 = pcVar4 + -uVar8;
        pcVar4 = pcVar14 + -1;
        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar4 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar13 = local_15c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        iVar7 = iVar7 + (~uVar8 - 1);
        if (iVar7 < 0x6c) {
          iVar6 = 0x6c - iVar7;
          iVar7 = iVar7 + iVar6;
          do {
            iVar12 = -1;
            pcVar13 = local_100;
            do {
              pcVar4 = pcVar13;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar4 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar4;
            } while (cVar1 != '\0');
            iVar6 = iVar6 + -1;
            *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
          } while (iVar6 != 0);
        }
        iVar6 = *local_16c;
        iVar12 = *(int *)((int)this + 0xb4);
        if ((iVar6 == 0) || (iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4)), iVar9 == 0)) {
LAB_500695f8:
          uVar8 = 0xffffffff;
        }
        else {
          iVar9 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4));
          local_110 = *(int *)(iVar9 + 0x54);
          FUN_5006b1a0((void *)(iVar12 + 4),&local_138,&local_110);
          if (local_138 == *(int *)(iVar12 + 8)) goto LAB_500695f8;
          iVar12 = *(int *)(local_138 + 0x10);
          piVar5 = *(int **)(iVar12 + 0xc);
          local_160 = *piVar5;
          if ((int *)local_160 == piVar5) goto LAB_500695f8;
          do {
            if (*(int *)(*(int *)(local_160 + 8) + 4) == iVar6) {
              if (*(int *)(local_160 + 8) == 0) goto LAB_500695f8;
              uVar8 = *(uint *)(*(int *)(local_160 + 8) + 0x24);
              goto LAB_50069600;
            }
            FUN_50049a30(&local_160,&local_104);
          } while (local_160 != *(int *)(iVar12 + 0xc));
          uVar8 = 0xffffffff;
        }
LAB_50069600:
        pcVar13 = FUN_5011290c(uVar8,local_15c,10);
        uVar8 = 0xffffffff;
        do {
          pcVar4 = pcVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar4 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar4;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar13 = local_100;
        do {
          pcVar14 = pcVar13;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        pcVar13 = pcVar4 + -uVar8;
        pcVar4 = pcVar14 + -1;
        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar4 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar4 = pcVar4 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar13 = local_15c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        iVar7 = iVar7 + (~uVar8 - 1);
        if (iVar7 < 0x78) {
          iVar7 = 0x78 - iVar7;
          do {
            iVar6 = -1;
            pcVar13 = local_100;
            do {
              pcVar4 = pcVar13;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              pcVar4 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar4;
            } while (cVar1 != '\0');
            iVar7 = iVar7 + -1;
            *(undefined2 *)(pcVar4 + -1) = DAT_501431b0;
          } while (iVar7 != 0);
        }
        iVar6 = *local_16c;
        iVar12 = *(int *)((int)this + 0xb4);
        if ((iVar6 != 0) && (iVar7 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4)), iVar7 != 0)) {
          iVar7 = FUN_5006b030(&DAT_5015c7b8,*(int *)(iVar6 + 4));
          local_130 = *(int *)(iVar7 + 0x54);
          FUN_5006b1a0((void *)(iVar12 + 4),&local_128,&local_130);
          if (local_128 != *(int *)(iVar12 + 8)) {
            puVar2 = *(undefined4 **)(*(int *)(local_128 + 0x10) + 0xc);
            puVar3 = (undefined4 *)*puVar2;
            while ((puVar3 != puVar2 && (*(int *)(puVar3[2] + 4) != iVar6))) {
              puVar3 = (undefined4 *)*puVar3;
            }
          }
        }
        pcVar13 = local_15c;
        uVar8 = 10;
        lVar15 = __ftol();
        pcVar13 = FUN_5011290c((uint)lVar15,pcVar13,uVar8);
        uVar8 = 0xffffffff;
        do {
          pcVar4 = pcVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar4 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar4;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar13 = local_100;
        do {
          pcVar14 = pcVar13;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        pcVar13 = pcVar4 + -uVar8;
        pcVar4 = pcVar14 + -1;
        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar4 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
      FUN_50068cd0((int)this,param_1,&DAT_50142fa8);
      local_16c = local_16c + 1;
      local_168 = local_168 + 1;
    } while (local_16c != *(int **)((int)this + 0xac));
  }
  FUN_50068cd0((int)this,param_1,(byte *)s_______end_pickup_list____50144720);
  return;
}

