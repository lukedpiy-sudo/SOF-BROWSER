// rea decompile_all
// name: FUN_500840d0
// address: 0x500840d0
// body: available
// range: 0x500840d0-0x5008420a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_500840d0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (((iVar1 == 0) || ((*(byte *)(iVar1 + 0x20) & 4) == 0)) &&
     ((iVar2 = *(int *)(param_1 + 0x30), iVar2 == 0 ||
      (((*(int *)(iVar2 + 0x450) == 0 && (*(int *)(iVar2 + 0x74) == 0)) || (DAT_5015c514 == '\0'))))
     )) {
    if (*(int *)(&DAT_50145f08 + (uint)*(byte *)(iVar1 + 0x23) * 4) != 0) {
      if (DAT_5015ccdc < _DAT_50145fb4) {
        return;
      }
      if (_DAT_50145fb4 < DAT_5015ccdc) {
        _DAT_50145fb4 = DAT_5015ccdc + 0.2;
      }
    }
    cVar3 = (*DAT_5015ca54)(*(undefined4 *)(param_1 + 0x28),0x19);
    (*DAT_5015ca70)(1);
    (*DAT_5015ca70)((cVar3 != '\0') + '\x06');
    FUN_500839b0(param_1);
    *param_2 = *param_2 * 1000.0;
    param_2[1] = param_2[1] * 1000.0;
    param_2[2] = param_2[2] * 1000.0;
    (*DAT_5015ca84)(param_2);
    *param_2 = *param_2 * 0.001;
    param_2[1] = param_2[1] * 0.001;
    param_2[2] = param_2[2] * 0.001;
    (*DAT_5015ca70)(param_3);
    (*DAT_5015ca70)(param_4);
    (*DAT_5015ca70)(param_5);
    (*DAT_5015ca60)(param_1 + 8,1);
  }
  return;
}

