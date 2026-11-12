// rea decompile_all
// name: FUN_200dd400
// address: 0x200dd400
// body: available
// range: 0x200dd400-0x200dd484 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dd400(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f418;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  uVar1 = FUN_200c5b50(local_1c);
  local_4 = 0;
  iVar2 = (*DAT_20403640)(uVar1);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + iVar2;
  if (iStack_18 != 0) {
    if (*(char *)(iStack_18 + -1) != '\0') {
      *(char *)(iStack_18 + -1) = *(char *)(iStack_18 + -1) + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_200f9f75((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}

