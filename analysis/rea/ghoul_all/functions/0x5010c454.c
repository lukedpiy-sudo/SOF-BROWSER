// rea decompile_all
// name: FUN_5010c454
// address: 0x5010c454
// body: available
// range: 0x5010c454-0x5010c4e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * __thiscall FUN_5010c454(void *this,byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort local_1c [6];
  uint local_10;
  undefined4 uStack_c;
  int local_8;
  
  uVar3 = 0;
  uVar1 = FUN_501107eb(this,local_1c,&local_8,param_1,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_5010fd62(local_1c,&local_10);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_10 = 0;
    uStack_c = 0;
  }
  *(uint *)PTR_DAT_50156398 = uVar3;
  *(int *)(PTR_DAT_50156398 + 4) = local_8 - (int)param_1;
  *(ulonglong *)(PTR_DAT_50156398 + 0x10) = CONCAT44(uStack_c,local_10);
  return PTR_DAT_50156398;
}

