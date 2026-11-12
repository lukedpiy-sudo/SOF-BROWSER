// rea decompile_all
// name: FUN_200ebec0
// address: 0x200ebec0
// body: available
// range: 0x200ebec0-0x200ebf6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ebec0(void)

{
  int iVar1;
  
  if ((DAT_20406588 != (undefined4 *)0x0) || (DAT_20406580 != (undefined4 *)0x0)) {
    Com_Printf(&DAT_2015980c);
    if (DAT_20406588 != (undefined4 *)0x0) {
      Com_Printf(s____closing_return_spring_201597f0);
      if (DAT_20406588 != (undefined4 *)0x0) {
        (**(code **)*DAT_20406588)(1);
      }
      DAT_20406588 = (undefined4 *)0x0;
    }
    if (DAT_20406580 != (undefined4 *)0x0) {
      Com_Printf(s____closing_feedback_device_201597d4);
      iVar1 = 0;
      do {
        if ((&DAT_20406570)[iVar1] != 0x21) {
          FUN_200edab0(iVar1);
        }
        (&DAT_20406570)[iVar1] = 0x21;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 4);
      if (DAT_20406580 != (undefined4 *)0x0) {
        (**(code **)*DAT_20406580)(1);
      }
      DAT_20406580 = (undefined4 *)0x0;
    }
  }
  return;
}

