// rea decompile_all
// name: FUN_5005c460
// address: 0x5005c460
// body: available
// range: 0x5005c460-0x5005c59b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5005c460(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_5006a470(&DAT_5015c7b8,param_1);
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1b4) != 0)) && (iVar2 != 0)) {
    bVar1 = FUN_5006a960(param_1);
    if (bVar1) {
      DAT_50159468 = param_2;
      return;
    }
    bVar1 = FUN_5006a9a0(param_1);
    if (bVar1) {
      DAT_50159460 = param_2;
      return;
    }
    if (*(int *)(iVar2 + 0x54) == 0x27) {
      FUN_5005e540(&DAT_50159a60,param_1,param_2);
      return;
    }
    if (*(int *)(iVar2 + 0x44) == 1) {
      switch(*(int *)(iVar2 + 0x54)) {
      case 0x12:
        *(undefined4 *)(param_2 + 0x24) = 1;
        return;
      default:
        *(undefined4 *)(param_2 + 0x24) = 0;
        break;
      case 0x14:
        *(undefined4 *)(param_2 + 0x24) = 2;
        return;
      case 0x15:
        *(undefined4 *)(param_2 + 0x24) = 6;
        return;
      case 0x16:
        *(undefined4 *)(param_2 + 0x24) = 3;
        return;
      case 0x17:
        *(undefined4 *)(param_2 + 0x24) = 5;
        return;
      case 0x18:
        *(undefined4 *)(param_2 + 0x24) = 4;
        return;
      case 0x19:
        *(undefined4 *)(param_2 + 0x24) = 10;
        return;
      case 0x1a:
        *(undefined4 *)(param_2 + 0x24) = 7;
        return;
      case 0x1b:
        *(undefined4 *)(param_2 + 0x24) = 9;
        return;
      case 0x1c:
        *(undefined4 *)(param_2 + 0x24) = 8;
        return;
      }
    }
  }
  return;
}

