// rea decompile_all
// name: FUN_500ce900
// address: 0x500ce900
// body: available
// range: 0x500ce900-0x500ceb47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500ce900(void *this,uint param_1,uint param_2,int *param_3,uint param_4,undefined4 param_5,
            undefined4 *param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501155a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_5000b420(this,param_1,param_2,param_4,param_6,param_6,0,999999.0,1);
  *(undefined4 *)((int)this + 0x74) = param_5;
  *(int *)((int)this + 0x6c) = param_7;
  *(undefined4 *)((int)this + 0x78) = param_8;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_501257d0;
  if ((param_3 != (int *)0x0) && (iVar1 = (**(code **)(*param_3 + 0x238))(), iVar1 != 0)) {
    *(undefined4 *)((int)this + 0x70) = param_9;
    *(undefined4 *)((int)this + 0x78) = param_8;
    *(undefined4 *)((int)this + 0x14) = *param_6;
    *(undefined4 *)((int)this + 0x18) = param_6[1];
    *(undefined4 *)((int)this + 0x1c) = param_6[2];
    *(int *)((int)this + 0x6c) = param_7;
    switch(*(undefined4 *)((int)this + 0x74)) {
    case 0xc:
      if (param_7 != 0) {
        *(int *)(iVar1 + 0x180) = param_7;
        *(undefined4 *)(iVar1 + 0x184) = *param_6;
        *(undefined4 *)(iVar1 + 0x188) = param_6[1];
        *(undefined4 *)(iVar1 + 0x18c) = param_6[2];
        *(undefined1 **)((int)this + 0x7c) = &LAB_500d7a00;
      }
      break;
    case 0xd:
      *(undefined4 *)(iVar1 + 0x184) = *param_6;
      *(undefined4 *)(iVar1 + 0x188) = param_6[1];
      *(undefined4 *)(iVar1 + 0x18c) = param_6[2];
      *(undefined1 **)((int)this + 0x7c) = &LAB_500d7ac0;
      break;
    case 0xe:
      *(undefined4 *)(iVar1 + 0x184) = *param_6;
      *(undefined4 *)(iVar1 + 0x188) = param_6[1];
      *(undefined4 *)(iVar1 + 0x18c) = param_6[2];
      *(undefined1 **)((int)this + 0x7c) = &LAB_500d7b70;
      break;
    case 0xf:
      *(undefined4 *)(iVar1 + 0x184) = *param_6;
      *(undefined4 *)(iVar1 + 0x188) = param_6[1];
      *(undefined4 *)(iVar1 + 0x18c) = param_6[2];
      *(undefined1 **)((int)this + 0x7c) = &LAB_500d7c60;
      break;
    case 0x10:
    case 0x13:
      if (param_7 != 0) {
        *(int *)(iVar1 + 0x180) = param_7;
        *(undefined4 *)(iVar1 + 0x184) = *param_6;
        *(undefined4 *)(iVar1 + 0x188) = param_6[1];
        *(undefined4 *)(iVar1 + 0x18c) = param_6[2];
        if (*(int *)((int)this + 0x74) == 0x13) {
          *(undefined4 *)((int)this + 0x78) = 0;
          *(undefined1 **)((int)this + 0x7c) = &LAB_500d7d20;
        }
        else {
          *(undefined4 *)((int)this + 0x78) = 0x3f800000;
          *(undefined1 **)((int)this + 0x7c) = &LAB_500d7d20;
        }
      }
      break;
    case 0x11:
    case 0x14:
      *(undefined4 *)(iVar1 + 0x184) = *param_6;
      *(undefined4 *)(iVar1 + 0x188) = param_6[1];
      *(undefined4 *)(iVar1 + 0x18c) = param_6[2];
      if (*(int *)((int)this + 0x74) == 0x14) {
        *(undefined4 *)((int)this + 0x78) = 0;
        *(undefined1 **)((int)this + 0x7c) = &LAB_500d7e10;
      }
      else {
        *(undefined4 *)((int)this + 0x78) = 0x3f800000;
        *(undefined1 **)((int)this + 0x7c) = &LAB_500d7e10;
      }
      break;
    case 0x12:
    case 0x15:
      *(undefined4 *)(iVar1 + 0x184) = *param_6;
      *(undefined4 *)(iVar1 + 0x188) = param_6[1];
      *(undefined4 *)(iVar1 + 0x18c) = param_6[2];
      if (*(int *)((int)this + 0x74) == 0x15) {
        *(undefined4 *)((int)this + 0x78) = 0;
      }
      else {
        *(undefined4 *)((int)this + 0x78) = 0x3f800000;
      }
      *(undefined1 **)((int)this + 0x7c) = &LAB_500d7ef0;
    }
  }
  ExceptionList = local_c;
  return this;
}

