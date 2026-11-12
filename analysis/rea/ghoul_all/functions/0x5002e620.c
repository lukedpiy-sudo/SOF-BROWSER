// rea decompile_all
// name: FUN_5002e620
// address: 0x5002e620
// body: available
// range: 0x5002e620-0x5002ed69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5002e620(void *this,undefined4 *param_1,char param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  void *this_00;
  int *piVar9;
  float10 extraout_ST0;
  float10 fVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  float fStack_144;
  float fVar14;
  float fStack_134;
  float fStack_130;
  int *piStack_124;
  int iStack_120;
  float fStack_11c;
  float fStack_118;
  int *local_114;
  float fStack_110;
  short sStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [48];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b0;
  float afStack_a8 [16];
  undefined4 uStack_68;
  float afStack_60 [16];
  undefined4 uStack_20;
  
  piVar9 = (int *)param_1[0x114];
  if (piVar9 == (int *)0x0) {
    return;
  }
  fStack_144 = 8.784527e+09;
  local_114 = piVar9;
  FUN_500b2350(0x5015d9c0);
  fStack_144 = *(float *)((int)this + 0x1c4);
  puVar6 = param_1;
  iVar5 = (**(code **)(*(int *)this + 0xb4))();
  FUN_50012240(iVar5,(int)puVar6);
  if (param_4 != 0) {
    uStack_104 = 0;
    uStack_100 = 0x40040000;
    if (*(int *)((int)this + 0x1a8) == 0) {
      uStack_100 = 0x3ff00000;
    }
    puVar6 = (undefined4 *)FUN_500b2350(0x5015d9c0);
    fStack_fc = 0.0;
    fStack_f8 = 1.75;
    if (puVar6 != param_1) {
      fStack_f8 = 1.875;
    }
    fVar14 = DAT_5015ccdc - *(float *)((int)this + 0x180);
    iVar5 = *(int *)((int)this + 0x1c4);
    local_114 = DAT_5015d90c;
    iVar7 = (**(code **)(*(int *)this + 0xb4))(param_1);
    FUN_50012240(iVar7,iVar5);
    if ((float10)fVar14 <
        extraout_ST0 * (float10)(float)local_114 * (float10)(double)CONCAT44(fStack_f8,fStack_fc) *
        (float10)(double)CONCAT44(uStack_100,uStack_104)) {
      return;
    }
  }
  if ((int *)param_1[0x59] == (int *)0x0) {
    return;
  }
  piVar8 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
  sVar4 = (**(code **)(*piVar8 + 0x1c))(s_wbolt_hand_r_5012fedc);
  if (sVar4 == 0) {
    return;
  }
  this_00 = (void *)FUN_500a5820(&DAT_5015c79c,(int *)param_1[0x59]);
  fStack_118 = (float)FUN_500a4250(this_00,sVar4);
  if (fStack_118 == 0.0) {
    return;
  }
  uStack_104 = (**(code **)(**(int **)(*(int *)((int)fStack_118 + 0x24) + 0x24) + 0x1c))
                         (s_flash_50133d48);
  if ((short)uStack_104 == 0) {
    return;
  }
  iVar5 = (**(code **)(*piVar9 + 0x164))();
  pfVar13 = (float *)(param_1 + 1);
  *(int *)((int)this + 0x1c4) = *(int *)((int)this + 0x1c4) + -1;
  fStack_118 = *pfVar13;
  local_114 = (int *)param_1[2];
  fStack_110 = (float)param_1[3] + 20.0;
  fStack_110 = (float)(**(code **)(*(int *)this + 0xb4))(param_1);
  if ((param_2 == '\0') && (param_3 == 0)) {
LAB_5002ea13:
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x78) != 0)) {
      fVar14 = *(float *)(iVar5 + 4);
      fVar1 = *pfVar13;
      fVar2 = *(float *)(iVar5 + 8);
      fVar3 = (float)param_1[2];
      FUN_500fe050((float *)&stack0xfffffec8);
      FUN_500fdd70((float *)(param_1 + 4),&fStack_fc,(float *)0x0,(float *)0x0);
      fStack_f4 = 0.0;
      FUN_500fe050(&fStack_fc);
      if ((DAT_5015d8d5 == '\0') &&
         ((((fVar14 = fStack_f8 * (fVar2 - fVar3) + fStack_f4 * 0.0 + fStack_fc * (fVar14 - fVar1),
            fVar14 < 0.717 && (fStack_110 != 2.52234e-44)) || (fVar14 < 0.0)) &&
          ((*(byte *)(piStack_124 + 0x75) & 1) == 0)))) {
        *(int *)((int)this + 0x1c4) = *(int *)((int)this + 0x1c4) + 1;
        return;
      }
    }
  }
  else if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x78) != 0) {
      fVar14 = *(float *)(iVar5 + 4);
      fStack_134 = *(float *)(iVar5 + 8);
      fStack_130 = *(float *)(iVar5 + 0xc);
      if ((param_3 != 0) && (piVar9 = *(int **)(iVar5 + 0x164), piVar9 != (int *)0x0)) {
        uStack_68 = 0;
        uStack_20 = 0;
        uStack_b0 = 0;
        switch(param_3) {
        case 1:
        case 9:
          piVar9 = (int *)(**(code **)(*piVar9 + 0x88))();
          sVar4 = (**(code **)(*piVar9 + 0x1c))();
          break;
        default:
          sVar4 = sStack_108;
          break;
        case 3:
          piVar9 = (int *)(**(code **)(*piVar9 + 0x88))();
          sVar4 = (**(code **)(*piVar9 + 0x1c))();
          break;
        case 4:
          piVar9 = (int *)(**(code **)(*piVar9 + 0x88))();
          sVar4 = (**(code **)(*piVar9 + 0x1c))();
          break;
        case 5:
          piVar9 = (int *)(**(code **)(*piVar9 + 0x88))();
          sVar4 = (**(code **)(*piVar9 + 0x1c))();
          break;
        case 6:
          piVar9 = (int *)(**(code **)(*piVar9 + 0x88))();
          sVar4 = (**(code **)(*piVar9 + 0x1c))();
          break;
        case 7:
          piVar9 = (int *)(**(code **)(*piVar9 + 0x88))();
          sVar4 = (**(code **)(*piVar9 + 0x1c))();
          break;
        case 8:
          piVar9 = (int *)(**(code **)(*piVar9 + 0x88))();
          sVar4 = (**(code **)(*piVar9 + 0x1c))();
          (**(code **)(*(int *)this + 0x160))();
        }
        if (sVar4 != 0) {
          FUN_500c3da0((undefined4 *)(iVar5 + 4),(float *)(iVar5 + 0x10),afStack_a8);
          (**(code **)(**(int **)(iVar5 + 0x164) + 200))();
          FUN_500ed0d0(auStack_f0,afStack_60,afStack_a8);
          fStack_134 = fStack_bc;
          fStack_130 = fStack_b8;
          fVar14 = fStack_c0;
        }
      }
      fStack_144 = fVar14 - fStack_11c;
      (*DAT_5015ca24)(s_attacking__targetpoint___2_3f__2_50133ce4,(double)fVar14,(double)fStack_134,
                      (double)fStack_130);
      if (((param_2 != '\0') && (*(int **)(iVar5 + 0x450) != (int *)0x0)) &&
         (piVar9 = (int *)(**(code **)(**(int **)(iVar5 + 0x450) + 0x18c))(), piVar9 != (int *)0x0))
      {
        if (param_3 == 9) {
          (**(code **)(*piVar9 + 0x164))();
        }
        else {
          (**(code **)(*piVar9 + 0x164))();
        }
      }
      goto LAB_5002eb23;
    }
    goto LAB_5002ea13;
  }
  if ((*(uint *)(*(int *)((int)this + 4) + 0x48) & 0x40000) == 0) {
    (**(code **)(*piStack_124 + 0x1a0))();
  }
  else {
    FUN_500c3bb0(pfVar13,(float *)(param_1 + 4),*(float **)(iStack_120 + 0x1c),(undefined4 *)0x0,
                 s_flash_50133d48,&fStack_11c,&fStack_144);
  }
