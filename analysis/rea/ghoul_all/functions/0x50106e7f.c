// rea decompile_all
// name: FUN_50106e7f
// address: 0x50106e7f
// body: available
// range: 0x50106e7f-0x50106f4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __thiscall FUN_50106e7f(void *this,void *param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(uint *)((int)param_1 + 8) < param_2) {
    FUN_50106d97();
  }
  uVar3 = *(uint *)((int)param_1 + 8) - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    FUN_50106f4d(this,uVar3 + param_2,0xffffffff);
    FUN_50106f4d(this,0,param_2);
  }
  else {
    if ((uVar3 != 0) && (uVar3 == *(uint *)((int)param_1 + 8))) {
      puVar1 = *(undefined1 **)((int)param_1 + 4);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_50129750;
      }
      if ((byte)puVar1[-1] < 0xfe) {
        FUN_500826d0(this,'\x01');
        puVar1 = *(undefined1 **)((int)param_1 + 4);
        if (puVar1 == (undefined1 *)0x0) {
          puVar1 = &DAT_50129750;
        }
        *(undefined1 **)((int)this + 4) = puVar1;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
        puVar1[-1] = puVar1[-1] + '\x01';
        return this;
      }
    }
    uVar2 = FUN_50082c70(this,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      puVar1 = *(undefined1 **)((int)param_1 + 4);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_50129750;
      }
      FUN_50108e10(*(undefined4 **)((int)this + 4),(undefined4 *)(puVar1 + param_2),uVar3);
      *(uint *)((int)this + 8) = uVar3;
      *(undefined1 *)(*(int *)((int)this + 4) + uVar3) = 0;
    }
  }
  return this;
}

