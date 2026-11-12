// rea decompile_all
// name: FUN_5000e720
// address: 0x5000e720
// body: available
// range: 0x5000e720-0x5000e899 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000e720(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (0 < *(int *)(param_2 + 0x2ec)) {
    *(undefined4 *)(param_2 + 0x2ec) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x2f8) = 2;
    *(undefined4 *)(param_2 + 0x158) = 2;
    *(undefined4 *)(param_2 + 0x15c) = 0x4000000;
    *(uint *)(param_2 + 0x118) = *(uint *)(param_2 + 0x118) | 2;
    *(undefined4 *)(param_2 + 0x2c0) = 0;
  }
  if ((*(char **)((int)this + 4) == s_std_sblown_2bk_n_n_50136278) &&
     (*(float *)(param_2 + 0x254) < 10.0)) {
    FUN_500fdd70((float *)(param_2 + 0x10),&local_c,(float *)0x0,(float *)0x0);
    local_4 = local_4 * -200.0;
    *(float *)(param_2 + 0x24c) = local_c * -200.0 + *(float *)(param_2 + 0x24c);
    *(float *)(param_2 + 0x250) = local_8 * -200.0 + *(float *)(param_2 + 0x250);
    *(float *)(param_2 + 0x254) = local_4 + *(float *)(param_2 + 0x254);
    *(undefined4 *)(param_2 + 0x254) = 0x42c80000;
    *(float *)(param_2 + 0x130) = *(float *)(param_2 + 0x130) - 26.0;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + 26.0;
  }
  if (*(int *)((int)this + 0x28) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x18c))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
      iVar1 = (**(code **)(*piVar2 + 0x6c))();
      if (((iVar1 == 0) || (*(int *)((int)this + 4) == 0)) ||
         ((*(uint *)(*(int *)((int)this + 4) + 0x48) & 0x8000000) != 0)) {
        (**(code **)(*(int *)this + 8))(param_1,param_2);
      }
      else {
        (**(code **)(*(int *)this + 0xc))(param_1,param_2);
      }
    }
    *(undefined4 *)((int)this + 0x40) = DAT_5015ccdc;
    *(float *)((int)this + 0x48) = *(float *)((int)this + 0x44) + *(float *)((int)this + 0x40);
  }
  return;
}

