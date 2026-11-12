// rea decompile_all
// name: FUN_50101f60
// address: 0x50101f60
// body: available
// range: 0x50101f60-0x50102106 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50101f60(int *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float unaff_ESI;
  float unaff_retaddr;
  undefined1 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (DAT_5015d8d5 != '\0') {
    FUN_500c3880(param_1);
    return;
  }
  iVar1 = FUN_500f7430(param_2);
  iVar2 = param_2;
  if (iVar1 != 0) {
    iVar2 = FUN_500f7430(param_2);
  }
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if ((iVar1 != 0) && (*(int *)(iVar2 + 0x74) != 0)) {
    fVar5 = 0.4;
    FUN_500ee7f0(0.4);
    fVar6 = (float)param_1[1];
    fVar7 = (float)param_1[2];
    fVar8 = (float)param_1[3] + 10.0;
    FUN_5008c460(param_1,(float)param_1[0x58],(float)&stack0xfffffff4,200.0,40.0,200.0,0.0,
                 5.04467e-44,1.515286e-39,fVar5,unaff_ESI,fVar6,fVar7,fVar8,unaff_retaddr);
    puVar3 = &stack0xfffffff4;
    iVar1 = 0;
    uVar4 = 1;
    iVar2 = (*DAT_5015c9f8)(s_weapons_world_grenadeexplode_50155938);
    FUN_500852e0(&DAT_5015c518,iVar2,puVar3,uVar4,iVar1);
    FUN_500aec30((float)&stack0xfffffff4,2.8026e-42,0.8,0.5,unaff_ESI,fVar6,fVar7,fVar8,
                 unaff_retaddr,(float)param_1,param_2,param_3);
    FUN_500b1950((float)param_1,130.0,250.0,unaff_ESI,fVar6,fVar7);
    FUN_50059490(&DAT_50159680,(int)param_1);
    FUN_500c3880(param_1);
    return;
  }
  if ((100.0 < (float)param_1[0x95] * (float)param_1[0x95] +
               (float)param_1[0x94] * (float)param_1[0x94] +
               (float)param_1[0x93] * (float)param_1[0x93]) && (param_4 != 0)) {
    switch(*(undefined1 *)(param_4 + 0x23)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x28:
      break;
    default:
      uVar4 = (*DAT_5015c9f4)(s_Weapons_gren_bounce_wav_501559e8,0x3f19999a,0x40000000,0,0);
      (*DAT_5015ca48)(param_1,2,uVar4);
    }
  }
  return;
}

