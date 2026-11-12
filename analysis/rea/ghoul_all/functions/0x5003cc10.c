// rea decompile_all
// name: FUN_5003cc10
// address: 0x5003cc10
// body: available
// range: 0x5003cc10-0x5003d116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003cc10(void *this,int *param_1,float param_2)

{
  float *pfVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  float10 fVar7;
  float10 fVar8;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [4];
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_28;
  undefined4 auStack_20 [3];
  undefined4 auStack_14 [3];
  undefined4 uStack_8;
  int iStack_4;
  
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  if ((*(int *)((int)param_2 + 0x330) != 0) || (*(int *)((int)param_2 + 0x19c) == 6)) {
    fVar7 = (float10)*(float *)((int)param_2 + 0x14) * (float10)0.017453292519943295;
    local_74 = *(float *)((int)param_2 + 4);
    pfVar1 = (float *)((int)param_2 + 4);
    fVar8 = (float10)fcos(fVar7);
    local_70 = *(float *)((int)param_2 + 8);
    local_78 = *(float *)((int)param_2 + 0xc);
    fVar7 = (float10)fsin(fVar7);
    local_9c = (float)((float10)0.04 * fVar8 * (float10)25.0);
    local_98 = (float)(fVar7 * (float10)25.0) * 0.04;
    local_80 = (float)((float10)local_74 + fVar8 * (float10)25.0);
    local_7c = local_70 + (float)(fVar7 * (float10)25.0);
    local_6c = local_78;
    (*DAT_5015cac0)(&local_74,(int)param_2 + 0x11c,(int)param_2 + 0x128,&local_80,param_2,0x2020003,
                    local_58);
    fVar7 = (float10)(**(code **)(*param_1 + 300))();
    local_6c = (float)(fVar7 + (float10)local_6c);
    fVar7 = (float10)(**(code **)(*param_1 + 300))();
    local_78 = (float)(fVar7 + (float10)local_78);
    if (fStack_54 == 1.0) {
      FUN_500fdd70((float *)((int)param_2 + 0x10),&fStack_68,(float *)0x0,(float *)0x0);
      fStack_68 = fStack_68 * -1.0;
      fStack_64 = fStack_64 * -1.0;
      fStack_60 = fStack_60 * -1.0;
      FUN_5003ca10(this,&fStack_68,param_2);
      return;
    }
    if (iStack_28 != *(int *)((int)this + 0x60)) {
      if (iStack_28 != 0) {
        if (*(int *)(iStack_28 + 0x450) != 0) {
          fVar7 = (float10)(*DAT_5015cb20)(0,0x40000000);
          fStack_5c = (float)((float10)1.0 - fVar7);
          FUN_500fdd70((float *)(iStack_28 + 0x10),&fStack_8c,(float *)0x0,(float *)0x0);
          piVar2 = *(int **)(iStack_28 + 0x450);
          fStack_90 = (float)(**(code **)(**(int **)((int)param_2 + 0x450) + 0x80))();
          iVar6 = (**(code **)(*piVar2 + 0x80))();
          fStack_90 = (float)(iVar6 - (int)fStack_90);
          fVar7 = (float10)(*DAT_5015cb20)(0xc1a00000,0);
          if (fVar7 < (float10)fStack_90 == (fVar7 == (float10)fStack_90)) {
            return;
          }
          fVar4 = fStack_84 * 0.0 + fStack_8c * local_9c + fStack_88 * local_98;
          if (fVar4 < fStack_5c == (fVar4 == fStack_5c)) {
            return;
          }
          local_9c = *pfVar1 - *(float *)(iStack_28 + 4);
          local_98 = *(float *)((int)param_2 + 8) - *(float *)(iStack_28 + 8);
          fStack_94 = *(float *)((int)param_2 + 0xc) - *(float *)(iStack_28 + 0xc);
          fVar7 = (float10)(*DAT_5015cb20)(0xc1700000,0x41700000);
          local_9c = (float)(fVar7 + (float10)local_9c);
          fVar7 = (float10)(*DAT_5015cb20)(0xc1700000,0x41700000);
          local_98 = (float)(fVar7 + (float10)local_98);
          if (((local_9c == DAT_5018bf0c) && (local_98 == DAT_5018bf10)) &&
             (fStack_94 == DAT_5018bf14)) {
            return;
          }
          FUN_500fe050(&local_9c);
          FUN_5003ca10(this,&local_9c,param_2);
          return;
        }
        pcVar3 = *(code **)(iStack_28 + 0x2c8);
        if ((((pcVar3 == (code *)&LAB_50092b90) || (pcVar3 == FUN_50090c30)) ||
            ((pcVar3 == FUN_50092a80 ||
             ((pcVar3 == (code *)&LAB_50093ff0 || (pcVar3 == (code *)&LAB_500c1430)))))) ||
           ((pcVar3 == (code *)&LAB_500c0320 ||
            (iVar6 = _strncmp(*(char **)(iStack_28 + 0x1b4),s_func_door_501420e8,9), iVar6 == 0))))
        {
          iVar6 = iStack_28;
          bVar5 = FUN_50038d50(iStack_28);
          if (((CONCAT31(extraout_var,bVar5) != 0) && (*(code **)(iVar6 + 0x2c8) != (code *)0x0)) &&
             (((*(code **)(iVar6 + 0x2c8) != FUN_50092a80 ||
               ((*(int *)(iVar6 + 0x424) == 1 && ((*(byte *)(iVar6 + 0x1b8) & 8) == 0)))) &&
              (*(float *)(iVar6 + 0x2e8) + 5.0 < DAT_5015ccdc)))) {
            fStack_8c = -fStack_44;
            fStack_88 = -fStack_40;
            fStack_84 = -fStack_3c;
            FUN_50003c80(pfVar1,auStack_20);
            FUN_50003c80(&fStack_8c,auStack_14);
            uStack_8 = 2;
            iStack_4 = iStack_28;
            FUN_50003c80(auStack_20,(undefined4 *)((int)this + 0x38));
            *(undefined1 *)((int)this + 0x54) = 1;
            *(float *)((int)this + 0x5c) = DAT_5015ccdc;
            FUN_50003c80(auStack_14,(undefined4 *)((int)this + 0x44));
            *(int *)((int)this + 0x50) = iStack_4;
            *(undefined4 *)((int)this + 0x58) = 3;
            return;
          }
          if ((*(char *)((int)this + 0x54) != '\0') &&
             (DAT_5015ccdc - *(float *)((int)this + 0x5c) < 1.0)) {
            return;
          }
          fStack_8c = fStack_44 * 70.0;
          fStack_88 = fStack_40 * 70.0;
          fStack_84 = fStack_3c * 70.0;
          FUN_5003d120(pfVar1,&fStack_8c,&local_9c);
          FUN_5003c9e0(this,&local_9c);
          *(undefined4 *)((int)this + 0x58) = 0;
          return;
        }
      }
      FUN_5003ca10(this,&fStack_44,param_2);
    }
  }
  return;
}

