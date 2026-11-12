// rea decompile_all
// name: FUN_500e7fd0
// address: 0x500e7fd0
// body: available
// range: 0x500e7fd0-0x500e8071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __thiscall FUN_500e7fd0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x240))();
    if (piVar2 != (int *)0x0) {
      uVar3 = 1;
      if (*(int *)((int)this + 0x7c) != 0) {
        piVar2[0x14] = *(int *)((int)this + 0x78);
        piVar2[0x11] = *(int *)((int)this + 0x14);
        piVar2[0x12] = *(int *)((int)this + 0x18);
        piVar2[0x13] = *(int *)((int)this + 0x1c);
        piVar2[0x10] = *(int *)((int)this + 0x6c);
        iVar1 = *(int *)((int)this + 0x80);
        if ((iVar1 != 0) && (iVar1 != *(int *)((int)this + 0x7c))) {
          *(int *)((int)this + 0x7c) = iVar1;
          *(undefined4 *)((int)this + 0x80) = 0;
        }
        (**(code **)((int)this + 0x7c))(param_2);
        uVar3 = *(undefined1 *)((int)param_1 + 0x292);
        (**(code **)(*piVar2 + 0x138))
                  (param_2,(float)*(int *)(param_2 + 0x2ec) / (float)*(int *)(param_2 + 0x2f0));
      }
      return uVar3;
    }
  }
  return 0;
}

