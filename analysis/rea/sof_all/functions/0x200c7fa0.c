// rea decompile_all
// name: FUN_200c7fa0
// address: 0x200c7fa0
// body: available
// range: 0x200c7fa0-0x200c7fc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c7fa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000018;
  undefined4 auStack_20 [5];
  undefined4 uStack_c;
  
  if (DAT_20406554 != 0) {
    uStack_c = in_stack_00000018;
    puVar2 = auStack_20;
    for (iVar1 = 5; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
        iVar1 = iVar1 + -1) {
      *puVar2 = *(undefined4 *)register0x00000010;
      puVar2 = puVar2 + 1;
    }
    FUN_200ccbf0();
  }
  return;
}

