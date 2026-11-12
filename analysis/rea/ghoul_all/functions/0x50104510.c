// rea decompile_all
// name: FUN_50104510
// address: 0x50104510
// body: available
// range: 0x50104510-0x501045b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50104510(float *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if ((*param_1 == 0.0) || (*(int *)((int)*param_1 + 0x74) == 0)) {
    piVar4 = FUN_500c3690();
    FUN_5008c850((int)piVar4);
    fVar1 = DAT_5015ccdc + 0.4;
    piVar4[0xae] = (int)&LAB_50104490;
    piVar4[0xad] = (int)fVar1;
    piVar4[0x58] = (int)*param_1;
    piVar4[1] = (int)param_1[1];
    piVar4[2] = (int)param_1[2];
    piVar4[3] = (int)param_1[3];
    piVar4[4] = (int)param_1[4];
    piVar4[5] = (int)param_1[5];
    piVar4[6] = (int)param_1[6];
  }
  else {
    FUN_50104170(param_1);
    iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar2 != 0) {
      uVar3 = FUN_50065910((int)param_1[8]);
      FUN_50084e60(param_1 + 1,param_1 + 4,(int)*param_1,param_1[7],uVar3);
      return;
    }
  }
  return;
}

