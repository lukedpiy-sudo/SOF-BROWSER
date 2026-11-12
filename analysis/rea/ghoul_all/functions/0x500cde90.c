// rea decompile_all
// name: FUN_500cde90
// address: 0x500cde90
// body: available
// range: 0x500cde90-0x500ce00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_500cde90(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x238))();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  param_1 = (int *)0x1;
  if (*(int *)((int)this + 0x7c) != 0) {
    piVar2[100] = *(int *)((int)this + 0x78);
    piVar2[0x61] = *(int *)((int)this + 0x14);
    piVar2[0x62] = *(int *)((int)this + 0x18);
    piVar2[99] = *(int *)((int)this + 0x1c);
    piVar2[0x60] = *(int *)((int)this + 0x6c);
    iVar3 = *(int *)((int)this + 0x80);
    if ((iVar3 != 0) && (iVar3 != *(int *)((int)this + 0x7c))) {
      *(int *)((int)this + 0x7c) = iVar3;
      *(undefined4 *)((int)this + 0x80) = 0;
    }
    (**(code **)((int)this + 0x7c))(param_2);
    (**(code **)(*piVar2 + 0x130))
              (param_2,(float)*(int *)(param_2 + 0x2ec) / (float)*(int *)(param_2 + 0x2f0));
    param_1 = (int *)piVar1[0x9c];
    if (param_1 == (int *)0x0) {
      if ((piVar2[0x65] & 0x4000U) == 0) {
        return 0;
      }
      if ((char)((uint)piVar2[0x65] >> 8) < '\0') {
        return 0;
      }
    }
  }
  if (((((piVar2[0x65] & 0x4000U) == 0) || ((char)((uint)piVar2[0x65] >> 8) < '\0')) ||
      (0.1 <= ABS(*(float *)(param_2 + 4)) - ABS((float)piVar2[0x36]))) ||
     ((0.1 <= ABS(*(float *)(param_2 + 8)) - ABS((float)piVar2[0x37]) ||
      (0.1 <= ABS(*(float *)(param_2 + 0xc)) - ABS((float)piVar2[0x38]))))) {
    iVar3 = (**(code **)(*(int *)this + 0x88))(piVar2,param_2);
    if (iVar3 != 0) {
      param_1 = (int *)0x0;
      goto LAB_500cdfe1;
    }
  }
  else {
    piVar1[0x9d] = 1;
  }
  (*(code *)**(undefined4 **)this)(piVar1,param_2,0x3f800000,0x3f800000);
LAB_500cdfe1:
  piVar1[0x9c] = 0;
  return (int)param_1;
}

