// rea decompile_all
// name: FUN_500a6860
// address: 0x500a6860
// body: available
// range: 0x500a6860-0x500a691e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500a6860(void *this,undefined *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int **ppiVar4;
  int *local_8;
  int *local_4;
  
  if (param_1 != (undefined *)0x0) {
    FUN_500c7d40(this,(int *)&local_8,(uint *)&param_1);
    piVar1 = *(int **)((int)this + 4);
    if ((local_8 == piVar1) || (param_1 < (undefined *)local_8[3])) {
      local_4 = piVar1;
      ppiVar4 = &local_4;
    }
    else {
      ppiVar4 = &local_8;
    }
    piVar2 = *ppiVar4;
    if (piVar2 != piVar1) {
      local_4 = FUN_5000a3a0((void *)((int)this + 0x14),piVar2 + 4);
      if ((local_4 == *(int **)((int)this + 0x18)) || (piVar2[4] < local_4[3])) {
        local_8 = *(int **)((int)this + 0x18);
        ppiVar4 = &local_8;
      }
      else {
        ppiVar4 = &local_4;
      }
      FUN_500c4640((void *)((int)this + 0x14),&local_4,*ppiVar4);
      FUN_500c4640(this,&local_4,piVar2);
      puVar3 = param_1;
      if (param_1 != (undefined *)0x0) {
        FUN_500a31a0((undefined4 *)param_1);
        FUN_50106b60(puVar3);
      }
    }
  }
  return;
}

