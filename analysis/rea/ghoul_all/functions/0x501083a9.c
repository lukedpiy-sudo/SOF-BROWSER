// rea decompile_all
// name: FUN_501083a9
// address: 0x501083a9
// body: available
// range: 0x501083a9-0x501083f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __thiscall FUN_501083a9(undefined *param_1,byte *param_2)

{
  uint uVar1;
  byte *this;
  undefined *puVar2;
  
  while( true ) {
    if (DAT_501565a8 < 2) {
      uVar1 = (byte)PTR_DAT_5015639c[(uint)*param_2 * 2] & 8;
      param_1 = PTR_DAT_5015639c;
    }
    else {
      puVar2 = (undefined *)0x8;
      uVar1 = FUN_5010c4e5(param_1,(uint)*param_2,8);
      param_1 = puVar2;
    }
    if (uVar1 == 0) break;
    param_2 = param_2 + 1;
  }
  this = param_2;
  _strlen((char *)param_2);
  puVar2 = FUN_5010c454(this,param_2);
  return (float10)*(double *)(puVar2 + 0x10);
}

