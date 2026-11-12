// rea decompile_all
// name: FUN_500539e0
// address: 0x500539e0
// body: available
// range: 0x500539e0-0x50053aee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500539e0(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined1 local_38 [48];
  int iStack_8;
  
  iVar1 = *(int *)(param_1 + 0x74);
  local_74 = *(float *)(iVar1 + 0x4fc);
  local_70 = *(undefined4 *)(iVar1 + 0x500);
  local_6c = *(undefined4 *)(iVar1 + 0x504);
  if ((*(int *)(param_1 + 0x45c) != 0) &&
     (pfVar2 = *(float **)(*(int *)(param_1 + 0x45c) + 0x40), pfVar2 != (float *)0x0)) {
    local_68 = *pfVar2 - *(float *)(param_1 + 4);
    local_64 = pfVar2[1] - *(float *)(param_1 + 8);
    local_60 = pfVar2[2] - *(float *)(param_1 + 0xc);
    FUN_500c3570(&local_68,&local_44);
    local_70 = local_40;
  }
  FUN_500fdd70(&local_74,&local_5c,(float *)0x0,(float *)0x0);
  local_50 = local_5c * 150.0 + *(float *)(param_1 + 4);
  local_4c = local_58 * 150.0 + *(float *)(param_1 + 8);
  local_48 = local_54 * 150.0 + *(float *)(param_1 + 0xc);
  (*DAT_5015cac0)((float *)(param_1 + 4),&DAT_5018bf0c,&DAT_5018bf0c,&local_50,param_1,0x2010003,
                  local_38);
  if ((iStack_8 != 0) && (*(uint **)(iStack_8 + 0x1b4) != (uint *)0x0)) {
    puVar3 = FUN_50107030(*(uint **)(iStack_8 + 0x1b4),&DAT_50142f2c);
    if (puVar3 != (uint *)0x0) {
      return 0;
    }
  }
  return 1;
}

