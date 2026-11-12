// rea decompile_all
// name: FUN_200f3480
// address: 0x200f3480
// body: available
// range: 0x200f3480-0x200f3507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f3480(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x52; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = 0xffffffff;
  param_1[0x43] = 0;
  param_1[0x44] = 0x2000;
  puVar1 = _malloc(0x2001);
  param_1[0x42] = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0x2000;
    puVar1 = _malloc(0x2001);
    param_1[0x45] = puVar1;
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      return 1;
    }
    FUN_200f9d32(param_1[0x42]);
  }
  return 0;
}

