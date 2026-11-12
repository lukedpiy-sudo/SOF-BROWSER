// rea decompile_all
// name: FUN_500cff00
// address: 0x500cff00
// body: available
// range: 0x500cff00-0x500d0147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500cff00(void *this,float param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float fVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_c;
  
  if (*(float *)((int)param_1 + 0x120) <= *(float *)((int)param_1 + 0x11c)) {
    fVar1 = *(float *)((int)param_1 + 0x120);
  }
  else {
    fVar1 = *(float *)((int)param_1 + 0x11c);
  }
  if (*(float *)((int)param_1 + 0x128) <= *(float *)((int)param_1 + 300)) {
    fVar4 = *(float *)((int)param_1 + 300);
  }
  else {
    fVar4 = *(float *)((int)param_1 + 0x128);
  }
  fVar2 = ABS(fVar1);
  if (ABS(fVar1) <= fVar4) {
    fVar2 = fVar4;
  }
  fVar1 = ABS(*(float *)((int)param_1 + 0x124));
  if (fVar1 <= *(float *)((int)param_1 + 0x130)) {
    fVar1 = *(float *)((int)param_1 + 0x130);
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0.0;
  iVar3 = (**(code **)(*(int *)this + 0x238))();
  if (iVar3 != 0) {
    local_1c = *(undefined4 *)(iVar3 + 0x1b4);
    local_18 = *(undefined4 *)(iVar3 + 0xd8);
    local_14 = *(undefined4 *)(iVar3 + 0xdc);
    local_c = *(float *)(iVar3 + 0x120);
  }
  if (*(int **)((int)this + 0x22c) != (int *)0x0) {
    FUN_5000a0e0(&DAT_5018b4e0,*(int **)((int)this + 0x22c));
  }
  *(undefined4 *)((int)this + 0x22c) = 0;
  FUN_500a5d30(&DAT_5015c79c,(int)param_1);
  *(undefined4 *)((int)this + 0x230) = 0;
  fVar4 = param_1;
  (*(code *)**(undefined4 **)this)();
  (**(code **)(*(int *)this + 0x234))(param_1,fVar2,param_2);
  iVar3 = (**(code **)(*(int *)this + 0x238))();
  if (iVar3 != 0) {
    *(float *)(iVar3 + 0x108) = -local_c;
    *(float *)(iVar3 + 0x10c) = -local_c;
    *(float *)(iVar3 + 0x110) = -fVar4;
    *(float *)(iVar3 + 0x114) = local_c;
    *(float *)(iVar3 + 0x118) = local_c;
    *(float *)(iVar3 + 0x11c) = fVar4;
    *(undefined4 *)(iVar3 + 0xd8) = unaff_ESI;
    *(undefined4 *)(iVar3 + 0xdc) = unaff_EBX;
    *(float *)(iVar3 + 0xe0) = fVar1 + fVar1;
    *(undefined4 *)(iVar3 + 0x120) = local_1c;
    *(undefined4 *)(iVar3 + 0x124) = local_18;
    *(undefined4 *)(iVar3 + 0x128) = local_14;
    *(undefined4 *)(iVar3 + 0x1b4) = unaff_EDI;
  }
  *(undefined4 *)((int)param_1 + 0x19c) = 6;
  *(undefined4 *)((int)param_1 + 0x158) = 2;
  *(uint *)((int)param_1 + 0x1a0) = *(uint *)((int)param_1 + 0x1a0) | 0x800;
  *(undefined4 *)((int)param_1 + 0x30c) = 1;
  *(undefined4 *)((int)param_1 + 0x2cc) = 0;
  *(undefined4 *)((int)param_1 + 0x2d0) = 0;
  return;
}

