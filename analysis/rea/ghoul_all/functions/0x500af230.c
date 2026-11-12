// rea decompile_all
// name: FUN_500af230
// address: 0x500af230
// body: available
// range: 0x500af230-0x500af3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500af230(int *param_1)

{
  char *pcVar1;
  char *_Str2;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char *_Str1;
  int *piVar5;
  
  if (param_1[0x72] == 0) {
    piVar5 = param_1 + 1;
    puVar2 = FUN_500c33f0();
    (*DAT_5015ca24)(s_path_corner_with_no_targetname_a_5014ce68,puVar2,piVar5);
    FUN_500c3880(param_1);
    return;
  }
  FUN_500aefd0((int)param_1,1,DAT_5015cc10);
  FUN_500aefd0((int)param_1,2,DAT_5015cc14);
  FUN_500aefd0((int)param_1,3,DAT_5015cc18);
  FUN_500aefd0((int)param_1,4,DAT_5015cc1c);
  FUN_500aefd0((int)param_1,5,DAT_5015cc20);
  FUN_500aefd0((int)param_1,6,DAT_5015cc24);
  _Str2 = DAT_5015cc28;
  if ((DAT_5015cc28 != (char *)0x0) && (*DAT_5015cc28 != '\0')) {
    iVar4 = 0;
    if (s_std_istand_n_a_n_50135c48[0] != '\0') {
      _Str1 = s_std_istand_n_a_n_50135c48;
      do {
        iVar3 = __strcmpi(_Str1,_Str2);
        if (iVar3 == 0) {
          param_1[0x86] = (int)(s_std_istand_n_a_n_50135c48 + iVar4 * 0x58);
          goto LAB_500af316;
        }
        pcVar1 = _Str1 + 0x58;
        _Str1 = _Str1 + 0x58;
        iVar4 = iVar4 + 1;
      } while (*pcVar1 != '\0');
    }
    (*DAT_5015ca24)(s_couldn_t_find_path_corner_moveac_5014ce30,_Str2);
    param_1[0x86] = (int)s_std_wnormal_n_pk_a_50135ca0;
  }
LAB_500af316:
  param_1[0x56] = 1;
  param_1[0xb0] = (int)&LAB_500af140;
  param_1[0x47] = -0x3f000000;
  param_1[0x48] = -0x3f000000;
  param_1[0x49] = -0x3f000000;
  param_1[0x4a] = 0x41000000;
  param_1[0x4b] = 0x41000000;
  param_1[0x4c] = 0x41000000;
  param_1[0x46] = param_1[0x46] | 1;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xae] = (int)&LAB_500af210;
  param_1[0xad] = (int)(DAT_5015ccdc + 0.5);
  (*DAT_5015cb28)(param_1);
  return;
}

