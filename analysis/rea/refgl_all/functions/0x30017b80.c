// rea decompile_all
// name: FUN_30017b80
// address: 0x30017b80
// body: available
// range: 0x30017b80-0x30017cf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_30017b80(void *this,int param_1,int param_2,int param_3)

{
  if ((((*(int *)((int)this + 0x34) == 0) || (*(int *)(param_1 + 0x34) == 0)) ||
      (*(int *)(param_2 + 0x34) == 0)) || (*(int *)(param_3 + 0x34) == 0)) {
    FUN_30006400(*(int *)(*(int *)((int)this + 0x18) + 0x58));
    FUN_3001b650();
    (*DAT_300a4710)(7);
    (*DAT_300a4490)(*(float *)((int)this + 0x20) * 0.46,*(float *)((int)this + 0x20) * 0.89,
                    *(undefined4 *)((int)this + 0x20));
    (*DAT_300a42f4)(*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x2c));
    (*DAT_300a4520)(this);
    (*DAT_300a4490)(*(float *)(param_1 + 0x20) * 0.46,*(float *)(param_1 + 0x20) * 0.89,
                    *(undefined4 *)(param_1 + 0x20));
    (*DAT_300a42f4)(*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x30));
    (*DAT_300a4520)(param_1);
    (*DAT_300a4490)(*(float *)(param_3 + 0x20) * 0.46,*(float *)(param_3 + 0x20) * 0.89,
                    *(undefined4 *)(param_3 + 0x20));
    (*DAT_300a42f4)(*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x30));
    (*DAT_300a4520)(param_3);
    (*DAT_300a4490)(*(float *)(param_2 + 0x20) * 0.46,*(float *)(param_2 + 0x20) * 0.89,
                    *(undefined4 *)(param_2 + 0x20));
    (*DAT_300a42f4)(*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c));
    (*DAT_300a4520)(param_2);
    (*DAT_300a45f4)();
    DAT_300a40f8 = DAT_300a40f8 + 1;
  }
  return;
}

