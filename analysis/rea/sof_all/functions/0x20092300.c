// rea decompile_all
// name: FUN_20092300
// address: 0x20092300
// body: available
// range: 0x20092300-0x20092354 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20092300(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x1c))(param_1);
  if (cVar1 != '\0') {
    *param_1 = in_ECX[0x17];
    param_1[1] = in_ECX[0x18];
    param_1[2] = in_ECX[0x19];
    *param_2 = in_ECX[0x32];
    *param_3 = in_ECX[0x1a];
    param_3[1] = in_ECX[0x1b];
    param_3[2] = in_ECX[0x1c];
    return 1;
  }
  return 0;
}

