// rea decompile_all
// name: FUN_50057620
// address: 0x50057620
// body: available
// range: 0x50057620-0x500576a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50057620(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_14 = (int)this + 0x10;
  local_10 = (int)this + 0x20;
  local_c = (int)this + 0x30;
  local_18 = this;
  local_8 = (int)this + 0x40;
  local_4 = (int)this + 0x50;
  if ((-1 < param_1) && (param_1 < 6)) {
    pvVar1 = (&local_18)[param_1];
    iVar3 = *(int *)((int)pvVar1 + 4);
    if ((iVar3 != 0) && (*(int *)((int)pvVar1 + 8) - iVar3 >> 9 != 0)) {
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = *(int *)((int)pvVar1 + 8) - iVar3 >> 9;
      }
      iVar3 = (*DAT_5015cb24)(0,iVar2 + -1);
      return iVar3 * 0x200 + *(int *)((int)pvVar1 + 4);
    }
  }
  return 0;
}

