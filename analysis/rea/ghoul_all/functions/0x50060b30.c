// rea decompile_all
// name: FUN_50060b30
// address: 0x50060b30
// body: available
// range: 0x50060b30-0x50060c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_50060b30(void *this,short param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  undefined2 local_c;
  int local_8 [2];
  
  iVar3 = 0;
  iVar4 = *(int *)((int)this + 0x60);
  if (0 < iVar4) {
    do {
      local_c = 0;
      local_10 = iVar3;
      uVar2 = FUN_5000a5e0((void *)((int)this + 0x50),local_8,&local_10);
      if (*(short *)(local_8[0] + 0x10) == param_1) goto LAB_50060bfc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  uVar1 = *(uint *)((int)this + 0x74);
  iVar4 = 0;
  if (0 < (int)uVar1) {
    do {
      local_c = 0;
      local_10 = iVar4;
      uVar2 = FUN_5000a5e0((void *)((int)this + 100),local_8,&local_10);
      if (*(short *)(local_8[0] + 0x10) == param_1) goto LAB_50060bfc;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar1);
  }
  iVar4 = *(int *)((int)this + 0x88);
  iVar3 = 0;
  uVar2 = uVar1;
  if (0 < iVar4) {
    do {
      local_c = 0;
      local_10 = iVar3;
      uVar2 = FUN_5000a5e0((void *)((int)this + 0x78),local_8,&local_10);
      if (*(short *)(local_8[0] + 0x10) == param_1) {
LAB_50060bfc:
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return uVar2 & 0xffffff00;
}

