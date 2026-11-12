// rea decompile_all
// name: FUN_50065b40
// address: 0x50065b40
// body: available
// range: 0x50065b40-0x50065be5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_50065b40(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  float fVar2;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  iVar1 = *(int *)this + param_1 * 0x14c;
  if (*(int *)(*(int *)this + 0x128 + param_1 * 0x14c) != 0) {
    local_48 = param_2;
    local_44 = *param_3;
    local_10 = 0;
    local_40 = param_3[1];
    local_3c = param_3[2];
    local_38 = *param_4;
    local_34 = param_4[1];
    local_30 = param_4[2];
    local_20 = *param_6;
    if (*(int *)(param_2 + 0x450) == 0) {
      fVar2 = *(float *)(iVar1 + 0x118);
    }
    else {
      fVar2 = *(float *)(iVar1 + 0x11c);
    }
    local_28 = iVar1;
    FUN_500ee7f0(fVar2);
    (**(code **)(iVar1 + 0x128))(&local_48);
  }
  return;
}

