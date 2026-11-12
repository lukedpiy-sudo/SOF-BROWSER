// rea decompile_all
// name: FUN_500432f0
// address: 0x500432f0
// body: available
// range: 0x500432f0-0x5004339e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall
FUN_500432f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)((int)this + 100);
    param_3[1] = *(undefined4 *)((int)this + 0x68);
    param_3[2] = *(undefined4 *)((int)this + 0x6c);
  }
  if (*(int *)((int)this + 0xa0) == 0) {
    uVar2 = FUN_500c26a0(0,0x1b4,s_func_Dekker_console_5014263c,(void *)0x0);
    if (uVar2 == 0) {
      return 0;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(uVar2 + 4);
      param_3[1] = *(undefined4 *)(uVar2 + 8);
      param_3[2] = *(undefined4 *)(uVar2 + 0xc);
    }
  }
  iVar1 = *(int *)((int)this + 0x60);
  if (iVar1 != 0) {
    if ((((*(int *)(iVar1 + 0x74) != 0) || (*(int *)(iVar1 + 0x450) != 0)) &&
        (*(int *)(iVar1 + 0x78) != 0)) &&
       ((0 < *(int *)(iVar1 + 0x2ec) && (DAT_5015ccdc - *(float *)((int)this + 0x70) <= 45.0)))) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  return 0;
}

