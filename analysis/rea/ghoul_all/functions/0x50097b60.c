// rea decompile_all
// name: FUN_50097b60
// address: 0x50097b60
// body: available
// range: 0x50097b60-0x50097c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50097b60(float param_1)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  float unaff_ESI;
  float unaff_EDI;
  float unaff_retaddr;
  float fVar4;
  
  piVar2 = (int *)(**(code **)(**(int **)((int)param_1 + 0x164) + 0x88))();
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)param_1 + 0x318) == 0) {
      FUN_500b4160((int)param_1,&DAT_50149e74,0);
    }
    *(undefined4 *)((int)param_1 + 0x2cc) = 0;
    FUN_500b5010(param_1,(float)((int)param_1 + 4),0.0,0,unaff_EDI,unaff_ESI,unaff_retaddr,param_1);
    if (*(int *)((int)param_1 + 0x3c) != 0) {
      *(undefined4 *)((int)param_1 + 0x3c) = 0;
      uVar3 = (*DAT_5015c9f4)(s_Ambient_Models_Alarm_CarDisarm_w_5014ab9c,0x3f4ccccd,0x3f800000,0,0)
      ;
      (*DAT_5015ca48)(param_1,4,uVar3);
    }
    *(undefined4 *)((int)param_1 + 0x2c0) = 0;
    uVar3 = (**(code **)(*piVar2 + 0x1c))(s_dummy01_5014ab94);
    fVar4 = param_1;
    uVar1 = (*DAT_5015c9f8)(s_environ_helismoke_5012f9a4,param_1,uVar3,0);
    FUN_50085530(uVar1,(int)fVar4,(short)uVar3);
    *(code **)((int)param_1 + 0x2b8) = FUN_50097b20;
    *(float *)((int)param_1 + 0x2b4) = DAT_5015ccdc + 5.0;
  }
  return;
}

