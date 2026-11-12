// rea decompile_all
// name: FUN_2008f650
// address: 0x2008f650
// body: available
// range: 0x2008f650-0x2008f70d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008f650(void)

{
  undefined4 *in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c74b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 2) = local_11;
  FUN_2000a5b0(0);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 6) = local_11;
  FUN_2000a5b0(0);
  *(undefined1 *)(in_ECX + 0xc) = local_11;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xb] = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  in_ECX[0x2e] = 0;
  *(undefined1 *)(in_ECX + 0x2f) = local_11;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  *(undefined1 *)((int)in_ECX + 0x75) = 0;
  *(undefined1 *)(in_ECX + 0x39) = 1;
  *(undefined1 *)((int)in_ECX + 0xe5) = 0;
  *in_ECX = &PTR_LAB_2011248c;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  *(undefined1 *)((int)in_ECX + 5) = 0;
  *(undefined1 *)(in_ECX + 0x39) = 1;
  *(undefined1 *)((int)in_ECX + 0xe5) = 0;
  ExceptionList = local_c;
  return;
}

