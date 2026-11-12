// rea decompile_all
// name: FUN_2007aa60
// address: 0x2007aa60
// body: available
// range: 0x2007aa60-0x2007af2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007aa60(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  void *pvVar5;
  int *piVar6;
  int *in_ECX;
  float10 fVar7;
  byte local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  int local_34;
  void *local_30;
  void *local_2c;
  undefined1 local_28 [4];
  int local_24;
  void *local_20;
  undefined2 local_1c [2];
  void *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c03a;
  pvStack_c = ExceptionList;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_34 = 0;
  ExceptionList = &pvStack_c;
  FUN_200be390(&local_3a,1);
  if (local_3a != 0) {
    FUN_200be390(&local_2c,2);
    FUN_200be390(&local_34,((uint)local_2c & 0xff) * 8 + 8);
  }
  local_3a = 0;
  if (local_34 == 0) {
    local_20 = operator_new(0xe8);
    local_4 = 4;
    local_2c = local_20;
    if (local_20 == (void *)0x0) {
      local_20 = (void *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(in_ECX[0x71] + 0x130);
      FUN_2007ebe0();
      FUN_2009df30(&local_35);
      local_4._0_1_ = 5;
      FUN_20081e20(&local_37,&local_36);
      local_4._0_1_ = 6;
      FUN_20081f40(&local_39,&local_38);
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_20077320(uVar1);
    }
    local_4 = 0xffffffff;
    local_24 = param_1;
    FUN_200746d0(&local_2c,&local_24);
    FUN_2008c5b0(&local_2c,local_28);
    local_3a = 1;
  }
  else {
    local_34 = param_1 - local_34;
    FUN_2001fd60(&local_2c,&local_34);
    local_30 = local_2c;
    local_20 = operator_new(0xe8);
    local_4 = 0;
    local_2c = local_20;
    if (local_20 == (void *)0x0) {
      local_20 = (void *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((int)local_30 + 0x10);
      FUN_2007ebe0();
      FUN_2009df30(&local_39);
      local_4._0_1_ = 1;
      FUN_20081e20(&local_37,&local_38);
      local_4._0_1_ = 2;
      FUN_20081f40(&local_35,&local_36);
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_20077320(uVar1);
    }
    local_4 = 0xffffffff;
    local_24 = param_1;
    FUN_200746d0(&local_2c,&local_24);
    FUN_2008c5b0(&local_2c,local_28);
  }
  FUN_20083550(&local_2c);
  pvVar5 = local_2c;
  if (local_2c != (void *)in_ECX[0x3f]) {
    do {
      local_30 = pvVar5;
      FUN_20085230();
      if (local_34 <= *(int *)((int)pvVar5 + 0xc)) break;
      iVar2 = *(int *)((int)pvVar5 + 0x10);
      if (iVar2 != 0) {
        FUN_20079350();
        FUN_200f9f75(iVar2);
      }
      FUN_20072720(&local_24,pvVar5);
      pvVar5 = local_30;
    } while (local_30 != (void *)in_ECX[0x3f]);
  }
  FUN_2001fd60(&local_2c,&param_1);
  pvVar5 = local_2c;
  bVar3 = FUN_200786b0(param_2,&param_2,param_3,in_ECX[0x71]);
  local_3a = local_3a | bVar3;
  FUN_20077320(*(undefined4 *)((int)pvVar5 + 0x10));
  if (local_3a != 0) {
    piVar4 = *(int **)in_ECX[0x3c];
    if (piVar4 != (int *)in_ECX[0x3c]) {
      do {
        piVar6 = (int *)*piVar4;
        if (*(short *)(piVar4[3] + 0x1ce) < 0) {
          *(undefined1 *)(piVar4[3] + 0x1d0) = 1;
          *(undefined4 *)(piVar4[3] + 0x1c8) = 0;
          *(undefined2 *)(piVar4[3] + 0x1cc) = 0;
          *(int *)piVar4[1] = *piVar4;
          *(int *)(*piVar4 + 4) = piVar4[1];
          FUN_200f9f75(piVar4);
          in_ECX[0x3d] = in_ECX[0x3d] + -1;
        }
        piVar4 = piVar6;
      } while (piVar6 != (int *)in_ECX[0x3c]);
    }
    piVar4 = (int *)in_ECX[0x37];
    *(undefined1 *)((int)in_ECX + 0x12a) = *(undefined1 *)(in_ECX[0x71] + 0x116);
    param_3 = (int *)*piVar4;
    if (param_3 != piVar4) {
      do {
        pvVar5 = (void *)FUN_2008a910(CONCAT22((short)((uint)piVar4 >> 0x10),-(short)param_3[3]));
        if (pvVar5 == (void *)0x0) {
          FUN_2008ea00(s_Missing_Child_201570f8,0);
        }
        else {
          *(undefined1 *)((int)pvVar5 + 0x1d0) = 0;
          *(int **)((int)pvVar5 + 0x1c8) = in_ECX;
          *(undefined2 *)((int)pvVar5 + 0x1cc) = *(undefined2 *)((int)param_3 + 0xe);
          *(byte *)((int)in_ECX + 0x12a) =
               *(byte *)((int)in_ECX + 0x12a) | *(byte *)(*(int *)((int)pvVar5 + 0x1c4) + 0x116);
          iVar2 = in_ECX[0x3c];
          local_1c[0] = *(undefined2 *)((int)param_3 + 0xe);
          piVar4 = *(int **)(iVar2 + 4);
          local_18 = pvVar5;
          piVar6 = operator_new(0x10);
          *piVar6 = iVar2;
          if (piVar4 == (int *)0x0) {
            piVar4 = piVar6;
          }
          piVar6[1] = (int)piVar4;
          *(int **)(iVar2 + 4) = piVar6;
          *(int **)piVar6[1] = piVar6;
          FUN_2008e4b0(piVar6 + 2,local_1c);
          in_ECX[0x3d] = in_ECX[0x3d] + 1;
        }
        FUN_200850b0();
        piVar4 = (int *)in_ECX[0x37];
      } while (param_3 != piVar4);
    }
  }
  if (1000 < (uint)in_ECX[0x42]) {
    FUN_2008e9e0(s_More_than_1000_unacked_deltas_fr_201570cc);
  }
  fVar7 = (float10)(**(code **)(*in_ECX + 0x6c))
                             (CONCAT22((short)((uint)(in_ECX + 0x4c) >> 0x10),
                                       *(undefined2 *)((int)in_ECX + 0xae)),in_ECX[0x2c],
                              in_ECX + 0x4c);
  in_ECX[0x4b] = (int)(float)fVar7;
  if ((char)local_4 != '\0') {
    local_4 = in_ECX[0x28];
    in_ECX[0x48] = local_4;
    if (*(short *)((int)in_ECX + 0xae) != 0) {
      fVar7 = (float10)FUN_2007d2e0(local_4);
      in_ECX[0x49] = (int)(float)fVar7;
    }
  }
  ExceptionList = local_18;
  return;
}

