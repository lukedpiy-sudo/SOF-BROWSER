// rea decompile_all
// name: FUN_500f75c0
// address: 0x500f75c0
// body: available
// range: 0x500f75c0-0x500f809f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f75c0(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  int local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_c [3];
  
  iVar6 = param_1[0x1d];
  local_80 = 0xc1000000;
  pfVar9 = (float *)(iVar6 + 0x34);
  local_7c = 0xc1000000;
  local_78 = 0xc1000000;
  local_5c = 0x41000000;
  local_58 = 0x41000000;
  local_54 = 0x41000000;
  *pfVar9 = 0.0;
  *(undefined4 *)(iVar6 + 0x38) = 0;
  *(undefined4 *)(iVar6 + 0x3c) = 0;
  iVar1 = param_1[0x1d];
  if (param_1[0xbe] == 0) {
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x4b0);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x4b4);
    *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x4b8);
    fVar2 = *(float *)(param_1[0x1d] + 0x4d0) - DAT_5015ccdc;
    fVar2 = fVar2 + fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1[0x1d] + 0x4cc) = 0;
      fVar2 = 0.0;
      *(undefined4 *)(param_1[0x1d] + 0x4c8) = 0;
    }
    *pfVar9 = fVar2 * *(float *)(param_1[0x1d] + 0x4cc) + *pfVar9;
    *(float *)(iVar6 + 0x3c) = fVar2 * *(float *)(param_1[0x1d] + 0x4c8) + *(float *)(iVar6 + 0x3c);
    fVar2 = (*(float *)(param_1[0x1d] + 0x4d4) - DAT_5015ccdc) * 3.3333333;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = fVar2 * *(float *)(param_1[0x1d] + 0x4d8) + *pfVar9;
    *pfVar9 = fVar2;
    *pfVar9 = (_DAT_5018b3f4 * (float)param_1[0x93] +
              _DAT_5018b3f8 * (float)param_1[0x94] + _DAT_5018b3fc * (float)param_1[0x95]) *
              *(float *)(DAT_5015c958 + 0x18) + fVar2;
    *(float *)(iVar6 + 0x3c) =
         (_DAT_5018b428 * (float)param_1[0x93] +
         _DAT_5018b42c * (float)param_1[0x94] + _DAT_5018b430 * (float)param_1[0x95]) *
         *(float *)(DAT_5015d2a0 + 0x18) + *(float *)(iVar6 + 0x3c);
    fVar2 = _DAT_5018b3e8 * *(float *)(DAT_5015c988 + 0x18) * _DAT_5018b424;
    if ((*(byte *)(param_1[0x1d] + 0x10) & 5) == 5) {
      fVar2 = fVar2 * 6.0;
    }
    *pfVar9 = fVar2 + *pfVar9;
    fVar2 = _DAT_5018b3e8 * *(float *)(DAT_5015c9b8 + 0x18) * _DAT_5018b424;
    if ((*(byte *)(param_1[0x1d] + 0x10) & 5) == 5) {
      fVar2 = fVar2 * 6.0;
    }
    if (((byte)DAT_5018b420 & 1) != 0) {
      fVar2 = -fVar2;
    }
    *(float *)(iVar6 + 0x3c) = fVar2 + *(float *)(iVar6 + 0x3c);
  }
  else {
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(param_1[0x1d] + 0x24) = 0x42200000;
    *(undefined4 *)(param_1[0x1d] + 0x1c) = 0xc1700000;
    *(undefined4 *)(param_1[0x1d] + 0x20) = *(undefined4 *)(param_1[0x1d] + 0x4ac);
  }
  iVar1 = param_1[0x1d];
  fVar2 = (*(float *)(iVar1 + 0x4d4) - DAT_5015ccdc) * 3.3333333;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = _DAT_5018b3e8 * *(float *)(DAT_5015d95c + 0x18) * _DAT_5018b424;
  if (6.0 < fVar3) {
    fVar3 = 6.0;
  }
  local_a8 = *(float *)(iVar1 + 0x4bc);
  local_a4 = *(float *)(iVar1 + 0x4c0);
  local_a0 = fVar3 + ((float)param_1[0xc1] - fVar2 * *(float *)(iVar1 + 0x4d8) * 0.4) +
             *(float *)(iVar1 + 0x4c4);
  if (-14.0 <= local_a8) {
    if (14.0 < local_a8) {
      local_a8 = 14.0;
    }
  }
  else {
    local_a8 = -14.0;
  }
  if (-14.0 <= local_a4) {
    if (14.0 < local_a4) {
      local_a4 = 14.0;
    }
  }
  else {
    local_a4 = -14.0;
  }
  if (-11.0 <= local_a0) {
    if (40.0 < local_a0) {
      local_a0 = 40.0;
    }
  }
  else {
    local_a0 = -11.0;
  }
  FUN_500fdd70((float *)(iVar1 + 0x1c),local_c,&local_50,&local_74);
  if ((((param_1[0xc2] != 0) && (param_1[0xcc] != 0)) &&
      ((float)param_1[0x93] * (float)param_1[0x93] +
       (float)param_1[0x94] * (float)param_1[0x94] + (float)param_1[0x95] * (float)param_1[0x95] <
       30.0)) && (0 < param_1[0xbb])) {
    local_90 = param_1[0xc2] * -0x1e;
    fVar2 = (float)local_90;
    local_98 = local_4c * fVar2 + local_a4;
    local_94 = (local_48 * fVar2 + local_a0) - local_6c * 5.0;
    local_68 = local_a8 + (float)param_1[1];
    local_64 = local_a4 + (float)param_1[2];
    local_60 = local_a0 + (float)param_1[3];
    local_8c = ((local_50 * fVar2 + local_a8) - local_74 * 5.0) + (float)param_1[1];
    local_88 = (local_98 - local_70 * 5.0) + (float)param_1[2];
    local_84 = local_94 + (float)param_1[3];
    (*DAT_5015cac0)(&local_68,&local_80,&local_5c,&local_8c,param_1,0x2010003,local_44);
    local_a8 = fStack_3c - (float)param_1[1];
    local_a4 = fStack_38 - (float)param_1[2];
    local_a0 = fStack_34 - (float)param_1[3];
    *(float *)(iVar6 + 0x3c) = *(float *)(iVar6 + 0x3c) - (float)param_1[0xc2] * fStack_40 * 8.0;
  }
  piVar7 = (int *)param_1[0xd0];
  piVar8 = param_1;
  if (param_1[0xc2] == 0) {
    if (piVar7 != (int *)0x0) {
      while (piVar5 = piVar7, piVar5 != param_1) {
        if ((piVar5[0x68] & 0x8000U) != 0) {
          if ((piVar8[0xd0] != 0) &&
             (piVar7 = (int *)param_1[0xd0], piVar8 = param_1, (int *)param_1[0xd0] != (int *)0x0))
          goto LAB_500f7bc7;
          break;
        }
        piVar7 = (int *)piVar5[0xd0];
        piVar8 = piVar5;
        if ((int *)piVar5[0xd0] == (int *)0x0) break;
      }
    }
  }
  else {
    while( true ) {
      piVar5 = piVar7;
      if ((piVar5 == (int *)0x0) || (piVar5 == param_1)) goto LAB_500f7ab7;
      if ((piVar5[0x68] & 0x8000U) != 0) break;
      piVar7 = (int *)piVar5[0xd0];
      piVar8 = piVar5;
    }
    iVar6 = piVar8[0xd0];
    if (iVar6 != 0) {
      *(float *)(iVar6 + 4) = fStack_3c;
      *(float *)(iVar6 + 8) = fStack_38;
      *(float *)(iVar6 + 0xc) = fStack_34;
      (*DAT_5015cb28)(iVar6);
      goto LAB_500f7c0c;
    }
LAB_500f7ab7:
    piVar5 = FUN_500c3690();
    piVar5[0x67] = 0;
    piVar5[0x56] = 0;
    piVar5[0x57] = 0x2030003;
    piVar5[0x46] = 0x82;
    piVar5[0x47] = -0x3ec00000;
    piVar5[0x48] = -0x3ec00000;
    piVar5[0x49] = -0x3e800000;
    piVar5[0x4a] = 0x41400000;
    piVar5[0x4b] = 0x41400000;
    piVar5[0x4c] = 0x41d00000;
    piVar5[8] = 0;
    (*DAT_5015cb28)(piVar5);
    piVar8 = (int *)param_1[0xd0];
    piVar7 = param_1;
    while ((piVar4 = piVar8, piVar4 != (int *)0x0 && (piVar4 != param_1))) {
      piVar7 = piVar4;
      piVar8 = (int *)piVar4[0xd0];
    }
    piVar7[0xd0] = (int)piVar5;
    piVar5[0xd0] = (int)param_1;
    piVar5[0x68] = piVar5[0x68] | 0x8000;
    piVar5[0x58] = (int)param_1;
  }
