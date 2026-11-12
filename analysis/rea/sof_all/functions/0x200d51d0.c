// rea decompile_all
// name: FUN_200d51d0
// address: 0x200d51d0
// body: available
// range: 0x200d51d0-0x200d5244 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200d51d0(undefined4 param_1)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  int *in_ECX;
  char *_Str2;
  
  cVar1 = FUN_200eafe0(1);
  do {
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x28))();
      return 1;
    }
    _Str2 = s_invisible_20158c18;
    _Str1 = (char *)FUN_200eb440(0);
    iVar2 = __strcmpi(_Str1,_Str2);
    if (iVar2 == 0) {
      *(undefined1 *)((int)in_ECX + 0xad) = 1;
    }
    else {
      cVar1 = FUN_200cf890(param_1);
      if (cVar1 == '\0') {
        FUN_200eb490(param_1,s_Unrecognised_hbar_keyword_20158bfc);
        return 0;
      }
    }
    cVar1 = FUN_200eafe0(1);
  } while( true );
}

