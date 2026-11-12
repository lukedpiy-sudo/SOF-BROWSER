// rea decompile_all
// name: FUN_200d0690
// address: 0x200d0690
// body: available
// range: 0x200d0690-0x200d071d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d0690(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_200ce840(param_1,1);
  *(undefined1 *)(in_ECX + 0x25) = (undefined1)param_1;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  *(undefined1 *)(in_ECX + 0x2b) = (undefined1)param_1;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  *(undefined1 *)(in_ECX + 0x31) = (undefined1)param_1;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x37) = 0;
  *in_ECX = &PTR_FUN_201127c8;
  in_ECX[0x24] = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  return;
}

