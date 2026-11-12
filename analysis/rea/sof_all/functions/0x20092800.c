// rea decompile_all
// name: FUN_20092800
// address: 0x20092800
// body: available
// range: 0x20092800-0x20092925 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20092800(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_201125e4;
  FUN_200f9f75(in_ECX[0x51]);
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  FUN_200f9f75(in_ECX[0x49]);
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  FUN_200f9f75(in_ECX[0x41]);
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  FUN_200f9f75(in_ECX[0x3b]);
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  FUN_200f9f75(in_ECX[0x35]);
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  FUN_200f9f75(in_ECX[0x2d]);
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  FUN_200f9f75(in_ECX[0x27]);
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  FUN_200f9f75(in_ECX[0x21]);
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  *in_ECX = &PTR_FUN_20112584;
  FUN_20092110();
  FUN_20092110();
  FUN_20092110();
  *in_ECX = &PTR_LAB_2011242c;
  return;
}

