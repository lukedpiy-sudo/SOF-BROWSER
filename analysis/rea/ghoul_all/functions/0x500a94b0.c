// rea decompile_all
// name: FUN_500a94b0
// address: 0x500a94b0
// body: available
// range: 0x500a94b0-0x500a96e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500a94b0(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  undefined1 local_44 [48];
  int iStack_14;
  undefined4 local_4;
  
  local_4 = 0;
  iVar4 = FUN_5006a3e0(&DAT_5015c7b8,&DAT_5014516c);
  pcVar11 = s_ctf_flag_blue_50144c38;
  if (*(int *)(param_1 + 0x3cc) != 1) {
    pcVar11 = s_ctf_flag_red_50144c48;
  }
  pbVar12 = *(byte **)(param_1 + 0x1b4);
  pbVar5 = (byte *)pcVar11;
  do {
    bVar1 = *pbVar5;
    bVar13 = bVar1 < *pbVar12;
    if (bVar1 != *pbVar12) {
LAB_500a9513:
      iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_500a9518;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar13 = bVar1 < pbVar12[1];
    if (bVar1 != pbVar12[1]) goto LAB_500a9513;
    pbVar5 = pbVar5 + 2;
    pbVar12 = pbVar12 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_500a9518:
  if (iVar6 == 0) {
    fVar3 = DAT_5015ccdc + 5.0;
    *(undefined4 *)(param_1 + 0x2d8) = param_2;
    *(float *)(param_1 + 0x2d4) = fVar3;
    return 1;
  }
  uVar7 = FUN_500c26a0(0,0x1b4,pcVar11,(void *)0x0);
  if (uVar7 != 0) {
    FUN_500b3870(uVar7,*(undefined4 **)(iVar4 + 0xa4),pcVar11,0);
    piVar2 = *(int **)(uVar7 + 0x164);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(local_44);
      FUN_500ed060(&stack0xffffffb8,0x3fe00000);
      (**(code **)*piVar2)(&stack0xffffffb8);
      piVar8 = (int *)(**(code **)(*piVar2 + 0x88))();
      uVar9 = (**(code **)(*piVar8 + 0x1c))(s_quake_ground_5012f83c);
      (**(code **)(*piVar2 + 0x74))(uVar9);
      *(undefined4 *)(uVar7 + 0x124) = 0;
      piVar8 = (int *)(**(code **)(*piVar2 + 0x88))();
      uVar9 = (**(code **)(*piVar8 + 0x40))(s_ctf_flag_5014ba40);
      if ((short)uVar9 != 0) {
        piVar8 = (int *)(**(code **)(*piVar2 + 0x88))();
        uVar10 = (**(code **)(*piVar8 + 0x50))(uVar9,pcVar11,0);
        if ((short)uVar10 != 0) {
          (**(code **)(*piVar2 + 0x2c))(uVar9,uVar10,0);
        }
      }
      piVar8 = (int *)(**(code **)(*piVar2 + 0x88))();
      uVar9 = (**(code **)(*piVar8 + 0x1c))(s_world_light_5014ba34);
      if ((short)uVar9 != 0) {
        (**(code **)(*piVar2 + 0x20))(uVar9,0);
      }
      if (*(int *)(iStack_14 + 0x3cc) == 1) {
        piVar8 = (int *)(**(code **)(*piVar2 + 0x88))();
        pcVar11 = s_world_light_red_5014ba24;
      }
      else {
        piVar8 = (int *)(**(code **)(*piVar2 + 0x88))();
        pcVar11 = s_world_light_blue_5014ba10;
      }
      uVar9 = (**(code **)(*piVar8 + 0x1c))(pcVar11);
      if ((short)uVar9 != 0) {
        (**(code **)(*piVar2 + 0x20))(uVar9,0);
      }
    }
    uVar9 = *(undefined4 *)(param_1 + 0x3cc);
    *(undefined4 *)(uVar7 + 0x158) = 1;
    *(undefined4 *)(uVar7 + 0x3cc) = uVar9;
    *(uint *)(uVar7 + 0x34) = *(uint *)(uVar7 + 0x34) | 0x1000;
    if (*(int *)(uVar7 + 0x3cc) != 1) {
      (*DAT_5015cb00)(9,&DAT_50133428);
      return 0;
    }
    (*DAT_5015cb00)(8);
    return 0;
  }
  return 1;
}

