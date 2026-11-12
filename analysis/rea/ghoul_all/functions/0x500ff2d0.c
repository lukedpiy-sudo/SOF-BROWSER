// rea decompile_all
// name: FUN_500ff2d0
// address: 0x500ff2d0
// body: available
// range: 0x500ff2d0-0x500ff354 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_500ff2d0(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,float param_7,float param_8,float param_9)

{
  int iVar1;
  float unaff_ESI;
  float unaff_retaddr;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_5008c220(param_1,param_1,400.0,(int)param_1,256.0,2.66247e-44,2.941617e-39,unaff_ESI,
               unaff_retaddr,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
              );
  FUN_500b1950(param_1,400.0,300.0,unaff_ESI,unaff_retaddr,param_1);
  _DAT_5015c524 = *(undefined4 *)((int)param_1 + 4);
  iVar2 = (int)param_1 + 4;
  iVar4 = 0;
  _DAT_5015c528 = *(undefined4 *)((int)param_1 + 8);
  uVar3 = 1;
  _DAT_5015c52c = *(undefined4 *)((int)param_1 + 0xc);
  DAT_5015c51c = DAT_5015c51c | 4;
  iVar1 = (*DAT_5015c9f8)(s_weapons_world_emitter_50155a00);
  uVar3 = FUN_500852e0(&DAT_5015c518,iVar1,iVar2,uVar3,iVar4);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

