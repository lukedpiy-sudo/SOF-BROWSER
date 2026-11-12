// rea decompile_all
// name: FUN_500a75c0
// address: 0x500a75c0
// body: available
// range: 0x500a75c0-0x500a76ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a75c0(uint param_1)

{
  float fVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 0x1c))(s_ENGINE_5014656c);
      if ((short)uVar4 != 0) {
        uVar5 = param_1;
        uVar2 = (*DAT_5015c9f8)(s_environ_normalsmoke_50146558,param_1,uVar4,0);
        FUN_50085530(uVar2,uVar5,(short)uVar4);
        uVar4 = (*DAT_5015c9f4)(s_impact_explosion_med_wav_50146574,0x3f800000,0x3f800000,0,0);
        (*DAT_5015ca4c)(param_1 + 4,DAT_5015cca0,0,uVar4);
        *(code **)(param_1 + 0x2b8) = FUN_500a7570;
        fVar1 = DAT_5015ccdc + 5.0;
        *(undefined4 *)(param_1 + 0x2d0) = 0;
        *(float *)(param_1 + 0x2b4) = fVar1;
        if ((*(byte *)(param_1 + 0x1b8) & 8) != 0) {
          uVar4 = 0;
          piVar3 = (int *)FUN_500b4a40(param_1,1);
          FUN_500b3fc0(piVar3,uVar4);
          uVar4 = 0;
          piVar3 = (int *)FUN_500b4a40(param_1,2);
          FUN_500b3fc0(piVar3,uVar4);
          FUN_500b3dc0(param_1,0x5014b968);
          FUN_500b3dc0(param_1,0x5014b95c);
        }
      }
    }
  }
  return;
}

