// rea decompile_all
// name: FUN_2001d4f0
// address: 0x2001d4f0
// body: available
// range: 0x2001d4f0-0x2001e212 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001d4f0(int param_1,int *param_2,char *param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  undefined2 *puVar14;
  uint local_4;
  
  piVar3 = param_2;
  local_4 = 0;
  if (*param_2 == 0) {
    Com_Error(0,s_Unset_entity_number_20121394);
  }
  if (0x3ff < *param_2) {
    Com_Error(0,s_Entity_number_>__MAX_EDICTS_20121378);
  }
  uVar10 = 0;
  if (0xff < *param_2) {
    uVar10 = 0x1000000;
  }
  pfVar1 = (float *)(param_2 + 1);
  param_2 = (int *)0;
  if (*pfVar1 != *(float *)(param_1 + 4)) {
    uVar10 = uVar10 | 1;
    param_2 = (int *)uVar10;
  }
  if ((float)piVar3[2] != *(float *)(param_1 + 8)) {
    uVar10 = uVar10 | 2;
    param_2 = (int *)uVar10;
  }
  if ((float)piVar3[3] != *(float *)(param_1 + 0xc)) {
    uVar10 = uVar10 | 0x20;
    param_2 = (int *)uVar10;
  }
  if ((float)piVar3[4] != *(float *)(param_1 + 0x10)) {
    uVar10 = uVar10 | 0x10;
    param_2 = (int *)uVar10;
  }
  if ((float)piVar3[5] != *(float *)(param_1 + 0x14)) {
    uVar10 = uVar10 | 4;
    param_2 = (int *)uVar10;
  }
  if ((float)piVar3[6] != *(float *)(param_1 + 0x18)) {
    uVar10 = uVar10 | 8;
    param_2 = (int *)uVar10;
  }
  uVar11 = piVar3[0xb];
  if (uVar11 != *(uint *)(param_1 + 0x2c)) {
    if (uVar11 < 0x100) {
      uVar10 = uVar10 | 0x80000;
      param_2 = (int *)uVar10;
    }
    else if (uVar11 < 0x10000) {
      uVar10 = uVar10 | 0x2000000;
      param_2 = (int *)uVar10;
    }
    else {
      uVar10 = uVar10 | 0x2080000;
      param_2 = (int *)uVar10;
    }
  }
  if (piVar3[10] != *(int *)(param_1 + 0x28)) {
    if (piVar3[10] < 0x100) {
      uVar10 = uVar10 | 0x20000;
      param_2 = (int *)uVar10;
    }
    else {
      uVar10 = uVar10 | 0x1000;
      param_2 = (int *)uVar10;
    }
  }
  iVar12 = piVar3[0xc];
  if (iVar12 != *(int *)(param_1 + 0x30)) {
    if (iVar12 < 0x100) {
      uVar10 = uVar10 | 0x10000;
      param_2 = (int *)uVar10;
    }
    else if (iVar12 < 0x8000) {
      uVar10 = uVar10 | 0x4000;
      param_2 = (int *)uVar10;
    }
    else {
      uVar10 = uVar10 | 0x14000;
      param_2 = (int *)uVar10;
    }
  }
  iVar12 = piVar3[0xd];
  if (iVar12 != *(int *)(param_1 + 0x34)) {
    if (iVar12 < 0x100) {
      uVar10 = uVar10 | 0x400;
      param_2 = (int *)uVar10;
    }
    else if (iVar12 < 0x8000) {
      uVar10 = uVar10 | 0x100;
      param_2 = (int *)uVar10;
    }
    else {
      uVar10 = uVar10 | 0x500;
      param_2 = (int *)uVar10;
    }
  }
  if (piVar3[0xe] != *(int *)(param_1 + 0x38)) {
    uVar10 = uVar10 | 0x40000;
    param_2 = (int *)uVar10;
  }
  if (piVar3[0x11] != 0) {
    uVar10 = uVar10 | 0x40;
    param_2 = (int *)uVar10;
  }
  if (piVar3[9] != *(int *)(param_1 + 0x24)) {
    uVar10 = uVar10 | 0x200;
    param_2 = (int *)uVar10;
  }
  if ((float)piVar3[7] != *(float *)(param_1 + 0x1c)) {
    uVar10 = uVar10 | 0x4000000;
    param_2 = (int *)uVar10;
  }
  if (piVar3[8] != *(int *)(param_1 + 0x20)) {
    uVar10 = uVar10 | 0x100000;
    param_2 = (int *)uVar10;
  }
  uVar11 = uVar10;
  if ((piVar3[0xf] != *(int *)(param_1 + 0x3c)) &&
     (uVar11 = uVar10 | 0x200000, param_2 = (int *)uVar11, 0xff < piVar3[0xf])) {
    uVar11 = uVar10 | 0x600000;
    param_2 = (int *)uVar11;
  }
  piVar9 = piVar3 + 0x17;
  iVar12 = 0;
  piVar6 = piVar9;
  do {
    if ((short)*piVar6 != 0) goto LAB_2001d71f;
    iVar12 = iVar12 + 1;
    piVar6 = (int *)((int)piVar6 + 6);
  } while (iVar12 < 4);
  iVar12 = 0;
  psVar13 = (short *)(param_1 + 0x5c);
  do {
    if (*psVar13 != 0) goto LAB_2001d71f;
    iVar12 = iVar12 + 1;
    psVar13 = psVar13 + 3;
  } while (iVar12 < 4);
