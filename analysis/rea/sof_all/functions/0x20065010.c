// rea decompile_all
// name: FUN_20065010
// address: 0x20065010
// body: available
// range: 0x20065010-0x20065277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20065010(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piStack00000004;
  int iStack00000008;
  float in_stack_00000014;
  int in_stack_0000f0bc;
  code *in_stack_0000f0c0;
  
  FUN_200fa720();
  DAT_204034f0 = in_stack_0000f0bc + 0xc;
  DAT_204034f4 = &stack0x000000b8;
  iVar8 = 0;
  DAT_204034e0 = 0;
  DAT_204034e4 = 0x400;
  DAT_204034e8 = 1;
  DAT_204034ec = in_stack_0000f0bc;
  FUN_200645c0();
  iVar5 = DAT_204034e0;
  iStack00000008 = 0;
  if (0 < DAT_204034e0) {
    piStack00000004 = (int *)&stack0x000010e8;
    do {
      iVar2 = *(int *)(&stack0x000000b8 + iStack00000008 * 4);
      if (((*(int *)(iVar2 + 0x158) != 0) || (*(char *)(iVar2 + 0x118) < '\0')) &&
         (iVar3 = *(int *)(in_stack_0000f0bc + 0x78), iVar2 != iVar3)) {
        if (*(char *)(in_stack_0000f0bc + 0x40) != '\0') {
          return;
        }
        if (((iVar3 == 0) ||
            ((*(int *)(iVar2 + 0x160) != iVar3 && (*(int *)(iVar3 + 0x160) != iVar2)))) &&
           (((*(uint *)(in_stack_0000f0bc + 0x7c) & 0x4000000) != 0 ||
            ((*(byte *)(iVar2 + 0x118) & 2) == 0)))) {
          if (*(int *)(iVar2 + 0x158) == 3) {
            if (*(int *)(&DAT_203a1f74 + *(int *)(iVar2 + 0x20) * 4) == 0) {
              Com_Error();
            }
          }
          else {
            FUN_2001a840();
          }
          puVar1 = (undefined4 *)FUN_2001b9c0();
          puVar6 = (undefined4 *)&stack0x00000010;
          for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar6 = puVar6 + 1;
          }
          if (in_stack_00000014 < 1.0) {
            iVar8 = iVar8 + 1;
            piVar4 = (int *)&stack0x00000010;
            piVar7 = piStack00000004 + -0xc;
            for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            *piStack00000004 = iVar2;
            piStack00000004 = piStack00000004 + 0xe;
          }
        }
      }
      iStack00000008 = iStack00000008 + 1;
    } while (iStack00000008 < iVar5);
    if (iVar8 != 0) {
      FUN_200fbfd9();
      iVar5 = 0;
      if (0 < iVar8) {
        while (iVar2 = (*in_stack_0000f0c0)(), iVar2 == 0) {
          iVar5 = iVar5 + 1;
          if (iVar8 <= iVar5) {
            return;
          }
        }
        puVar1 = (undefined4 *)(&stack0x000010b8 + iVar5 * 0x38);
        puVar6 = (undefined4 *)(in_stack_0000f0bc + 0x40);
        for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar6 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar6 = puVar6 + 1;
        }
      }
    }
  }
  return;
}

