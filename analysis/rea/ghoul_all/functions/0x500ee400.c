// rea decompile_all
// name: FUN_500ee400
// address: 0x500ee400
// body: available
// range: 0x500ee400-0x500ee7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
FUN_500ee400(int param_1,int param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,byte *param_12)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int unaff_retaddr;
  char in_stack_00000041;
  int in_stack_00001078;
  float *in_stack_00001080;
  int in_stack_00001084;
  float in_stack_0000108c;
  
  FUN_501074f0();
  FUN_500c2990(&stack0x00000078,in_stack_00001080,600.0,1,0,1);
  if ((float)in_stack_00001078 <= _DAT_5015d940 + 1.0) {
    FUN_500fdd70((float *)(in_stack_00001084 + 0x10),(float *)&stack0x00000034,(float *)0x0,
                 (float *)0x0);
    bVar3 = FUN_5004d600(&DAT_50159120,(float)&stack0x00000000,in_stack_0000108c);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      fVar1 = *(float *)(DAT_5015c9d8 + 0x18);
      uVar4 = CONCAT22((short)((uint3)extraout_var >> 8),
                       (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                       (ushort)(fVar1 == 0.0) << 0xe);
      if (fVar1 != 0.0) {
        uVar4 = FUN_500adb20((byte *)s_World_can_t_spawn___no_spots_ava_501541a8);
        return uVar4 & 0xffffff00;
      }
    }
    else {
      param_9 = 0xc1800000;
      param_10 = 0xc1800000;
      param_11 = 0xc2000000;
      param_6 = 0x41800000;
      param_7 = 0x41800000;
      param_8 = 0x42240000;
      (*DAT_5015cac0)(&stack0x00000000,&param_9,&param_6,&stack0x00000000,0,0x2020003,
                      &stack0x00000040);
      if (in_stack_00000041 == '\0') {
        pbVar10 = param_12;
        if (((*(int *)(DAT_5015cca0 + 0x1ec) != 0) || (*(int *)(DAT_5015cca0 + 0x1f0) != 0)) ||
           (uVar4 = DAT_5015cca0, *(int *)(DAT_5015cca0 + 500) != 0)) {
          do {
            do {
              iVar5 = (*DAT_5015cb24)(0,2);
              if (iVar5 == 0) {
                pbVar10 = *(byte **)(DAT_5015cca0 + 0x1ec);
              }
              else if (iVar5 == 1) {
                pbVar10 = *(byte **)(DAT_5015cca0 + 0x1f0);
              }
              else if (iVar5 == 2) {
                pbVar10 = *(byte **)(DAT_5015cca0 + 500);
              }
            } while (pbVar10 == (byte *)0x0);
            pbVar9 = &DAT_5015911c;
            pbVar6 = pbVar10;
            do {
              bVar2 = *pbVar6;
              bVar3 = bVar2 < *pbVar9;
              if (bVar2 != *pbVar9) {
LAB_500ee616:
                iVar5 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                goto LAB_500ee61b;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar6[1];
              bVar3 = bVar2 < pbVar9[1];
              if (bVar2 != pbVar9[1]) goto LAB_500ee616;
              pbVar6 = pbVar6 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_500ee61b:
          } while (iVar5 == 0);
          pbVar9 = &DAT_5015911c;
          pbVar6 = pbVar10;
          do {
            bVar2 = *pbVar6;
            bVar3 = bVar2 < *pbVar9;
            if (bVar2 != *pbVar9) {
LAB_500ee64e:
              iVar5 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
              goto LAB_500ee653;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar3 = bVar2 < pbVar9[1];
            if (bVar2 != pbVar9[1]) goto LAB_500ee64e;
            pbVar6 = pbVar6 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_500ee653:
          if (iVar5 != 0) {
            piVar7 = FUN_500c3690();
            piVar7[0x6d] = (int)pbVar10;
            piVar7[1] = unaff_retaddr;
            piVar7[2] = param_1;
            piVar7[3] = param_2;
            piVar7[3] = (int)((float)piVar7[3] + 8.0);
            FUN_500bd570(piVar7);
            if (piVar7[0x114] == 0) {
              uVar4 = FUN_500c3880(piVar7);
              return uVar4 & 0xffffff00;
            }
            param_3 = *in_stack_00001080 - (float)piVar7[1];
            param_4 = in_stack_00001080[1] - (float)piVar7[2];
            param_5 = 0;
            FUN_500fe050(&param_3);
            FUN_500c3570(&param_3,(float *)(piVar7 + 4));
            iVar5 = piVar7[0x57];
            piVar7[0x57] = 0x2020003;
            uVar4 = FUN_500b7600((int)piVar7);
            if (uVar4 == 0) {
              _DAT_5015cdac = DAT_5015ccdc;
              piVar7[0x57] = iVar5;
              piVar7[0x68] = piVar7[0x68] | 0x10000;
              (**(code **)(*(int *)piVar7[0x114] + 0x2c))(0);
              fVar1 = *(float *)(DAT_5015c9d8 + 0x18);
              uVar8 = CONCAT22((short)((uint)DAT_5015c9d8 >> 0x10),
                               (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
              if (fVar1 != 0.0) {
                FUN_500adb20((byte *)s_World_spawned_in_a_guy_5015415c);
                uVar8 = (*DAT_5015c9f4)(s_Weapons_mpg_fire_wav_50154144,0x3f800000,0,0,0);
                uVar8 = (*DAT_5015ca48)(piVar7,0,uVar8);
              }
              return CONCAT31((int3)((uint)uVar8 >> 8),1);
            }
            if (*(float *)(DAT_5015c9d8 + 0x18) != 0.0) {
              FUN_500adb20((byte *)s_World_spawn_trying_to_spawn__but_50154174);
            }
            uVar4 = FUN_500c3880(piVar7);
            return uVar4 & 0xffffff00;
          }
          fVar1 = *(float *)(DAT_5015c9d8 + 0x18);
          uVar4 = (uint)(ushort)((ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                (ushort)(fVar1 == 0.0) << 0xe);
          if (fVar1 != 0.0) {
            uVar4 = FUN_500adb20((byte *)s_World_spawn_trying_to_spawn__but_50154114);
          }
        }
      }
      else {
        fVar1 = *(float *)(DAT_5015c9d8 + 0x18);
        uVar4 = CONCAT22(extraout_var_00,
                         (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
        if (fVar1 != 0.0) {
          uVar4 = FUN_500adb20((byte *)s_World_spawn_trying_to_spawn__but_50154174);
          return uVar4 & 0xffffff00;
        }
      }
    }
  }
  else {
    fVar1 = *(float *)(DAT_5015c9d8 + 0x18);
    uVar4 = CONCAT22((short)((uint)DAT_5015c9d8 >> 0x10),
                     (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                     (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 != 0.0) {
      uVar4 = FUN_500adb20((byte *)s_World_can_t_spawn___too_many_guy_501541e0);
      return uVar4 & 0xffffff00;
    }
  }
  return uVar4 & 0xffffff00;
}

