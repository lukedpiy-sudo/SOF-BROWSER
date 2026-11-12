// rea decompile_all
// name: FUN_5000a2e0
// address: 0x5000a2e0
// body: available
// range: 0x5000a2e0-0x5000a39c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000a2e0(void *this,undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  void *local_4;
  
  puVar4 = param_2;
  puVar1 = *(uint **)((int)this + 4);
  bVar6 = true;
  puVar2 = puVar1;
  puVar3 = (uint *)puVar1[1];
  while (puVar3 != *(uint **)((int)this + 8)) {
    bVar6 = *param_2 < puVar3[3];
    puVar2 = puVar3;
    if (bVar6) {
      puVar3 = (uint *)*puVar3;
    }
    else {
      puVar3 = (uint *)puVar3[2];
    }
  }
  local_4 = this;
  if (*(char *)((int)this + 0xc) == '\0') {
    param_2 = puVar2;
    if (bVar6) {
      if (puVar2 == (uint *)*puVar1) {
        puVar5 = (undefined4 *)FUN_5000aa70(this,&local_4,(int)puVar3,(int *)puVar2,puVar4);
        *param_1 = *puVar5;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
      FUN_5000acc0((int *)&param_2);
    }
    if (*puVar4 <= param_2[3]) {
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  puVar5 = (undefined4 *)FUN_5000aa70(this,&local_4,(int)puVar3,(int *)puVar2,puVar4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

