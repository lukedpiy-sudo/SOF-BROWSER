// rea decompile_all
// name: FUN_300081d0
// address: 0x300081d0
// body: available
// range: 0x300081d0-0x30008241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_300081d0(void *this,int *param_1,void *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)((int)this + 4);
  puVar3 = (undefined4 *)puVar4[1];
  if ((undefined4 *)puVar4[1] != *(undefined4 **)((int)this + 8)) {
    do {
      uVar1 = FUN_30005e60(param_2,(int)(puVar3 + 3));
      if ((int)uVar1 < 0) {
        puVar5 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      }
      else {
        puVar5 = (undefined4 *)puVar3[2];
      }
      puVar3 = puVar5;
    } while (puVar5 != *(undefined4 **)((int)this + 8));
  }
  puVar3 = *(undefined4 **)((int)this + 4);
  puVar2 = puVar3;
  puVar5 = (undefined4 *)puVar3[1];
  if ((undefined4 *)puVar3[1] != *(undefined4 **)((int)this + 8)) {
    do {
      puVar3 = puVar5;
      uVar1 = FUN_30005e60(puVar3 + 3,(int)param_2);
      if ((int)uVar1 < 0) {
        puVar5 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar5 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (puVar5 != *(undefined4 **)((int)this + 8));
  }
  param_1[1] = (int)puVar4;
  *param_1 = (int)puVar3;
  return;
}

