// rea decompile_all
// name: FUN_500c2ba0
// address: 0x500c2ba0
// body: available
// range: 0x500c2ba0-0x500c2cfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500c2ba0(int param_1,undefined4 *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_38 [4];
  float fStack_34;
  int iStack_8;
  
  local_64 = 0;
  local_60 = 0.2;
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x1c),&local_50,(float *)0x0,(float *)0x0);
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 0xc);
  param_2[2] = fVar1;
  param_2[2] = fVar1 + *(float *)(*(int *)(param_1 + 0x74) + 0x30);
  for (iVar2 = FUN_500c2d00(0,param_2,param_3,1); iVar2 != 0;
      iVar2 = FUN_500c2d00(iVar2,param_2,param_3,1)) {
    if (*(int *)(iVar2 + 0x2c8) != 0) {
      FUN_500ae8f0(iVar2,&local_44);
      local_5c = local_44 - *(float *)(param_1 + 4);
      local_54 = 0.0;
      local_48 = 0.0;
      local_58 = local_40 - *(float *)(param_1 + 8);
      FUN_500fe050(&local_50);
      FUN_500fe050(&local_5c);
      fVar1 = local_48 * local_54 + local_50 * local_5c + local_4c * local_58;
      if ((fVar1 < local_60 == (fVar1 == local_60)) &&
         (((*DAT_5015cac0)(param_2,0,0,&local_44,param_1,0xffffffff,local_38), iStack_8 == iVar2 ||
          (fStack_34 == 1.0)))) {
        local_64 = iVar2;
        local_60 = fVar1;
      }
    }
  }
  return local_64;
}

