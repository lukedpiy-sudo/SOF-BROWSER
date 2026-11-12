// rea decompile_all
// name: FUN_20107c16
// address: 0x20107c16
// body: available
// range: 0x20107c16-0x20107c75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20107c16(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *local_c;
  uint local_8;
  
  uVar2 = DAT_20408480;
  uVar1 = DAT_2040846c;
  local_c = _malloc(0x200);
  bVar3 = local_c == (undefined *)0x0;
  if (bVar3) {
    local_c = PTR_DAT_2015d2b8;
  }
  else {
    FUN_200fe470(local_c,PTR_DAT_2015d2b8,0x200);
  }
  local_8 = (uint)!bVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = local_c;
  param_1[3] = local_8;
  return;
}

