// rea decompile_all
// name: FUN_20081db0
// address: 0x20081db0
// body: available
// range: 0x20081db0-0x20081e0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20081db0(char param_1)

{
  int in_ECX;
  int *piVar1;
  float10 fVar2;
  
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(in_ECX + 0xa0);
  if (*(short *)(in_ECX + 0xae) != 0) {
    fVar2 = (float10)FUN_2007d2e0(*(undefined4 *)(in_ECX + 0xa0));
    *(float *)(in_ECX + 0x124) = (float)fVar2;
  }
  if ((param_1 != '\0') &&
     (piVar1 = (int *)**(int **)(in_ECX + 0xf0), piVar1 != *(int **)(in_ECX + 0xf0))) {
    do {
      FUN_20081db0(1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 0xf0));
  }
  return;
}

