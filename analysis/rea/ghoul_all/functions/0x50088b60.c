// rea decompile_all
// name: FUN_50088b60
// address: 0x50088b60
// body: available
// range: 0x50088b60-0x50088e52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50088b60(int *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *unaff_EDI;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int **ppiVar8;
  int *local_34;
  int *local_30;
  
  ppiVar8 = &local_34;
  if (DAT_5015d928 == 0) {
    (*DAT_5015ca28)(param_1,2);
    return;
  }
  local_34 = *(int **)(param_1[0x1d] + 0x34c);
  if (local_34 == (int *)0x0) {
    (*DAT_5015ca24)();
    return;
  }
  local_30 = param_1;
  (**(code **)(*local_34 + 0xf4))();
  (**(code **)(*unaff_EDI + 0xe8))();
  (**(code **)(*unaff_EDI + 0xec))();
  DAT_5015c568 = (**(code **)(*unaff_EDI + 0x94))();
  DAT_5015c560 = (**(code **)(*unaff_EDI + 0x9c))();
  DAT_5015c780 = (**(code **)(*unaff_EDI + 0xa4))();
  DAT_5015c564 = (**(code **)(*unaff_EDI + 0xac))();
  DAT_5015c784 = (**(code **)(*unaff_EDI + 0xb4))();
  DAT_5015c778 = (int *)(**(code **)(*unaff_EDI + 0xbc))();
  DAT_5015c56c = (undefined4 *)(**(code **)(*unaff_EDI + 0xcc))();
  DAT_5015c570 = (int *)(**(code **)(*unaff_EDI + 0xd4))();
  DAT_5015c77c = (**(code **)(*unaff_EDI + 0x54))(7);
  FUN_500f4d30((int)param_1);
  (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0xf4))(&stack0xffffffc4);
  FUN_500f3860(param_1);
  (**(code **)((int)*ppiVar8 + 0x98))(DAT_5015c568);
  (**(code **)((int)*ppiVar8 + 0xa0))(DAT_5015c560);
  (**(code **)((int)*ppiVar8 + 0xa8))(DAT_5015c780);
  (**(code **)((int)*ppiVar8 + 0xb0))(DAT_5015c564);
  (**(code **)((int)*ppiVar8 + 0xb8))(DAT_5015c784);
  piVar7 = DAT_5015c778;
  (**(code **)((int)*ppiVar8 + 0xc0))();
  puVar1 = DAT_5015c56c;
  (**(code **)((int)*ppiVar8 + 0xd0))();
  piVar4 = DAT_5015c570;
  (**(code **)((int)*ppiVar8 + 0xd8))();
  if (DAT_5015c77c != 0) {
    (**(code **)((int)*ppiVar8 + 0x4c))(7,1,0xffffffff);
  }
  iVar3 = *piVar7;
  puVar2 = FUN_500fe320((byte *)(param_1[0x1d] + 0xcc),(byte *)s_bestweap_50144fc8);
  (**(code **)(iVar3 + 200))(puVar2);
  piVar7 = (int *)0x0;
  (**(code **)*puVar1)();
  piVar6 = (int *)0x1;
  (**(code **)(*piVar4 + 0x40))(1,0);
  piVar5 = (int *)0x3;
  (**(code **)(*piVar7 + 0x40))(3,0);
  piVar7 = (int *)0xd;
  (**(code **)(*piVar6 + 0x40))(0xd,0);
  piVar4 = (int *)0xe;
  (**(code **)(*piVar5 + 0x40))(0xe,0);
  FUN_500f62e0(1);
  FUN_500f62e0(3);
  FUN_500f62e0(0xd);
  FUN_500f62e0(0xe);
  iVar3 = (**(code **)(*DAT_5015c4d8 + 0x68))();
  if (iVar3 == 0) {
    (**(code **)(*piVar7 + 0x30))(3,0x96);
    (**(code **)(*piVar4 + 0x30))(1,6);
  }
  piVar4 = (int *)0xffffffff;
  (**(code **)(*piVar7 + 0x4c))(2,2);
  (**(code **)(*piVar4 + 0x14))();
  (**(code **)(DAT_5015d9b8 + 0x1c))(DAT_5015d23c);
  (**(code **)(*piVar4 + 0x18))(3);
  iVar3 = (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0x80))();
  FUN_500f2770((int)param_1,-iVar3);
  param_1[0x68] = param_1[0x68] & 0xffffffef;
  (*DAT_5015cb54)(s_nodamage_50146ad8,0);
  return;
}

