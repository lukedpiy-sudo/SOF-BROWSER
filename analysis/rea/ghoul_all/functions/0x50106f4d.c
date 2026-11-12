// rea decompile_all
// name: FUN_50106f4d
// address: 0x50106f4d
// body: available
// range: 0x50106f4d-0x50106fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __thiscall FUN_50106f4d(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_50106d97();
  }
  FUN_50106fb4(this);
  uVar1 = *(int *)((int)this + 8) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(*(int *)((int)this + 4) + param_1);
    FUN_50108400(puVar3,(undefined4 *)((int)puVar3 + param_2),uVar1 - param_2);
    uVar1 = *(int *)((int)this + 8) - param_2;
    uVar2 = FUN_50082c70(this,uVar1,'\0');
    if ((char)uVar2 != '\0') {
      *(uint *)((int)this + 8) = uVar1;
      *(undefined1 *)(uVar1 + *(int *)((int)this + 4)) = 0;
    }
  }
  return this;
}

