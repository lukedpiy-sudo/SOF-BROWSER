// rea decompile_all
// name: FUN_50065470
// address: 0x50065470
// body: available
// range: 0x50065470-0x50065574 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_50065470(void *this,char *param_1,char *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,char *param_16,
            undefined4 param_17,undefined4 param_18)

{
  char cVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x114) = param_4;
  *(undefined4 *)((int)this + 8) = param_6;
  *(undefined4 *)((int)this + 0x10) = param_10;
  *(undefined4 *)((int)this + 4) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_7;
  if (param_1 != (char *)0x0) {
    iVar2 = 0x14 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)this + iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  if (param_2 != (char *)0x0) {
    iVar2 = 0x54 - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)this + iVar2] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  if (param_3 != (char *)0x0) {
    iVar2 = 0x94 - (int)param_3;
    do {
      cVar1 = *param_3;
      param_3[(int)this + iVar2] = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
  }
  if ((int)this + 0xd4 != 0) {
    iVar2 = ((int)this + 0xd4) - (int)param_16;
    do {
      cVar1 = *param_16;
      param_16[iVar2] = cVar1;
      param_16 = param_16 + 1;
    } while (cVar1 != '\0');
  }
  *(undefined4 *)((int)this + 0x128) = param_11;
  *(undefined4 *)((int)this + 300) = param_14;
  *(undefined4 *)((int)this + 0x120) = param_12;
  *(undefined4 *)((int)this + 0x124) = param_13;
  *(undefined4 *)((int)this + 0x144) = param_17;
  *(undefined4 *)((int)this + 0x130) = param_15;
  *(undefined4 *)((int)this + 0x118) = param_8;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x11c) = param_9;
  *(undefined4 *)((int)this + 0x148) = param_18;
  return;
}

