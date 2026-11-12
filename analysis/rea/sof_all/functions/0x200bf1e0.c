// rea decompile_all
// name: FUN_200bf1e0
// address: 0x200bf1e0
// body: available
// range: 0x200bf1e0-0x200bf2a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bf1e0(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010daa3;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (0 < *(int *)(in_ECX + 0x24)) {
    piVar1 = (int *)(in_ECX + 0x38);
    ExceptionList = &pvStack_c;
    do {
      if (*piVar1 != 0) {
        FUN_200f9f75(*piVar1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 5;
    } while (iVar2 < *(int *)(in_ECX + 0x24));
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    (**(code **)(DAT_20403c04 + 0x24))(1,(undefined4 *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  iVar2 = *(int *)(in_ECX + 0x18);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}

