// rea decompile_all
// name: FUN_5000f440
// address: 0x5000f440
// body: available
// range: 0x5000f440-0x5000f68a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5000f440(void *this,int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  undefined1 local_18 [8];
  float fStack_10;
  
  iVar3 = (**(code **)(*(int *)this + 0x38))(param_1,param_2,local_18);
  if (iVar3 == 0) {
    (*(code *)**(undefined4 **)this)(param_1,param_2,0,0);
    return 1;
  }
  (**(code **)(*(int *)this + 0x30))(param_1,param_2,&stack0xffffffdc);
  iVar3 = (**(code **)(*param_1 + 0x18c))();
  if (iVar3 == 0) {
LAB_5000f4ab:
    if (*(float *)((int)this + 0x58) + 3.0 < DAT_5015ccdc) goto LAB_5000f4c5;
    if (*(int *)(param_2 + 0x330) == 0) goto LAB_5000f574;
  }
  else {
    piVar4 = (int *)(**(code **)(*param_1 + 0x18c))();
    iVar3 = (**(code **)(*piVar4 + 0x6c))();
    if (iVar3 == 0) goto LAB_5000f4ab;
LAB_5000f4c5:
    if (*(int *)(param_2 + 0x330) != 0) {
      *(undefined4 *)(param_2 + 0x24c) = 0;
      *(undefined4 *)(param_2 + 0x250) = 0;
      *(undefined4 *)(param_2 + 0x254) = 0;
      fVar1 = *(float *)(param_2 + 4) - *(float *)((int)this + 0x14);
      fVar5 = *(float *)(param_2 + 8) - *(float *)((int)this + 0x18);
      fVar2 = *(float *)(param_2 + 0xc) - *(float *)((int)this + 0x1c);
      if (fVar1 * fVar1 + fVar5 * fVar5 + fVar2 * fVar2 < 900.0) {
        (*(code *)**(undefined4 **)this)(param_1,param_2,0x3f800000);
        return 1;
      }
      (*(code *)**(undefined4 **)this)(param_1,param_2,0,0x3f800000);
      return 1;
    }
LAB_5000f574:
    if (*(int *)(param_2 + 0x19c) != 6) goto LAB_5000f58f;
  }
  piVar4 = (int *)(**(code **)(*param_1 + 0x18c))();
  (**(code **)(*piVar4 + 0x60))(param_2);
LAB_5000f58f:
  if (((0.01 < *(float *)(param_2 + 0x254) * *(float *)(param_2 + 0x254) +
               *(float *)(param_2 + 0x250) * *(float *)(param_2 + 0x250) +
               *(float *)(param_2 + 0x24c) * *(float *)(param_2 + 0x24c)) &&
      (DAT_5015ccdc < *(float *)((int)this + 0x58))) && (0.0 < *(float *)(param_2 + 0x254))) {
    fStack_10 = *(float *)((int)this + 0x58) - DAT_5015ccdc;
    fVar1 = (*(float *)((int)this + 0x14) - *(float *)(param_2 + 4)) / fStack_10;
    fVar5 = (*(float *)((int)this + 0x18) - *(float *)(param_2 + 8)) / fStack_10;
    if (1.6e+07 < fVar1 * fVar1 + fVar5 * fVar5) {
      FUN_500fe050((float *)&stack0xffffffdc);
      fVar1 = fVar1 * 4000.0;
      fVar5 = fVar5 * 4000.0;
    }
    *(float *)(param_2 + 0x24c) = fVar1;
    *(float *)(param_2 + 0x250) = fVar5;
  }
  return 0;
}

