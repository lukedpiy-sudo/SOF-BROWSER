// rea decompile_all
// name: FUN_500656e0
// address: 0x500656e0
// body: available
// range: 0x500656e0-0x5006584a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_500656e0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,
            undefined4 *param_5)

{
  float fVar1;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float *local_2c;
  void *local_28;
  undefined4 local_10;
  undefined4 local_c [3];
  
  if (*(int *)((int)this + 0x128) != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) {
      local_54 = *(float *)(param_1 + 0x24c) + *(float *)(param_1 + 4);
      local_50 = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 8);
      local_4c = *(float *)(param_1 + 0x254) + *(float *)(param_1 + 0xc);
      FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x1c),&local_60,(float *)0x0,(float *)0x0);
      local_60 = local_60 * 100.0 + *(float *)(param_1 + 4);
      local_5c = local_5c * 100.0 + *(float *)(param_1 + 8);
      local_58 = local_58 * 100.0 + *(float *)(param_1 + 0xc);
      FUN_500f1bf0(param_1,&local_54,(int)&local_60,0);
    }
    local_48 = param_1;
    local_10 = 0;
    local_44 = *param_2;
    local_40 = param_2[1];
    local_3c = param_2[2];
    local_38 = *param_3;
    local_34 = param_3[1];
    local_30 = param_3[2];
    local_2c = param_4;
    local_28 = this;
    if ((param_4 != (float *)0x0) && ((short)param_5 != 0)) {
      local_10 = 1;
      FUN_500c3bb0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),param_4,param_5,0,local_c,
                   (undefined4 *)0x0);
    }
    if (*(int *)(param_1 + 0x450) == 0) {
      fVar1 = *(float *)((int)this + 0x118);
    }
    else {
      fVar1 = *(float *)((int)this + 0x11c);
    }
    FUN_500ee7f0(fVar1);
    (**(code **)((int)this + 0x128))(&local_48);
  }
  return;
}

