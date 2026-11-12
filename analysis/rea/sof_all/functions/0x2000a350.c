// rea decompile_all
// name: FUN_2000a350
// address: 0x2000a350
// body: available
// range: 0x2000a350-0x2000a393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000a350(void)

{
  undefined **ppuVar1;
  int *piVar2;
  
  ppuVar1 = &PTR_s_pics_interface2_no_0_2011cb54;
  do {
    (*DAT_20403590)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x2011cb80);
  piVar2 = (int *)*DAT_2015ee34;
  if (piVar2 != DAT_2015ee34) {
    do {
      (*(code *)**(undefined4 **)piVar2[2])();
      (**(code **)(*(int *)piVar2[2] + 4))();
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_2015ee34);
  }
  return;
}

