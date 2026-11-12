// rea decompile_all
// name: FUN_500c0a90
// address: 0x500c0a90
// body: available
// range: 0x500c0a90-0x500c0b81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c0a90(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 0x74) != 0)) || ((*(byte *)(param_1 + 0x6e) & 2) != 0))
  {
    if (param_1[0xae] != 0) {
      param_1[0xa5] = 0;
      (*DAT_5015ca70)(0x1f);
      (*DAT_5015ca78)(0);
      (*DAT_5015ca60)(param_1 + 1,0);
      if ((*(byte *)(param_1 + 0x6e) & 4) == 0) {
        param_1[0xc6] = 0;
        FUN_500c3880(param_1);
        return;
      }
      param_1[0x56] = 1;
      param_1[0xae] = 0;
      return;
    }
    iVar1 = param_1[0xc6];
    param_1[0xad] = (int)(DAT_5015ccdc + 1.0);
    param_1[0xa5] = (int)DAT_5015ccdc;
    (*DAT_5015ca70)(0x1f);
    (*DAT_5015ca78)(iVar1);
    (*DAT_5015ca60)(param_2 + 4,0);
    param_1[0x56] = 0;
    param_1[0xcb] = param_3;
    param_1[0xae] = (int)FUN_500c09c0;
    param_1[0xad] = (int)(DAT_5015ccdc + 1.0);
  }
  return;
}

