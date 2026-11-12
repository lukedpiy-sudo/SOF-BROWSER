// rea decompile_all
// name: FUN_500c7c80
// address: 0x500c7c80
// body: available
// range: 0x500c7c80-0x500c7d3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500c7c80(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *local_4;
  
  piVar5 = param_2;
  piVar1 = *(int **)((int)this + 4);
  bVar2 = true;
  piVar3 = piVar1;
  piVar4 = (int *)piVar1[1];
  while (piVar4 != *(int **)((int)this + 8)) {
    bVar2 = *param_2 < piVar4[3];
    piVar3 = piVar4;
    if (bVar2) {
      piVar4 = (int *)*piVar4;
    }
    else {
      piVar4 = (int *)piVar4[2];
    }
  }
  local_4 = this;
  if (*(char *)((int)this + 0xc) == '\0') {
    param_2 = piVar3;
    if (bVar2) {
      if (piVar3 == (int *)*piVar1) {
        puVar6 = (undefined4 *)FUN_5000a820(this,&local_4,(int)piVar4,piVar3,piVar5);
        *param_1 = *puVar6;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
      FUN_5000acc0((int *)&param_2);
    }
    if (*piVar5 <= param_2[3]) {
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  puVar6 = (undefined4 *)FUN_5000a820(this,&local_4,(int)piVar4,piVar3,piVar5);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

