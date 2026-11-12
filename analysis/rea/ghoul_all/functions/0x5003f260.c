// rea decompile_all
// name: FUN_5003f260
// address: 0x5003f260
// body: available
// range: 0x5003f260-0x5003f371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5003f260(void *this,int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  
  *(undefined4 *)((int)this + 0x88) = 0;
  (**(code **)(*param_1 + 0x24))(param_2,2,0x40a00000,0);
  if ((DAT_5015d1ec != 0) &&
     (fVar1 = *(float *)(DAT_5015d1ec + 4) - *(float *)(param_2 + 4),
     fVar3 = *(float *)(DAT_5015d1ec + 8) - *(float *)(param_2 + 8),
     fVar2 = *(float *)(DAT_5015d1ec + 0xc) - *(float *)(param_2 + 0xc),
     1e+06 < fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
    *(undefined1 *)((int)this + 0xa8) = 1;
    return 1;
  }
  if (0.7 < *(float *)((int)this + 0xa4)) {
    return 1;
  }
  iVar4 = (**(code **)(*param_1 + 0x18c))();
  if (iVar4 != 0) {
    piVar5 = (int *)(**(code **)(*param_1 + 0x18c))();
    iVar4 = (**(code **)(*piVar5 + 0xb4))(param_2);
    if ((iVar4 == 0) && (*(float *)((int)this + 0xa4) != 0.0)) {
      return 1;
    }
  }
  if ((*(int *)((int)this + 0xac) != 2) && (*(int *)((int)this + 0xac) != 3)) {
    *(undefined4 *)((int)this + 0x84) = 4;
    return 0;
  }
  *(undefined4 *)((int)this + 0x84) = 2;
  return 0;
}

