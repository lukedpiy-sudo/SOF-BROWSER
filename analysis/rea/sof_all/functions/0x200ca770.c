// rea decompile_all
// name: FUN_200ca770
// address: 0x200ca770
// body: available
// range: 0x200ca770-0x200ca7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200ca770(char *param_1)

{
  char *_Str1;
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(in_ECX + 0x1c);
  if (piVar2 != *(int **)(in_ECX + 0x1c)) {
    do {
      _Str1 = *(char **)(piVar2[2] + 0x10);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar1 = __strcmpi(_Str1,param_1);
      if (iVar1 == 0) {
        return piVar2[2];
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x1c));
  }
  return 0;
}

