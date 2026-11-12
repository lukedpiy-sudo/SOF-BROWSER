// rea decompile_all
// name: FUN_200f9ea9
// address: 0x200f9ea9
// body: available
// range: 0x200f9ea9-0x200f9f15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f9ea9(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_200fed04(DAT_20409bb0);
  if (uVar1 < (uint)((int)DAT_20409bac + (4 - DAT_20409bb0))) {
    iVar2 = FUN_200fed04(DAT_20409bb0);
    iVar2 = FUN_200f9a92(DAT_20409bb0,iVar2 + 0x10);
    if (iVar2 == 0) {
      return;
    }
    DAT_20409bac = (undefined4 *)(iVar2 + ((int)DAT_20409bac - DAT_20409bb0 >> 2) * 4);
    DAT_20409bb0 = iVar2;
  }
  *DAT_20409bac = param_1;
  DAT_20409bac = DAT_20409bac + 1;
  return;
}

