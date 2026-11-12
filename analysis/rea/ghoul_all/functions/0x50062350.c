// rea decompile_all
// name: FUN_50062350
// address: 0x50062350
// body: available
// range: 0x50062350-0x500623d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50062350(void *this,ushort param_1)

{
  ushort *puVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x98) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 0x9c) - *(int *)((int)this + 0x98)) / 0x1c;
  }
  iVar2 = iVar2 + -1;
  if (0 < iVar2) {
    puVar1 = (ushort *)(*(int *)((int)this + 0x98) + 4 + iVar2 * 0x1c);
    do {
      if ((puVar1[-1] <= param_1) && (param_1 <= *puVar1)) goto LAB_500623ad;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -0xe;
    } while (0 < iVar2);
  }
  iVar2 = 0;
LAB_500623ad:
  if ((char)iVar2 != '\0') {
    FUN_500adb20((byte *)s_Node__d_is_in_path__d_50143474);
    return;
  }
  FUN_500adb20((byte *)s_Node__d_is_not_in_a_path__probab_50143440);
  return;
}

