// rea decompile_all
// name: FUN_5003a170
// address: 0x5003a170
// body: available
// range: 0x5003a170-0x5003a30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003a170(void *this,int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float fStack_30;
  int iStack_28;
  float local_18 [4];
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0x13c))();
  (**(code **)(*param_1 + 0x140))(0xffffffff,&stack0xffffffc8);
  iVar5 = *(int *)((int)this + 0x60);
  if (((iVar5 == 0) ||
      ((((*(int *)(iVar5 + 0x450) == 0 && (*(int *)(iVar5 + 0x74) == 0)) || (iVar5 == iStack_28)) ||
       ((iVar5 == -1 || (*(int *)(iVar5 + 0x78) == 0)))))) || (*(int *)(iVar5 + 0x2ec) < 1)) {
    if ((((iStack_28 == 0) || (*(int *)(iStack_28 + 0x2ec) < 1)) ||
        ((0.01 <= ABS(*(float *)((int)this + 0x70) - local_18[0]) &&
         (local_18[0] <= *(float *)((int)this + 0x70))))) ||
       (iVar5 = (**(code **)(*(int *)this + 0xc))(uStack_8,iStack_28), iVar5 == 0)) {
      if (iRam00000077 == 0) {
        return;
      }
      if ((0.01 <= ABS(*(float *)((int)this + 0x70) - fStack_30)) &&
         (fStack_30 <= *(float *)((int)this + 0x70))) {
        return;
      }
      iVar5 = (**(code **)(*(int *)this + 0xc))(uStack_8,0xffffffff);
      if (iVar5 == 0) {
        return;
      }
      iStack_28 = -1;
      *(undefined4 *)((int)this + 0x60) = 0xffffffff;
      *(float **)((int)this + 100) = local_18;
      *(undefined4 *)((int)this + 0x68) = unaff_EDI;
      local_18[0] = fStack_30;
    }
    else {
      *(int *)((int)this + 0x60) = iStack_28;
      *(undefined4 *)((int)this + 100) = *(undefined4 *)(iStack_28 + 4);
      *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(iStack_28 + 8);
      unaff_ESI = *(undefined4 *)(iStack_28 + 0xc);
    }
    *(undefined4 *)((int)this + 0x6c) = unaff_ESI;
    *(float *)((int)this + 0x70) = local_18[0];
    fVar1 = *(float *)(iStack_28 + 0x120);
    fVar2 = *(float *)(iStack_28 + 300);
    fVar3 = *(float *)(iStack_28 + 0x124);
    fVar4 = *(float *)(iStack_28 + 0x130);
    *(float *)((int)this + 100) =
         (*(float *)(iStack_28 + 0x11c) + *(float *)(iStack_28 + 0x128)) * 0.5 +
         *(float *)((int)this + 100);
    *(float *)((int)this + 0x68) = (fVar1 + fVar2) * 0.5 + *(float *)((int)this + 0x68);
    *(float *)((int)this + 0x6c) = (fVar3 + fVar4) * 0.5 + *(float *)((int)this + 0x6c);
  }
  return;
}

