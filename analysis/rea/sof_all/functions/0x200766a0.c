// rea decompile_all
// name: FUN_200766a0
// address: 0x200766a0
// body: available
// range: 0x200766a0-0x20076731 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200766a0(void)

{
  float fVar1;
  int in_ECX;
  float *pfVar2;
  
  if (*(float *)(in_ECX + 0x34) < 0.01) {
    return 0;
  }
  FUN_200a1410(in_ECX + 0x10,in_ECX + 4);
  pfVar2 = (float *)(in_ECX + 0x1c);
  FUN_200a1530(pfVar2,in_ECX + 4);
  fVar1 = SQRT(*(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x24) +
               *(float *)(in_ECX + 0x20) * *(float *)(in_ECX + 0x20) + *pfVar2 * *pfVar2);
  if (1e-10 < fVar1) {
    FUN_200c3870(fVar1);
    return 1;
  }
  *pfVar2 = 0.0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return 1;
}

