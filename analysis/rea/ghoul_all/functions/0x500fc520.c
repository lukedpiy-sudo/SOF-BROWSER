// rea decompile_all
// name: FUN_500fc520
// address: 0x500fc520
// body: available
// range: 0x500fc520-0x500fc578 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500fc520(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = *(int *)this;
  piVar3 = *(int **)(iVar2 + 8);
  if (*(char *)((int)piVar3 + 0x15) != '\0') {
    iVar5 = *(int *)(iVar2 + 4);
    if (*(int *)this == *(int *)(iVar5 + 8)) {
      do {
        *(int *)this = iVar5;
        iVar5 = *(int *)(iVar5 + 4);
      } while (*(int *)this == *(int *)(iVar5 + 8));
    }
    if (*(int *)(*(int *)this + 8) != iVar5) {
      *(int *)this = iVar5;
    }
    *param_1 = iVar2;
    return;
  }
  cVar1 = *(char *)(*piVar3 + 0x15);
  piVar4 = (int *)*piVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x15);
    piVar3 = piVar4;
    piVar4 = (int *)*piVar4;
  }
  *(int **)this = piVar3;
  *param_1 = iVar2;
  return;
}

