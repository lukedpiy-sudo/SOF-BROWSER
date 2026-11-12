// rea decompile_all
// name: FUN_5001e5a0
// address: 0x5001e5a0
// body: available
// range: 0x5001e5a0-0x5001e6a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001e5a0(void *this,undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char unaff_DI;
  undefined1 local_200 [248];
  undefined1 auStack_108 [260];
  char *pcStack_4;
  
  (**(code **)(*(int *)this + 0x174))(local_200,*(undefined4 *)((int)this + 0x1dc));
  cVar1 = (**(code **)(*(int *)this + 0x1e8))();
  if ((cVar1 == '\0') && (iVar2 = __strcmpi(pcStack_4,s_choke_50133584), iVar2 != 0)) {
    return;
  }
  if ((*(int *)((int)this + 0x1b8) == 0) && (unaff_DI != '\0')) {
    (*DAT_5015cb24)(1,param_1);
    FUN_500fe2b0();
    if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
      (*DAT_5015ca24)(s_general_voice_sound___s_5013355c,auStack_108);
    }
    iVar2 = (*DAT_5015c9f4)(auStack_108);
    if (iVar2 != 0) {
      FUN_500ee7f0(0.05);
      *(int *)((int)this + 0x68) = iVar2;
      *(int *)((int)this + 0x6c) = param_2;
      *(undefined4 *)((int)this + 0x70) = 0x40000000;
    }
  }
  return;
}

