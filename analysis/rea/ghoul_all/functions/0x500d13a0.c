// rea decompile_all
// name: FUN_500d13a0
// address: 0x500d13a0
// body: available
// range: 0x500d13a0-0x500d1431 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500d13a0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = operator_new(0x2c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_LAB_50129a38;
    puVar3[1] = *param_1;
    puVar3[2] = param_1[1];
    puVar3[3] = param_1[2];
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
  }
  if (*(int *)((int)this + 0x294) == 0) {
    *(undefined4 **)((int)this + 0x290) = puVar3;
  }
  else {
    iVar1 = *(int *)((int)this + 0x290);
    for (iVar2 = *(int *)(*(int *)((int)this + 0x290) + 0x28); iVar2 != 0;
        iVar2 = *(int *)(iVar2 + 0x28)) {
      iVar1 = iVar2;
    }
    *(undefined4 **)(iVar1 + 0x28) = puVar3;
  }
  *(int *)((int)this + 0x298) = *(int *)((int)this + 0x298) + 1;
  *(int *)((int)this + 0x294) = *(int *)((int)this + 0x294) + 1;
  return;
}

