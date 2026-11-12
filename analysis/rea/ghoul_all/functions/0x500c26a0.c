// rea decompile_all
// name: FUN_500c26a0
// address: 0x500c26a0
// body: available
// range: 0x500c26a0-0x500c2766 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500c26a0(int param_1,int param_2,char *param_3,void *param_4)

{
  byte *_Str1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_3 != (char *)0x0) {
    uVar3 = DAT_5015cca0;
    if (param_1 != 0) {
      uVar3 = param_1 + 0x464;
    }
    if (uVar3 < DAT_5015cca0 + DAT_5015c938 * 0x464) {
      puVar4 = (undefined4 *)(uVar3 + param_2);
      iVar2 = DAT_5015c938;
      do {
        if ((*(int *)((0x78 - param_2) + (int)puVar4) != 0) &&
           (_Str1 = (byte *)*puVar4, _Str1 != (byte *)0x0)) {
          if (param_4 == (void *)0x0) {
            iVar1 = __strcmpi((char *)_Str1,param_3);
          }
          else {
            iVar1 = FUN_501129a0(_Str1,param_3,param_4);
          }
          iVar2 = DAT_5015c938;
          if (iVar1 == 0) {
            return uVar3;
          }
        }
        uVar3 = uVar3 + 0x464;
        puVar4 = puVar4 + 0x119;
      } while (uVar3 < DAT_5015cca0 + iVar2 * 0x464);
    }
  }
  return 0;
}

