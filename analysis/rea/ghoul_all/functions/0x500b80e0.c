// rea decompile_all
// name: FUN_500b80e0
// address: 0x500b80e0
// body: available
// range: 0x500b80e0-0x500b8210 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b80e0(undefined4 *param_1,int param_2,float *param_3)

{
  int iVar1;
  char *pcVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  char local_38 [4];
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_8;
  
  local_50 = *(float *)(param_2 + 4);
  local_4c = *(float *)(param_2 + 8);
  local_44 = local_50 + *param_3;
  local_48 = *(float *)(param_2 + 0xc);
  local_40 = local_4c + param_3[1];
  local_3c = local_48 + param_3[2];
  while( true ) {
    iVar1 = *(int *)(param_2 + 0x15c);
    if (iVar1 == 0) {
      iVar1 = 3;
    }
    (*DAT_5015cac0)(&local_50,param_2 + 0x11c,param_2 + 0x128,&local_44,param_2,iVar1,local_38);
    if ((local_38[0] != '\0') && (*(int *)(param_2 + 0x19c) == 7)) break;
    *(undefined4 *)(param_2 + 4) = uStack_30;
    *(undefined4 *)(param_2 + 8) = uStack_2c;
    *(undefined4 *)(param_2 + 0xc) = uStack_28;
    (*DAT_5015cb28)(param_2);
    if (fStack_34 == 1.0) goto LAB_500b81e9;
    FUN_500b77d0(param_2,(int)local_38);
    if (*(int *)(iStack_8 + 0x78) != 0) goto LAB_500b81e9;
    if (*(int *)(param_2 + 0x78) == 0) goto LAB_500b81f9;
    *(float *)(param_2 + 4) = local_50;
    *(float *)(param_2 + 8) = local_4c;
    *(float *)(param_2 + 0xc) = local_48;
    (*DAT_5015cb28)(param_2);
  }
  (*DAT_5015cb28)(param_2);
LAB_500b81e9:
  if (*(int *)(param_2 + 0x78) != 0) {
    FUN_500c3a90();
  }
LAB_500b81f9:
  pcVar2 = local_38;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    param_1 = param_1 + 1;
  }
  return;
}

