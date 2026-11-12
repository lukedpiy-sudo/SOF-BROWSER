// rea decompile_all
// name: FUN_50082bb0
// address: 0x50082bb0
// body: available
// range: 0x50082bb0-0x50082c4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __thiscall FUN_50082bb0(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (0xfffffffd < param_2) {
    FUN_50106b6b();
  }
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  if ((iVar1 == 0) || (*(char *)(iVar1 + -1) == '\0')) {
    if (param_2 == 0) {
      FUN_500826d0(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (param_2 <= *(uint *)((int)this + 0xc)))
    goto LAB_50082c1f;
    FUN_500826d0(this,'\x01');
  }
  else if (param_2 == 0) {
    *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return this;
  }
  FUN_50083080(param_2);
LAB_50082c1f:
  puVar3 = *(undefined4 **)((int)this + 4);
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(uint *)((int)this + 8) = param_2;
  *(undefined1 *)(param_2 + *(int *)((int)this + 4)) = 0;
  return this;
}

