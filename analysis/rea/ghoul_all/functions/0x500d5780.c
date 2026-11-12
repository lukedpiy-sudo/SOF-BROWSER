// rea decompile_all
// name: FUN_500d5780
// address: 0x500d5780
// body: available
// range: 0x500d5780-0x500d589a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_500d5780(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_38 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  fVar3 = (float10)(*DAT_5015cb20)(0,0x459c4000);
  _DAT_50189b68 = (float)((fVar3 - (float10)2500.0) + (float10)*(float *)(param_1 + 4));
  fVar3 = (float10)(*DAT_5015cb20)(0,0x459c4000);
  _DAT_50189b6c = (float)((fVar3 - (float10)2500.0) + (float10)*(float *)(param_1 + 8));
  fVar3 = (float10)(*DAT_5015cb20)(0,0x43fa0000);
  _DAT_50189b70 = (float)((fVar3 - (float10)250.0) + (float10)*(float *)(param_1 + 0xc));
  FUN_500d42f0(param_1,(float *)&DAT_50189b68);
  if (_DAT_50189b70 < DAT_501525d8 + 112.0) {
    _DAT_50189b70 = DAT_501525d8 + 112.0;
  }
  if ((*(uint *)(iVar1 + 0x194) & 0x40000) == 0) {
    iVar2 = iVar1 + 0x114;
    iVar1 = iVar1 + 0x108;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
  }
  (*DAT_5015cac0)((float *)(param_1 + 4),iVar1,iVar2,&DAT_50189b68,param_1,3,auStack_38);
  if (fStack_34 < 1.0) {
    _DAT_50189b68 = fStack_30;
    _DAT_50189b6c = fStack_2c;
    _DAT_50189b70 = fStack_28;
  }
  return &DAT_50189b68;
}

