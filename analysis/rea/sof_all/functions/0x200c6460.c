// rea decompile_all
// name: FUN_200c6460
// address: 0x200c6460
// body: available
// range: 0x200c6460-0x200c64e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c6460(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010df6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_ECX[2] != 0) {
    ExceptionList = &local_c;
    FUN_200f9f75(in_ECX[2]);
  }
  pvVar1 = operator_new(0x20);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_200c9de0(param_3);
    iVar3 = FUN_200c46d0(param_1,param_2,uVar2,*(undefined4 *)(*in_ECX + 0xac));
  }
  in_ECX[2] = iVar3;
  ExceptionList = local_c;
  return;
}

