// rea decompile_all
// name: FUN_30017d00
// address: 0x30017d00
// body: available
// range: 0x30017d00-0x30017dcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_30017d00(void *this,undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4,
            float *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_5 != (float *)0x0) {
    local_c = *param_5 - *(float *)this;
    local_8 = param_5[1] - *(float *)((int)this + 4);
    local_4 = param_5[2] - *(float *)((int)this + 8);
    fVar3 = FUN_3001d310(&local_c);
    FUN_30017050(*(void **)((int)this + 0x18),(float)fVar3,(float *)((int)this + 0x24),
                 (float *)((int)this + 0x28),*(float *)((int)this + 4));
  }
  if (param_3 != (float *)0x0) {
    local_c = *param_3 - *(float *)this;
    local_8 = param_3[1] - *(float *)((int)this + 4);
    local_4 = param_3[2] - *(float *)((int)this + 8);
    fVar3 = FUN_3001d310(&local_c);
    FUN_300170d0(*(void **)((int)this + 0x18),(float)fVar3,(float *)((int)this + 0x2c),
                 (float *)((int)this + 0x30),DAT_3008fd38);
  }
  if ((*(byte *)(*(int *)((int)this + 0x1c) + 0x20) & 2) != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x24);
    uVar2 = *(undefined4 *)((int)this + 0x2c);
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x28);
    *(undefined4 *)((int)this + 0x28) = uVar1;
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x30);
    *(undefined4 *)((int)this + 0x30) = uVar2;
  }
  return;
}

