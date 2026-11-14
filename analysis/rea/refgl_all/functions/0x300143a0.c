// rea decompile_all
// name: FUN_300143a0
// address: 0x300143a0
// body: available
// range: 0x300143a0-0x3001447b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_300143a0(void)

{
  uint uVar1;
  uint uVar2;
  int in_stack_00010004;
  int in_stack_00010008;
  char in_stack_0001000c;
  char in_stack_00010010;
  
  FUN_30020910();
  uVar2 = ((int)*(short *)(in_stack_00010004 + 0x14) >> 4) + 1;
  uVar1 = ((int)*(short *)(in_stack_00010004 + 0x16) >> 4) + 1;
  if (*(int *)(in_stack_00010004 + 100) != 0) {
    uVar2 = (uint)*(byte *)(in_stack_00010004 + 0x68);
    uVar1 = (uint)*(byte *)(in_stack_00010004 + 0x69);
  }
  FUN_30009550(in_stack_00010004,&stack0x00000000,uVar2 * 4);
  if (in_stack_00010010 != '\0') {
    FUN_30009510(in_stack_00010004);
  }
  if (in_stack_0001000c == '\0') {
    FUN_300062f0(DAT_3008ffd0 + in_stack_00010008);
  }
  else {
    FUN_30006130(0x84c1);
    FUN_30006350(0x84c1,DAT_3008ffd0 + in_stack_00010008);
  }
  (*DAT_300a475c)(0xde1,0,*(undefined4 *)(in_stack_00010004 + 0x18),
                  *(undefined4 *)(in_stack_00010004 + 0x1c),uVar2,uVar1,0x1908,0x1401,
                  &stack0x00000000);
  return;
}

