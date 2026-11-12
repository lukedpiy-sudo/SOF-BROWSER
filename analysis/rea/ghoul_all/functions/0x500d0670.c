// rea decompile_all
// name: FUN_500d0670
// address: 0x500d0670
// body: available
// range: 0x500d0670-0x500d0768 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500d0670(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  if (iVar3 != 0) {
    if ((*(int *)(iVar3 + 0x4c) != 0) &&
       (piVar4 = *(int **)(*(int *)(iVar3 + 0x4c) + 0x1c), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 0x10))(0,DAT_5015ccdc);
    }
    if ((*(int *)(iVar3 + 0x50) != 0) &&
       (piVar4 = *(int **)(*(int *)(iVar3 + 0x50) + 0x1c), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 0x10))(0,DAT_5015ccdc);
    }
  }
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  if (piVar4 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar4 + 0x1c))(s_BODY1_50152a14);
    piVar4 = *(int **)(param_1 + 0x164);
    iVar8 = 0;
    iVar7 = 0;
    uVar6 = 1;
    iVar3 = param_1;
    iVar5 = (*DAT_5015c9f8)(s_weapons_world_autogundeath_5014af28);
    FUN_50085470(&DAT_5015c518,iVar5,iVar3,piVar4,uVar2,uVar6,iVar7,iVar8);
    uVar6 = (*DAT_5015c9f4)(s_impact_explosion_med_wav_50146574,0x3f800000,0x3f800000,0,0);
    (*DAT_5015ca4c)(param_1 + 4,DAT_5015cca0,0,uVar6);
  }
  _DAT_50189b64 = DAT_5015ccdc + 0.2;
  fVar1 = DAT_5015ccdc + 0.1;
  *(code **)(param_1 + 0x2b8) = FUN_500d05c0;
  *(float *)(param_1 + 0x2b4) = fVar1;
  return;
}

