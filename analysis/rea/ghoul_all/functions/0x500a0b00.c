// rea decompile_all
// name: FUN_500a0b00
// address: 0x500a0b00
// body: available
// range: 0x500a0b00-0x500a0c69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a0b00(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float local_18;
  float local_14;
  float local_10;
  undefined1 auStack_c [12];
  
  uVar2 = FUN_50107636();
  uVar3 = FUN_50107636();
  piVar1 = param_1 + 1;
  local_10 = 0.0;
  local_18 = (float)((int)uVar3 % 0x15 + -10);
  local_14 = (float)((int)uVar2 % 0x15 + -10);
  FUN_50083e60(piVar1,&local_18,1);
  uVar2 = FUN_50107636();
  uVar3 = FUN_50107636();
  local_10 = 0.0;
  local_18 = (float)((int)uVar3 % 0x15 + -10);
  local_14 = (float)((int)uVar2 % 0x15 + -10);
  FUN_50083e60(piVar1,&local_18,1);
  iVar4 = (*DAT_5015cb24)(5,10);
  uVar2 = FUN_50107636();
  uVar3 = FUN_50107636();
  local_18 = (float)((int)uVar3 % 0x29 + -0x14);
  local_14 = (float)((int)uVar2 % 0x29 + -0x14);
  local_10 = (float)iVar4;
  FUN_50083e60(piVar1,&local_18,1);
  FUN_50084270(piVar1,auStack_c,5,1,'\a',0,0,0,0x25);
  FUN_50084a60(piVar1,0x32,1);
  FUN_500b3420(param_1,param_2,param_3);
  return;
}

