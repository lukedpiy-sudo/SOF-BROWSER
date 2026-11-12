// rea decompile_all
// name: FUN_500eb0b0
// address: 0x500eb0b0
// body: available
// range: 0x500eb0b0-0x500eb486 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_500eb0b0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            float *param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float unaff_EBX;
  float unaff_EBP;
  undefined4 uVar7;
  float unaff_ESI;
  float unaff_EDI;
  float fVar8;
  undefined4 uVar9;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  float afStack_c [3];
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x2ec) < -999) {
    *(undefined4 *)(param_1 + 0x2ec) = 0xfffffc19;
  }
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    for (uVar3 = FUN_500c26a0(0,0x1c8,*(char **)(*(int *)((int)this + 0x184) + 0x1d0),(void *)0x0);
        uVar3 != 0;
        uVar3 = FUN_500c26a0(uVar3,0x1c8,*(char **)(*(int *)((int)this + 0x184) + 0x1d0),(void *)0x0
                            )) {
      (**(code **)(uVar3 + 0x2c4))(uVar3,iVar2,iVar2);
    }
  }
  *(undefined4 *)(iVar2 + 0x324) = param_3;
  if (*(int *)(iVar2 + 0x2f8) != 2) {
    DAT_5015d224 = DAT_5015d224 + 1;
    piVar5 = (int *)**(int **)((int)this + 0x250);
    if (piVar5 != *(int **)((int)this + 0x250)) {
      do {
        if ((int *)piVar5[2] != (int *)0x0) {
          FUN_50009f70(&DAT_5018b558,(int *)piVar5[2]);
        }
        piVar5[2] = 0;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)((int)this + 0x250));
    }
    piVar5 = (int *)**(int **)((int)this + 0x25c);
    if (piVar5 != *(int **)((int)this + 0x25c)) {
      do {
        if ((int *)piVar5[2] != (int *)0x0) {
          FUN_50009ad0(&DAT_5018b530,(int *)piVar5[2]);
        }
        piVar5[2] = 0;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)((int)this + 0x25c));
    }
    piVar5 = (int *)**(int **)((int)this + 0x268);
    if (piVar5 != *(int **)((int)this + 0x268)) {
      do {
        if ((int *)piVar5[2] != (int *)0x0) {
          FUN_50009d40(&DAT_5018b508,(int *)piVar5[2]);
        }
        piVar5[2] = 0;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)((int)this + 0x268));
    }
    if (*(int *)((int)this + 0x254) != 0) {
      do {
        FUN_500499f0((void *)((int)this + 0x24c),&param_1,
                     (int *)**(undefined4 **)((int)this + 0x250));
      } while (*(int *)((int)this + 0x254) != 0);
    }
    if (*(int *)((int)this + 0x260) != 0) {
      do {
        FUN_500499f0((void *)((int)this + 600),&param_1,(int *)**(undefined4 **)((int)this + 0x25c))
        ;
      } while (*(int *)((int)this + 0x260) != 0);
    }
    if (*(int *)((int)this + 0x26c) != 0) {
      do {
        FUN_500499f0((void *)((int)this + 0x264),&param_1,
                     (int *)**(undefined4 **)((int)this + 0x268));
      } while (*(int *)((int)this + 0x26c) != 0);
    }
    piVar5 = *(int **)((int)this + 0x18c);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != (int *)0x0) {
        FUN_50009ad0(&DAT_5018b530,piVar5);
      }
      *(undefined4 *)((int)this + 0x18c) = 0;
    }
    piVar5 = *(int **)((int)this + 400);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != (int *)0x0) {
        FUN_50009ad0(&DAT_5018b530,piVar5);
      }
      *(undefined4 *)((int)this + 400) = 0;
    }
    FUN_500fdd70((float *)(iVar2 + 0x10),afStack_c,(float *)0x0,(float *)0x0);
    in_stack_ffffffe8 = *param_5 - *(float *)(iVar2 + 4);
    in_stack_ffffffec = param_5[1] - *(float *)(iVar2 + 8);
    FUN_500fe050((float *)&stack0xffffffe8);
    *(undefined4 *)(iVar2 + 0x2c0) = 0;
    *(undefined4 *)(iVar2 + 0x2f8) = 2;
    *(float *)((int)this + 0x10) = *(float *)(iVar2 + 0x10);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    (*DAT_5015cb28)(iVar2);
  }
  iVar4 = (**(code **)(*(int *)this + 0x228))();
  if (iVar4 != 0) {
    piVar5 = (int *)(**(code **)(*(int *)this + 0x228))();
    if (((piVar5[0x15] != 0) && (piVar6 = *(int **)(piVar5[0x15] + 0x164), piVar6 != (int *)0x0)) &&
       (piVar6 = (int *)(**(code **)(*piVar6 + 0x88))(), piVar6 != (int *)0x0)) {
      uVar7 = (**(code **)(*piVar6 + 0x1c))(s_bolt_turret_50153f30);
    }
    fVar1 = (float)(iVar2 + 4);
    uVar9 = 0xff;
    *(undefined4 *)(iVar2 + 0x24c) = 0;
    *(undefined4 *)(iVar2 + 0x250) = 0;
    *(undefined4 *)(iVar2 + 0x254) = 0;
    *(undefined4 *)(iVar2 + 600) = 0;
    *(undefined4 *)(iVar2 + 0x25c) = 0;
    *(undefined4 *)(iVar2 + 0x260) = 0;
    fVar8 = fVar1;
    FUN_50084960(fVar1,0xff);
    FUN_500aec30(fVar1,7.00649e-42,0.9,0.5,fVar8,uVar9,unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX,
                 in_stack_ffffffe8,in_stack_ffffffec);
    (**(code **)(*piVar5 + 0x130))(0);
    if (piVar5[0x16] == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *(int **)(piVar5[0x16] + 0x1c);
    }
    FUN_500b3fc0(piVar6,0);
    uVar9 = 0;
    piVar6 = (int *)FUN_500eb4f0((int)piVar5);
    FUN_500b3fc0(piVar6,uVar9);
    uVar9 = 0;
    piVar6 = (int *)FUN_500eb500((int)piVar5);
    FUN_500b3fc0(piVar6,uVar9);
    iVar4 = (**(code **)(*piVar5 + 0x11c))();
    if (iVar4 == 0xb) {
      uVar9 = 0;
      piVar6 = (int *)FUN_500eb510((int)piVar5);
      FUN_500b3fc0(piVar6,uVar9);
      (**(code **)(*piVar5 + 0x130))(0);
    }
    if (piVar5[0x15] == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *(int **)(piVar5[0x15] + 0x164);
    }
    FUN_500b2ec0(piVar6,s_enemy_tank_50153ef4,0x5012fa24,&DAT_5012fa24);
    FUN_50084270(fVar1,&DAT_501557a0,0x1e,2,'\t',0,0,0,0x1c);
    FUN_500eb490(s_environ_helismoke_5012f9a4,iVar2,uVar7,0);
    FUN_500eb4c0(s_environ_helismoke_5012f9a4,iVar2,uVar7,0x3fc00000);
    (**(code **)(*piVar5 + 0x134))(1);
  }
  return;
}

