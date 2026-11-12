// rea decompile_all
// name: FUN_2002ed90
// address: 0x2002ed90
// body: available
// range: 0x2002ed90-0x2002ee28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002ed90(undefined4 param_1,undefined4 param_2)

{
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_20054b30(param_2,local_18,&local_24,local_c);
  FUN_200a0cc0();
  local_24 = local_24 * -1.0;
  local_20 = local_20 * -1.0;
  local_1c = local_1c * -1.0;
  FUN_200a15d0(0,local_18);
  FUN_200a15d0(1,&local_24);
  FUN_200a15d0(2,local_c);
  FUN_200a15d0(3,param_1);
  FUN_200a0c70();
  return;
}

