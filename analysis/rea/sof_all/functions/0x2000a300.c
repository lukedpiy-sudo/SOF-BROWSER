// rea decompile_all
// name: FUN_2000a300
// address: 0x2000a300
// body: available
// range: 0x2000a300-0x2000a34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000a300(void)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_201c1f00 == 8) && (*(float *)(DAT_2015ee40 + 0x18) != 0.0)) &&
     (piVar2 = (int *)*DAT_2015ee34, piVar2 != DAT_2015ee34)) {
    do {
      iVar1 = (**(code **)(*(int *)piVar2[2] + 0xc))();
      if (iVar1 != 0) {
        (**(code **)(*(int *)piVar2[2] + 8))();
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_2015ee34);
  }
  return;
}

