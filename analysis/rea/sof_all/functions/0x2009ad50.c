// rea decompile_all
// name: FUN_2009ad50
// address: 0x2009ad50
// body: available
// range: 0x2009ad50-0x2009ae4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009ad50(undefined1 *param_1)

{
  int in_ECX;
  
  if (DAT_20403c04 != 0) {
    *param_1 = 0;
    if ((*(int *)(in_ECX + 0x88) == 0) || (*(char *)(in_ECX + 0x8c) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x2009ae47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(DAT_20403c04 + 0x28))();
      return;
    }
    (**(code **)(DAT_20403c04 + 0x2c))(0xde1);
    if (*(char *)(in_ECX + 0x14) != '\0') {
      (**(code **)(DAT_20403c04 + 0x2c))(0xc60);
      (**(code **)(DAT_20403c04 + 0x2c))(0xc61);
      (**(code **)(DAT_20403c04 + 0x84))(0x2000,0x2500,0x2402);
      (**(code **)(DAT_20403c04 + 0x84))(0x2001,0x2500,0x2402);
      *param_1 = 1;
    }
    if ((*(char *)(in_ECX + 0x84) == '\0') && (DAT_20403d6c == '\0')) {
      (**(code **)(DAT_20403c04 + 0x50))(0x1702);
      (**(code **)(DAT_20403c04 + 0x68))();
      (**(code **)(DAT_20403c04 + 0x54))(in_ECX + 0x94);
                    /* WARNING: Could not recover jumptable at 0x2009ae35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(DAT_20403c04 + 0x50))(0x1700);
      return;
    }
  }
  return;
}

