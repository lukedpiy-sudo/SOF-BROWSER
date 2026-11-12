// rea decompile_all
// name: FUN_500816b0
// address: 0x500816b0
// body: available
// range: 0x500816b0-0x5008172a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_500816b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = *(int **)(param_1 + 0x108);
  if (piVar2 == (int *)0x3) {
    iVar4 = *(int *)(param_1 + 0x160);
  }
  else {
    if (piVar2 != (int *)0x4) {
      if (piVar2 != (int *)0x5) {
        return CONCAT31((int3)((uint)piVar2 >> 8),piVar2 == (int *)0x0);
      }
      goto LAB_5008171e;
    }
    iVar4 = 1;
  }
  iVar3 = 0;
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0x160) != 0) {
    piVar2 = *(int **)(param_1 + 0x15c);
    piVar5 = (int *)*piVar2;
    if (piVar5 != piVar2) {
      do {
        iVar1 = (**(code **)(*(int *)piVar5[2] + 4))();
        if (iVar1 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar5 = (int *)*piVar5;
        piVar2 = *(int **)(param_1 + 0x15c);
      } while (piVar5 != piVar2);
    }
  }
  if (iVar3 == iVar4) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    return CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
LAB_5008171e:
  return (uint)piVar2 & 0xffffff00;
}

