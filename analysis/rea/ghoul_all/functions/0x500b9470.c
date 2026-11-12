// rea decompile_all
// name: FUN_500b9470
// address: 0x500b9470
// body: available
// range: 0x500b9470-0x500b9c54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_500b9470(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_88;
  float afStack_84 [4];
  float afStack_74 [15];
  char cStack_38;
  char cStack_37;
  int iStack_8;
  
  FUN_500b7650((int)param_1);
  if ((param_1[0x1e] != 0.0) && (*(short *)((int)param_1 + 0x29e) == 0)) {
    pfVar1 = param_1 + 0x93;
    if ((param_1[0x93] != 0.0) ||
       ((((param_1[0x94] != 0.0 || (param_1[0x95] != 0.0)) || ((int *)param_1[0xcc] == (int *)0x0))
        || (*(int *)param_1[0xcc] != 0)))) {
      FUN_500b9300((int)param_1);
    }
    fVar2 = param_1[0xcc];
    iVar6 = 3;
    pfVar3 = pfVar1;
    iVar7 = DAT_5015c96c;
    do {
      if (*pfVar3 <= *(float *)(iVar7 + 0x18)) {
        if (*pfVar3 < -*(float *)(iVar7 + 0x18)) {
          *pfVar3 = -*(float *)(iVar7 + 0x18);
          iVar7 = DAT_5015c96c;
        }
      }
      else {
        *pfVar3 = *(float *)(iVar7 + 0x18);
        iVar7 = DAT_5015c96c;
      }
      pfVar3 = pfVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (((param_1[0xa2] != 0.0) && (fVar2 == 0.0)) ||
       ((*(float *)(DAT_5015c968 + 0x18) != 0.0 ||
        ((*(float *)(DAT_5015c964 + 0x18) != 0.0 || (*(float *)(DAT_5015c960 + 0x18) < 0.0)))))) {
      fVar2 = *(float *)(DAT_5015c964 + 0x18);
      local_e0 = *(float *)(DAT_5015c960 + 0x18);
      *pfVar1 = *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * *(float *)(DAT_5015c968 + 0x18) *
                0.1 + *pfVar1;
      param_1[0x94] = *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * fVar2 * 0.1 + param_1[0x94];
      fVar2 = param_1[0x95] - *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * local_e0 * 0.1;
      param_1[0x95] = fVar2;
      if (param_1[0xe3] == 1.4013e-45) {
        param_1[0x95] = *(float *)(DAT_5015d29c + 0x18) * param_1[0xa4] * 0.1 + fVar2;
      }
    }
    if (((*pfVar1 != 0.0) || (param_1[0x94] != 0.0)) || (param_1[0x95] != 0.0)) {
      local_d0 = *pfVar1;
      local_cc = param_1[0x94];
      local_c8 = param_1[0x95];
      iVar7 = 0;
      local_108 = 0.1;
      param_1[0xcc] = 0.0;
      local_f8 = 0;
      while( true ) {
        iVar6 = 0;
        pfVar3 = param_1;
        do {
          iVar6 = iVar6 + 1;
          afStack_84[iVar6] = local_108 * pfVar3[0x93] + pfVar3[1];
          pfVar3 = pfVar3 + 1;
        } while (iVar6 < 3);
        (*DAT_5015cac0)(param_1 + 1,param_1 + 0x47,param_1 + 0x4a,afStack_84 + 1,param_1,
                        param_1[0x57],local_b8);
        uStack_f4 = 0x3f800000;
        fStack_e8 = param_1[0x47] + 1.0;
        uStack_f0 = 0x3f800000;
        uStack_ec = 0x3f800000;
        fStack_e4 = param_1[0x48] + 1.0;
        local_e0 = param_1[0x49] + 1.0;
        fStack_c4 = param_1[0x4a] - 1.0;
        fStack_c0 = param_1[0x4b] - 1.0;
        fStack_bc = param_1[0x4c] - 1.0;
        (*DAT_5015cac0)(&fStack_b0,&fStack_e8,&fStack_c4,&fStack_b0,param_1,param_1[0x57],&cStack_38
                       );
        if ((cStack_37 != '\0') || (cStack_38 != '\0')) {
          if ((iStack_8 == 0) || (-1 < *(char *)(iStack_8 + 0x118))) {
            if ((((0.0 < fStack_b4) && (fStack_b4 < 1.0)) && (0.7 < fStack_9c)) &&
               (*(int *)(iStack_8 + 0x158) == 3)) {
              param_1[0xcc] = fStack_88;
              param_1[0xcd] = *(float *)((int)fStack_88 + 0x7c);
            }
            *pfVar1 = 0.0;
            param_1[0x94] = 0.0;
            param_1[0x95] = 0.0;
            return;
          }
          if (fStack_88 == 0.0) {
            fStack_88 = *(float *)(iStack_8 + 0x160);
          }
        }
        iVar6 = iVar7;
        if (0.0 < fStack_b4) {
          param_1[1] = fStack_b0;
          param_1[2] = fStack_ac;
          param_1[3] = fStack_a8;
          local_d0 = *pfVar1;
          local_cc = param_1[0x94];
          local_c8 = param_1[0x95];
          iVar6 = 0;
        }
        if (fStack_b4 == 1.0) break;
        if (0.7 < fStack_9c) {
          if ((*(int *)((int)fStack_88 + 0x158) == 3) || (*(int *)((int)fStack_88 + 0x158) == 4)) {
            param_1[0xcc] = fStack_88;
            param_1[0xcd] = *(float *)((int)fStack_88 + 0x7c);
          }
          if (((param_1[0x1d] == 0.0) && (0 < (int)param_1[0xbb])) && (param_1[0x95] <= -100.0)) {
            if (param_1[0x95] <= -200.0) {
              if (param_1[0x95] <= -400.0) {
                uVar8 = 0xc;
              }
              else {
                uVar8 = 0xb;
              }
            }
            else {
              uVar8 = 10;
            }
            FUN_50083bb0((int)param_1,uVar8);
          }
        }
        uVar8 = FUN_500b77d0((int)param_1,(int)local_b8);
        if (((char)uVar8 == '\0') || (param_1[0x1e] == 0.0)) break;
        local_108 = local_108 - fStack_b4 * local_108;
        if (4 < iVar6) {
          *pfVar1 = DAT_5018bf0c;
          param_1[0x94] = DAT_5018bf10;
          param_1[0x95] = DAT_5018bf14;
          return;
        }
        iVar7 = iVar6 + 1;
        iVar5 = 0;
        afStack_74[iVar6 * 3] = fStack_a4;
        afStack_74[iVar6 * 3 + 1] = fStack_a0;
        afStack_74[iVar6 * 3 + 2] = fStack_9c;
        if (0 < iVar7) {
          pfVar3 = afStack_74;
          do {
            FUN_500b7a40(&local_d0,pfVar3,&fStack_104,param_1[0xa5]);
            if (param_1[0xa5] == -1.0) {
              fStack_104 = *pfVar1;
              fStack_100 = param_1[0x94];
              fStack_fc = param_1[0x95];
            }
            iVar6 = 0;
            pfVar4 = afStack_74 + 1;
            do {
              if ((iVar6 != iVar5) &&
                 (fVar2 = fStack_100 * *pfVar4 + fStack_fc * pfVar4[1] + fStack_104 * pfVar4[-1],
                 fVar2 < 0.0 != (fVar2 == 0.0))) break;
              iVar6 = iVar6 + 1;
              pfVar4 = pfVar4 + 3;
            } while (iVar6 < iVar7);
            if (iVar6 == iVar7) break;
            iVar5 = iVar5 + 1;
            pfVar3 = pfVar3 + 3;
          } while (iVar5 < iVar7);
        }
        if (iVar5 == iVar7) {
          if (iVar7 != 2) {
            *pfVar1 = DAT_5018bf0c;
            param_1[0x94] = DAT_5018bf10;
            param_1[0x95] = DAT_5018bf14;
            return;
          }
          FUN_500fe0f0(afStack_74,afStack_74 + 3,&fStack_dc);
          fVar2 = fStack_dc * *pfVar1 + fStack_d8 * param_1[0x94] + fStack_d4 * param_1[0x95];
          *pfVar1 = fStack_dc * fVar2;
          param_1[0x94] = fStack_d8 * fVar2;
          param_1[0x95] = fStack_d4 * fVar2;
        }
        else {
          *pfVar1 = fStack_104;
          param_1[0x94] = fStack_100;
          param_1[0x95] = fStack_fc;
        }
        local_f8 = local_f8 + 1;
        if (3 < local_f8) break;
      }
      FUN_500b9300((int)param_1);
    }
    fVar2 = param_1[0xcc];
    if (((param_1[0x96] != 0.0) || (param_1[0x97] != 0.0)) || (param_1[0x98] != 0.0)) {
      iVar7 = 3;
      pfVar3 = param_1 + 0x96;
      do {
        if ((-1.0 < *pfVar3) && (*pfVar3 < 1.0)) {
          *pfVar3 = 0.0;
        }
        pfVar3 = pfVar3 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      param_1[4] = param_1[0x96] * 0.1 + param_1[4];
      param_1[5] = param_1[0x97] * 0.1 + param_1[5];
      param_1[6] = param_1[0x98] * 0.1 + param_1[6];
      FUN_500b8cf0((int)param_1,(uint)(fVar2 != 0.0));
    }
    if (((*pfVar1 != 0.0) || (param_1[0x94] != 0.0)) || (param_1[0x95] != 0.0)) {
      FUN_500b8d70((int)param_1,(uint)(fVar2 != 0.0));
    }
    (*DAT_5015cb28)(param_1);
  }
  return;
}

