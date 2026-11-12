// rea decompile_all
// name: FUN_500cc920
// address: 0x500cc920
// body: available
// range: 0x500cc920-0x500cccef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500cc920(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  void *unaff_EBX;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_501153ad;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((*(char **)(param_1 + 0x1c4) != (char *)0x0) &&
     (ExceptionList = &pvStack_c, uVar2 = FUN_500c2e80(*(char **)(param_1 + 0x1c4)), uVar2 != 0)) {
    iVar5 = 0xc;
    bVar8 = true;
    pcVar6 = *(char **)(uVar2 + 0x1b4);
    pcVar7 = s_path_corner_5014243c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      puVar3 = operator_new(0xb8);
      local_4 = (undefined4 *)0x0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_5003d420(puVar3,uVar2,0,0.0);
        *puVar3 = &PTR_LAB_50127d48;
      }
      local_4 = (undefined4 *)0xffffffff;
      (**(code **)(**(int **)(param_1 + 0x450) + 0x38))(puVar3,param_1);
    }
    else {
      iVar5 = 0xd;
      bVar8 = true;
      pcVar6 = *(char **)(uVar2 + 0x1b4);
      pcVar7 = s_point_combat_5014fe54;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        puVar3 = operator_new(0xb8);
        local_4 = (undefined4 *)0x1;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          FUN_5003d420(puVar3,uVar2,0,0.0);
          *puVar3 = &PTR_LAB_50127c88;
        }
        local_4 = (undefined4 *)0xffffffff;
        (**(code **)(**(int **)(param_1 + 0x450) + 0x38))(puVar3,param_1);
        (**(code **)(**(int **)(param_1 + 0x450) + 0x54))(0);
      }
    }
  }
  if ((*(char **)(param_1 + 0x1e4) != (char *)0x0) &&
     (uVar2 = FUN_500c2e80(*(char **)(param_1 + 0x1e4)), uVar2 != 0)) {
    iVar5 = 0xd;
    bVar8 = true;
    pcVar6 = *(char **)(uVar2 + 0x1b4);
    pcVar7 = s_point_combat_5014fe54;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      puVar3 = operator_new(0xb8);
      local_4 = (undefined4 *)0x2;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_5003d420(puVar3,uVar2,0,0.0);
        *puVar3 = &PTR_LAB_50127c88;
      }
      local_4 = (undefined4 *)0xffffffff;
      (**(code **)(**(int **)(param_1 + 0x450) + 0x38))(puVar3,param_1);
      (**(code **)(**(int **)(param_1 + 0x450) + 0x54))(0);
    }
  }
  if (((char)((uint)*(undefined4 *)(param_1 + 0x1b8) >> 8) < '\0') &&
     (iVar5 = (**(code **)(**(int **)(param_1 + 0x450) + 0x18c))(), iVar5 != 0)) {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x450) + 0x18c))();
    (**(code **)(*piVar4 + 0x8c))(param_1,0);
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x4000) != 0) {
    (**(code **)(**(int **)(param_1 + 0x450) + 0x58))(1);
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x2000) != 0) {
    (**(code **)(**(int **)(param_1 + 0x450) + 0x54))(0);
  }
  if ((*(byte *)(param_1 + 0x1b8) & 4) == 0) {
    puVar3 = operator_new(0x1c0);
    local_4 = (undefined4 *)0x3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_5004dbc0(puVar3);
      *puVar3 = &PTR_LAB_501250b8;
      puVar3[0x6f] = 0;
    }
    local_4 = (undefined4 *)0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x450) + 0x30))(puVar3,param_1);
  }
  if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
    puVar3 = operator_new(0x58);
    local_4 = (undefined4 *)0x4;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_5004dbc0(puVar3);
      puVar3[0x15] = 0;
      *puVar3 = &PTR_LAB_50125100;
    }
    local_4 = (undefined4 *)0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x450) + 0x30))(puVar3,param_1);
  }
  if (*(char *)(param_1 + 0x1b8) < '\0') {
    *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) | 0x800;
  }
  if (*(float *)(param_1 + 900) < 0.1) {
    *(undefined4 *)(param_1 + 900) = 0x42960000;
  }
  puVar3 = operator_new(0x5c);
  local_4 = (undefined4 *)0x5;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    fVar1 = *(float *)(param_1 + 900);
    FUN_5004dbc0(puVar3);
    puVar3[0x15] = 0;
    *puVar3 = &PTR_LAB_50128578;
    puVar3[0x16] = fVar1 * fVar1;
  }
  local_4 = (undefined4 *)0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x450) + 0x30))(puVar3,param_1);
  if (*(float *)(DAT_5015c8bc + 0x18) != 0.0) {
    puVar3 = operator_new(0x58);
    pvStack_c = (void *)0x6;
    local_4 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_5004dbc0(puVar3);
      puVar3[0x15] = 0;
      *puVar3 = &PTR_LAB_501285c8;
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x450) + 0x30))(puVar3,param_1);
  }
  fVar1 = DAT_5015ccdc + 0.1;
  *(undefined1 **)(param_1 + 0x2c8) = &LAB_500cc410;
  *(undefined1 **)(param_1 + 0x2c0) = &LAB_500cc3d0;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_500cc730;
  *(float *)(param_1 + 0x2b4) = fVar1;
  ExceptionList = unaff_EBX;
  return;
}

