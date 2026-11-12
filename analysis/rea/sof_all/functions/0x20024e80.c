// rea decompile_all
// name: FS_FOpenFile
// address: 0x20024e80
// body: available
// range: 0x20024e80-0x200251ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FS_FOpenFile(char *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 local_104;
  char local_100 [128];
  char local_80 [128];
  
                    /* 0x24e80  14  FS_FOpenFile */
  bVar9 = *param_1 == '\x01';
  if (bVar9) {
    param_1 = param_1 + 1;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_100 + -(int)param_1)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_200251c0(local_100);
  for (puVar7 = DAT_2026ab04; iVar4 = DAT_2026aa78, puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)*puVar7) {
    iVar4 = _strncmp(param_1,(char *)puVar7[1],puVar7[2]);
    if (iVar4 == 0) {
      Com_sprintf(local_80,0x80,&DAT_201311f4,puVar7[3],param_1 + puVar7[2]);
      iVar4 = FUN_200faa9a(local_80,&DAT_201311d4);
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      puVar7 = operator_new(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = iVar4;
        *puVar7 = &PTR_FUN_201118a4;
      }
      iVar4 = 0;
      goto LAB_20024f87;
    }
  }
  do {
    if (iVar4 == 0) {
      FUN_2001c940(s_FindFile__can_t_find__s_201311d8,param_1);
      *param_2 = 0;
      return 0xffffffff;
    }
    iVar6 = *(int *)(iVar4 + 0x80);
    if (iVar6 == 0) {
      Com_sprintf(local_80,0x80,s__s__s_2011f104,iVar4,local_100);
      iVar6 = FUN_200faa9a(local_80,&DAT_201311d4);
      if (iVar6 != 0) {
        puVar7 = operator_new(8);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = iVar6;
          *puVar7 = &PTR_FUN_201118a4;
        }
        iVar4 = 0;
        goto LAB_200250f0;
      }
    }
    else {
      iVar5 = FUN_2004fd20(local_100,&local_104);
      if (iVar5 != 0) {
        puVar7 = operator_new(0x18);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = iVar5;
          puVar7[4] = local_104;
          puVar7[5] = iVar6;
          *puVar7 = &PTR_FUN_201118bc;
          uVar8 = FUN_200fade8(iVar5);
          puVar7[2] = uVar8;
          puVar7[3] = 0;
        }
        iVar4 = 0;
        goto LAB_2002507d;
      }
    }
    iVar4 = *(int *)(iVar4 + 0x84);
  } while( true );
  while (iVar4 = iVar4 + 1, iVar4 < 0x14) {
LAB_20024f87:
    if ((&DAT_2026aa00)[iVar4] == 0) {
      (&DAT_2026aa00)[iVar4] = puVar7;
      iVar4 = iVar4 + 1;
      goto LAB_20024f9a;
    }
  }
  iVar4 = 0;
LAB_20024f9a:
  *param_2 = iVar4;
  if ((int *)(&DAT_2026a9fc)[iVar4] == (int *)0x0) {
    return 0xffffffff;
  }
  uVar8 = (**(code **)(*(int *)(&DAT_2026a9fc)[iVar4] + 4))();
  return uVar8;
  while (iVar4 = iVar4 + 1, iVar4 < 0x14) {
LAB_200250f0:
    if ((&DAT_2026aa00)[iVar4] == 0) {
      (&DAT_2026aa00)[iVar4] = puVar7;
      iVar4 = iVar4 + 1;
      goto LAB_20025103;
    }
  }
  iVar4 = 0;
LAB_20025103:
  *param_2 = iVar4;
  if ((int *)(&DAT_2026a9fc)[iVar4] == (int *)0x0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (**(code **)(*(int *)(&DAT_2026a9fc)[iVar4] + 4))();
  }
  bVar2 = *(float *)(DAT_2026ab08 + 0x18) != 0.0;
  if (!bVar9) {
    if (bVar2) {
      FUN_20024910(local_100);
    }
    return uVar8;
  }
  if (!bVar2) {
    pcVar3 = local_80;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(param_1 + (-1 - (int)local_80))] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    return uVar8;
  }
  pcVar3 = local_100;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(param_1 + (-1 - (int)local_100))] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return uVar8;
  while (iVar4 = iVar4 + 1, iVar4 < 0x14) {
LAB_2002507d:
    if ((&DAT_2026aa00)[iVar4] == 0) {
      (&DAT_2026aa00)[iVar4] = puVar7;
      iVar4 = iVar4 + 1;
      goto LAB_20025090;
    }
  }
  iVar4 = 0;
LAB_20025090:
  *param_2 = iVar4;
  if (bVar9) {
    pcVar3 = local_100;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(param_1 + (-1 - (int)local_100))] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return local_104;
}

