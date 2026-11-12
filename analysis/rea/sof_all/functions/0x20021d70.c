// rea decompile_all
// name: FUN_20021d70
// address: 0x20021d70
// body: available
// range: 0x20021d70-0x2002216c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_20021d70(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  float10 fVar11;
  undefined1 local_80 [128];
  
  puVar4 = DAT_2024b1d8;
  do {
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)Cvar_Get(param_1,param_2,0,0);
      return puVar4;
    }
    pbVar2 = param_1;
    pbVar6 = (byte *)*puVar4;
    do {
      bVar1 = *pbVar2;
      bVar10 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_20021db6:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_20021dbb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar10 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_20021db6;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_20021dbb:
    if (iVar3 == 0) {
LAB_20021e11:
      if ((((char)puVar4[3] < '\0') && (param_3 != 2)) && (DAT_2024b1dc == '\0')) {
        return (undefined4 *)0x0;
      }
      if (((puVar4[3] & 0xf06) != 0) &&
         (((iVar3 = FUN_200fa6a0(param_2,&DAT_20130c64), iVar3 != 0 ||
           (iVar3 = FUN_200fa6a0(param_2,&DAT_20130c60), iVar3 != 0)) ||
          (iVar3 = FUN_200fa6a0(param_2,&DAT_20130c5c), iVar3 != 0)))) {
        Com_Printf(s_invalid_info_cvar_value_20130ca4);
        return puVar4;
      }
      if (param_3 == 0) {
        if ((puVar4[3] & 8) != 0) {
          Com_Printf(s__s_is_write_protected__20130c8c,param_1);
          return puVar4;
        }
        if ((puVar4[3] & 0x10) != 0) {
          pbVar2 = (byte *)puVar4[2];
          pbVar6 = param_2;
          pbVar7 = pbVar2;
          if (pbVar2 != (byte *)0x0) break;
          pbVar2 = (byte *)puVar4[1];
          goto LAB_20021f26;
        }
      }
      else if (param_3 == 1) {
        if (((puVar4[3] & 0x1000) != 0) && (DAT_2024b1dc == '\0')) {
          return (undefined4 *)0x0;
        }
        if (puVar4[2] != 0) {
          Z_Free(puVar4[2]);
          puVar4[2] = 0;
        }
      }
      pbVar2 = (byte *)puVar4[1];
      pbVar6 = param_2;
      goto LAB_20022093;
    }
    iVar3 = 7;
    bVar10 = true;
    pbVar2 = param_1;
    pbVar6 = (byte *)s_matrix_20130c20;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar10 = *pbVar2 == *pbVar6;
      pbVar2 = pbVar2 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar10);
    if (bVar10) {
      iVar3 = 10;
      bVar10 = true;
      pbVar2 = (byte *)*puVar4;
      pbVar6 = (byte *)s_timescale_2011d508;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar10 = *pbVar2 == *pbVar6;
        pbVar2 = pbVar2 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar10);
      if (bVar10) goto LAB_20021e11;
    }
    puVar4 = (undefined4 *)puVar4[7];
  } while( true );
  while( true ) {
    bVar1 = pbVar6[1];
    bVar10 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_20021f04;
    pbVar6 = pbVar6 + 2;
    pbVar7 = pbVar7 + 2;
    if (bVar1 == 0) break;
    bVar1 = *pbVar6;
    bVar10 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_20021f04:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_20021f09;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_20021f09:
  if (iVar3 == 0) {
    return puVar4;
  }
  Z_Free(pbVar2);
  puVar4[2] = 0;
  goto LAB_20021f57;
  while( true ) {
    bVar1 = pbVar6[1];
    bVar10 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_200220b7;
    pbVar6 = pbVar6 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) break;
LAB_20022093:
    bVar1 = *pbVar6;
    bVar10 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_200220b7:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_200220bc;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_200220bc:
  if (iVar3 != 0) {
    puVar4[5] = 1;
    if ((*(byte *)(puVar4 + 3) & 2) != 0) {
      DAT_2024b1d0 = 1;
    }
    Z_Free(puVar4[1]);
    uVar5 = FUN_2001ea20(param_2);
    puVar4[1] = uVar5;
    if ((-1 < (char)puVar4[3]) || (DAT_2024b1dc != '\0')) {
      if ((puVar4[3] & 0x20) == 0) {
        fVar11 = (float10)FUN_200fafcc(uVar5);
        puVar4[6] = (float)fVar11;
      }
      else {
        iVar3 = FUN_200f9e13();
        puVar4[6] = (float)iVar3;
        Z_Free(puVar4[1]);
        uVar5 = __ftol();
        Com_sprintf(local_80,0x80,&DAT_2011d0b4,uVar5);
        uVar5 = FUN_2001ea20(local_80);
        puVar4[1] = uVar5;
      }
    }
    if ((code *)puVar4[4] != (code *)0x0) {
      (*(code *)puVar4[4])(puVar4);
    }
  }
  return puVar4;
  while( true ) {
    bVar1 = pbVar6[1];
    bVar10 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_20021f4a;
    pbVar6 = pbVar6 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) break;
LAB_20021f26:
    bVar1 = *pbVar6;
    bVar10 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_20021f4a:
      iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_20021f4f;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_20021f4f:
  if (iVar3 == 0) {
    return puVar4;
  }
LAB_20021f57:
  iVar3 = FUN_2001cae0();
  if (iVar3 != 0) {
    Com_Printf(s__s_will_be_changed_for_next_game_20130c68,param_1);
    uVar5 = FUN_2001ea20(param_2);
    puVar4[2] = uVar5;
    return puVar4;
  }
  if (puVar4[1] != 0) {
    Z_Free(puVar4[1]);
  }
  uVar5 = FUN_2001ea20(param_2);
  puVar4[1] = uVar5;
  if ((-1 < (char)puVar4[3]) || (DAT_2024b1dc != '\0')) {
    if ((puVar4[3] & 0x20) == 0) {
      fVar11 = (float10)FUN_200fafcc(uVar5);
      puVar4[6] = (float)fVar11;
    }
    else {
      iVar3 = FUN_200f9e13();
      puVar4[6] = (float)iVar3;
      Z_Free(puVar4[1]);
      uVar5 = __ftol();
      Com_sprintf(local_80,0x80,&DAT_2011d0b4,uVar5);
      uVar5 = FUN_2001ea20(local_80);
      puVar4[1] = uVar5;
    }
  }
  iVar3 = 5;
  bVar10 = true;
  pcVar8 = (char *)*puVar4;
  pcVar9 = &DAT_2011ee50;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar10 = *pcVar8 == *pcVar9;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar10);
  if (bVar10) {
    FUN_200257e0(puVar4[1]);
    FUN_20025770();
  }
  FUN_20050750();
  return puVar4;
}

