// rea decompile_all
// name: FUN_20031be0
// address: 0x20031be0
// body: available
// range: 0x20031be0-0x20031cf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20031be0(int param_1)

{
  float fVar1;
  undefined1 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1b8) != 2) {
    if (*(int *)(in_ECX + 0x1b8) != 3) {
      return;
    }
    fVar1 = (DAT_2027c478 - *(float *)(param_1 + 0x68)) /
            (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x68)) + 0.01;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    FUN_20038050(fVar1 * 1.5707964);
  }
  uVar2 = __ftol();
  *(undefined1 *)(param_1 + 0x2c) = uVar2;
  uVar2 = __ftol();
  *(undefined1 *)(param_1 + 0x2d) = uVar2;
  uVar2 = __ftol();
  *(undefined1 *)(param_1 + 0x2e) = uVar2;
  return;
}

