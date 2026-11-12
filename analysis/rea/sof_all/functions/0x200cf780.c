// rea decompile_all
// name: FUN_200cf780
// address: 0x200cf780
// body: available
// range: 0x200cf780-0x200cf88e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200cf780(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010e738;
  local_c = ExceptionList;
  iVar2 = *(int *)(in_ECX + 0xc);
  iVar3 = 0;
  local_4 = 0;
  if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(in_ECX + 0x68);
  }
  ExceptionList = &local_c;
  iVar1 = FUN_200c66a0();
  iVar2 = (iVar1 - iVar4) - iVar2;
  if ((iVar2 < 0) || (*(int *)(in_ECX + 0x20) < iVar2)) {
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x10);
    iVar4 = *(int *)(in_ECX + 4);
    if (*(int **)(in_ECX + 0x68) != (int *)0x0) {
      iVar3 = **(int **)(in_ECX + 0x68);
    }
    iVar1 = FUN_200c66d0();
    iVar1 = iVar1 + ((*(int *)(iVar4 + 0x80) - iVar3) - iVar2);
    if ((-1 < iVar1) && (iVar1 <= *(int *)(in_ECX + 0x24))) {
      iVar2 = (*DAT_20403640)(&param_1);
      iVar1 = iVar1 / iVar2;
      if (iVar1 < param_5) {
        if (param_2 == 0) {
          ExceptionList = local_c;
          return iVar1;
        }
        if (*(char *)(param_2 + -1) == '\0') {
          FUN_200f9f75((char *)(param_2 + -1));
          ExceptionList = local_c;
          return iVar1;
        }
        *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + -1;
        ExceptionList = local_c;
        return iVar1;
      }
    }
    if (param_2 != 0) {
      if (*(char *)(param_2 + -1) == '\0') {
        FUN_200f9f75((char *)(param_2 + -1));
      }
      else {
        *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + -1;
      }
    }
  }
  ExceptionList = local_c;
  return -1;
}

