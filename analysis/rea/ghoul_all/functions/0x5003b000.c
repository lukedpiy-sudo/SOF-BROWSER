// rea decompile_all
// name: FUN_5003b000
// address: 0x5003b000
// body: available
// range: 0x5003b000-0x5003b3e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003b000(void *this,int *param_1,int param_2,float *param_3)

{
  float10 fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1[0x75] = param_1[0x75] & 0xfffffffe;
  local_c = *(undefined4 *)(param_2 + 4);
  local_8 = *(undefined4 *)(param_2 + 8);
  local_4 = *(undefined4 *)(param_2 + 0xc);
  piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
  if (piVar2 == (int *)0x0) {
    return;
  }
  fVar5 = (float10)(**(code **)(*param_1 + 0x16c))();
  fVar1 = (float10)DAT_5015ccdc;
  iVar3 = FUN_500b2350(0x5015d9c0);
  uStack_2c = 0;
  uStack_28 = 0x3fe00000;
  if (iVar3 != param_2) {
    uStack_28 = 0x3ff00000;
  }
  iVar3 = (**(code **)(*param_1 + 0x220))();
  if (*(float *)(iVar3 + 0x10) * (float)(double)CONCAT44(uStack_28,uStack_2c) <=
      (float)(fVar1 - fVar5)) {
    FUN_500fdd70((float *)(param_2 + 0x10),&fStack_18,(float *)0x0,(float *)0x0);
    fStack_10 = 0.0;
    FUN_500fe050(&fStack_18);
    fStack_1c = 0.0;
    fStack_24 = *param_3 - *(float *)(param_2 + 4);
    fStack_20 = param_3[1] - *(float *)(param_2 + 8);
    FUN_500fe050(&fStack_24);
    iVar3 = (**(code **)(*param_1 + 0x220))();
    if (((((*(byte *)(iVar3 + 0x1c) & 0x10) != 0) ||
         (fStack_1c * fStack_10 + fStack_18 * fStack_24 + fStack_14 * fStack_20 <= 0.98)) ||
        ((*(float *)((int)this + 0x8c) <= *(float *)((int)this + 0x90) + 3.0 &&
         (*(float *)((int)this + 0x90) <= *(float *)((int)this + 0x8c))))) ||
       (iVar3 = FUN_50039820(this,param_1,param_2,param_3,*(int **)((int)this + 0x60),1), iVar3 == 0
       )) {
      iVar3 = FUN_50039820(this,param_1,param_2,param_3,*(int **)((int)this + 0x60),0);
      if (iVar3 == 0) {
        if (((fStack_1c * fStack_10 + fStack_18 * fStack_24 + fStack_14 * fStack_20 <= 0.98) ||
            ((*(float *)((int)this + 0x8c) <= *(float *)((int)this + 0x90) + 3.0 &&
             (*(float *)((int)this + 0x8c) < *(float *)((int)this + 0x90) ==
              (*(float *)((int)this + 0x8c) == *(float *)((int)this + 0x90)))))) ||
           (iVar3 = (**(code **)(*param_1 + 0x220))(), (*(byte *)(iVar3 + 0x1c) & 0x10) != 0)) {
          FUN_500adb60(param_1,(byte *)s_Ideal_Crouch_Stand_Blocked_501421e4);
          *(float *)((int)this + 0x8c) = DAT_5015ccdc;
          uVar4 = 0;
        }
        else {
          FUN_500adb60(param_1,(byte *)s_Ideal_Crouch_Blocked_50142200);
          *(float *)((int)this + 0x90) = DAT_5015ccdc;
          uVar4 = 1;
        }
        uVar4 = (**(code **)(*piVar2 + 0x1c))(param_2,param_3,param_3,2,uVar4,0,0);
      }
      else {
        FUN_500adb60(param_1,(byte *)s_Ideal_Stand_Attack_50142218);
        *(float *)((int)this + 0x8c) = DAT_5015ccdc;
        uVar4 = (**(code **)(*piVar2 + 0x24))
                          (param_2,&local_c,param_3,*(undefined4 *)((int)this + 0x60),2,0,0,0);
      }
    }
    else {
      FUN_500adb60(param_1,(byte *)s_Ideal_Crouch_Attack_5014222c);
      *(float *)((int)this + 0x90) = DAT_5015ccdc;
      uVar4 = (**(code **)(*piVar2 + 0x24))
                        (param_2,&local_c,param_3,*(undefined4 *)((int)this + 0x60),2,1,0,0);
    }
    (**(code **)(*(int *)this + 0x28))
              (param_1,param_2,uVar4,&uStack_2c,fStack_14,*(undefined4 *)((int)this + 0x60),0,0,0,0)
    ;
    return;
  }
  if (((*(float *)((int)this + 0x90) + 3.0 < *(float *)((int)this + 0x8c)) ||
      (*(float *)((int)this + 0x8c) < *(float *)((int)this + 0x90) !=
       (*(float *)((int)this + 0x8c) == *(float *)((int)this + 0x90)))) &&
     (iVar3 = (**(code **)(*param_1 + 0x220))(), (*(byte *)(iVar3 + 0x1c) & 0x10) == 0)) {
    *(float *)((int)this + 0x90) = DAT_5015ccdc;
    uVar4 = (**(code **)(*piVar2 + 0x1c))(param_2,param_3,param_3,2,1,0,0);
    (**(code **)(*(int *)this + 0x28))
              (param_1,param_2,uVar4,&uStack_28,fStack_10,*(undefined4 *)((int)this + 0x60),0,0,0,0)
    ;
    FUN_500adb60(param_1,(byte *)s_Ideal_Crouch_No_Attack_5014225c);
    return;
  }
  uVar4 = (**(code **)(*piVar2 + 0x1c))(param_2,param_3,param_3,2,0,0,0,param_3,param_3,0,0,0,0,0);
  (**(code **)((int)fStack_18 + 0x28))(param_1,param_2,uVar4);
  FUN_500adb60(param_1,(byte *)s_Ideal_Stand_No_Attack_50142244);
  return;
}

