// rea decompile_all
// name: FUN_200dccc0
// address: 0x200dccc0
// body: available
// range: 0x200dccc0-0x200dcd99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dccc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840(param_1,0xf);
  *in_ECX = &PTR_FUN_20112bc0;
  iVar1 = *param_1;
  local_4 = 0;
  iVar2 = FUN_200c64f0();
  iVar1 = *(int *)(iVar1 + 0x48);
  iVar3 = FUN_200e6cb0();
  iVar3 = (iVar1 + iVar2 * -2) - iVar3;
  in_ECX[8] = iVar3;
  uVar4 = __ftol();
  in_ECX[10] = uVar4;
  in_ECX[0x23] = iVar3;
  if ((int)in_ECX[0xc] < 8) {
    in_ECX[9] = 8;
    uVar4 = __ftol();
    in_ECX[0xb] = uVar4;
  }
  in_ECX[0x24] = 1;
  ExceptionList = local_c;
  return;
}

