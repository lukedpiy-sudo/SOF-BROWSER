// rea decompile_all
// name: FUN_200f4400
// address: 0x200f4400
// body: available
// range: 0x200f4400-0x200f4446 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200f4400(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = _malloc(0x18);
  if (param_2 == 0) {
    param_2 = 8;
  }
  puVar1[2] = param_1;
  *puVar1 = 0;
  puVar1[1] = param_2;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  pvVar2 = _malloc(param_1 * param_2);
  puVar1[5] = pvVar2;
  return puVar1;
}

