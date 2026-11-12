// rea decompile_all
// name: FUN_500e97d0
// address: 0x500e97d0
// body: available
// range: 0x500e97d0-0x500e9b29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_500e97d0(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined2 extraout_var;
  uint uVar10;
  int *unaff_EBX;
  int *unaff_ESI;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float fVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 auStack_4c [3];
  undefined1 auStack_40 [4];
  float fStack_3c;
  float fStack_4;
  
  iVar5 = (**(code **)(*param_1 + 0x240))();
  uVar10 = 0;
  if (((iVar5 != 0) && (uVar10 = *(uint *)(iVar5 + 0x60), uVar10 != 0)) &&
     (*(int **)(uVar10 + 0x1c) != (int *)0x0)) {
    piVar6 = (int *)(**(code **)(**(int **)(uVar10 + 0x1c) + 0x88))();
    uVar10 = 0;
    if (((piVar6 != (int *)0x0) && (uVar10 = *(uint *)(iVar5 + 0xac), uVar10 != 0)) &&
       (*(int **)(uVar10 + 0x1c) != (int *)0x0)) {
      piVar7 = (int *)(**(code **)(**(int **)(uVar10 + 0x1c) + 0x88))();
      uVar10 = 0;
      if (piVar7 != (int *)0x0) {
        puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x1c))(s__flash1_50153db0);
        puVar9 = (undefined4 *)(**(code **)(*piVar7 + 0x1c))(s__flash1_50153db0);
        fVar3 = fStack_4;
        FUN_500d3000((undefined4 *)((int)fStack_4 + 4),(float *)(param_1[0x61] + 0x10),unaff_EBX,
                     puVar8,0,auStack_4c,&fStack_58);
        if ((*(char *)((int)param_1 + 0x291) != '\0') &&
           ((*DAT_5015cac0)(auStack_4c,0,0,param_1 + 0xa6,fStack_4,3,auStack_40), fStack_3c < 1.0))
        {
          FUN_500d3000((undefined4 *)((int)fStack_4 + 4),(float *)(param_1[0x61] + 0x10),unaff_ESI,
                       puVar9,0,auStack_4c,&fStack_58);
          (*DAT_5015cac0)(auStack_4c,0,0,param_1 + 0xa6,fStack_4,3,auStack_40);
          uVar10 = CONCAT22(extraout_var,
                            (ushort)(fStack_3c < 1.0) << 8 | (ushort)NAN(fStack_3c) << 10 |
                            (ushort)(fStack_3c == 1.0) << 0xe);
          if (fStack_3c < 1.0) goto LAB_500e9b1f;
        }
        fVar13 = DAT_5015ccdc - (float)param_1[0xa5];
        fStack_4 = (float)DAT_5015d950;
        fVar11 = (float10)(*DAT_5015cb20)(0,0x3e4ccccd);
        iVar5 = DAT_5015d950;
        fVar11 = fVar11 * (float10)(int)fStack_4 + (float10)0.2;
        uVar1 = (ushort)(DAT_5015ccdc - (float)param_1[0xa5] < 0.0);
        uVar2 = (ushort)(DAT_5015ccdc - (float)param_1[0xa5] == 0.0);
        uVar10 = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe);
        if (uVar1 == 0 && uVar2 == 0) {
          if ((float10)fVar13 < fVar11) {
            iVar16 = 0;
            iVar15 = 0;
            uVar14 = 1;
            fStack_4 = (float)(5 - DAT_5015d950) * 0.05;
            fVar13 = fVar3;
            iVar5 = (*DAT_5015c9f8)(s_weapons_othermz_machinegun_50143f0c);
            FUN_50085470(&DAT_5015c518,iVar5,(int)fVar13,unaff_EBX,(short)puVar8,uVar14,iVar15,
                         iVar16);
            iVar16 = 0;
            iVar15 = 0;
            uVar14 = 1;
            fVar13 = fVar3;
            piVar6 = unaff_ESI;
            puVar8 = puVar9;
            iVar5 = (*DAT_5015c9f8)(s_weapons_othermz_machinegun_50143f0c);
            FUN_50085470(&DAT_5015c518,iVar5,(int)fVar13,piVar6,(short)puVar8,uVar14,iVar15,iVar16);
            fVar4 = fStack_4;
            fVar13 = -fStack_4;
            fVar11 = (float10)(*DAT_5015cb20)(fVar13,fStack_4);
            fVar12 = (float10)(*DAT_5015cb20)(fVar13,fVar4);
            fStack_4 = (float)fVar12;
            fVar12 = (float10)(*DAT_5015cb20)(fVar13,fVar4);
            fStack_58 = (float)(fVar12 + (float10)fStack_58);
            fStack_54 = fStack_54 + fStack_4;
            fStack_50 = fStack_50 + (float)fVar11;
            FUN_500659c0(&DAT_50159b18,0xc,(int)fVar3,auStack_4c,&fStack_58,(float *)0x0,
                         (undefined4 *)0x0);
            FUN_500d3000((undefined4 *)((int)fVar3 + 4),(float *)(param_1[0x61] + 0x10),unaff_ESI,
                         puVar9,0,auStack_4c,&fStack_58);
            uVar14 = FUN_500659c0(&DAT_50159b18,0xc,(int)fVar3,auStack_4c,&fStack_58,(float *)0x0,
                                  (undefined4 *)0x0);
            return CONCAT31((int3)((uint)uVar14 >> 8),1);
          }
        }
        else if ((float10)fVar13 < fVar11) goto LAB_500e9b1f;
        uVar10 = (*DAT_5015cb20)(0x3e99999a,0x3f19999a);
        param_1[0xa5] = (int)(float)(extraout_ST0 * (float10)(5 - iVar5) + (float10)DAT_5015ccdc);
      }
    }
  }
LAB_500e9b1f:
  return CONCAT31((int3)(uVar10 >> 8),1);
}

