// rea decompile_all
// name: FUN_50095f90
// address: 0x50095f90
// body: available
// range: 0x50095f90-0x5009604b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_50095f90(int *param_1,float param_2,int param_3,undefined4 param_4,float param_5,float param_6,
            float param_7)

{
  float *pfVar1;
  int iVar2;
  float unaff_ESI;
  float unaff_EDI;
  float unaff_retaddr;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  param_1[0xb4] = 0;
  if ((*(byte *)(param_1 + 0x6e) & 4) != 0) {
    pfVar1 = (float *)(param_1 + 1);
    FUN_50084210(pfVar1,param_1);
    iVar5 = 0;
    uVar4 = 1;
    pfVar3 = pfVar1;
    iVar2 = (*DAT_5015c9f8)(s_weapons_world_airexplode_50133ddc);
    FUN_500852e0(&DAT_5015c518,iVar2,pfVar3,uVar4,iVar5);
    piVar6 = param_1;
    FUN_50084370((int)param_1);
    FUN_5008c220((float)param_1,(float)param_1,350.0,(int)param_1,128.0,0.0,0.0,(float)piVar6,
                 unaff_EDI,unaff_ESI,unaff_retaddr,(float)param_1,param_2,param_3,param_4,param_5,
                 param_6,param_7);
    FUN_500b1950((float)param_1,150.0,200.0,unaff_EDI,unaff_ESI,unaff_retaddr);
    FUN_500aeb50(pfVar1,9.80909e-43,1.4013e-42,4.2039e-44);
    FUN_500ee7f0(0.5);
  }
  FUN_500b3420(param_1,param_2,param_3);
  return;
}