LAB_500f7c0c:
  iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (((iVar6 != 0) && (param_1[0x1d] != 0)) && (param_1[0xbe] != 2)) {
    piVar7 = (int *)param_1[0xd0];
    piVar8 = param_1;
    if ((*(byte *)(param_1[0x1d] + 0x10) & 1) == 0) {
      if (piVar7 != (int *)0x0) {
        while (piVar5 = piVar7, piVar5 != param_1) {
          if ((piVar5[0x68] & 0x100000U) != 0) {
            if ((piVar8[0xd0] != 0) &&
               (piVar7 = (int *)param_1[0xd0], piVar8 = param_1, (int *)param_1[0xd0] != (int *)0x0)
               ) goto LAB_500f7d9d;
            break;
          }
          piVar7 = (int *)piVar5[0xd0];
          piVar8 = piVar5;
          if ((int *)piVar5[0xd0] == (int *)0x0) break;
        }
      }
    }
    else {
      while( true ) {
        piVar5 = piVar7;
        if ((piVar5 == (int *)0x0) || (piVar5 == param_1)) goto LAB_500f7c74;
        if ((piVar5[0x68] & 0x100000U) != 0) break;
        piVar7 = (int *)piVar5[0xd0];
        piVar8 = piVar5;
      }
      iVar6 = piVar8[0xd0];
      if (iVar6 != 0) {
        FUN_500fdd70((float *)(param_1 + 4),&fStack_9c,(float *)0x0,(float *)0x0);
        *(int *)(iVar6 + 4) = param_1[1];
        *(int *)(iVar6 + 8) = param_1[2];
        *(int *)(iVar6 + 0xc) = param_1[3];
        *(float *)(iVar6 + 0xc) = (float)param_1[0x4c] + *(float *)(iVar6 + 0xc);
        *(float *)(iVar6 + 4) = fStack_9c * 8.0 + *(float *)(iVar6 + 4);
        *(float *)(iVar6 + 8) = local_98 * 8.0 + *(float *)(iVar6 + 8);
        *(float *)(iVar6 + 0xc) = local_94 * 8.0 + *(float *)(iVar6 + 0xc);
        (*DAT_5015cb28)(iVar6);
        goto LAB_500f7de2;
      }
LAB_500f7c74:
      piVar7 = FUN_500f70d0((int)param_1);
      FUN_500fdd70((float *)(param_1 + 4),&fStack_9c,(float *)0x0,(float *)0x0);
      piVar7[1] = param_1[1];
      piVar7[2] = param_1[2];
      piVar7[3] = param_1[3];
      piVar7[3] = (int)((float)param_1[0x4c] + (float)piVar7[3]);
      piVar7[1] = (int)(fStack_9c * 8.0 + (float)piVar7[1]);
      piVar7[2] = (int)(local_98 * 8.0 + (float)piVar7[2]);
      piVar7[3] = (int)(local_94 * 8.0 + (float)piVar7[3]);
      (*DAT_5015cb28)(piVar7);
    }
LAB_500f7de2:
    piVar8 = (int *)param_1[0xd0];
    piVar7 = param_1;
    while( true ) {
      piVar5 = piVar8;
      if ((piVar5 == (int *)0x0) || (piVar5 == param_1)) goto LAB_500f7e11;
      if ((piVar5[0x68] & 0x200000U) != 0) break;
      piVar8 = (int *)piVar5[0xd0];
      piVar7 = piVar5;
    }
    if (piVar7[0xd0] != 0) {
      if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
        FUN_500f71d0((float)param_1);
        goto LAB_500f7ed8;
      }
      piVar8 = (int *)param_1[0xd0];
      piVar7 = param_1;
      goto joined_r0x500f7f49;
    }
