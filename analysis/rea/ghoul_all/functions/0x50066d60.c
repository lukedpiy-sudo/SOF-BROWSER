// rea decompile_all
// name: FUN_50066d60
// address: 0x50066d60
// body: available
// range: 0x50066d60-0x50066e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_50066d60(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,char *param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_50065e20(this);
  *(undefined ***)this = &PTR_FUN_501287f0;
  _strncpy((char *)((int)this + 4),param_1,0x40);
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  *(undefined4 *)((int)this + 0x4c) = param_5;
  *(undefined4 *)((int)this + 0x50) = param_6;
  *(undefined4 *)((int)this + 0xac) = param_4;
  *(undefined4 *)((int)this + 0x54) = param_7;
  _strncpy((char *)((int)this + 0x58),param_8,0x40);
  *(undefined4 *)((int)this + 0x98) = param_9;
  *(undefined4 *)((int)this + 0x9c) = param_10;
  *(undefined4 *)((int)this + 0xa0) = param_11;
  *(undefined4 *)((int)this + 0x160) = param_12;
  *(undefined4 *)((int)this + 0xa4) = 0;
  puVar2 = (undefined4 *)((int)this + 0xb0);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0xf0) = 0x3f800000;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  puVar2 = (undefined4 *)((int)this + 0x104);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

