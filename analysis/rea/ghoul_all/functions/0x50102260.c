// rea decompile_all
// name: FUN_50102260
// address: 0x50102260
// body: available
// range: 0x50102260-0x5010248c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50102260(int param_1,int *param_2,int *param_3,int param_4)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  
  piVar2 = FUN_500c3690();
  FUN_500a6090(&DAT_5015c79c,(int)piVar2,s_Items_Projectiles_501338d4,s_grenade_501338e8,(char *)0x0
               ,(char *)0x0);
  piVar2[0xa4] = 0;
  piVar2[0xa3] = 0;
  piVar2[0xa2] = 0x3f800000;
  piVar2[0xa1] = 0x3f333333;
  piVar2[0x57] = 0x6000083;
  piVar2[0x56] = 0;
  piVar2[0x67] = 0xb;
  if (param_4 == 0) {
    piVar2[0xa5] = 0x3f000000;
  }
  else {
    piVar2[0xa5] = 0x3e19999a;
  }
  piVar2[1] = *param_2;
  piVar2[2] = param_2[1];
  piVar2[3] = param_2[2];
  piVar2[0x93] = *param_3;
  piVar2[0x94] = param_3[1];
  piVar2[0x95] = param_3[2];
  piVar2[0x47] = -0x40000000;
  piVar2[0x48] = -0x40000000;
  piVar2[0x49] = -0x3fc00000;
  piVar2[0x4a] = 0x40000000;
  piVar2[0x4b] = 0x40000000;
  piVar2[0x4c] = 0x40400000;
  piVar2[0xbb] = 0x15;
  piVar2[0xae] = (int)&LAB_50102140;
  fVar1 = DAT_5015ccdc + 0.1;
  piVar2[0xa2] = 0x3f800000;
  piVar2[0xad] = (int)fVar1;
  (*DAT_5015cb28)(piVar2);
  piVar2[0x58] = param_1;
  piVar2[0xb0] = (int)FUN_50101f60;
  piVar2[0x68] = 0x400000;
  iVar3 = (*DAT_5015cb24)(0xfffffed4,300);
  iVar4 = (*DAT_5015cb24)(0xfffffed4,300);
  iVar5 = (*DAT_5015cb24)(0xfffffed4,300);
  piVar2[0x97] = (int)(float)iVar4;
  piVar2[0x98] = (int)(float)iVar3;
  piVar2[0x96] = (int)(float)iVar5;
  iVar3 = DAT_50159728;
  piVar9 = *(int **)(DAT_50159728 + 4);
  piVar6 = operator_new(0xc);
  *piVar6 = iVar3;
  if (piVar9 == (int *)0x0) {
    piVar9 = piVar6;
  }
  piVar6[1] = (int)piVar9;
  *(int **)(iVar3 + 4) = piVar6;
  *(int **)piVar6[1] = piVar6;
  if (piVar6 + 2 != (int *)0x0) {
    piVar6[2] = (int)piVar2;
  }
  DAT_5015972c = DAT_5015972c + 1;
  uVar7 = (*DAT_5015c9f4)(s_Weapons_gren_throw_wav_50133c3c,0x3f19999a,0x3f800000,0,0);
  (*DAT_5015ca48)(param_1,2,uVar7);
  uVar8 = FUN_500b7600((int)piVar2);
  if (uVar8 != 0) {
    (*(code *)piVar2[0xb0])(piVar2,DAT_5015cca0,0,0);
  }
  return;
}

