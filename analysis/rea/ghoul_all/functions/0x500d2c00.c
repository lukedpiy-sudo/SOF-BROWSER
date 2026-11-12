// rea decompile_all
// name: FUN_500d2c00
// address: 0x500d2c00
// body: available
// range: 0x500d2c00-0x500d2e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d2c00(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  float unaff_EBX;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 auStack_14 [4];
  undefined4 *puStack_4;
  
  iVar4 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  if ((*(int *)(iVar4 + 0x16c) == 0) && (param_2 != 0)) {
    uVar5 = (*DAT_5015cb24)(2,10);
    *(undefined4 *)(iVar4 + 0x16c) = uVar5;
    *(uint *)(iVar4 + 0x170) = (uint)(*(int *)(iVar4 + 0x170) == 0);
  }
  else if ((*(int *)(iVar4 + 0x170) != 0) || (param_2 == 0)) {
    piVar6 = *(int **)(param_1 + 0x164);
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar10 = *(int *)(iVar4 + 0x44);
    if (iVar10 == 0) {
      return;
    }
    piVar1 = *(int **)(iVar10 + 0x1c);
    if (piVar1 == (int *)0x0) {
      return;
    }
    if ((*(uint *)(iVar4 + 0x194) & 0x20) == 0) {
      *(uint *)(iVar4 + 0x194) = *(uint *)(iVar4 + 0x194) | 0x20;
      if (*(int **)(iVar10 + 0x1c) != (int *)0x0) {
        FUN_500b41d0(*(int **)(iVar10 + 0x1c),s_barrel_5012fa1c,1);
      }
    }
    piVar6 = (int *)(**(code **)(*piVar6 + 0x88))();
    if (piVar6 == (int *)0x0) {
      return;
    }
    piVar6 = (int *)(**(code **)(*piVar6 + 0x1c))(s_barrel_base_501528a8);
    piVar7 = (int *)(**(code **)(*piVar1 + 0x88))();
    if (piVar7 == (int *)0x0) {
      return;
    }
    piVar8 = (int *)(**(code **)(*piVar7 + 0x1c))(s_flash_barrel_50152a40);
    iVar13 = 0;
    iVar12 = 0;
    uVar5 = 1;
    iVar10 = param_1;
    piVar7 = piVar1;
    piVar11 = piVar8;
    iVar9 = (*DAT_5015c9f8)(s_weapons_othermz_heli_50152a28);
    FUN_50085470(&DAT_5015c518,iVar9,iVar10,piVar7,(short)piVar11,uVar5,iVar12,iVar13);
    FUN_500d2e50((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),piVar6,puStack_4,piVar1,
                 piVar8,(undefined4 *)0x0,0,auStack_14,(undefined4 *)&stack0xffffffd4);
    fStack_20 = unaff_EBX * 100.0;
    fStack_1c = fStack_28 * 100.0;
    fStack_18 = fStack_24 * 100.0;
    if (*(int *)(iVar4 + 400) != 0x44a72000) {
      puStack_4 = (undefined4 *)(*DAT_5015cb24)(0xfffffff6,10);
      fVar2 = (float)(int)puStack_4;
      puStack_4 = (undefined4 *)(*DAT_5015cb24)(0xfffffff6,10);
      fVar3 = (float)(int)puStack_4;
      puStack_4 = (undefined4 *)(*DAT_5015cb24)(0xfffffff6,10);
      fStack_20 = (float)(int)puStack_4 + fStack_20;
      fStack_1c = fStack_1c + fVar3;
      fStack_18 = fStack_18 + fVar2;
    }
    FUN_500659c0(&DAT_50159b18,0x1c,param_1,auStack_14,&fStack_20,(float *)0x0,(undefined4 *)0x0);
    uVar5 = (*DAT_5015c9f4)(s_weapons_assault_fire_wav_50152a7c,0x3f666666,0x3f000000,0,0);
    (*DAT_5015ca48)(param_1,1,uVar5);
  }
  *(int *)(iVar4 + 0x16c) = *(int *)(iVar4 + 0x16c) + -1;
  return;
}

