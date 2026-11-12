// rea decompile_all
// name: FUN_5001d0d0
// address: 0x5001d0d0
// body: available
// range: 0x5001d0d0-0x5001d782 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall
FUN_5001d0d0(void *this,int param_1,int param_2,float *param_3,undefined4 *param_4,char param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  void *this_00;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float unaff_EDI;
  float10 fVar12;
  short sVar13;
  undefined1 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uStack_25c;
  undefined1 auStack_254 [12];
  int iStack_248;
  undefined1 auStack_234 [32];
  float afStack_214 [4];
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1f4;
  float afStack_1d0 [9];
  float afStack_1ac [5];
  undefined4 auStack_198 [10];
  undefined4 auStack_170 [6];
  undefined4 uStack_158;
  float fStack_148;
  undefined1 auStack_144 [20];
  undefined4 uStack_130;
  float afStack_104 [17];
  undefined4 uStack_c0;
  float afStack_9c [8];
  undefined1 auStack_7c [52];
  undefined4 uStack_48;
  undefined4 uStack_38;
  char cStack_28;
  
  piVar5 = FUN_500c3690();
  piVar5[0x56] = 0;
  piVar5[0x57] = 0x4010003;
  piVar5[0x46] = piVar5[0x46] | 2;
  piVar5[0x93] = (int)(*param_3 * 75.0);
  piVar5[0x94] = (int)(param_3[1] * 75.0);
  piVar5[0x95] = (int)(param_3[2] * 75.0);
  iVar6 = (*DAT_5015cb24)();
  piVar5[0x95] = (int)(float)iVar6;
  piVar5[0x96] = 0;
  piVar5[0x97] = 0;
  piVar5[0x98] = 0;
  uVar7 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  this_00 = (void *)FUN_500a5e10(&DAT_5015c79c,uVar7);
  piVar5[0x58] = param_1;
  piVar8 = FUN_50008e90(0xd,(int)piVar5);
  piVar5[0x114] = (int)piVar8;
  FUN_50038c60(&DAT_5018b440,piVar8);
  piVar5[0xae] = (int)&LAB_5001d0b0;
  piVar5[0xb0] = (int)&LAB_5001d070;
  fVar2 = DAT_5015ccdc + 0.1;
  piVar5[0x67] = 0xb;
  piVar5[0xa1] = 0x3f000000;
  piVar5[0xa2] = 0x3f800000;
  piVar5[0xa3] = 0x3dcccccd;
  piVar5[0xa4] = 0x3f333333;
  piVar5[0xad] = (int)fVar2;
  piVar5[0xa5] = 0x3f000000;
  puVar9 = FUN_500a5040(this_00,(int)piVar5,*(int **)(param_1 + 0x164));
  *param_4 = puVar9;
  piVar5[0xd] = 0x400000;
  iVar11 = param_2 * 0x30;
  iVar10 = *(int *)((int)this + 100) + iVar11;
  uStack_25c = (float)CONCAT22((short)((uint)puVar9 >> 0x10),*(short *)(iVar10 + 10));
  if (*(short *)(iVar10 + 10) == 0) {
    uStack_25c = (float)CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(iVar10 + 0xc));
  }
  iStack_248 = iVar11;
  if ((SUB42(uStack_25c,0) == 0) || (*(short *)(iVar10 + 2) == 0)) {
    iVar6 = (**(code **)(*(int *)this + 0x4c))();
    if (iVar6 == 0) {
      FUN_500c3880(piVar5);
      return (int *)0x0;
    }
    iVar6 = *(int *)piVar5[0x59];
    puVar14 = (undefined1 *)0x5001d66f;
    FUN_500113d0(param_1,0x50135c48);
    (**(code **)(iVar6 + 0x44))();
    piVar5[1] = *(int *)(param_1 + 4);
    piVar5[2] = *(int *)(param_1 + 8);
    piVar5[3] = *(int *)(param_1 + 0xc);
    piVar5[3] = (int)((float)piVar5[3] + 24.0);
    piVar5[0x47] = -0x3f000000;
    piVar5[0x48] = -0x3f000000;
    piVar5[0x49] = -0x3f000000;
    piVar5[0x4a] = 0x41000000;
    piVar5[0x4b] = 0x41000000;
    piVar5[0x4c] = 0;
  }
  else {
    if (param_5 != '\0') {
      FUN_50084640((int)piVar5,SUB42(uStack_25c,0),400);
    }
    piVar5[0xbd] = (uint)*(ushort *)(*(int *)((int)this + 100) + 2 + iVar11);
    uStack_158 = 0;
    FUN_500c3da0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),auStack_198);
    fVar17 = DAT_5015ccdc;
    uStack_48 = 0;
    fVar19 = 1.4013e-45;
    fVar18 = 7.00649e-45;
    (**(code **)(**(int **)(param_1 + 0x164) + 200))();
    uStack_1f4 = 0;
    FUN_500ed0d0(auStack_234,afStack_9c,afStack_1ac);
    iVar6 = *(int *)piVar5[0x59];
    iVar10 = (**(code **)(**(int **)(param_1 + 0x164) + 0x78))();
    (**(code **)(iVar6 + 0x74))();
    fVar16 = DAT_5015ccdc;
    (**(code **)(*(int *)piVar5[0x59] + 0x4c))();
    uStack_130 = 0;
    FUN_500ecdc0(auStack_170);
    puVar14 = &stack0xfffffda0;
    (**(code **)(*(int *)piVar5[0x59] + 0xcc))(DAT_5015ccdc + 0.3,auStack_170,puVar14,auStack_254);
    fVar2 = (unaff_EDI + uStack_25c) * 0.5;
    pfVar1 = (float *)(piVar5 + 1);
    uStack_c0 = 0;
    afStack_1d0[0] = 0.0;
    afStack_104[0] = 0.0;
    uStack_38 = 0;
    fVar3 = (fStack_204 + fVar18) * 0.5;
    fVar15 = (fStack_200 + fVar19) * 0.5;
    piVar5[0x47] = (int)(uStack_25c - fVar2);
    piVar5[0x48] = (int)(fVar18 - fVar3);
    piVar5[0x49] = (int)(fVar19 - fVar15);
    piVar5[0x4a] = (int)(unaff_EDI - fVar2);
    piVar5[0x4b] = (int)(fStack_204 - fVar3);
    piVar5[0x4c] = (int)(fStack_200 - fVar15);
    *pfVar1 = fVar16;
    piVar5[2] = iVar10;
    piVar5[3] = (int)fVar17;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    (**(code **)(**(int **)(param_1 + 0x164) + 8))(auStack_144);
    FUN_500ed0d0(afStack_104,&fStack_148,afStack_1d0);
    FUN_500c3da0(pfVar1,(float *)(piVar5 + 4),afStack_214);
    FUN_500ec880(afStack_214,afStack_214);
    FUN_500ed0d0(auStack_7c,afStack_104,afStack_214);
    (*(code *)**(undefined4 **)piVar5[0x59])(auStack_7c);
    fVar16 = *pfVar1 - *(float *)(param_1 + 4);
    fVar2 = (float)piVar5[2];
    fVar3 = *(float *)(param_1 + 8);
    fVar18 = (float)piVar5[3] - *(float *)(param_1 + 0xc);
    FUN_500fe050((float *)&stack0xfffffd70);
    fVar12 = (float10)(*DAT_5015cb20)(0xc2480000,0x42480000);
    fVar15 = (float)fVar12;
    fVar12 = (float10)(*DAT_5015cb20)(0xc2480000,0x42480000);
    fVar17 = (float)fVar12;
    fVar12 = (float10)(*DAT_5015cb20)(0xc2480000,0x42480000);
    piVar5[0x93] = (int)(float)fVar12;
    piVar5[0x94] = (int)fVar17;
    piVar5[0x95] = (int)fVar15;
    fVar12 = (float10)(*DAT_5015cb20)(0x42c80000,0x43480000);
    piVar5[0x93] = (int)(float)((float10)fVar16 * fVar12 + (float10)(float)piVar5[0x93]);
    piVar5[0x94] = (int)(float)((float10)(fVar2 - fVar3) * fVar12 + (float10)(float)piVar5[0x94]);
    piVar5[0x95] = (int)(float)((float10)fVar18 * fVar12 + (float10)(float)piVar5[0x95]);
    fVar12 = (float10)(*DAT_5015cb20)(0xc1f00000,0x41f00000);
    piVar5[5] = (int)(float)(fVar12 + (float10)(float)piVar5[5]);
    if (((float)piVar5[0x4a] - (float)piVar5[0x47] < (float)piVar5[0x4c] - (float)piVar5[0x49]) &&
       ((float)piVar5[0x4b] - (float)piVar5[0x48] < (float)piVar5[0x4c] - (float)piVar5[0x49])) {
      piVar5[0x96] = -0x3cea0000;
    }
  }
  piVar5[0xbb] = 300;
  (*DAT_5015cb28)(piVar5);
  iVar6 = 1;
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar4 = (**(code **)(*piVar8 + 0x20))();
  sVar13 = (short)puVar14;
  if (sVar4 != 0) {
    do {
      piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      iVar10 = (**(code **)(*piVar8 + 0x24))(iVar6);
      if (iVar10 == 1) {
        (**(code **)(*(int *)piVar5[0x59] + 0x20))(iVar6,0);
      }
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar7 = (**(code **)(*piVar8 + 0x20))();
      sVar13 = (short)puVar14;
    } while (iVar6 <= (int)(uVar7 & 0xffff));
  }
  if (cStack_28 != '\0') {
    FUN_50084500((int)piVar5,sVar13);
  }
  return piVar5;
}

