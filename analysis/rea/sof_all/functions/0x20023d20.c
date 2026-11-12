// rea decompile_all
// name: FUN_20023d20
// address: 0x20023d20
// body: available
// range: 0x20023d20-0x20023d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20023d20(void)

{
  int iVar1;
  int *local_28;
  undefined4 local_24;
  byte bStack_20;
  
  local_28 = (int *)0x0;
  iVar1 = FUN_20024210(&local_28);
  if (-1 < iVar1) {
    local_24 = 0x24;
    (**(code **)(*local_28 + 0x2c))(local_28,&local_24);
    if (((bStack_20 & 8) != 0) && (iVar1 == 0)) {
      iVar1 = FUN_200f9950();
      if (iVar1 != 0) {
        (**(code **)(*local_28 + 8))(local_28);
        return 1;
      }
    }
  }
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  return 0;
}

