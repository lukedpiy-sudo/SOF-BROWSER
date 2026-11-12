// rea decompile_all
// name: FUN_2007a300
// address: 0x2007a300
// body: available
// range: 0x2007a300-0x2007a81d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2007a300(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int in_ECX;
  short *psVar9;
  int **ppiVar10;
  int iVar11;
  undefined1 local_12c [4];
  int local_128;
  int *local_124;
  undefined4 local_120;
  int *local_11c;
  undefined4 local_118;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  int local_108;
  int local_104 [2];
  int local_fc [2];
  undefined1 auStack_f4 [232];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010bfc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2001fd60(&local_108,&param_1);
  uVar6 = *(undefined4 *)(in_ECX + 0xdc);
  local_fc[0] = local_108;
  FUN_20083550(&local_124);
  FUN_20083280(&local_11c,local_124,uVar6);
  piVar7 = (int *)**(int **)(in_ECX + 0xf0);
  if (piVar7 != *(int **)(in_ECX + 0xf0)) {
    do {
      if (0 < *(short *)(piVar7[3] + 0x1ce)) {
        local_120 = CONCAT22((short)piVar7[2],*(undefined2 *)(piVar7[3] + 0x1ce));
        FUN_20083030(&local_11c,&local_120);
        local_124 = local_11c;
        FUN_2008c5b0(&local_124,&local_118);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(in_ECX + 0xf0));
  }
  if (local_108 == *(int *)(in_ECX + 0x110)) {
    local_11c = param_1;
    local_118 = 0xffffffff;
    FUN_200746d0(local_fc,&local_11c);
    FUN_2001fd60(local_fc,&param_1);
  }
  local_120 = in_ECX + 0xf8;
  local_11c = (int *)(local_fc[0] + 0x10);
  FUN_2001fd60(local_104,local_11c);
  if ((local_104[0] == *(int *)(in_ECX + 0xfc)) ||
     (cVar4 = FUN_20077610(*(undefined4 *)(local_104[0] + 0x10)), cVar4 == '\0')) {
    uVar6 = param_3;
    psVar9 = (short *)(in_ECX + 0x1ce);
    iVar11 = 1;
    if (*psVar9 == 0) {
      psVar9 = (short *)local_12c;
      local_12c[0] = 0;
    }
    else {
      local_12c[0] = 1;
      FUN_200bdca0(local_12c,1);
      local_128 = 0;
      sVar5 = 0x10;
      do {
        if (*psVar9 < sVar5) break;
        sVar5 = sVar5 << 4;
        local_128 = local_128 + 1;
      } while (sVar5 != 0);
      FUN_200bdca0(&local_128,2);
      iVar11 = local_128 * 4 + 4;
    }
    FUN_200bdca0(psVar9,iVar11);
    local_124 = (int *)(**(code **)(**(int **)(in_ECX + 0x1c4) + 100))();
    iVar11 = 1;
    if ((short)local_124 == 0) {
      ppiVar10 = (int **)local_12c;
      local_12c[0] = 0;
    }
    else {
      local_12c[0] = 1;
      FUN_200bdca0(local_12c,1);
      local_128 = 0;
      sVar5 = 0x10;
      do {
        if ((short)local_124 < sVar5) break;
        sVar5 = sVar5 << 4;
        local_128 = local_128 + 1;
      } while (sVar5 != 0);
      FUN_200bdca0(&local_128,2);
      ppiVar10 = &local_124;
      iVar11 = local_128 * 4 + 4;
    }
    FUN_200bdca0(ppiVar10,iVar11);
    iVar11 = 1;
    if (local_104[0] == *(int *)(in_ECX + 0xfc)) {
      local_11c = (int *)0x0;
      local_12c[0] = 0;
      FUN_200bdca0(local_12c,1);
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x1c4) + 0x130);
      FUN_2007ebe0();
      FUN_2009df30(local_12c);
      uStack_4 = 0;
      FUN_20081e20(&uStack_110,&uStack_10d);
      uStack_4._0_1_ = 1;
      FUN_20081f40(&uStack_10a,&uStack_10c);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      FUN_20077320(uVar1);
      uStack_4 = 3;
      FUN_200778d0(uVar6,auStack_f4,param_4,*(undefined4 *)(in_ECX + 0x1c4));
      uStack_4 = 5;
      FUN_20081fb0();
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      FUN_20081e90();
      uStack_4 = 0xffffffff;
      FUN_20092110();
    }
    else {
      local_124 = (int *)(param_2 - *local_11c);
      if (local_124 == (int *)0x0) {
        ppiVar10 = (int **)local_12c;
        local_12c[0] = 0;
      }
      else {
        local_12c[0] = 1;
        FUN_200bdca0(local_12c,1);
        local_128 = 0;
        iVar11 = 0x100;
        do {
          if ((int)local_124 < iVar11) break;
          iVar11 = iVar11 * 0x100;
          local_128 = local_128 + 1;
        } while (iVar11 != 0);
        FUN_200bdca0(&local_128,2);
        ppiVar10 = &local_124;
        iVar11 = local_128 * 8 + 8;
      }
      FUN_200bdca0(ppiVar10,iVar11);
      FUN_200778d0(uVar6,*(undefined4 *)(local_104[0] + 0x10),param_4,
                   *(undefined4 *)(in_ECX + 0x1c4));
    }
    FUN_2001fd60(&local_11c,&param_2);
    if (local_11c == *(int **)(in_ECX + 0xfc)) {
      uVar2 = *(uint *)(in_ECX + 0x108);
      while (0x13 < uVar2) {
        iVar11 = **(int **)(in_ECX + 0xfc);
        iVar3 = *(int *)(iVar11 + 0x10);
        if (iVar3 != 0) {
          FUN_20079350();
          FUN_200f9f75(iVar3);
        }
        FUN_20072720(&local_11c,iVar11);
        uVar2 = *(uint *)(in_ECX + 0x108);
      }
      piVar7 = operator_new(0xe8);
      uStack_4 = 6;
      local_11c = piVar7;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        FUN_2007ebe0();
        FUN_2009df30(&uStack_10f);
        uStack_4._0_1_ = 7;
        FUN_20081e20(&uStack_10b,&uStack_10e);
        uStack_4._0_1_ = 8;
        FUN_20081f40(&uStack_109,&uStack_111);
        uStack_4 = CONCAT31(uStack_4._1_3_,9);
        FUN_20077320(in_ECX + 4);
      }
      uStack_4 = 0xffffffff;
      puVar8 = (undefined4 *)FUN_200820a0(&param_2);
      *puVar8 = piVar7;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  ExceptionList = local_c;
  return uVar6;
}

