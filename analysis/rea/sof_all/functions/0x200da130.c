// rea decompile_all
// name: FUN_200da130
// address: 0x200da130
// body: available
// range: 0x200da130-0x200da27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200da130(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0();
  local_4 = 0;
  FUN_200234d0(in_ECX + 0x8c);
  iVar2 = FUN_200cf780();
  if (-1 < iVar2) {
    if (param_1 == 1) {
      FUN_200c8b90();
      if (*(int *)(in_ECX + 0x50) != 0) {
        Cvar_Set();
      }
      (*DAT_20390d94)();
    }
    for (puVar1 = *(undefined4 **)(in_ECX + 0x88); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if ((param_1 == puVar1[1]) || (puVar1[1] == 0)) {
        (*DAT_20390d94)();
        FUN_200c7190();
      }
    }
  }
  if (local_18 != 0) {
    if (*(char *)(local_18 + -1) != '\0') {
      *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75();
  }
  ExceptionList = local_c;
  return;
}

