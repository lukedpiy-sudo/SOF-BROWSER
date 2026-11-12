// rea decompile_all
// name: FUN_50103fe0
// address: 0x50103fe0
// body: available
// range: 0x50103fe0-0x5010416c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50103fe0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  undefined2 uVar6;
  
  piVar4 = FUN_500c3690();
  piVar4[0x6d] = (int)s_thrown_star_501560e4;
  piVar4[0x67] = 0xb;
  piVar4[0x56] = 0;
  piVar4[0x57] = 0x6000083;
  piVar4[0xa1] = 0;
  piVar4[0xa2] = 0;
  piVar4[0xa3] = 0;
  piVar4[0xa4] = 0;
  piVar4[0xa5] = 0;
  piVar4[1] = param_1[1];
  piVar4[2] = param_1[2];
  piVar4[3] = param_1[3];
  pfVar1 = (float *)(piVar4 + 0x93);
  *pfVar1 = (float)param_1[4] * 500.0;
  piVar4[0x94] = (int)((float)param_1[5] * 500.0);
  piVar4[0x95] = (int)((float)param_1[6] * 500.0);
  piVar4[0x47] = -0x40800000;
  piVar4[0x48] = -0x40800000;
  piVar4[0x49] = -0x40800000;
  piVar4[0x4a] = 0x3f800000;
  piVar4[0x4b] = 0x3f800000;
  piVar4[0x4c] = 0x3f800000;
  piVar4[0xbb] = 10000;
  piVar4[0xae] = (int)FUN_500c3880;
  fVar2 = DAT_5015ccdc + 3.0;
  piVar4[0xb0] = (int)&LAB_50103d00;
  piVar4[0xad] = (int)fVar2;
  FUN_500c3570(pfVar1,(float *)(piVar4 + 4));
  (*DAT_5015cb28)(piVar4);
  piVar4[0x58] = *param_1;
  piVar4[0x8d] = (int)*pfVar1;
  piVar4[0x8e] = piVar4[0x94];
  piVar4[0x8f] = piVar4[0x95];
  iVar5 = (*DAT_5015c9f4)(s_Weapons_Knife_ThrowLoop_wav_501560c8);
  piVar4[0xf] = iVar5;
  piVar4[0x10] = 0xf8;
  piVar4[0x8a] = (int)*pfVar1;
  piVar4[0x8b] = piVar4[0x94];
  piVar4[0x8c] = piVar4[0x95];
  FUN_500fe050((float *)(piVar4 + 0x8a));
  FUN_500a6090(&DAT_5015c79c,(int)piVar4,s_Enemy_Bolt_50133408,s_w_throw_star_50155cac,(char *)0x0,
               (char *)0x0);
  uVar6 = 0;
  uVar3 = (*DAT_5015c9f8)(s_weapons_world_startrail_50155cbc,piVar4,0,0);
  FUN_50085530(uVar3,(int)piVar4,uVar6);
  return;
}

