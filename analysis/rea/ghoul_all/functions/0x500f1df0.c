// rea decompile_all
// name: FUN_500f1df0
// address: 0x500f1df0
// body: available
// range: 0x500f1df0-0x500f20c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f1df0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar5 = (**(code **)(*DAT_5015c4d8 + 4))();
  if ((((iVar5 != 0) && (param_1 != 0)) && (iVar5 = *(int *)(param_1 + 0x74), iVar5 != 0)) &&
     ((*(int *)(iVar5 + 0x354) != 0 && (0 < *(int *)(param_1 + 0x2ec))))) {
    iVar12 = 0;
    uVar6 = (**(code **)(**(int **)(iVar5 + 0x34c) + 0x5c))();
    switch(uVar6) {
    case 0:
      iVar12 = 0;
      break;
    case 1:
      iVar12 = 1;
      break;
    case 2:
      iVar12 = 4;
      break;
    case 3:
      iVar12 = 3;
      break;
    case 4:
      iVar12 = 5;
      break;
    case 5:
      iVar12 = 6;
      break;
    case 6:
      iVar12 = 7;
      break;
    case 7:
      iVar12 = 9;
      break;
    case 8:
      iVar12 = 0xb;
      break;
    case 9:
      iVar12 = 0xc;
      break;
    case 10:
      iVar12 = 0xe;
      break;
    case 0xb:
      iVar12 = 0x10;
      break;
    case 0xc:
      iVar12 = 0x12;
    }
    iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0xb4))(param_1);
    if (iVar12 != iVar5) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0xbc))(param_1,iVar12);
    }
    if (*(int *)(param_1 + 0x3cc) != 0) {
      piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pvVar8 = (void *)FUN_500a5e10(&DAT_5015c79c,(uint)piVar7);
      pvVar8 = (void *)FUN_500a51d0(pvVar8,*(uint *)(param_1 + 0x164));
      fVar1 = *(float *)(param_1 + 0x24c);
      fVar2 = *(float *)(param_1 + 0x254);
      fVar3 = *(float *)(param_1 + 0x250);
      FUN_500fe050((float *)&stack0xffffffe4);
      FUN_500fdd70((float *)(param_1 + 0x10),&fStack_10,(float *)0x0,(float *)0x0);
      if (fStack_10 * fVar1 + fStack_c * fVar3 + fStack_8 * fVar2 <= 0.5) {
        sVar4 = (**(code **)(*piVar7 + 0x1c))(s_abolt_hip_r_5013399c);
        puVar9 = (undefined4 *)FUN_500a4250(pvVar8,sVar4);
        if (puVar9 == (undefined4 *)0x0) {
          return;
        }
        iVar5 = __strcmpi(s_flag_hold_idle_5014508c,(char *)(puVar9[9] + 0x48e));
        if (iVar5 == 0) {
          return;
        }
        FUN_500a3f30(pvVar8,puVar9);
        pcVar11 = s_ctf_flag_blue_50144c38;
        if (*(int *)(param_1 + 0x3cc) != 1) {
          pcVar11 = s_ctf_flag_red_50144c48;
        }
        uVar10 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        pvVar8 = (void *)FUN_500a5e10(&DAT_5015c79c,uVar10);
        piVar7 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
        uVar6 = FUN_500a51d0(pvVar8,*(uint *)(param_1 + 0x164));
        pcVar13 = s_flag_hold_idle_5014508c;
      }
      else {
        sVar4 = (**(code **)(*piVar7 + 0x1c))();
        puVar9 = (undefined4 *)FUN_500a4250(pvVar8,sVar4);
        if (puVar9 == (undefined4 *)0x0) {
          return;
        }
        iVar5 = __strcmpi(s_flag_run_5014512c,(char *)(puVar9[9] + 0x48e));
        if (iVar5 == 0) {
          return;
        }
        FUN_500a3f30(pvVar8,puVar9);
        pcVar11 = s_ctf_flag_blue_50144c38;
        if (*(int *)(param_1 + 0x3cc) != 1) {
          pcVar11 = s_ctf_flag_red_50144c48;
        }
        uVar10 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        pvVar8 = (void *)FUN_500a5e10(&DAT_5015c79c,uVar10);
        piVar7 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
        uVar6 = FUN_500a51d0(pvVar8,*(uint *)(param_1 + 0x164));
        pcVar13 = s_flag_run_5014512c;
      }
      (**(code **)(*piVar7 + 0xd0))
                (param_1,s_abolt_hip_r_5013399c,s_items_ctf_flag_5014507c,pcVar13,
                 s_to_abolt_hip_r_501516bc,uVar6,pcVar11,0x3f800000);
    }
  }
  return;
}