LAB_500f7e11:
    if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
      piVar5 = FUN_500c3690();
      piVar5[0x67] = 0;
      piVar5[0x56] = 0;
      piVar5[0x57] = 0x2030003;
      piVar5[0x46] = 0x82;
      piVar5[0x47] = -0x3ec00000;
      piVar5[0x48] = -0x3ec00000;
      piVar5[0x49] = -0x3f800000;
      piVar5[0x4a] = 0x41400000;
      piVar5[0x4b] = 0x41400000;
      piVar5[0x4c] = 0x40800000;
      piVar5[8] = 0;
      (*DAT_5015cb28)(piVar5);
      piVar8 = (int *)param_1[0xd0];
      piVar7 = param_1;
      while ((piVar4 = piVar8, piVar4 != (int *)0x0 && (piVar4 != param_1))) {
        piVar7 = piVar4;
        piVar8 = (int *)piVar4[0xd0];
      }
      piVar7[0xd0] = (int)piVar5;
      piVar5[0xd0] = (int)param_1;
      piVar5[0x68] = piVar5[0x68] | 0x200000;
      piVar5[0x58] = (int)param_1;
      FUN_500f71d0((float)param_1);
    }
  }
LAB_500f7ed8:
  if (param_1[0xbe] == 2) {
    *(undefined4 *)(param_1[0x1d] + 0x558) = 0;
    piVar8 = (int *)param_1[0xd0];
    piVar7 = param_1;
    while( true ) {
      piVar5 = piVar8;
      if ((piVar5 == (int *)0x0) || (piVar5 == param_1)) goto LAB_500f7fd4;
      if ((piVar5[0x68] & 0x8000U) != 0) break;
      piVar8 = (int *)piVar5[0xd0];
      piVar7 = piVar5;
    }
    piVar8 = (int *)piVar7[0xd0];
    if ((piVar7 == param_1) && (piVar8 == piVar7)) {
      param_1[0xd0] = 0;
    }
    else {
      piVar7[0xd0] = piVar8[0xd0];
    }
    FUN_500c3880(piVar8);
LAB_500f7fd4:
    piVar8 = (int *)param_1[0xd0];
    piVar7 = param_1;
    while( true ) {
      piVar5 = piVar8;
      if ((piVar5 == (int *)0x0) || (piVar5 == param_1)) goto LAB_500f8025;
      if ((piVar5[0x68] & 0x100000U) != 0) break;
      piVar8 = (int *)piVar5[0xd0];
      piVar7 = piVar5;
    }
    piVar8 = (int *)piVar7[0xd0];
    if ((piVar7 == param_1) && (piVar8 == piVar7)) {
      param_1[0xd0] = 0;
    }
    else {
      piVar7[0xd0] = piVar8[0xd0];
    }
    FUN_500c3860(piVar8);
LAB_500f8025:
    piVar8 = (int *)param_1[0xd0];
    piVar7 = param_1;
    while( true ) {
      piVar5 = piVar8;
      if ((piVar5 == (int *)0x0) || (piVar5 == param_1)) goto LAB_500f807b;
      if ((piVar5[0x68] & 0x200000U) != 0) break;
      piVar8 = (int *)piVar5[0xd0];
      piVar7 = piVar5;
    }
    piVar8 = (int *)piVar7[0xd0];
    if ((piVar7 == param_1) && (piVar8 == piVar7)) {
      param_1[0xd0] = 0;
    }
    else {
      piVar7[0xd0] = piVar8[0xd0];
    }
    FUN_500c3880(piVar8);
  }
