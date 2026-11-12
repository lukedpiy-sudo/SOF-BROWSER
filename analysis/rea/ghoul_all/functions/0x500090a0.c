// rea decompile_all
// name: FUN_500090a0
// address: 0x500090a0
// body: available
// range: 0x500090a0-0x50009183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500090a0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  iVar1 = _strncmp(&DAT_5015cd20,&DAT_5012f5fc,3);
  if ((iVar1 != 0) && (iVar1 = _strncmp(&DAT_5015cd20,&DAT_5012f5f8,3), iVar1 != 0)) {
    iVar1 = _strncmp(&DAT_5015cd20,&DAT_5012f5f4,3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_5015cd24 != 'a') {
      return;
    }
  }
  *(float *)((int)this + 0x10) = *(float *)((int)this + 0x10) + 0.25;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 0.75;
  *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) + 2.0;
  *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * 0.5;
  return;
}

