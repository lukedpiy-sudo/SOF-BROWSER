// rea decompile_all
// name: FUN_500fd9d0
// address: 0x500fd9d0
// body: available
// range: 0x500fd9d0-0x500fda5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500fd9d0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)((int)param_1 + 4);
  local_8 = (int *)*piVar1;
  piVar2 = local_8;
  if (*(int *)((int)param_1 + 0x10) != 0) {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != *(int **)((int)param_1 + 8)) {
      do {
        FUN_500fc5c0(param_1,(int *)piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_50106b60((undefined *)piVar2);
        piVar2 = piVar1;
      } while (piVar1 != (int *)*(int *)((int)param_1 + 8));
    }
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 4) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
    *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
    return;
  }
  while (piVar2 != piVar1) {
    local_8 = piVar2;
    FUN_5006b290((int *)&local_8);
    FUN_500c4640(param_1,&local_4,piVar2);
    piVar2 = local_8;
  }
  return;
}

