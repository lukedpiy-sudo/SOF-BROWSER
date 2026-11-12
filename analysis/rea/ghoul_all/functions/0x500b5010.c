// rea decompile_all
// name: FUN_500b5010
// address: 0x500b5010
// body: available
// range: 0x500b5010-0x500b50c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_500b5010(float param_1,float param_2,float param_3,int param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  int iVar1;
  float unaff_ESI;
  float unaff_EDI;
  float unaff_retaddr;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_5008c220(param_1,param_1,100.0,(int)param_1,100.0,0.0,0.0,unaff_EDI,unaff_ESI,unaff_retaddr,
               param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (param_3 != 0.0) {
    FUN_500c4490(param_1);
  }
  FUN_500b1950(param_1,200.0,200.0,unaff_EDI,unaff_ESI,unaff_retaddr);
  iVar4 = 0;
  uVar3 = 1;
  iVar2 = (int)param_1 + 4;
  iVar1 = (*DAT_5015c9f8)(s_weapons_world_airexplode_50133ddc);
  FUN_500852e0(&DAT_5015c518,iVar1,iVar2,uVar3,iVar4);
  FUN_50084370((int)param_1);
  if (param_4 != 0) {
    FUN_500aec30(param_2,(float)(*(int *)((int)param_1 + 0x2ec) * 10),0.9,0.5,unaff_EDI,unaff_ESI,
                 unaff_retaddr,param_1,param_2,param_3,param_4,param_5);
  }
  FUN_500aeb50((int)param_1 + 4,1.4013e-43,2.8026e-43,4.2039e-44);
  return;
}

