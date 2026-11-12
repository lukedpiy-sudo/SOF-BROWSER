// rea decompile_all
// name: FUN_500ff090
// address: 0x500ff090
// body: available
// range: 0x500ff090-0x500ff2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ff090(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  float10 fVar10;
  
  iVar2 = FUN_500f7190(param_1);
  piVar3 = FUN_500c3690();
  fVar10 = (float10)(*DAT_5015cb20)(0x43480000,0x43c80000);
  FUN_501007a0(param_1,(int)piVar3,400.0,0.0,(float)fVar10);
  FUN_50100890((int)piVar3,0x3f333333,0x3f800000,0,0,0x3f333333);
  if (iVar2 == 0) {
    piVar3[1] = *(int *)(param_1 + 4);
    piVar3[2] = *(int *)(param_1 + 8);
    piVar3[3] = *(int *)(param_1 + 0xc);
    fVar1 = (float)*(int *)(param_1 + 0x304) + (float)piVar3[3];
  }
  else {
    piVar3[1] = *(int *)(iVar2 + 4);
    piVar3[2] = *(int *)(iVar2 + 8);
    piVar3[3] = *(int *)(iVar2 + 0xc);
    fVar1 = (float)*(int *)(param_1 + 0x304) + *(float *)(param_1 + 0xc);
  }
  piVar3[3] = (int)fVar1;
  piVar3[0x49] = -0x3fc00000;
  piVar3[0x47] = -0x40000000;
  piVar3[0x48] = -0x40000000;
  piVar3[0x4c] = 0x40400000;
  piVar3[0x4a] = 0x40000000;
  piVar3[0x4b] = 0x40000000;
  piVar3[0xbb] = 100;
  piVar3[0xae] = (int)&LAB_500feff0;
  piVar3[0xad] = (int)(DAT_5015ccdc + 1.5);
  iVar2 = (*DAT_5015cb24)(0xfffffed4,300);
  iVar4 = (*DAT_5015cb24)(0xfffffed4,300);
  iVar5 = (*DAT_5015cb24)(0xfffffed4,300);
  piVar3[0x98] = (int)(float)iVar2;
  piVar3[0x96] = (int)(float)iVar5;
  piVar3[0x97] = (int)(float)iVar4;
  FUN_500a6090(&DAT_5015c79c,(int)piVar3,s_Items_Projectiles_501338d4,s_flashpak_50143c40,
               (char *)0x0,(char *)0x0);
  (*DAT_5015cb28)(piVar3);
  piVar3[0x58] = param_1;
  piVar3[0xb0] = (int)FUN_500fef60;
  piVar3[0x68] = 0x400000;
  iVar2 = DAT_50159710;
  piVar9 = *(int **)(DAT_50159710 + 4);
  piVar6 = operator_new(0xc);
  *piVar6 = iVar2;
  if (piVar9 == (int *)0x0) {
    piVar9 = piVar6;
  }
  piVar6[1] = (int)piVar9;
  *(int **)(iVar2 + 4) = piVar6;
  *(int **)piVar6[1] = piVar6;
  if (piVar6 + 2 != (int *)0x0) {
    piVar6[2] = (int)piVar3;
  }
  DAT_50159714 = DAT_50159714 + 1;
  uVar7 = (*DAT_5015c9f4)(s_Weapons_gren_throw_wav_50133c3c,0x3f19999a,0x3f800000,0,0);
  (*DAT_5015ca48)(param_1,2,uVar7);
  uVar8 = FUN_500b7600((int)piVar3);
  if (uVar8 != 0) {
    (*(code *)piVar3[0xb0])(piVar3,DAT_5015cca0,0,0);
  }
  return;
}

