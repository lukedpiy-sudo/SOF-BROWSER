// rea decompile_all
// name: FUN_200dd0b0
// address: 0x200dd0b0
// body: available
// range: 0x200dd0b0-0x200dd190 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dd0b0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840(param_1,0xe);
  local_4 = 0;
  *in_ECX = &PTR_FUN_20112c00;
  FUN_200eafe0(2);
  uVar1 = FUN_200eb440(0);
  uVar1 = FUN_200f9e13(uVar1);
  in_ECX[8] = uVar1;
  uVar1 = __ftol();
  in_ECX[10] = uVar1;
  uVar1 = FUN_200eb440(1);
  iVar2 = FUN_200f9e13(uVar1);
  if ((int)in_ECX[0xc] < iVar2) {
    in_ECX[9] = iVar2;
    uVar1 = __ftol();
    in_ECX[0xb] = uVar1;
  }
  ExceptionList = local_c;
  return;
}

