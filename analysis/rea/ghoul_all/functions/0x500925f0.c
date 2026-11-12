// rea decompile_all
// name: FUN_500925f0
// address: 0x500925f0
// body: available
// range: 0x500925f0-0x50092704 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500925f0(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int in_stack_00001000;
  int *in_stack_00001008;
  
  FUN_501074f0();
  bVar3 = true;
  piVar2 = in_stack_00001008;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      if (in_stack_00001008[0x101] != -1) {
        (*DAT_5015ca48)(in_stack_00001008,10,in_stack_00001008[0x101],0x3f800000,0x3f800000,0,0);
      }
      if (in_stack_00001008[0x102] != -1) {
        in_stack_00001008[0xf] = in_stack_00001008[0x102];
        in_stack_00001008[0x10] = 0xf8;
      }
      if ((char)((uint)in_stack_00001008[0x6e] >> 8) < '\0') {
        FUN_500c2f80(in_stack_00001008,(int)in_stack_00001008);
      }
      if (((int *)in_stack_00001008[0xd1] == (int *)0x0) ||
         ((int *)in_stack_00001008[0xd1] == in_stack_00001008)) {
        do {
          FUN_500923d0((int)in_stack_00001008);
          in_stack_00001008 = (int *)in_stack_00001008[0xcf];
        } while (in_stack_00001008 != (int *)0x0);
      }
      return;
    }
    FUN_500c2990(&stack0x00000000,(float *)(piVar2 + 1),96.0,0,0,0);
    iVar4 = 0;
    if (0 < in_stack_00001000) {
      do {
        iVar1 = *(int *)(&stack0x00000000 + iVar4 * 4);
        if (((*(int *)(iVar1 + 0x74) != 0) || (*(int *)(iVar1 + 0x450) != 0)) &&
           (0 < *(int *)(iVar1 + 0x2ec))) {
          bVar3 = false;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < in_stack_00001000);
    }
    if (!bVar3) break;
    piVar2 = (int *)piVar2[0xcf];
  }
  in_stack_00001008[0xad] = (int)(DAT_5015ccdc + 1.0);
  return;
}

