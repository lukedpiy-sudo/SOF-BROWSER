// rea decompile_all
// name: FUN_20043950
// address: 0x20043950
// body: available
// range: 0x20043950-0x200439b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20043950(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  piVar1 = (int *)(in_ECX + 0xd808);
  local_4 = 0x100;
  do {
    piVar3 = piVar1 + 0x25;
    if (((piVar1[0xd2] != 0) && (*piVar1 != 0)) && (iVar2 = 0, 0 < *(int *)(*piVar1 + 0x14))) {
      do {
        if (*piVar3 == -0x40800000) {
          FUN_200420a0();
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(*piVar1 + 0x14));
    }
    piVar1 = piVar1 + 0xd3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

