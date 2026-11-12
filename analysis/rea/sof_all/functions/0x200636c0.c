// rea decompile_all
// name: FUN_200636c0
// address: 0x200636c0
// body: available
// range: 0x200636c0-0x20063a62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200636c0(int *param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  char *_Source;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined **ppuVar14;
  bool bVar15;
  undefined4 uVar16;
  size_t _Count;
  int local_88;
  undefined1 local_84 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_6c [24];
  undefined1 local_54 [24];
  int local_3c [6];
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b61b;
  local_c = ExceptionList;
  DAT_203fec94 = param_1;
  DAT_20402cd8 = param_1[0xa6];
  bVar4 = false;
  local_88 = 0;
  ExceptionList = &local_c;
  do {
    if (DAT_20367ec8 < DAT_20367ecc) {
      Com_Printf(s_SV_ReadClientMessage__bad_read_2013a7e8);
      uVar16 = 0x40e;
      goto LAB_20063a41;
    }
    iVar5 = FUN_2001e260(&DAT_20367ebc);
    iVar9 = DAT_20367ecc;
    if (iVar5 == -1) {
      ExceptionList = local_c;
      return;
    }
    switch(iVar5) {
    case 1:
      break;
    case 2:
      if (bVar4) {
        ExceptionList = local_c;
        return;
      }
      bVar4 = true;
      uVar6 = FUN_2001e260(&DAT_20367ebc);
      uVar7 = FUN_2001e310(&DAT_20367ebc);
      if ((uVar7 != param_1[0x81]) && (param_1[0x81] = uVar7, 0 < (int)uVar7)) {
        param_1[(uVar7 & 0xf) + 0x89] = DAT_20396de4 - param_1[(uVar7 & 0xf) * 0x3e + 0x10f3];
      }
      puVar12 = local_24;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      FUN_200be300(DAT_20367ec0 + DAT_20367ecc,DAT_20367ec8 - DAT_20367ecc);
      local_4 = 0;
      FUN_20005aa0(local_84,local_24,local_6c);
      FUN_20005aa0(local_84,local_6c,local_54);
      FUN_20005aa0(local_84,local_54,local_3c);
      DAT_20367ecc = DAT_20367ecc + ((int)(local_74 + 7 + (local_74 + 7 >> 0x1f & 7U)) >> 3);
      local_4 = 0xffffffff;
      FUN_200f9f75(local_80);
      local_80 = 0;
      local_7c = 0;
      local_78 = 0;
      if (*param_1 == 3) {
        uVar7 = FUN_2001f1b0(DAT_20367ec0 + 1 + iVar9,(DAT_20367ecc - iVar9) + -1,param_1[0x14a6]);
        if ((uVar7 & 0xff) != uVar6) {
          Com_DPrintf(s_Failed_command_checksum_for__s_2013a7c8,param_1 + 0xa7);
          ExceptionList = local_c;
          return;
        }
        if (*(float *)(DAT_203feccc + 0x18) == 0.0) {
          iVar9 = param_1[0x149d];
          if (iVar9 < 0x14) {
            if (2 < iVar9) {
              iVar5 = iVar9 + -2;
              iVar9 = iVar9 - iVar5;
              do {
                FUN_200635f0(param_1,param_1 + 0x82);
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            if (1 < iVar9) {
              FUN_200635f0(param_1,local_6c);
            }
            if (0 < iVar9) {
              FUN_200635f0(param_1,local_54);
            }
          }
          FUN_200635f0(param_1,local_3c);
        }
        piVar10 = local_3c;
        piVar13 = param_1 + 0x82;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar13 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar13 = piVar13 + 1;
        }
      }
      else {
        param_1[0x81] = -1;
      }
      break;
    case 3:
      _Count = 0x1ff;
      _Source = (char *)FUN_2001e3b0(&DAT_20367ebc);
      _strncpy((char *)(param_1 + 1),_Source,_Count);
      FUN_2005f7d0(param_1,1);
      break;
    case 4:
      uVar16 = FUN_2001e3b0(&DAT_20367ebc);
      local_88 = local_88 + 1;
      if (local_88 < 8) {
        FUN_20018fc0(uVar16,1);
        ppuVar14 = &PTR_DAT_2013a390;
        DAT_20402cd8 = DAT_203fec94[0xa6];
        puVar3 = PTR_DAT_2013a390;
        while (puVar3 != (undefined *)0x0) {
          pbVar11 = *ppuVar14;
          pbVar8 = (byte *)Cmd_Argv(0);
          do {
            bVar2 = *pbVar8;
            bVar15 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_200639c7:
              iVar9 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_200639cc;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar15 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_200639c7;
            pbVar8 = pbVar8 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar9 = 0;
LAB_200639cc:
          if (iVar9 == 0) {
            (*(code *)ppuVar14[1])();
            if (*ppuVar14 != (undefined *)0x0) goto LAB_200639ff;
            break;
          }
          ppuVar1 = ppuVar14 + 2;
          ppuVar14 = ppuVar14 + 2;
          puVar3 = *ppuVar1;
        }
        if (DAT_203a1f20 == 2) {
          (**(code **)(DAT_20396dd8 + 0x34))(DAT_20402cd8);
        }
      }
LAB_200639ff:
      if (*param_1 == 1) {
        ExceptionList = local_c;
        return;
      }
      break;
    default:
      Com_Printf(s_SV_ReadClientMessage__unknown_co_2013a79c);
      uVar16 = 0x40f;
LAB_20063a41:
      FUN_2005e170(param_1,uVar16);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

