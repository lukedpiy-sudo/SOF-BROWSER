// rea decompile_all
// name: FUN_500d3620
// address: 0x500d3620
// body: available
// range: 0x500d3620-0x500d3754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d3620(int param_1,int *param_2,float *param_3)

{
  float fVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined2 uVar4;
  
  piVar3 = FUN_500c3690();
  piVar3[0x67] = 10;
  piVar3[0x56] = 2;
  piVar3[0x57] = 0x6000081;
  piVar3[1] = *param_2;
  piVar3[2] = param_2[1];
  piVar3[3] = param_2[2];
  piVar3[0x93] = (int)(*param_3 * 600.0);
  piVar3[0x94] = (int)(param_3[1] * 600.0);
  piVar3[0x95] = (int)(param_3[2] * 600.0);
  piVar3[0x47] = -0x3f800000;
  piVar3[0x48] = -0x40000000;
  piVar3[0x49] = -0x3f800000;
  piVar3[0x4a] = 0x40400000;
  piVar3[0x4b] = 0x40000000;
  piVar3[0x4c] = 0x40800000;
  piVar3[0xbb] = 100;
  piVar3[0xae] = (int)thunk_FUN_500c3880;
  fVar1 = DAT_5015ccdc + 10.0;
  piVar3[0xb0] = (int)&LAB_500d3580;
  piVar3[0xa2] = 0x3ca3d70a;
  piVar3[0xad] = (int)fVar1;
  FUN_500c3570(param_3,(float *)(piVar3 + 4));
  (*DAT_5015cb28)(piVar3);
  piVar3[0x58] = param_1;
  FUN_500a6090(&DAT_5015c79c,(int)piVar3,s_Weapon_Projectiles_Rocket_50152ad0,s_Rocket_50152aec,
               (char *)0x0,(char *)0x0);
  uVar4 = 0;
  uVar2 = (*DAT_5015c9f8)(s_weapons_world_rockettrail2_50152ab4,piVar3,0,0);
  FUN_50085530(uVar2,(int)piVar3,uVar4);
  return;
}

