// rea decompile_all
// name: FUN_500d33e0
// address: 0x500d33e0
// body: available
// range: 0x500d33e0-0x500d3570 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float __cdecl FUN_500d33e0(int param_1,float *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 auStack_40 [16];
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  if (*(int *)(iVar2 + 0x44) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x44) + 0x1c);
  }
  sVar1 = *(short *)(iVar2 + 0x70);
  FUN_500b5750(auStack_40);
  if ((iVar3 != 0) && (sVar1 != 0)) {
    if (param_3 != 0) {
      if (*(int *)(iVar2 + 0x4c) == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(*(int *)(iVar2 + 0x4c) + 0x1c);
      }
      FUN_500d3000((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),piVar5,(undefined4 *)0x0,
                   s_to_body_5015280c,&fStack_58,&fStack_4c);
      fStack_58 = *param_2 * 1000.0 + fStack_58;
      fStack_54 = param_2[1] * 1000.0 + fStack_54;
      fStack_50 = param_2[2] * 1000.0 + fStack_50;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
      fStack_4c = fStack_58;
      fStack_44 = fStack_50;
      fStack_48 = fStack_54;
      if (*(int *)(iVar3 + 0x4c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar3 + 0x4c) + 0x1c);
      }
      FUN_500d1fc0(param_1,&fStack_4c,iVar4,*(short *)(iVar3 + 0x74));
    }
    if (*(int *)(iVar2 + 0x48) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(*(int *)(iVar2 + 0x48) + 0x1c);
    }
    FUN_500d3000((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),piVar5,(undefined4 *)0x0,
                 s_DUMMY01_50146508,&fStack_58,&fStack_4c);
    fStack_58 = *param_2 * 1000.0 + fStack_58;
    fStack_54 = param_2[1] * 1000.0 + fStack_54;
    fStack_50 = param_2[2] * 1000.0 + fStack_50;
    fVar6 = FUN_500d3230(param_1,&fStack_58,param_3);
    return fVar6;
  }
  return 4.2039e-45;
}

