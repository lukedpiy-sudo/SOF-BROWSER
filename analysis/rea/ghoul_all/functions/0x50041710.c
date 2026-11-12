// rea decompile_all
// name: FUN_50041710
// address: 0x50041710
// body: available
// range: 0x50041710-0x50041797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * __thiscall FUN_50041710(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_500ba460(*param_1);
  *(uint *)this = uVar1;
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = param_1[3];
  *(int *)((int)this + 0x10) = param_1[4];
  *(int *)((int)this + 0x14) = param_1[5];
  *(int *)((int)this + 0x18) = param_1[6];
  *(int *)((int)this + 0x1c) = param_1[7];
  *(int *)((int)this + 0x20) = param_1[8];
  *(char *)((int)this + 0x24) = (char)param_1[9];
  *(int *)((int)this + 0x28) = param_1[10];
  *(int *)((int)this + 0x2c) = param_1[0xb];
  uVar1 = FUN_500ba4c0(param_1[0xc]);
  *(uint *)((int)this + 0x30) = uVar1;
  *(int *)((int)this + 0x34) = param_1[0xd];
  iVar2 = FUN_500ba390(param_1[0xe]);
  *(int *)((int)this + 0x38) = iVar2;
  *(int *)((int)this + 0x3c) = param_1[0xf];
  *(int *)((int)this + 0x40) = param_1[0x10];
  return this;
}

