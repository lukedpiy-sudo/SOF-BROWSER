// rea decompile_all
// name: FUN_500a5820
// address: 0x500a5820
// body: available
// range: 0x500a5820-0x500a58ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_500a5820(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0x88))();
    if (iVar3 != 0) {
      param_1 = (int *)(**(code **)(*piVar2 + 0x88))();
      puStack_8 = FUN_5000a7f0(this,(uint *)&param_1);
      puVar1 = *(undefined4 **)((int)this + 4);
      if ((puStack_8 == puVar1) || (param_1 < (int *)puStack_8[3])) {
        puStack_4 = puVar1;
        ppuVar4 = &puStack_4;
      }
      else {
        ppuVar4 = &puStack_8;
      }
      if ((*ppuVar4 != puVar1) && (iVar3 = (*ppuVar4)[4], iVar3 != 0)) {
        uVar5 = 0;
        param_1 = piVar2;
        FUN_500c7d40((void *)(iVar3 + 4),(int *)&puStack_8,(uint *)&param_1);
        if ((puStack_8 == *(undefined4 **)(iVar3 + 8)) || (param_1 < (int *)puStack_8[3])) {
          puStack_4 = *(undefined4 **)(iVar3 + 8);
          ppuVar4 = &puStack_4;
        }
        else {
          ppuVar4 = &puStack_8;
        }
        if (*ppuVar4 != *(undefined4 **)(iVar3 + 8)) {
          uVar5 = (*ppuVar4)[4];
        }
        return uVar5;
      }
    }
  }
  return 0;
}

