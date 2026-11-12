// rea decompile_all
// name: FUN_500e9d40
// address: 0x500e9d40
// body: available
// range: 0x500e9d40-0x500e9e58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500e9d40(void *this,uint param_1,uint param_2,int *param_3,uint param_4,undefined4 param_5,
            undefined4 *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501157a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_5000b420(this,param_1,param_2,param_4,param_6,param_6,0,999999.0,1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_50125570;
  if ((param_3 != (int *)0x0) && (iVar1 = (**(code **)(*param_3 + 0x228))(), iVar1 != 0)) {
    *(undefined4 *)((int)this + 0x74) = param_5;
    *(undefined4 *)((int)this + 0x70) = param_9;
    *(undefined4 *)((int)this + 0x6c) = param_7;
    *(undefined4 *)((int)this + 0x7c) = 0;
    *(undefined4 *)((int)this + 0x80) = 0;
    *(undefined4 *)((int)this + 0x78) = param_8;
    *(undefined4 *)((int)this + 0x14) = *param_6;
    *(undefined4 *)((int)this + 0x18) = param_6[1];
    *(undefined4 *)((int)this + 0x1c) = param_6[2];
    *(undefined4 *)((int)this + 0x6c) = param_7;
    *(undefined4 *)(iVar1 + 0x40) = param_7;
    *(undefined4 *)(iVar1 + 0x44) = *param_6;
    *(undefined4 *)(iVar1 + 0x48) = param_6[1];
    *(undefined4 *)(iVar1 + 0x4c) = param_6[2];
    *(undefined4 *)(iVar1 + 0x50) = param_8;
    switch(*(undefined4 *)((int)this + 0x74)) {
    case 1:
      *(undefined1 **)((int)this + 0x7c) = &LAB_500ec2a0;
      break;
    case 2:
      *(undefined1 **)((int)this + 0x7c) = &LAB_500ec2f0;
      break;
    case 3:
      *(undefined1 **)((int)this + 0x7c) = &LAB_500ec380;
      break;
    case 4:
      *(undefined1 **)((int)this + 0x7c) = &LAB_500ec3d0;
      break;
    case 5:
      *(undefined1 **)((int)this + 0x7c) = &LAB_500ec400;
    }
  }
  ExceptionList = local_c;
  return this;
}

