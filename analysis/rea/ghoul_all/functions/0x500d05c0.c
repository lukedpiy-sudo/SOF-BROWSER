// rea decompile_all
// name: FUN_500d05c0
// address: 0x500d05c0
// body: available
// range: 0x500d05c0-0x500d066c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500d05c0(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  if (piVar3 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar3 + 0x1c))(s_ROTOR_MAIN_50152a08);
    piVar3 = *(int **)(param_1 + 0x164);
    iVar8 = 0;
    iVar7 = 0;
    uVar6 = 1;
    iVar5 = param_1;
    iVar4 = (*DAT_5015c9f8)(s_weapons_world_autogundeath_5014af28);
    FUN_50085470(&DAT_5015c518,iVar4,iVar5,piVar3,uVar2,uVar6,iVar7,iVar8);
    uVar6 = (*DAT_5015c9f4)(s_impact_explosion_exp1_wav_50147320,0x3f800000,0x3f800000,0,0);
    (*DAT_5015ca4c)(param_1 + 4,DAT_5015cca0,0,uVar6);
  }
  _DAT_50189b64 = DAT_5015ccdc + 1.0;
  fVar1 = DAT_5015ccdc + 0.1;
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_500d0500;
  *(float *)(param_1 + 0x2b4) = fVar1;
  return;
}

