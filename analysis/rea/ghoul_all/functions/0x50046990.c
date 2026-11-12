// rea decompile_all
// name: FUN_50046990
// address: 0x50046990
// body: available
// range: 0x50046990-0x50046a64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50046990(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(uint *)(param_1 + 0x38) & 0x18005) != 0) {
    piVar2 = (int *)**(int **)(param_1 + 4);
    if (piVar2 != *(int **)(param_1 + 4)) {
      do {
        iVar1 = *(int *)(DAT_50159170 + 4) + piVar2[2] * 0x88;
        if ((piVar2[2] != 0) && (iVar1 != 0)) {
          FUN_50084460(param_1 + 0x18,iVar1 + 0x18,0xfa0000fa,6,2);
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(param_1 + 4));
    }
    piVar2 = (int *)**(int **)(param_1 + 0x10);
    if (piVar2 != *(int **)(param_1 + 0x10)) {
      do {
        iVar1 = *(int *)(DAT_50159170 + 0x186a18) + piVar2[2] * 0x88;
        if ((piVar2[2] != 0) && (iVar1 != 0)) {
          FUN_50084460(param_1 + 0x18,iVar1 + 0x18,0xfa00fa00,6,2);
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(param_1 + 0x10));
    }
  }
  return;
}

