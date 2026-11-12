// rea decompile_all
// name: FUN_50083d50
// address: 0x50083d50
// body: available
// range: 0x50083d50-0x50083e40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50083d50(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    if (DAT_5015c514 != '\0') {
      return;
    }
    iVar2 = (*DAT_5015c9f8)(s_gore_bloodpool_50133bb8);
    if (iVar2 == 0) {
      return;
    }
    (*DAT_5015ca70)(5);
    (*DAT_5015ca70)(iVar2);
    uVar1 = DAT_5015c518 | 1;
    if (DAT_5015c51c != 0) {
      uVar1 = DAT_5015c518 | 0x81;
    }
    DAT_5015c518 = uVar1;
    (*DAT_5015ca70)(DAT_5015c518);
    (*DAT_5015ca84)(param_1);
    FUN_50085190(&DAT_5015c518,param_1,1,0);
    return;
  }
  if (param_3 == 0) {
    param_3 = 10000;
  }
  (*DAT_5015ca70)(1);
  switch(param_2) {
  case 0:
    uVar3 = 4;
    break;
  case 1:
    uVar3 = 0xf;
    break;
  case 2:
    uVar3 = 0x11;
    break;
  case 3:
    uVar3 = 0x1c;
    break;
  case 4:
    uVar3 = 0x35;
    break;
  default:
    goto switchD_50083dfe_default;
  }
  (*DAT_5015ca70)(uVar3);
switchD_50083dfe_default:
  (*DAT_5015ca84)(param_1);
  (*DAT_5015ca78)(param_3);
  (*DAT_5015ca60)(param_1,1);
  return;
}

