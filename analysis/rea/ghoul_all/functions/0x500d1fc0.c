// rea decompile_all
// name: FUN_500d1fc0
// address: 0x500d1fc0
// body: available
// range: 0x500d1fc0-0x500d206e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float __cdecl FUN_500d1fc0(int param_1,undefined4 *param_2,int param_3,short param_4)

{
  float fVar1;
  int iStack_40;
  int iStack_3c;
  short sStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  FUN_500b5750(&iStack_40);
  if ((param_3 != 0) && (param_4 != 0)) {
    iStack_3c = param_3;
    sStack_38 = param_4;
    uStack_34 = *(undefined4 *)(param_1 + 0x164);
    uStack_2c = *param_2;
    uStack_28 = param_2[1];
    uStack_24 = param_2[2];
    iStack_40 = param_1;
    uStack_20 = 0xbec90fdb;
    uStack_1c = 0x3f490fdb;
    uStack_18 = 0xbf800000;
    uStack_14 = 0x3f800000;
    uStack_10 = 0x3ea0d97c;
    uStack_4 = 0;
    uStack_3 = 1;
    uStack_2 = 1;
    fVar1 = FUN_500b5790(&iStack_40);
    return fVar1;
  }
  return 4.2039e-45;
}

