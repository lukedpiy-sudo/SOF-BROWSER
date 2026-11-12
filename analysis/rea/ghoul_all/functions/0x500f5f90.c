// rea decompile_all
// name: FUN_500f5f90
// address: 0x500f5f90
// body: available
// range: 0x500f5f90-0x500f60c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500f5f90(int param_1)

{
  int iVar1;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [48];
  int iStack_8;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    return 0;
  }
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x1c),&local_44,(float *)0x0,(float *)0x0);
  local_50 = *(float *)(param_1 + 4);
  local_4c = *(float *)(param_1 + 8);
  local_48 = *(float *)(param_1 + 0xc) + *(float *)(*(int *)(param_1 + 0x74) + 0x30);
  iVar1 = FUN_500c2b20(param_1,&local_50,
                       (*(float *)(param_1 + 0x128) - *(float *)(param_1 + 0x11c)) * 0.5);
  if (((iVar1 != 0) || (iVar1 = FUN_500c2ba0(param_1,&local_50,80.0), iVar1 != 0)) &&
     (*(code **)(iVar1 + 0x2c8) != (code *)0x0)) {
    (**(code **)(iVar1 + 0x2c8))(iVar1,param_1,param_1);
    return iVar1;
  }
  local_44 = local_44 * 75.0 + local_50;
  local_40 = local_40 * 75.0 + local_4c;
  local_3c = local_3c * 75.0 + local_48;
  (*DAT_5015cac0)(&local_50,0,0,&local_44,param_1,0x2010003,local_38);
  if ((iStack_8 != 0) && (*(code **)(iStack_8 + 0x2c8) != (code *)0x0)) {
    (**(code **)(iStack_8 + 0x2c8))(iStack_8,param_1,param_1);
    return iStack_8;
  }
  return 0;
}

