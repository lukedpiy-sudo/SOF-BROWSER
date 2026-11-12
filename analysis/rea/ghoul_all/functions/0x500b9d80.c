// rea decompile_all
// name: FUN_500b9d80
// address: 0x500b9d80
// body: available
// range: 0x500b9d80-0x500b9e6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b9d80(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar2 = *(short *)(param_1 + 0x29e);
  if (sVar2 == 0) {
    sVar2 = *(short *)(param_1 + 0x29c);
    if ((sVar2 != 0) &&
       (iVar4 = DAT_5015cca0 + sVar2 * 0x464, *(short *)(DAT_5015cca0 + 0x29c + sVar2 * 0x464) != 0)
       ) {
      do {
        sVar2 = *(short *)(iVar4 + 0x29c);
        *(undefined2 *)(iVar4 + 0x29c) = 0;
        *(undefined2 *)(iVar4 + 0x29e) = 0;
        iVar4 = DAT_5015cca0 + sVar2 * 0x464;
      } while (sVar2 != 0);
    }
  }
  else {
    sVar3 = *(short *)(DAT_5015cca0 + 0x29c + sVar2 * 0x464);
    iVar4 = DAT_5015cca0 + sVar2 * 0x464;
    if (sVar3 != 0) {
      do {
        iVar1 = DAT_5015cca0 + sVar3 * 0x464;
        if (iVar1 == param_1) {
          *(undefined2 *)(iVar4 + 0x29c) = *(undefined2 *)(param_1 + 0x29c);
          *(undefined2 *)(param_1 + 0x29c) = 0;
          return;
        }
        sVar3 = *(short *)(iVar1 + 0x29c);
        iVar4 = iVar1;
      } while (sVar3 != 0);
      return;
    }
  }
  return;
}