LAB_2001d7a5:
  if ((uVar11 != 0) || (param_4 != 0)) {
    FUN_2001d210(param_3,uVar11);
    iVar12 = *piVar3;
    uVar4 = (undefined1)iVar12;
    if ((uVar11 & 0x1000000) == 0) {
      puVar7 = (undefined1 *)FUN_2001e740(param_3,1);
      *puVar7 = uVar4;
    }
    else {
      puVar7 = (undefined1 *)FUN_2001e740(param_3,2);
      *puVar7 = uVar4;
      puVar7[1] = (char)((uint)iVar12 >> 8);
    }
    if (((uint)param_2 & 0x100000) != 0) {
      iVar12 = piVar3[8];
      puVar7 = (undefined1 *)FUN_2001e740(param_3,1);
      *puVar7 = (char)iVar12;
    }
    if (((uint)param_2 & 0x200) != 0) {
      iVar12 = piVar3[9];
      puVar7 = (undefined1 *)FUN_2001e740(param_3,1);
      *puVar7 = (char)iVar12;
    }
    if (((uint)param_2 & 0x20000) != 0) {
      iVar12 = piVar3[10];
      puVar7 = (undefined1 *)FUN_2001e740(param_3,1);
      *puVar7 = (char)iVar12;
    }
    if (((uint)param_2 & 0x1000) != 0) {
      iVar12 = piVar3[10];
      puVar7 = (undefined1 *)FUN_2001e740(param_3,2);
      *puVar7 = (char)iVar12;
      puVar7[1] = (char)((uint)iVar12 >> 8);
    }
    if ((((uint)param_2 & 0x80000) == 0) || (((uint)param_2 & 0x2000000) == 0)) {
      if (((uint)param_2 & 0x80000) == 0) {
        if (((uint)param_2 & 0x2000000) != 0) {
          iVar12 = piVar3[0xb];
          puVar7 = (undefined1 *)FUN_2001e740(param_3,2);
          *puVar7 = (char)iVar12;
          puVar7[1] = (char)((uint)iVar12 >> 8);
        }
      }
      else {
        iVar12 = piVar3[0xb];
        puVar7 = (undefined1 *)FUN_2001e740(param_3,1);
        *puVar7 = (char)iVar12;
      }
    }
    else {
      iVar12 = piVar3[0xb];
      puVar7 = (undefined1 *)FUN_2001e740(param_3,4);
      *puVar7 = (char)iVar12;
      puVar7[1] = (char)((uint)iVar12 >> 8);
      puVar7[2] = (char)((uint)iVar12 >> 0x10);
      puVar7[3] = (char)((uint)iVar12 >> 0x18);
    }
    if (((uint)param_2 & 0x14000) == 0x14000) {
      iVar12 = piVar3[0xc];
      puVar7 = (undefined1 *)FUN_2001e740(param_3,4);
      *puVar7 = (char)iVar12;
      puVar7[1] = (char)((uint)iVar12 >> 8);
      puVar7[2] = (char)((uint)iVar12 >> 0x10);
      puVar7[3] = (char)((uint)iVar12 >> 0x18);
    }
    else if (((uint)param_2 & 0x10000) == 0) {
      if (((uint)param_2 & 0x4000) != 0) {
        iVar12 = piVar3[0xc];
        puVar7 = (undefined1 *)FUN_2001e740(param_3,2);
        *puVar7 = (char)iVar12;
        puVar7[1] = (char)((uint)iVar12 >> 8);
      }
    }
    else {
      iVar12 = piVar3[0xc];
      puVar7 = (undefined1 *)FUN_2001e740(param_3,1);
      *puVar7 = (char)iVar12;
    }
    if (((uint)param_2 & 0x500) == 0x500) {
      iVar12 = piVar3[0xd];
      puVar7 = (undefined1 *)FUN_2001e740(param_3,4);
      *puVar7 = (char)iVar12;
      puVar7[1] = (char)((uint)iVar12 >> 8);
      puVar7[2] = (char)((uint)iVar12 >> 0x10);
      puVar7[3] = (char)((uint)iVar12 >> 0x18);
    }
    else if (((uint)param_2 & 0x400) == 0) {
      if (((uint)param_2 & 0x100) != 0) {
        iVar12 = piVar3[0xd];
        puVar7 = (undefined1 *)FUN_2001e740(param_3,2);
        *puVar7 = (char)iVar12;
        puVar7[1] = (char)((uint)iVar12 >> 8);
      }
    }
    else {
      iVar12 = piVar3[0xd];
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar2 = *(int *)(param_3 + 0xc);
      *(int *)(param_3 + 0xc) = iVar2 + 1;
      *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
    }
    if (((uint)param_2 & 1) != 0) {
      uVar5 = __ftol();
      puVar7 = (undefined1 *)FUN_2001e740(param_3,2);
      *puVar7 = (char)uVar5;
      puVar7[1] = (char)((ushort)uVar5 >> 8);
    }
    if (((uint)param_2 & 2) != 0) {
      uVar5 = __ftol();
      puVar7 = (undefined1 *)FUN_2001e740(param_3,2);
      *puVar7 = (char)uVar5;
      puVar7[1] = (char)((ushort)uVar5 >> 8);
    }
    if (((uint)param_2 & 0x20) != 0) {
      uVar5 = __ftol();
      puVar7 = (undefined1 *)FUN_2001e740(param_3,2);
      *puVar7 = (char)uVar5;
      puVar7[1] = (char)((ushort)uVar5 >> 8);
    }
    if (((uint)param_2 & 0x10) != 0) {
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar12 = *(int *)(param_3 + 0xc);
      iVar2 = *(int *)(param_3 + 4);
      *(int *)(param_3 + 0xc) = iVar12 + 1;
      uVar4 = __ftol();
      *(undefined1 *)(iVar2 + iVar12) = uVar4;
    }
    if (((uint)param_2 & 4) != 0) {
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar12 = *(int *)(param_3 + 0xc);
      iVar2 = *(int *)(param_3 + 4);
      *(int *)(param_3 + 0xc) = iVar12 + 1;
      uVar4 = __ftol();
      *(undefined1 *)(iVar2 + iVar12) = uVar4;
    }
    if (((uint)param_2 & 0x4000000) != 0) {
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar12 = *(int *)(param_3 + 0xc);
      iVar2 = *(int *)(param_3 + 4);
      *(int *)(param_3 + 0xc) = iVar12 + 1;
      uVar4 = __ftol();
      *(undefined1 *)(iVar2 + iVar12) = uVar4;
    }
    if (((uint)param_2 & 8) != 0) {
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar12 = *(int *)(param_3 + 0xc);
      iVar2 = *(int *)(param_3 + 4);
      *(int *)(param_3 + 0xc) = iVar12 + 1;
      uVar4 = __ftol();
      *(undefined1 *)(iVar2 + iVar12) = uVar4;
    }
    if (((uint)param_2 & 0x200000) != 0) {
      iVar12 = piVar3[0xf];
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar2 = *(int *)(param_3 + 0xc);
      *(int *)(param_3 + 0xc) = iVar2 + 1;
      *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
      iVar12 = piVar3[0x10];
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar2 = *(int *)(param_3 + 0xc);
      *(int *)(param_3 + 0xc) = iVar2 + 1;
      *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
    }
    if (((uint)param_2 & 0x40) != 0) {
      iVar12 = piVar3[0x11];
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar2 = *(int *)(param_3 + 0xc);
      *(int *)(param_3 + 0xc) = iVar2 + 1;
      *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
      iVar12 = piVar3[0x14];
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 1) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      iVar2 = *(int *)(param_3 + 0xc);
      *(int *)(param_3 + 0xc) = iVar2 + 1;
      *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
      if ((char)piVar3[0x11] < '\0') {
        iVar12 = piVar3[0x12];
        if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
          if (*param_3 == '\0') {
            Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
          }
          if (*(int *)(param_3 + 8) < 1) {
            Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
          }
          Com_Printf(s_SZ_GetSpace__overflow_20121308);
          param_3[0xc] = '\0';
          param_3[0xd] = '\0';
          param_3[0xe] = '\0';
          param_3[0xf] = '\0';
          param_3[1] = '\x01';
        }
        iVar2 = *(int *)(param_3 + 0xc);
        *(int *)(param_3 + 0xc) = iVar2 + 1;
        *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
        iVar12 = piVar3[0x15];
        if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
          if (*param_3 == '\0') {
            Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
          }
          if (*(int *)(param_3 + 8) < 1) {
            Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
          }
          Com_Printf(s_SZ_GetSpace__overflow_20121308);
          param_3[0xc] = '\0';
          param_3[0xd] = '\0';
          param_3[0xe] = '\0';
          param_3[0xf] = '\0';
          param_3[1] = '\x01';
        }
        iVar2 = *(int *)(param_3 + 0xc);
        *(int *)(param_3 + 0xc) = iVar2 + 1;
        *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
        if ((char)piVar3[0x12] < '\0') {
          iVar12 = piVar3[0x13];
          if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
            if (*param_3 == '\0') {
              Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
            }
            if (*(int *)(param_3 + 8) < 1) {
              Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
            }
            Com_Printf(s_SZ_GetSpace__overflow_20121308);
            param_3[0xc] = '\0';
            param_3[0xd] = '\0';
            param_3[0xe] = '\0';
            param_3[0xf] = '\0';
            param_3[1] = '\x01';
          }
          iVar2 = *(int *)(param_3 + 0xc);
          *(int *)(param_3 + 0xc) = iVar2 + 1;
          *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
          iVar12 = piVar3[0x16];
          if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 1) {
            if (*param_3 == '\0') {
              Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
            }
            if (*(int *)(param_3 + 8) < 1) {
              Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,1);
            }
            Com_Printf(s_SZ_GetSpace__overflow_20121308);
            param_3[0xc] = '\0';
            param_3[0xd] = '\0';
            param_3[0xe] = '\0';
            param_3[0xf] = '\0';
            param_3[1] = '\x01';
          }
          iVar2 = *(int *)(param_3 + 0xc);
          *(int *)(param_3 + 0xc) = iVar2 + 1;
          *(char *)(*(int *)(param_3 + 4) + iVar2) = (char)iVar12;
        }
      }
    }
    if (((uint)param_2 & 0x40000) != 0) {
      iVar12 = piVar3[0xe];
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 4) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 4) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,4);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      puVar7 = (undefined1 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc));
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 4;
      *puVar7 = (char)iVar12;
      puVar7[1] = (char)((uint)iVar12 >> 8);
      puVar7[2] = (char)((uint)iVar12 >> 0x10);
      puVar7[3] = (char)((uint)iVar12 >> 0x18);
    }
    if (((uint)param_2 & 0x2000) != 0) {
      if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 2) {
        if (*param_3 == '\0') {
          Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
        }
        if (*(int *)(param_3 + 8) < 2) {
          Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,2);
        }
        Com_Printf(s_SZ_GetSpace__overflow_20121308);
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[1] = '\x01';
      }
      puVar7 = (undefined1 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc));
      iVar12 = 2;
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 2;
      *puVar7 = (char)local_4;
      puVar7[1] = (char)(local_4 >> 8);
      puVar14 = (undefined2 *)((int)piVar3 + 0x5e);
      do {
        bVar8 = (byte)iVar12;
        if ((local_4 & 1 << (bVar8 - 2 & 0x1f)) != 0) {
          uVar5 = puVar14[-1];
          if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 2) {
            if (*param_3 == '\0') {
              Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
            }
            if (*(int *)(param_3 + 8) < 2) {
              Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,2);
            }
            Com_Printf(s_SZ_GetSpace__overflow_20121308);
            param_3[0xc] = '\0';
            param_3[0xd] = '\0';
            param_3[0xe] = '\0';
            param_3[0xf] = '\0';
            param_3[1] = '\x01';
          }
          puVar7 = (undefined1 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc));
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 2;
          *puVar7 = (char)uVar5;
          puVar7[1] = (char)((ushort)uVar5 >> 8);
        }
        if ((local_4 & 1 << (bVar8 - 1 & 0x1f)) != 0) {
          uVar5 = *puVar14;
          if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 2) {
            if (*param_3 == '\0') {
              Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
            }
            if (*(int *)(param_3 + 8) < 2) {
              Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,2);
            }
            Com_Printf(s_SZ_GetSpace__overflow_20121308);
            param_3[0xc] = '\0';
            param_3[0xd] = '\0';
            param_3[0xe] = '\0';
            param_3[0xf] = '\0';
            param_3[1] = '\x01';
          }
          puVar7 = (undefined1 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc));
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 2;
          *puVar7 = (char)uVar5;
          puVar7[1] = (char)((ushort)uVar5 >> 8);
        }
        if ((local_4 & 1 << (bVar8 & 0x1f)) != 0) {
          uVar5 = puVar14[1];
          if (*(int *)(param_3 + 8) < *(int *)(param_3 + 0xc) + 2) {
            if (*param_3 == '\0') {
              Com_Error(0,s_SZ_GetSpace__overflow_without_al_20121348);
            }
            if (*(int *)(param_3 + 8) < 2) {
              Com_Error(0,s_SZ_GetSpace___i_is_>_full_buffer_20121320,2);
            }
            Com_Printf(s_SZ_GetSpace__overflow_20121308);
            param_3[0xc] = '\0';
            param_3[0xd] = '\0';
            param_3[0xe] = '\0';
            param_3[0xf] = '\0';
            param_3[1] = '\x01';
          }
          puVar7 = (undefined1 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc));
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 2;
          *puVar7 = (char)uVar5;
          puVar7[1] = (char)((ushort)uVar5 >> 8);
        }
        iVar12 = iVar12 + 3;
        puVar14 = puVar14 + 3;
      } while (iVar12 < 0xe);
    }
  }
  return;
LAB_2001d71f:
  psVar13 = (short *)(param_1 + 0x60);
  iVar12 = 2;
  do {
    bVar8 = (byte)iVar12;
    if ((short)*piVar9 != *(short *)((param_1 - (int)piVar3) + (int)piVar9)) {
      uVar11 = uVar11 | 0x2000;
      local_4 = local_4 | 1 << (bVar8 - 2 & 0x1f);
    }
    if (*(short *)((int)piVar9 + 2) != psVar13[-1]) {
      uVar11 = uVar11 | 0x2000;
      local_4 = local_4 | 1 << (bVar8 - 1 & 0x1f);
    }
    if ((short)piVar9[1] != *psVar13) {
      uVar11 = uVar11 | 0x2000;
      local_4 = local_4 | 1 << (bVar8 & 0x1f);
    }
    iVar12 = iVar12 + 3;
    piVar9 = (int *)((int)piVar9 + 6);
    psVar13 = psVar13 + 3;
    param_2 = (int *)uVar11;
  } while (iVar12 < 0xe);
  goto LAB_2001d7a5;
}

