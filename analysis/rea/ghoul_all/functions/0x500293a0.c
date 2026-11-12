// rea decompile_all
// name: FUN_500293a0
// address: 0x500293a0
// body: available
// range: 0x500293a0-0x500295a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall
FUN_500293a0(void *this,int param_1,int *param_2,int param_3,undefined4 param_4,float *param_5,
            float *param_6,float *param_7,undefined4 *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [56];
  
  fVar1 = (float)param_2[0x8e];
  fVar2 = (float)param_2[0x8d];
  fVar3 = (float)param_2[0x8f];
  iVar4 = *(int *)(param_3 + 0x74);
  local_5c = *(float *)(param_3 + 4) + *(float *)(iVar4 + 0x28);
  local_58 = *(float *)(param_3 + 8) + *(float *)(iVar4 + 0x2c);
  local_54 = *(float *)(param_3 + 0xc) + *(float *)(iVar4 + 0x30);
  local_50 = fVar2 + fVar2 + local_5c;
  local_4c = fVar1 + fVar1 + local_58;
  local_48 = fVar3 + fVar3 + local_54;
  (*DAT_5015cac4)(&local_5c,0,0,&local_50,param_3,0x6000081,local_38,&LAB_50100380);
  if (DAT_5018bf80 == 0) {
    iVar4 = (**(code **)(*(int *)this + 0x154))(param_1,param_2);
    *param_2 = iVar4;
    if (iVar4 == -1) {
      return 0;
    }
    iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
    if ((iVar4 != 0) && (*param_2 < 3)) {
      if ((*param_2 == 0) && (iVar4 = (*DAT_5015cb24)(0,1), iVar4 != 0)) {
        *param_2 = 3;
      }
      else if ((*param_2 == 1) && (iVar4 = (*DAT_5015cb24)(0,1), iVar4 != 0)) {
        *param_2 = 4;
      }
      else if ((*param_2 == 2) && (iVar4 = (*DAT_5015cb24)(0,1), iVar4 != 0)) {
        FUN_500fdd70((float *)(param_1 + 0x10),&fStack_44,(float *)0x0,(float *)0x0);
        *param_2 = 8 - (uint)(fStack_44 * fVar2 + fStack_40 * fVar1 + fStack_3c * fVar3 < 0.0);
      }
    }
  }
  *param_5 = fVar2;
  param_5[1] = fVar1;
  param_5[2] = fVar3;
  *param_6 = local_50;
  param_6[1] = local_4c;
  param_6[2] = local_48;
  *param_7 = local_5c;
  param_7[1] = local_58;
  param_7[2] = local_54;
  *param_8 = 0x200;
  return 0x45;
}

