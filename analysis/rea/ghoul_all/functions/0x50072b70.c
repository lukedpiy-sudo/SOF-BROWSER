// rea decompile_all
// name: FUN_50072b70
// address: 0x50072b70
// body: available
// range: 0x50072b70-0x500732ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_50072b70(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(int **)(param_1[0x1d] + 0x34c) == (int *)0x0) {
    (*DAT_5015ca24)(s_hey__no_inventory__50145188);
    return;
  }
  (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0xf4))();
  (**(code **)(*unaff_ESI + 0xe8))();
  (**(code **)(*unaff_ESI + 0xec))();
  FUN_500f4d30((int)param_1);
  piVar1 = (int *)&stack0xffffffc8;
  (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0xf4))();
  FUN_500f3860(param_1);
  piVar6 = (int *)0x1;
  (**(code **)*unaff_EDI)();
  (*(code *)param_1[0x26])(0xffffffff);
  iVar2 = *piVar1;
  piVar1 = (int *)FUN_500fe320((byte *)(param_1[0x1d] + 0xcc),(byte *)s_bestweap_50144fc8);
  (**(code **)(iVar2 + 200))();
  piVar5 = (int *)0x3;
  (**(code **)(*piVar6 + 0x30))(3,0x80);
  piVar6 = (int *)0x1;
  (**(code **)(*piVar1 + 0x30))(1,6);
  piVar4 = (int *)0x5;
  (**(code **)(*piVar5 + 0x30))(5,0x78);
  piVar1 = (int *)0x2;
  (**(code **)(*piVar6 + 0x30))(2,0x24);
  piVar6 = (int *)0x9;
  (**(code **)(*piVar4 + 0x30))(9,0x28);
  piVar4 = (int *)0x4;
  (**(code **)(*piVar1 + 0x30))(4,0x20);
  piVar1 = (int *)0x6;
  (**(code **)(*piVar6 + 0x30))(6,8);
  piVar6 = (int *)0x8;
  (**(code **)(*piVar4 + 0x30))(8,0x1e);
  (**(code **)(*piVar1 + 0x30))(7,0x3c);
  piVar1 = (int *)_strncmp(&DAT_5015cd20,&DAT_5012f5fc,3);
  if (piVar1 == (int *)0x0) {
    (**(code **)(*piVar6 + 0x40))(1);
    FUN_500f62e0(1);
    piVar5 = (int *)0x0;
    (**(code **)(*piVar1 + 0x40))(3);
    FUN_500f62e0(3);
    piVar4 = (int *)0x0;
    (**(code **)(*piVar5 + 0x40))(8);
    FUN_500f62e0(8);
    piVar1 = (int *)0x5;
    (**(code **)(*piVar4 + 0x4c))(1,5,0xffffffff);
    (**(code **)(*piVar1 + 0x4c))(2,2,0xffffffff);
    goto LAB_50073298;
  }
  iVar2 = _strncmp(&DAT_5015cd20,&DAT_5012f5f8,3);
  if (iVar2 == 0) {
    piVar4 = (int *)0x5;
    (**(code **)(*piVar6 + 0x4c))(1,5,0xffffffff);
    piVar1 = (int *)0x2;
    (**(code **)(*piVar4 + 0x4c))(2,2,0xffffffff);
    piVar4 = (int *)0x0;
    (**(code **)(*piVar1 + 0x40))(1);
    FUN_500f62e0(1);
    piVar1 = (int *)0x0;
    (**(code **)(*piVar4 + 0x40))(3);
    FUN_500f62e0(3);
    (**(code **)(*piVar1 + 0x40))(8,0);
LAB_5007328e:
    bVar3 = 8;
  }
  else {
    iVar2 = _strncmp(&DAT_5015cd20,&DAT_50145184,3);
    if (iVar2 == 0) {
      piVar1 = (int *)0xa;
      (**(code **)(*piVar6 + 0x4c))(1,10,0xffffffff);
      piVar4 = (int *)0x5;
      (**(code **)(*piVar1 + 0x4c))(2,5,0xffffffff);
      piVar1 = (int *)0x0;
      (**(code **)(*piVar4 + 0x40))(1);
      FUN_500f62e0(1);
      piVar4 = (int *)0x0;
      (**(code **)(*piVar1 + 0x40))(3);
      FUN_500f62e0(3);
      piVar1 = (int *)0x0;
      (**(code **)(*piVar4 + 0x40))(8);
      FUN_500f62e0(8);
      (**(code **)(*piVar1 + 0x40))(5,0);
      bVar3 = 5;
    }
    else {
      iVar2 = _strncmp(&DAT_5015cd20,&DAT_50145180,3);
      if (iVar2 == 0) {
        piVar1 = (int *)0xa;
        (**(code **)(*piVar6 + 0x4c))(1,10,0xffffffff);
        piVar4 = (int *)0x5;
        (**(code **)(*piVar1 + 0x4c))(2,5,0xffffffff);
        piVar1 = (int *)0x0;
        (**(code **)(*piVar4 + 0x40))(1);
        FUN_500f62e0(1);
        piVar4 = (int *)0x0;
        (**(code **)(*piVar1 + 0x40))(3);
        FUN_500f62e0(3);
        piVar1 = (int *)0x0;
        (**(code **)(*piVar4 + 0x40))(6);
        bVar3 = 6;
LAB_5007316d:
        FUN_500f62e0(bVar3);
        piVar4 = (int *)0x4;
        (**(code **)(*piVar1 + 0x40))(4,0);
        bVar3 = 4;
LAB_50073184:
        FUN_500f62e0(bVar3);
        (**(code **)(*piVar4 + 0x40))(5,0);
        bVar3 = 5;
      }
      else {
        iVar2 = _strncmp(&DAT_5015cd20,&DAT_5012f5f4,3);
        if (iVar2 == 0) {
          if (DAT_5015cd24 == 'a') {
            piVar1 = (int *)0xa;
            (**(code **)(*piVar6 + 0x4c))(1,10,0xffffffff);
            piVar4 = (int *)0x5;
            (**(code **)(*piVar1 + 0x4c))(2,5,0xffffffff);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(1);
            FUN_500f62e0(1);
            piVar4 = (int *)0x0;
            (**(code **)(*piVar1 + 0x40))(3);
            FUN_500f62e0(3);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(6);
            FUN_500f62e0(6);
            (**(code **)(*piVar1 + 0x40))(4,0);
            bVar3 = 4;
          }
          else {
            if (DAT_5015cd24 != 'b') goto LAB_50073298;
            piVar4 = (int *)0xa;
            (**(code **)(*piVar6 + 0x4c))(1,10,0xffffffff);
            piVar1 = (int *)0x5;
            (**(code **)(*piVar4 + 0x4c))(2,5,0xffffffff);
            piVar4 = (int *)0x5;
            (**(code **)(*piVar1 + 0x4c))(6,5,0xffffffff);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(1);
            FUN_500f62e0(1);
            piVar4 = (int *)0x0;
            (**(code **)(*piVar1 + 0x40))(3);
            FUN_500f62e0(3);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(9);
            FUN_500f62e0(9);
            (**(code **)(*piVar1 + 0x40))(10,0);
            bVar3 = 10;
          }
        }
        else {
          iVar2 = _strncmp(&DAT_5015cd20,&DAT_5014517c,3);
          if (iVar2 == 0) {
            piVar1 = (int *)0xa;
            (**(code **)(*piVar6 + 0x4c))(1,10,0xffffffff);
            piVar4 = (int *)0x5;
            (**(code **)(*piVar1 + 0x4c))(2,5,0xffffffff);
            piVar1 = (int *)0x5;
            (**(code **)(*piVar4 + 0x4c))(6,5,0xffffffff);
            piVar4 = (int *)0x0;
            (**(code **)(*piVar1 + 0x40))(1);
            FUN_500f62e0(1);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(3);
            FUN_500f62e0(3);
            piVar4 = (int *)0x0;
            (**(code **)(*piVar1 + 0x40))(8);
            bVar3 = 8;
            goto LAB_50073184;
          }
          iVar2 = _strncmp(&DAT_5015cd20,&DAT_50145178,3);
          if (iVar2 == 0) {
            piVar4 = (int *)0xa;
            (**(code **)(*piVar6 + 0x4c))(1,10,0xffffffff);
            piVar1 = (int *)0x5;
            (**(code **)(*piVar4 + 0x4c))(2,5,0xffffffff);
            piVar4 = (int *)0x5;
            (**(code **)(*piVar1 + 0x4c))(6,5,0xffffffff);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(1);
            FUN_500f62e0(1);
            piVar4 = (int *)0x0;
            (**(code **)(*piVar1 + 0x40))(3);
            FUN_500f62e0(3);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(2);
            FUN_500f62e0(2);
            (**(code **)(*piVar1 + 0x40))(6,0);
            bVar3 = 6;
          }
          else {
            iVar2 = _strncmp(&DAT_5015cd20,&DAT_50145174,3);
            if (iVar2 == 0) {
              piVar4 = (int *)0xa;
              (**(code **)(*piVar6 + 0x4c))(1,10,0xffffffff);
              piVar1 = (int *)0x5;
              (**(code **)(*piVar4 + 0x4c))(2,5,0xffffffff);
              piVar5 = (int *)0x5;
              (**(code **)(*piVar1 + 0x4c))(6,5,0xffffffff);
              piVar4 = (int *)0x0;
              piVar1 = (int *)0x1;
              (**(code **)(*piVar5 + 0x40))();
              FUN_500f62e0(1);
              (**(code **)(*piVar4 + 0x40))(3,0);
              bVar3 = 3;
              goto LAB_5007316d;
            }
            iVar2 = _strncmp(&DAT_5015cd20,&DAT_50145170,3);
            if (iVar2 != 0) {
              piVar4 = (int *)0x5;
              (**(code **)(*piVar6 + 0x4c))(1,5,0xffffffff);
              piVar1 = (int *)0x2;
              (**(code **)(*piVar4 + 0x4c))(2,2,0xffffffff);
              piVar4 = (int *)0x0;
              (**(code **)(*piVar1 + 0x40))(1);
              FUN_500f62e0(1);
              piVar1 = (int *)0x0;
              (**(code **)(*piVar4 + 0x40))(3);
              FUN_500f62e0(3);
              (**(code **)(*piVar1 + 0x40))(8,0);
              goto LAB_5007328e;
            }
            piVar4 = (int *)0xa;
            (**(code **)(*piVar6 + 0x4c))(1);
            piVar1 = (int *)0x5;
            (**(code **)(*piVar4 + 0x4c))(2,5,0xffffffff);
            piVar4 = (int *)0x5;
            (**(code **)(*piVar1 + 0x4c))(6,5,0xffffffff);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(1);
            FUN_500f62e0(1);
            piVar4 = (int *)0x0;
            (**(code **)(*piVar1 + 0x40))(3);
            FUN_500f62e0(3);
            piVar1 = (int *)0x0;
            (**(code **)(*piVar4 + 0x40))(10);
            FUN_500f62e0(10);
            (**(code **)(*piVar1 + 0x40))(9,0);
            bVar3 = 9;
          }
        }
      }
    }
  }
  FUN_500f62e0(bVar3);
LAB_50073298:
  piVar4 = (int *)0x0;
  (**(code **)(*piVar6 + 0x40))(0xd);
  FUN_500f62e0(0xd);
  piVar1 = (int *)0x0;
  (**(code **)(*piVar4 + 0x40))(0xe);
  FUN_500f62e0(0xe);
  (**(code **)(*piVar1 + 0x14))();
  (**(code **)(DAT_5015d9b8 + 0x1c))(DAT_5015d23c);
  (**(code **)(*piVar1 + 0x18))(3);
  FUN_500f2770((int)param_1,1000);
  return;
}

