// rea decompile_all
// name: FUN_20032eb0
// address: 0x20032eb0
// body: available
// range: 0x20032eb0-0x200330d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20032eb0(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0x40e00000;
  FUN_200facde(&local_4,4,1,param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_200facde(in_ECX + 0x30,4,1,param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_200facde(in_ECX + 0x54,4,1,param_1);
  FUN_20041d30(param_1);
  FUN_200facde(in_ECX + 0x60,0x40,1,param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_200facde(in_ECX + 200,4,1,param_1);
  FUN_200facde(in_ECX + 0xcc,4,1,param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_200facde(in_ECX + 0xe0,4,1,param_1);
  FUN_200facde(in_ECX + 0xe4,0xc,1,param_1);
  FUN_200facde(in_ECX + 0xf0,0xc,1,param_1);
  FUN_200facde(in_ECX + 0xfc,4,1,param_1);
  FUN_200facde(in_ECX + 0x100,0x40,1,param_1);
  FUN_200facde(in_ECX + 0x140,4,1,param_1);
  FUN_200facde(in_ECX + 0x144,0x40,1,param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_20041d30(param_1);
  FUN_200facde(in_ECX + 0x1b4,4,1,param_1);
  FUN_200facde(in_ECX + 0x1b8,4,1,param_1);
  return;
}

