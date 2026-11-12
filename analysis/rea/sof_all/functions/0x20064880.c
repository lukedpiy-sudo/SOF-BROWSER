// rea decompile_all
// name: FUN_20064880
// address: 0x20064880
// body: available
// range: 0x20064880-0x20064dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20064880(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,float param_13,float param_14,float param_15,
                 float param_16,float param_17,float param_18,float param_19,float param_20,
                 float param_21,float param_22,float param_23,float param_24,float param_25,
                 float param_26,float param_27,undefined4 param_28,float param_29,float param_30,
                 int param_31,float param_32,float param_33,float param_34,float param_35,
                 float param_36,float param_37)

{
  char cVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  char cStack000000b0;
  char cStack000000b1;
  float in_stack_000000b4;
  float in_stack_000000e0;
  undefined4 in_stack_00000128;
  float *in_stack_000011a0;
  undefined1 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  FUN_200fa720();
  DAT_204034ec = &param_32;
  param_32 = *in_stack_000011a0 - 5.0;
  DAT_204034f0 = &param_35;
  DAT_204034f4 = &stack0x0000019c;
  *in_stack_000011a0 = param_32;
  param_33 = in_stack_000011a0[1] - 5.0;
  in_stack_000011a0[1] = param_33;
  param_34 = in_stack_000011a0[2] - 5.0;
  in_stack_000011a0[2] = param_34;
  param_35 = in_stack_000011a0[3] + 5.0;
  in_stack_000011a0[3] = param_35;
  param_36 = in_stack_000011a0[4] + 5.0;
  in_stack_000011a0[4] = param_36;
  param_37 = in_stack_000011a0[5] + 5.0;
  in_stack_000011a0[5] = param_37;
  DAT_204034e0 = 0;
  DAT_204034e4 = 0x400;
  DAT_204034e8 = 1;
  FUN_200645c0(&DAT_20402ce0);
  param_31 = DAT_204034e0;
  iVar10 = 0;
  if (0 < DAT_204034e0) {
    do {
      fVar2 = *(float *)(&stack0x0000019c + iVar10 * 4);
      iVar4 = *(int *)((int)fVar2 + 0x158);
      if (((iVar4 != 0) || (*(char *)((int)fVar2 + 0x118) < '\0')) &&
         (fVar14 = in_stack_000011a0[0x1e], fVar2 != fVar14)) {
        if (*(char *)(in_stack_000011a0 + 0x10) != '\0') {
          return;
        }
        if (((fVar14 == 0.0) ||
            (((*(float *)((int)fVar2 + 0x160) != fVar14 &&
              (*(float *)((int)fVar14 + 0x160) != fVar2)) &&
             (((*(byte *)((int)fVar2 + 0x118) & 0x80) == 0 ||
              (*(float *)((int)fVar2 + 0x160) != *(float *)((int)fVar14 + 0x160))))))) &&
           ((((uint)in_stack_000011a0[0x1f] & 0x4000000) != 0 ||
            ((*(byte *)((int)fVar2 + 0x118) & 2) == 0)))) {
          if (iVar4 == 4) {
            piVar3 = *(int **)((int)fVar2 + 0x164);
            if (piVar3 != (int *)0x0) {
              pfVar7 = (float *)in_stack_000011a0[0xe];
              param_16 = *pfVar7;
              param_17 = pfVar7[1];
              param_18 = pfVar7[2];
              pfVar7 = (float *)in_stack_000011a0[0xf];
              param_22 = *pfVar7;
              param_23 = pfVar7[1];
              param_24 = pfVar7[2];
              if ((*(byte *)((int)fVar2 + 0x118) & 4) == 0) {
                pfVar7 = (float *)in_stack_000011a0[6];
                param_13 = *pfVar7;
                param_14 = pfVar7[1];
                param_15 = pfVar7[2];
                pfVar7 = (float *)in_stack_000011a0[7];
                param_19 = *pfVar7;
                param_20 = pfVar7[1];
                param_21 = pfVar7[2];
              }
              else {
                param_13 = in_stack_000011a0[8];
                param_14 = in_stack_000011a0[9];
                param_15 = in_stack_000011a0[10];
                param_19 = in_stack_000011a0[0xb];
                param_20 = in_stack_000011a0[0xc];
                param_21 = in_stack_000011a0[0xd];
              }
              in_stack_00000128 = 0;
              FUN_20054b30((int)fVar2 + 0x10,&stack0x000000a4,&param_10,&stack0x00000098);
              FUN_200a0cc0();
              param_10 = param_10 * -1.0;
              param_11 = param_11 * -1.0;
              param_12 = param_12 * -1.0;
              FUN_200a15d0(0,&stack0x000000a4);
              FUN_200a15d0(1,&param_10);
              FUN_200a15d0(2,&stack0x00000098);
              FUN_200a15d0(3,(int)fVar2 + 4);
              FUN_200a0c70();
              iVar4 = (**(code **)(*piVar3 + 0xb0))
                                (DAT_203a1f2c,&stack0x000000e8,&param_16,&param_22,&param_13,
                                 &param_19,&param_1,1);
              if (iVar4 != 0) {
                if (0.0 <= param_3) {
                  if (in_stack_000011a0[0x11] <= param_3) goto LAB_20064db5;
                  param_29 = param_23 * param_3;
                  *(undefined1 *)(in_stack_000011a0 + 0x10) = 0;
                  *(undefined1 *)((int)in_stack_000011a0 + 0x41) = 0;
                  in_stack_000011a0[0x1b] = 0.0;
                  param_27 = 1.0 - param_3;
                  param_25 = param_16 * param_27;
                  param_26 = param_17 * param_27;
                  param_27 = param_18 * param_27;
                  param_30 = param_24 * param_3 + param_27;
                  in_stack_000011a0[0x12] = param_22 * param_3 + param_25;
                  in_stack_000011a0[0x14] = param_30;
                  in_stack_000011a0[0x13] = param_29 + param_26;
                  in_stack_000011a0[0x11] = param_3;
                  in_stack_000011a0[0x1c] = fVar2;
                  in_stack_000011a0[0x15] = param_4;
                  in_stack_000011a0[0x16] = param_5;
                  in_stack_000011a0[0x17] = param_6;
                }
                else {
                  *(undefined1 *)((int)in_stack_000011a0 + 0x41) = 1;
                  *(undefined1 *)(in_stack_000011a0 + 0x10) = 1;
                  in_stack_000011a0[0x1b] = 0.0;
                  in_stack_000011a0[0x1c] = fVar2;
                  in_stack_000011a0[0x11] = 0.0;
                  in_stack_000011a0[0x15] = param_4;
                  in_stack_000011a0[0x16] = param_5;
                  in_stack_000011a0[0x17] = param_6;
                }
                in_stack_000011a0[0x1a] = (float)&DAT_20246d10;
                in_stack_000011a0[0x18] = param_7 * param_4 + param_8 * param_5 + param_9 * param_6;
              }
            }
          }
          else {
            if (iVar4 == 3) {
              iVar4 = *(int *)(&DAT_203a1f74 + *(int *)((int)fVar2 + 0x20) * 4);
              if (iVar4 == 0) {
                Com_Error(0,s_MOVETYPE_PUSH_with_a_non_bsp_mod_2013a84c);
              }
              uVar5 = *(undefined4 *)(iVar4 + 0x28);
            }
            else {
              uVar5 = FUN_2001a840((int)fVar2 + 0x11c,(int)fVar2 + 0x128);
            }
            puVar6 = (undefined4 *)((int)fVar2 + 0x10);
            if (*(int *)((int)fVar2 + 0x158) != 3) {
              puVar6 = &DAT_20390c24;
            }
            if ((*(byte *)((int)fVar2 + 0x118) & 4) == 0) {
              fVar14 = in_stack_000011a0[0x1f];
              pfVar7 = (float *)in_stack_000011a0[7];
              fVar13 = in_stack_000011a0[0xf];
              pfVar9 = (float *)in_stack_000011a0[6];
              fVar12 = in_stack_000011a0[0xe];
              puVar11 = &stack0x0000012c;
            }
            else {
              fVar14 = in_stack_000011a0[0x1f];
              fVar13 = in_stack_000011a0[0xf];
              pfVar7 = in_stack_000011a0 + 0xb;
              pfVar9 = in_stack_000011a0 + 8;
              fVar12 = in_stack_000011a0[0xe];
              puVar11 = &stack0x00000164;
            }
            puVar6 = (undefined4 *)
                     FUN_2001b9c0(puVar11,fVar12,fVar13,pfVar9,pfVar7,uVar5,fVar14,(int)fVar2 + 4,
                                  puVar6);
            puVar8 = (undefined4 *)&stack0x000000b0;
            for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            if (((cStack000000b0 != '\0') || (cStack000000b1 != '\0')) ||
               (in_stack_000000b4 < in_stack_000011a0[0x11])) {
              cVar1 = *(char *)((int)in_stack_000011a0 + 0x41);
              in_stack_000000e0 = fVar2;
              pfVar7 = (float *)&stack0x000000b0;
              pfVar9 = in_stack_000011a0 + 0x10;
              for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pfVar9 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                pfVar9 = pfVar9 + 1;
              }
              if (cVar1 != '\0') {
                *(undefined1 *)((int)in_stack_000011a0 + 0x41) = 1;
              }
            }
          }
        }
      }
LAB_20064db5:
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_31);
  }
  return;
}

