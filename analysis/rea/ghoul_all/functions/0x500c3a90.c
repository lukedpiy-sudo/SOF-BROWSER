// rea decompile_all
// name: FUN_500c3a90
// address: 0x500c3a90
// body: available
// range: 0x500c3a90-0x500c3b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500c3a90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00001004;
  
  FUN_501074f0();
  if (((*(int *)(in_stack_00001004 + 0x74) == 0) &&
      ((*(byte *)(in_stack_00001004 + 0x118) & 4) == 0)) ||
     (0 < *(int *)(in_stack_00001004 + 0x2ec))) {
    iVar2 = (*DAT_5015cb30)(in_stack_00001004 + 0x134,in_stack_00001004 + 0x140,&stack0x00000000,
                            0x400,2);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(&stack0x00000000 + iVar3 * 4);
        if ((*(int *)(iVar1 + 0x78) != 0) && (*(code **)(iVar1 + 0x2c0) != (code *)0x0)) {
          (**(code **)(iVar1 + 0x2c0))(iVar1,in_stack_00001004,0,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return;
}

