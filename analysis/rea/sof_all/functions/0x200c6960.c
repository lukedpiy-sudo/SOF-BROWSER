// rea decompile_all
// name: FUN_200c6960
// address: 0x200c6960
// body: available
// range: 0x200c6960-0x200c69fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200c69ed to 0x200c6720 FUN_200c6720 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200c69f6 to 0x200e6340 FUN_200e6340 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c6960(void)

{
  char *_Str2;
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c) != 0) {
    _Str2 = *(char **)(in_ECX + 0x20);
    if (_Str2 == (char *)0x0) {
      _Str2 = "";
    }
    iVar1 = __strcmpi(*(char **)(*(int *)(in_ECX + 0x2c) + 4),_Str2);
    if (iVar1 != 0) {
      puVar2 = *(undefined1 **)(in_ECX + 0x10);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_201116cc;
      }
      uVar3 = FUN_20055450(s_menu__s__s_2015831c,*(undefined4 *)(*(int *)(in_ECX + 0x2c) + 4),puVar2
                           ,1);
      FUN_200c79c0(uVar3);
      *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x14) = 0;
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x8c) != '\0') {
      *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(iVar1 + 4);
      if (iVar1 != 0) {
        FUN_200e61a0();
        FUN_200f9f75(iVar1);
      }
      FUN_200c6720();
      return;
    }
    FUN_200e6340();
    return;
  }
  return;
}

