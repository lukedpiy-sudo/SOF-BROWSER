// rea decompile_all
// name: FUN_5008a200
// address: 0x5008a200
// body: available
// range: 0x5008a200-0x5008a539 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008a200(undefined4 param_1)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_128 [4];
  int *local_124;
  int local_120;
  int local_11c;
  undefined4 *local_118 [2];
  undefined4 local_110;
  byte local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114d1b;
  local_c = ExceptionList;
  if (DAT_5015d928 == 0) {
    ExceptionList = &local_c;
    (*DAT_5015ca28)(param_1,2,s_Cheats_not_available__50146ac0);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_5008b510((undefined4 *)0x0,0);
  local_120 = 0;
  local_4 = 0;
  local_11c = 0;
  local_124 = piVar4;
  if (0 < DAT_5015c938) {
    local_118[0] = (undefined4 *)(DAT_5015cca0 + 0x1b4);
    do {
      if (local_118[0][-0x4f] != 0) {
        pbVar7 = (byte *)*local_118[0];
        pbVar8 = local_10c;
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          *pbVar8 = bVar1;
          pbVar8 = pbVar8 + 1;
        } while (bVar1 != 0);
        bVar3 = false;
        local_110 = 1;
        if (local_120 == 0) {
          iVar6 = FUN_5008b510(piVar4,piVar4[1]);
          piVar4[1] = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
          FUN_5008b540((undefined4 *)(iVar6 + 8),&local_110);
          local_120 = local_120 + 1;
          piVar4 = local_124;
        }
        else {
          piVar9 = (int *)*piVar4;
          if (piVar9 != piVar4) {
            do {
              if (bVar3) break;
              pbVar8 = (byte *)(piVar9 + 3);
              pbVar7 = local_10c;
              pbVar5 = pbVar8;
              do {
                bVar1 = *pbVar5;
                bVar10 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_5008a310:
                  iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_5008a315;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar10 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_5008a310;
                pbVar5 = pbVar5 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_5008a315:
              if (iVar6 == 0) {
                piVar9[2] = piVar9[2] + 1;
LAB_5008a381:
                bVar3 = true;
              }
              else {
                pbVar7 = local_10c;
                do {
                  bVar1 = *pbVar8;
                  bVar10 = bVar1 < *pbVar7;
                  if (bVar1 != *pbVar7) {
LAB_5008a348:
                    iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                    goto LAB_5008a34d;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar8[1];
                  bVar10 = bVar1 < pbVar7[1];
                  if (bVar1 != pbVar7[1]) goto LAB_5008a348;
                  pbVar8 = pbVar8 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar1 != 0);
                iVar6 = 0;
LAB_5008a34d:
                if (0 < iVar6) {
                  iVar6 = FUN_5008b510(piVar9,piVar9[1]);
                  piVar9[1] = iVar6;
                  **(int **)(iVar6 + 4) = iVar6;
                  FUN_5008b540((undefined4 *)(iVar6 + 8),&local_110);
                  local_120 = local_120 + 1;
                  goto LAB_5008a381;
                }
              }
              piVar9 = (int *)*piVar9;
              piVar4 = local_124;
            } while (piVar9 != local_124);
          }
        }
      }
      local_11c = local_11c + 1;
      local_118[0] = local_118[0] + 0x119;
    } while (local_11c < DAT_5015c938);
    if (local_120 != 0) {
      local_11c = 0;
      FUN_500adb20((byte *)s_Size_Type_50146c50);
      FUN_500adb20((byte *)s__________________________________50146c14);
      piVar4 = (int *)*local_124;
      if (piVar4 != local_124) {
        do {
          FUN_500adb20((byte *)s__4_d__s_50146c08);
          iVar6 = _strncmp((char *)(piVar4 + 3),&DAT_501426ac,4);
          if (iVar6 == 0) {
            local_11c = local_11c + piVar4[2];
          }
          _strncmp((char *)(piVar4 + 3),s_monster_50146c00,7);
          piVar4 = (int *)*piVar4;
        } while (piVar4 != local_124);
      }
      FUN_500adb20((byte *)s__________________________________50146c14);
      FUN_500adb20((byte *)s___4d_Monsters_50146bf0);
      FUN_500adb20((byte *)s___4d_Funcs_50146be4);
      FUN_500adb20((byte *)s___4d_Total_50146bd8);
      piVar4 = local_124;
    }
  }
  piVar9 = (int *)*piVar4;
  piVar2 = piVar4;
  while (piVar9 != piVar4) {
    piVar2 = (int *)*piVar9;
    *(int *)piVar9[1] = *piVar9;
    *(int *)(*piVar9 + 4) = piVar9[1];
    FUN_50106b60((undefined *)piVar9);
    local_120 = local_120 + -1;
    piVar9 = piVar2;
    piVar2 = local_124;
  }
  local_4 = 0xffffffff;
  piVar4 = (int *)*piVar2;
  piVar9 = piVar2;
  while (piVar4 != piVar2) {
    piVar9 = (int *)*piVar4;
    FUN_500499f0(local_128,(int *)local_118,piVar4);
    piVar4 = piVar9;
    piVar9 = local_124;
  }
  FUN_50106b60((undefined *)piVar9);
  ExceptionList = local_c;
  return;
}

