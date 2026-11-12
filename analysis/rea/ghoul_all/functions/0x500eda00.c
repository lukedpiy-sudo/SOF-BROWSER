// rea decompile_all
// name: FUN_500eda00
// address: 0x500eda00
// body: available
// range: 0x500eda00-0x500ee055 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500eda00(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  longlong lVar10;
  char *pcVar11;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar7 = param_1;
  if ((param_1[0x68] & 0x400U) != 0) {
    param_1[0xad] = 0;
    return;
  }
  if (((param_1[0x7b] == 0) && (param_1[0x7c] == 0)) && (param_1[0x7d] == 0)) {
    (*DAT_5015ca24)(s_spawner_set_to_spawn_nothing__501540f4);
    param_1[0xad] = (int)(DAT_5015ccdc + 99999.9);
    return;
  }
  param_1[0xad] = (int)(DAT_5015ccdc + 1.0);
  uVar4 = DAT_5015cca0;
  iVar2 = DAT_5015c938;
  piVar3 = local_14;
  if (param_1[0xbc] == 0) {
    local_10 = 1;
    local_14 = param_1;
    do {
      if (local_14[0x74] != 0) {
        param_1 = (int *)0x0;
        for (uVar5 = uVar4; uVar5 < uVar4 + iVar2 * 0x464; uVar5 = uVar5 + 0x464) {
          if (((*(int *)(uVar5 + 0x78) != 0) && ((*(uint *)(uVar5 + 0x1a0) & 0x10000) != 0)) &&
             ((*(int *)(uVar5 + 0x450) == 0 || (0 < *(int *)(uVar5 + 0x2ec))))) {
            if ((int)*(short *)(uVar5 + 0x390) == (int)((int)piVar7 - uVar4) / 0x464) {
              param_1 = (int *)((int)param_1 + 1);
            }
            if (0 < (int)param_1) {
              local_10 = 0;
              goto LAB_500edba0;
            }
          }
        }
        if (*(float *)(DAT_5015c9d8 + 0x18) != 0.0) {
          FUN_500adb20((byte *)s_Level_spawner_running_kill_targe_501540d0);
        }
        piVar7[0xc6] = 0;
        piVar7[0xd9] = 0;
        piVar7[0xd8] = 0;
        piVar7[0x9f] = 0;
        piVar7[0xbb] = 0;
        piVar7[0x71] = piVar7[0x74];
        piVar7[0x74] = 0;
        FUN_500c2f80(piVar7,(int)piVar7);
        uVar4 = DAT_5015cca0;
        iVar2 = DAT_5015c938;
      }
LAB_500edba0:
      local_14 = (int *)local_14[0xcf];
    } while (local_14 != (int *)0x0);
    local_14 = (int *)0x0;
    piVar3 = (int *)0x0;
    if (local_10 != 0) {
      do {
        piVar3 = (int *)piVar7[0xcf];
        FUN_500c3880(piVar7);
        piVar7 = piVar3;
      } while (piVar3 != (int *)0x0);
      return;
    }
  }
  local_14 = piVar3;
  if (-1 < (char)piVar7[0x6e]) {
    if (DAT_5015d230 == 0) {
      if (piVar7[0xd9] == -0x40800000) {
        return;
      }
      if (DAT_5015ccdc - (float)piVar7[0xbb] <= (float)piVar7[0xd9]) {
        return;
      }
    }
    else {
      if (piVar7[0xd8] == -0x40800000) {
        return;
      }
      if (DAT_5015ccdc - (float)piVar7[0xbb] <= (float)piVar7[0xd8]) {
        return;
      }
    }
  }
  if ((DAT_5015dad8 < 7) || ((piVar7[0x6e] & 0x10U) != 0)) {
    local_10 = 0;
    if (0 < piVar7[0xc6]) {
      do {
        if (piVar7[0xbc] == 0) {
          return;
        }
        local_14 = (int *)0x0;
        if (piVar7[0x9f] != -1) {
          for (uVar5 = uVar4; uVar5 < uVar4 + iVar2 * 0x464; uVar5 = uVar5 + 0x464) {
            if (((*(int *)(uVar5 + 0x78) != 0) && ((*(uint *)(uVar5 + 0x1a0) & 0x10000) != 0)) &&
               ((*(int *)(uVar5 + 0x450) == 0 || (0 < *(int *)(uVar5 + 0x2ec))))) {
              if ((int)*(short *)(uVar5 + 0x390) == (int)((int)piVar7 - uVar4) / 0x464) {
                local_14 = (int *)((int)local_14 + 1);
              }
              if (piVar7[0x9f] <= (int)local_14) goto LAB_500ee019;
            }
          }
        }
        if (DAT_5015d8d5 != '\0') {
LAB_500ee019:
          if (*(float *)(DAT_5015c9d8 + 0x18) == 0.0) goto LAB_500ee03c;
          pcVar11 = s_Level_spawner_can_t_spawn___eith_50153fb0;
          goto LAB_500ee034;
        }
        local_14 = (int *)0x0;
        iVar2 = FUN_500ed860((int)piVar7,&local_c,(int *)&local_14);
        if (iVar2 == 0) {
          if (*(float *)(DAT_5015c9d8 + 0x18) == 0.0) goto LAB_500ee03c;
          pcVar11 = s_Level_spawner_can_t_spawn___no_v_5015402c;
          goto LAB_500ee034;
        }
        piVar3 = FUN_500c3690();
        if ((local_10 == 0) || ((*(byte *)(piVar7 + 0x6e) & 2) == 0)) {
          do {
            do {
              iVar2 = (*DAT_5015cb24)(0,2);
              if (iVar2 == 0) {
                param_1 = (int *)piVar7[0x7b];
              }
              else if (iVar2 == 1) {
                param_1 = (int *)piVar7[0x7c];
              }
              else if (iVar2 == 2) {
                param_1 = (int *)piVar7[0x7d];
              }
            } while (param_1 == (int *)0x0);
            iVar2 = 1;
            bVar9 = true;
            piVar8 = param_1;
            pcVar11 = &DAT_5015911c;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar9 = (char)*piVar8 == *pcVar11;
              piVar8 = (int *)((int)piVar8 + 1);
              pcVar11 = pcVar11 + 1;
            } while (bVar9);
          } while (bVar9);
        }
        piVar3[0x6d] = (int)param_1;
        piVar3[1] = local_c;
        piVar3[2] = local_8;
        piVar3[3] = local_4;
        piVar3[3] = (int)((float)piVar3[3] + 35.0);
        piVar3[4] = local_14[4];
        piVar3[5] = local_14[5];
        piVar3[6] = local_14[6];
        piVar3[0x71] = local_14[0x71];
        piVar3[0x47] = -0x3e800000;
        piVar3[0x48] = -0x3e800000;
        piVar3[0x49] = -0x3e000000;
        piVar3[0x4a] = 0x41800000;
        piVar3[0x4b] = 0x41800000;
        piVar3[0x4c] = 0x42240000;
        iVar2 = piVar3[0x57];
        piVar3[0x57] = 0x2020003;
        uVar4 = FUN_500b7600((int)piVar3);
        if (uVar4 != 0) {
          FUN_500c3880(piVar3);
          piVar7[0xad] = (int)(DAT_5015ccdc + 1.0);
          if (*(float *)(DAT_5015c9d8 + 0x18) == 0.0) {
            return;
          }
          FUN_500adb20((byte *)s_Level_spawner_can_t_spawn___spac_50153ffc);
          return;
        }
        FUN_500bd570(piVar3);
        if (piVar3[0x1e] == 0) {
          FUN_500adb20((byte *)s_Couldn_t_spawn_entity_type__s__50154058);
        }
        else {
          iVar6 = (int)piVar7 - DAT_5015cca0;
          *(short *)(piVar3 + 0xe4) =
               ((short)(iVar6 / 0x464) + (short)(iVar6 >> 0x1f)) -
               (short)((longlong)iVar6 * 0x749cb29 >> 0x3f);
          piVar3[0x57] = iVar2;
          piVar3[0x68] = piVar3[0x68] | 0x10000;
          (**(code **)(*(int *)piVar3[0x114] + 0x48))(piVar3);
          (**(code **)(*(int *)piVar3[0x114] + 0x2c))(0);
          if ((*(byte *)(piVar7 + 0x6e) & 0x84) != 0) {
            FUN_500f8fe0();
            (**(code **)(*(int *)piVar3[0x114] + 0x4c))(DAT_5015ccdc,DAT_5015d1ec,DAT_5015d1ec + 4);
          }
          if (0 < piVar7[0xbc]) {
            piVar7[0xbc] = piVar7[0xbc] + -1;
          }
          lVar10 = __ftol();
          piVar7[0xbb] = (int)lVar10;
          if (DAT_5015d230 == 0) {
            fVar1 = (float)piVar7[0xd9];
          }
          else {
            fVar1 = (float)piVar7[0xd8];
          }
          piVar7[0xad] = (int)(DAT_5015ccdc + fVar1);
          if (*(float *)(DAT_5015c9d8 + 0x18) != 0.0) {
            FUN_500adb20((byte *)s_Level_spawner_spawned_a_guy_50154078);
          }
        }
        local_10 = local_10 + 1;
        uVar4 = DAT_5015cca0;
        iVar2 = DAT_5015c938;
      } while (local_10 < piVar7[0xc6]);
    }
  }
  else {
    if (*(float *)(DAT_5015c9d8 + 0x18) != 0.0) {
      pcVar11 = s_Level_spawner_can_t_spawn___too_m_50154098;
LAB_500ee034:
      FUN_500adb20((byte *)pcVar11);
    }
LAB_500ee03c:
    piVar7[0xad] = (int)(DAT_5015ccdc + 1.0);
  }
  return;
}