LAB_5002eb23:
  *(undefined4 *)((int)this + 0x1d0) = 1;
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x78) != 0)) {
    if ((*(byte *)(piStack_124 + 0x75) & 1) == 0) {
      if ((((fStack_110 == 2.24208e-44) || (fStack_110 == 2.38221e-44)) ||
          (fStack_110 == 1.96182e-44)) ||
         ((fStack_110 == 2.52234e-44 || (fStack_110 == 1.26117e-44)))) {
        iVar7 = FUN_500f7190(iVar5);
        if (iVar7 == 0) {
          fStack_144 = *(float *)(iVar5 + 4);
          fStack_f8 = *(float *)(iVar5 + 8);
        }
        else {
          fStack_144 = *(float *)(iVar7 + 4);
          fStack_f8 = *(float *)(iVar7 + 8);
        }
        fStack_144 = fStack_144 - fStack_11c;
        FUN_500fe050(&fStack_144);
      }
      else if (fStack_110 == 1.54143e-44) {
        fStack_144 = fStack_144 * 0.6;
        fVar14 = *(float *)(iVar5 + 4);
        FUN_500fe050((float *)&stack0xfffffec8);
        fStack_144 = (fVar14 - fStack_11c) * 0.4 + fStack_144;
      }
    }
    if (*(int *)(iVar5 + 0x78) != 0) {
      FUN_500f8fe0();
    }
  }
  if ((*(byte *)(piStack_124 + 0x75) & 1) != 0) {
    fVar10 = (float10)(*DAT_5015cb20)(0xbdcccccd);
    fStack_144 = (float)(fVar10 + (float10)fStack_144);
    (*DAT_5015cb20)(0xbdcccccd);
    (*DAT_5015cb20)(0xbdcccccd);
    FUN_500fe050(&fStack_144);
  }
  pfVar13 = &fStack_144;
  puVar6 = *(undefined4 **)(iStack_120 + 0x1c);
  pfVar12 = &fStack_11c;
  puVar11 = param_1;
  iVar7 = (**(code **)(*(int *)this + 0xb4))();
  FUN_500659c0(&DAT_50159b18,iVar7,(int)param_1,puVar11,pfVar12,pfVar13,puVar6);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x74) != 0)) {
    FUN_500bd3f0(iVar5);
  }
  *(float *)((int)this + 0x180) = DAT_5015ccdc;
  return;
}

