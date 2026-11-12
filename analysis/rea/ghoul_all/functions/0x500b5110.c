// rea decompile_all
// name: FUN_500b5110
// address: 0x500b5110
// body: available
// range: 0x500b5110-0x500b55b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b5110(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float *in_stack_00000014;
  int iStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  int iStack_d8;
  int local_d4;
  void *apvStack_d0 [12];
  float afStack_a0 [5];
  undefined4 local_8c;
  undefined4 auStack_88 [11];
  undefined1 auStack_5c [20];
  undefined4 local_48;
  undefined4 local_4;
  
  local_48 = 0;
  local_8c = 0;
  local_4 = 0;
  if ((((*(int *)(param_1 + 0x2ac) != 0) &&
       (iVar3 = *(int *)(*(int *)(param_1 + 0x2ac) + 0x24), iVar3 != 0)) &&
      (puVar9 = *(undefined4 **)(iVar3 + 4), puVar9 != (undefined4 *)0x0)) &&
     ((*(int *)(param_1 + 0x210) != 0 &&
      (local_d4 = *(int *)(param_1 + 0x210) + 0x14, local_d4 != 0)))) {
    uVar6 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    apvStack_d0[0] = (void *)FUN_500a5e10(&DAT_5015c79c,uVar6);
    FUN_500a51d0(apvStack_d0[0],*(uint *)(param_1 + 0x164));
    pfVar1 = (float *)(param_1 + 4);
    FUN_500c3da0(pfVar1,(float *)(param_1 + 0x10),auStack_88);
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    FUN_500ed5a0(auStack_88,3,&uStack_fc);
    FUN_500ecd70((int)auStack_88);
    iStack_d8 = 0;
    piVar7 = *(int **)(*(int *)(param_1 + 0x2ac) + 0x24);
    iStack_10c = piVar7[1];
    if (0 < *piVar7) {
      do {
        if (((*(void **)(param_1 + 0x210) != (void *)0x0) &&
            (piVar7 = (int *)FUN_500b69f0(*(void **)(param_1 + 0x210),*(uint *)(iStack_10c + 4)),
            piVar7 != (int *)0x0)) &&
           ((iVar3 = *(int *)(iStack_10c + 4), iVar3 <= DAT_5014d1b4 &&
            ((0 < iVar3 && ((*(uint *)(local_d4 + 0xc) & 1 << ((char)iVar3 - 1U & 0x1f)) != 0))))))
        {
          uVar8 = (**(code **)(**(int **)((int)apvStack_d0[0] + 0x24) + 0x1c))();
          (**(code **)(**(int **)(param_1 + 0x164) + 200))(DAT_5015ccdc,apvStack_d0,uVar8,5,1);
          iStack_10c = 0;
          FUN_500ed5a0(&fStack_e4,3,(undefined4 *)&stack0xfffffeec);
          FUN_500ecd70((int)&fStack_e4);
          FUN_500ed0d0(auStack_5c,&fStack_e4,afStack_a0);
          (**(code **)(*piVar7 + 0xcc))(DAT_5015ccdc,auStack_5c,&fStack_108,&stack0xfffffee0,0,0);
          FUN_500c3bb0(pfVar1,(float *)(param_1 + 0x10),*(float **)(param_1 + 0x164),
                       (undefined4 *)0x0,*puVar9,&fStack_e4,(undefined4 *)0x0);
          fStack_f0 = (fStack_f0 + fStack_e4) - 2.0;
          fStack_ec = (fStack_e0 + fStack_ec) - 2.0;
          fStack_e8 = (fStack_dc + fStack_e8) - 2.0;
          fStack_108 = fStack_108 + fStack_e4 + 2.0;
          fStack_104 = fStack_104 + fStack_e0 + 2.0;
          fStack_100 = fStack_100 + fStack_dc + 2.0;
          if ((fStack_e8 <= in_stack_00000014[2]) &&
             ((((in_stack_00000014[2] < fStack_100 != (in_stack_00000014[2] == fStack_100) &&
                (fStack_ec <= in_stack_00000014[1])) &&
               (in_stack_00000014[1] < fStack_104 != (in_stack_00000014[1] == fStack_104))) &&
              ((fStack_f0 <= *in_stack_00000014 &&
               (*in_stack_00000014 < fStack_108 != (*in_stack_00000014 == fStack_108))))))) {
            (**(code **)(*piVar7 + 0x28))();
            if ((iRam00000004 <= DAT_5014d1b4) && (0 < iRam00000004)) {
              *(uint *)(local_d4 + 0xc) =
                   *(uint *)(local_d4 + 0xc) & ~(1 << ((char)iRam00000004 - 1U & 0x1f));
            }
            if ((code *)puVar9[2] == (code *)0x0) {
              uStack_fc = 0;
              uStack_f8 = 0;
              uStack_f4 = 0;
              FUN_50084270(&fStack_e4,&uStack_fc,5,1,*(char *)(param_1 + 0x31c),0,0,0,
                           (uint)*(byte *)(param_1 + 0x3c0));
              FUN_500849a0(&fStack_e4,0x78,0x78,0x78,200);
            }
            else {
              (*(code *)puVar9[2])(param_1,puVar9[1]);
            }
            break;
          }
        }
        iStack_d8 = iStack_d8 + 1;
        puVar9 = puVar9 + 3;
        iStack_10c = iStack_10c + 0xc;
      } while (iStack_d8 < **(int **)(*(int *)(param_1 + 0x2ac) + 0x24));
    }
    iVar3 = *(int *)(param_1 + 0x210) + 0x14;
    if ((iVar3 != 0) && (iVar4 = *(int *)(*(int *)(param_1 + 0x210) + 0x1c), iVar4 != param_1)) {
      for (; iVar4 != 0; iVar4 = *(int *)(*(int *)(iVar4 + 0x210) + 0x1c)) {
        pfVar2 = (float *)(iVar4 + 0x24c);
        *pfVar2 = *(float *)(iVar4 + 4) - *pfVar1;
        *(float *)(iVar4 + 0x250) = *(float *)(iVar4 + 8) - *(float *)(param_1 + 8);
        *(float *)(iVar4 + 0x254) = *(float *)(iVar4 + 0xc) - *(float *)(param_1 + 0xc);
        FUN_500fe050(pfVar2);
        fVar10 = (float10)(*DAT_5015cb20)(0x42960000,0x42fa0000);
        *pfVar2 = (float)(fVar10 * (float10)*pfVar2);
        *(float *)(iVar4 + 0x250) = (float)(fVar10 * (float10)*(float *)(iVar4 + 0x250));
        *(float *)(iVar4 + 0x254) = (float)(fVar10 * (float10)*(float *)(iVar4 + 0x254));
        fVar10 = (float10)(*DAT_5015cb20)(0xc1a00000,0x41a00000);
        iVar5 = *(int *)(iVar4 + 0x210);
        *(float *)(iVar4 + 0x14) = (float)(fVar10 + (float10)*(float *)(iVar4 + 0x14));
        *(float *)(iVar4 + 0x254) = *(float *)(iVar4 + 0x254) + 50.0;
        *(float *)(iVar4 + 0xc) = *(float *)(iVar4 + 0xc) + 15.0;
        *(undefined4 *)(iVar3 + 8) = 0;
        if (iVar5 == 0) {
          return;
        }
        iVar3 = *(int *)(iVar4 + 0x210) + 0x14;
      }
    }
  }
  return;
}