LAB_500f807b:
  iVar6 = param_1[0x1d];
  *(float *)(iVar6 + 0x28) = local_a8;
  *(float *)(iVar6 + 0x2c) = local_a4;
  *(float *)(iVar6 + 0x30) = local_a0;
  return;
  while( true ) {
    if ((piVar5[0x68] & 0x8000U) != 0) {
      piVar7 = (int *)piVar8[0xd0];
      if ((piVar8 == param_1) && (piVar7 == piVar8)) {
        param_1[0xd0] = 0;
      }
      else {
        piVar8[0xd0] = piVar7[0xd0];
      }
      FUN_500c3880(piVar7);
      break;
    }
    piVar7 = (int *)piVar5[0xd0];
    piVar8 = piVar5;
    if ((int *)piVar5[0xd0] == (int *)0x0) break;
LAB_500f7bc7:
    piVar5 = piVar7;
    if (piVar5 == param_1) break;
  }
  goto LAB_500f7c0c;
  while( true ) {
    if ((piVar5[0x68] & 0x100000U) != 0) {
      piVar7 = (int *)piVar8[0xd0];
      if ((piVar8 == param_1) && (piVar7 == piVar8)) {
        param_1[0xd0] = 0;
      }
      else {
        piVar8[0xd0] = piVar7[0xd0];
      }
      FUN_500c3860(piVar7);
      break;
    }
    piVar7 = (int *)piVar5[0xd0];
    piVar8 = piVar5;
    if ((int *)piVar5[0xd0] == (int *)0x0) break;
LAB_500f7d9d:
    piVar5 = piVar7;
    if (piVar5 == param_1) break;
  }
  goto LAB_500f7de2;
joined_r0x500f7f49:
  piVar5 = piVar8;
  if ((piVar5 == (int *)0x0) || (piVar5 == param_1)) goto LAB_500f7ed8;
  if ((piVar5[0x68] & 0x200000U) != 0) {
    piVar8 = (int *)piVar7[0xd0];
    if ((piVar7 == param_1) && (piVar8 == piVar7)) {
      param_1[0xd0] = 0;
      FUN_500c3880(piVar8);
    }
    else {
      piVar7[0xd0] = piVar8[0xd0];
      FUN_500c3880(piVar8);
    }
    goto LAB_500f7ed8;
  }
  piVar8 = (int *)piVar5[0xd0];
  piVar7 = piVar5;
  goto joined_r0x500f7f49;
}

