// rea decompile_all
// name: FUN_50104900
// address: 0x50104900
// body: available
// range: 0x50104900-0x501049e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50104900(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (DAT_5015d8d5 != '\0') {
    FUN_500c3880(param_1);
    return;
  }
  iVar1 = FUN_500f7430(param_2);
  if (iVar1 != 0) {
    param_2 = FUN_500f7430(param_2);
  }
  if ((*(int *)(param_2 + 0x450) == 0) && (*(int *)(param_2 + 0x74) == 0)) {
    fVar3 = FUN_500fe130((float *)(param_1 + 0x93));
    if ((fVar3 != (float10)0.0) && (FUN_500b2060(), param_4 != 0)) {
      switch(*(undefined1 *)(param_4 + 0x23)) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x28:
        break;
      default:
        uVar2 = (*DAT_5015c9f4)(s_Weapons_gren_bounce_wav_501559e8,0x3f19999a,0x40000000,0,0);
        (*DAT_5015ca48)(param_1,2,uVar2);
        return;
      }
    }
  }
  else {
    (*(code *)param_1[0xae])(param_1);
  }
  return;
}

