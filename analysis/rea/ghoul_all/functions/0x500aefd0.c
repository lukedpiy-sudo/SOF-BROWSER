// rea decompile_all
// name: FUN_500aefd0
// address: 0x500aefd0
// body: available
// range: 0x500aefd0-0x500af0a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500aefd0(int param_1,int param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  char *_Str1;
  int iVar4;
  
  if (((param_2 < 7) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    switch(param_2) {
    case 1:
      piVar3 = (int *)(param_1 + 0x1f8);
      break;
    case 2:
      piVar3 = (int *)(param_1 + 0x1fc);
      break;
    case 3:
      piVar3 = (int *)(param_1 + 0x200);
      break;
    case 4:
      piVar3 = (int *)(param_1 + 0x204);
      break;
    case 5:
      piVar3 = (int *)(param_1 + 0x208);
      break;
    default:
      piVar3 = (int *)(param_1 + 0x20c);
    }
    iVar4 = 0;
    if (s_std_istand_n_a_n_50135c48[0] != '\0') {
      _Str1 = s_std_istand_n_a_n_50135c48;
      do {
        iVar2 = __strcmpi(_Str1,param_3);
        if (iVar2 == 0) {
          *piVar3 = (int)(s_std_istand_n_a_n_50135c48 + iVar4 * 0x58);
          return;
        }
        pcVar1 = _Str1 + 0x58;
        _Str1 = _Str1 + 0x58;
        iVar4 = iVar4 + 1;
      } while (*pcVar1 != '\0');
    }
    (*DAT_5015ca24)(s_couldn_t_find_path_corner_waitac_5014cdf8,param_3);
    *piVar3 = (int)s_std_istand_n_a_n_50135c48;
  }
  return;
}

