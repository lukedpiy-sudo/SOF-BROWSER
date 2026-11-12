// rea decompile_all
// name: FUN_50052d70
// address: 0x50052d70
// body: available
// range: 0x50052d70-0x50052ec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50052d70(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  float local_68;
  float local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44 [3];
  undefined1 auStack_38 [4];
  float fStack_34;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x45c) == 0) {
    return 0;
  }
  fVar1 = *(float *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  fVar3 = *(float *)(param_1 + 8);
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),local_44,&local_68,(float *)0x0);
  if (*(int *)(*(int *)(param_1 + 0x45c) + 0x14) == 1) {
    local_50 = local_68 * 30.0 + fVar1;
    local_4c = local_64 * 30.0 + fVar3;
  }
  else {
    local_50 = fVar1 - local_68 * 30.0;
    local_4c = fVar3 - local_64 * 30.0;
  }
  local_5c = *(undefined4 *)(param_2 + 4);
  local_58 = *(undefined4 *)(param_2 + 8);
  local_54 = *(undefined4 *)(param_2 + 0xc);
  local_48 = uVar2;
  iVar4 = (*DAT_5015cad0)(&local_50,&local_5c);
  if (iVar4 != 0) {
    (*DAT_5015cac0)(&local_50,&DAT_5018bf0c,&DAT_5018bf0c,&local_5c,param_2,0x2010003,auStack_38);
    if (fStack_34 == 1.0) {
      return 0;
    }
    if (((iStack_8 != 0) && (*(char **)(iStack_8 + 0x1b4) != (char *)0x0)) &&
       (*(char **)(iStack_8 + 0x1b4) == s_player_50142e48)) {
      return 0;
    }
  }
  return 1;
}

