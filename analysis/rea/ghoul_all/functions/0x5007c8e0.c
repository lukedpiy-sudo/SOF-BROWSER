// rea decompile_all
// name: FUN_5007c8e0
// address: 0x5007c8e0
// body: available
// range: 0x5007c8e0-0x5007c9c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __thiscall FUN_5007c8e0(void *this,int param_1)

{
  char cVar1;
  bool bVar2;
  
  *(undefined4 *)((int)this + 0x4ac) = *(undefined4 *)((int)this + 0x114);
  *(int *)((int)this + 0x114) = param_1;
  cVar1 = *(char *)(param_1 + *(int *)((int)this + 0x104));
  *(int *)((int)this + 0x114) = param_1 + 1;
  if (cVar1 != '3') {
    FUN_500817d0(this,(byte *)s_Invalid_opcode_when_handling_on_s_50145988);
  }
  cVar1 = *(char *)(*(int *)((int)this + 0x114) + *(int *)((int)this + 0x104));
  *(int *)((int)this + 0x114) = *(int *)((int)this + 0x114) + 1;
  if (cVar1 != '\x11') {
    FUN_500817d0(this,(byte *)s_Expecting_PUSH_for_on_statement_50145968);
  }
  FUN_5007bf20((int)this);
  cVar1 = *(char *)(*(int *)((int)this + 0x114) + *(int *)((int)this + 0x104));
  *(int *)((int)this + 0x114) = *(int *)((int)this + 0x114) + 1;
  if (cVar1 != '\x11') {
    FUN_500817d0(this,(byte *)s_Expecting_PUSH_for_on_statement_50145968);
  }
  FUN_5007bf20((int)this);
  bVar2 = FUN_5007c5a0(this,'\x01');
  if (!bVar2) {
    *(undefined4 *)((int)this + 0x114) = *(undefined4 *)((int)this + 0x4ac);
    return false;
  }
  *(undefined1 *)((int)this + 0x4a8) = 1;
  *(undefined4 *)((int)this + 0x4b0) = *(undefined4 *)((int)this + 0x108);
  *(undefined4 *)((int)this + 0x108) = 0;
  FUN_500818d0(this,0,0);
  return true;
}

