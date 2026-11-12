// rea decompile_all
// name: FUN_5006e100
// address: 0x5006e100
// body: available
// range: 0x5006e100-0x5006e1a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5006e100(void *this,int *param_1)

{
  undefined4 uVar1;
  
  FUN_5006dae0(this,param_1,*(int *)(param_1[0x1d] + 0x2dc));
  if ((_DAT_5015d1c8 == 0.0) && (*(int *)(param_1[0x1d] + 0x2dc) == 0)) {
    *(undefined4 *)(param_1[0x1d] + 0x474) = 0;
    *(undefined4 *)(param_1[0x1d] + 0x470) = 0;
    *(float *)(param_1[0x1d] + 0x568) = DAT_5015ccdc + 5.0;
    if ((_DAT_5015d1c8 == 0.0) && (*(int *)(param_1[0x1d] + 0x2dc) == 0)) {
      uVar1 = (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0xf0))();
      (*DAT_5015cab0)(param_1,0x902,uVar1);
    }
    (*DAT_5015ca68)(param_1,1);
  }
  return;
}

