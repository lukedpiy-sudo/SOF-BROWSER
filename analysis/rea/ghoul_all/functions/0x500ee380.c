// rea decompile_all
// name: FUN_500ee380
// address: 0x500ee380
// body: available
// range: 0x500ee380-0x500ee3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ee380(char *param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x2ec);
  if (iVar3 == 0) {
    iVar3 = 8;
  }
  *(int *)(param_1 + 0x2ec) = iVar3;
  FUN_500ee0c0(param_1);
  uVar1 = *(uint *)(param_1 + 0x1b8);
  param_1[0x318] = '\x01';
  param_1[0x319] = '\0';
  param_1[0x31a] = '\0';
  param_1[0x31b] = '\0';
  param_1[0x27c] = '\x14';
  param_1[0x27d] = '\0';
  param_1[0x27e] = '\0';
  param_1[0x27f] = '\0';
  *(uint *)(param_1 + 0x1b8) = uVar1 | 0xc0;
  param_1[0x364] = '\0';
  param_1[0x365] = '\0';
  param_1[0x366] = -0x80;
  param_1[0x367] = '?';
  param_1[0x360] = '\0';
  param_1[0x361] = '\0';
  param_1[0x362] = -0x80;
  param_1[0x363] = '?';
  fVar2 = DAT_5015ccdc + 0.4;
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_500ee2b0;
  *(float *)(param_1 + 0x2b4) = fVar2;
  return;
}

