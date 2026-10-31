## evidence_id

ev_1cd29930b24ad4caf1f35996b25ecedeb6d0080b489c0ad6f9115bd7532245f3

## subject.name

gamex86.dll

## subject.digest

| Key    | Value                                                            |
|--------|------------------------------------------------------------------|
| sha256 | 9e5390f05aa5eae0cab62b7a35f304078d3b395e7118a9c6b9535568ac575483 |

## subject.local_path

C:\Users\User\q2work\sof2\sof_target\gamex86.dll

## subject.format

pe

## subject.architecture

x86

## provider

| Key     | Value  |
|---------|--------|
| id      | ghidra |
| name    | Ghidra |
| version | 12.1.4 |

## analysis_profile.provider

| Key     | Value  |
|---------|--------|
| id      | ghidra |
| name    | Ghidra |
| version | 12.1.4 |

## analysis_profile.parameters.target_kind

executable

## analysis_profile.parameters.target_format

pe

## analysis_profile.parameters.executable_role

shared-library

## analysis_profile.parameters.managed

false

## analysis_profile.parameters.native_aot_metadata

| Key                  | Value                       |
|----------------------|-----------------------------|
| contract_revision    | rtr-9.1-x64-pe-read-only-v3 |
| source_bytes         | 134217728                   |
| work_units           | 67108864                    |
| working_memory_bytes | 67108864                    |
| report_bytes         | 4194304                     |

## analysis_profile.parameters.architecture

x86

## analysis_profile.parameters.available_architectures

x86

## analysis_profile.parameters.import_mode

ephemeral-source-immutable

## analysis_profile.parameters.pdb_observations

program-info-v1

## analysis_profile.parameters.annotation_policy

atomic-function-entry-metadata-v1

## analysis_profile.parameters.load_image_observations

source-mappings-entry-context-v2

## analysis_profile.parameters.function_body_evidence

complete-inclusive-ranges-v1

## analysis_profile.parameters.function_references

complete-body-and-entry-reference-manager-v2

## analysis_profile.parameters.call_relationship_coverage

function-body-call-coverage-v5

## analysis_profile.parameters.function_dossier_coverage

observed-facets-and-call-relationships-v1

## analysis_profile.parameters.string_inventory_evidence

defined-data-coverage-v1

## analysis_profile.parameters.location_resolution

explicit-address-exact-entry-symbol-first-v3

## analysis_profile.parameters.procedure_file_offset_resolution

address-first-unique-target-source-mapping-v2

## analysis_profile.parameters.instruction_flow_evidence

decoded-return-pcode-v1

## analysis_profile.parameters.instruction_references

exact-address-incoming-v1

## analysis_profile.parameters.function_boundary_observations

ghidra-function-boundary-limitations-v3

## analysis_profile.parameters.no_return_repair

disabled-windows-p0

## analysis_profile.parameters.process_launch

official-headless-script-v1

## analysis_profile.parameters.jump_table_evidence

typed-case-default-blocks-v1

## analysis_profile.parameters.decompiler_jump_loads

true

## analysis_profile.parameters.loader

auto-from-header

## analysis_profile.parameters.language_id

auto-from-header

## analysis_profile.parameters.compiler_spec_id

auto-default

## analysis_profile.parameters.analyzer_preset

ghidra-default

## analysis_profile.digest

64f38a45818a3d9e2f85d007cde25a1861ee4535051e38c48afd92f7e069136a

## predicate_type

rea.analysis

## operation

procedure_pseudo_code

## parameters

| Key       | Value      |
|-----------|------------|
| procedure | 0x500f38a0 |

## raw_result.value


void __cdecl FUN_500f38a0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  longlong lVar15;
  undefined4 *puStack_41c;
  undefined4 local_410 [3];
  undefined4 uStack_404;
  undefined4 uStack_400;
  int local_3fc;
  undefined4 local_3f8 [3];
  undefined4 auStack_3ec [8];
  int *piStack_3cc;
  int *piStack_3c8;
  int iStack_3c4;
  undefined4 auStack_390 [8];
  undefined4 auStack_370 [8];
  undefined4 auStack_350 [13];
  undefined4 auStack_31c [25];
  undefined4 auStack_2b8 [32];
  uint auStack_238 [142];
  
  FUN_500f3290(param_1,local_410,local_3f8);
  puVar3 = *(undefined4 **)(param_1 + 0x74);
  local_3fc = (param_1 - DAT_5015cca0) / 0x464 + -1;
  iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
  iVar9 = 10;
  puVar13 = auStack_3ec;
  if (iVar6 == 0) {
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x458);
    puVar11 = puVar3 + 0xc1;
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    if (iVar6 == 0) {
      puVar12 = puVar3 + 0x33;
      puVar14 = auStack_238;
      for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = puVar3 + 0x33;
      for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar3[0xbc] = 0xffffffff;
      puVar3[0xbf] = 100;
      puVar3[0xc0] = 100;
      puVar3[0xbe] = 1;
      FUN_500f43a0(param_1,auStack_238);
    }
    else {
      pcVar10 = (char *)(*(int *)(param_1 + 0x74) + 0xcc);
      if (pcVar10 != (char *)0x0) {
        pcVar7 = (char *)(*(int *)(param_1 + 0x45c) + 0x90);
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar7 = cVar1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
      }
      puVar12 = puVar3 + 0x33;
      puVar14 = puVar12;
      for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      puVar3[0xbc] = 0xffffffff;
      puVar3[0xbf] = 100;
      puVar3[0xc0] = 100;
      puVar3[0xbe] = 1;
      pcVar10 = (char *)(*(int *)(param_1 + 0x45c) + 0x90);
      if (pcVar10 != (char *)0x0) {
        pcVar7 = (char *)(*(int *)(param_1 + 0x74) + 0xcc);
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar7 = cVar1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
      }
      if ((puVar12 == (uint *)0x0) || ((char)*puVar12 == '\0')) {
        FUN_500adb20((byte *)s_Bot___s__has_no_userinfo__50154560);
      }
      FUN_500f43a0(param_1,puVar12);
      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x200;
    }
  }
  if ((*(int *)(param_1 + 0x458) != 0) && (DAT_50159684 != 3)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x74) + 0x34c);
    if (iVar6 != 0) {
      (**(code **)(DAT_5015d9b8 + 0x28))(iVar6);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x34c) = 0;
    uVar8 = (**(code **)(DAT_5015d9b8 + 0x24))();
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x34c) = uVar8;
  }
  uStack_404 = puVar3[0xd4];
  puVar12 = puVar3 + 0x33;
  puVar14 = auStack_238;
  for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar8 = puVar3[0xd3];
  uStack_400 = puVar3[0x1f];
  puVar13 = puVar3 + 0x15c;
  puVar11 = auStack_370;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar4 = puVar3[0xd5];
  puVar13 = puVar3 + 0x164;
  puVar11 = auStack_390;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = puVar3 + 0xd6;
  puVar11 = auStack_2b8;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar2 = *(undefined1 *)((int)puVar3 + 0x46e);
  puVar13 = puVar3 + 0xf6;
  puVar11 = auStack_31c;
  for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = puVar3 + 0x10f;
  puVar11 = auStack_350;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar13;
  puVar13 = puVar3;
  for (iVar6 = 0x180; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  puVar13 = auStack_370;
  puVar11 = puVar3 + 0x15c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = auStack_390;
  puVar11 = puVar3 + 0x164;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar3[0xd3] = uVar8;
  puVar13 = auStack_2b8;
  puVar11 = puVar3 + 0xd6;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = auStack_31c;
  puVar11 = puVar3 + 0xf6;
  for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined1 *)((int)puVar3 + 0x46e) = uVar2;
  puVar13 = auStack_350;
  puVar11 = puVar3 + 0x10f;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar13;
  puVar3[0xd5] = uVar4;
  puVar12 = auStack_238;
  puVar14 = puVar3 + 0x33;
  for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar3[0xd4] = uStack_404;
  if ((int)puVar3[0xbf] < 1) {
    puVar13 = puVar3 + 0x33;
    for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    puVar3[0xbc] = 0xffffffff;
    puVar3[0xbf] = 100;
    puVar3[0xc0] = 100;
    puVar3[0xbe] = 1;
  }
  puVar3[0x15b] = 0xffffffd8;
  puVar13 = auStack_3ec;
  puVar11 = puVar3 + 0xc1;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x2fc);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x300);
  *(undefined4 *)(param_1 + 0x330) = 0;
  iVar6 = local_3fc * 0x600 + DAT_5015d6c4;
  *(undefined4 *)(param_1 + 0x30c) = 2;
  *(int *)(param_1 + 0x74) = iVar6;
  *(undefined4 *)(param_1 + 0x19c) = 4;
  *(undefined4 *)(param_1 + 0x304) = 0x23;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(char **)(param_1 + 0x1b4) = s_player_50142e48;
  *(undefined4 *)(param_1 + 0x27c) = 200;
  *(undefined4 *)(param_1 + 0x158) = 2;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  fVar5 = DAT_5015ccdc + 12.0;
  *(undefined4 *)(param_1 + 0x15c) = 0x2010003;
  *(code **)(param_1 + 0x2cc) = FUN_50096c00;
  *(code **)(param_1 + 0x2d0) = FUN_500f2a30;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(float *)(param_1 + 0x2a0) = fVar5;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) & 0xfffff7ff;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1c00000;
  *(undefined4 *)(param_1 + 0x128) = 0x41800000;
  *(undefined4 *)(param_1 + 300) = 0x41800000;
  *(undefined4 *)(param_1 + 0x130) = 0x42200000;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  puVar13 = *(undefined4 **)(param_1 + 0x74);
  for (iVar6 = 0x32; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  puVar3[0x1f] = uStack_400;
  lVar15 = __ftol();
  *(short *)(puVar3 + 1) = (short)lVar15;
  lVar15 = __ftol();
  *(short *)((int)puVar3 + 6) = (short)lVar15;
  lVar15 = __ftol();
  *(short *)(puVar3 + 2) = (short)lVar15;
  puVar3[0x19] = 0xffffffff;
  puVar3[0x25] = 0x42be0000;
  if (*(int *)(param_1 + 0x458) == 0) {
    (**(code **)(*DAT_5015c4d8 + 0xb4))(param_1);
  }
  (**(code **)(*DAT_5015c4d8 + 0xc0))(param_1);
  piStack_3c8 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  iStack_3c4 = param_1;
  (**(code **)(*piStack_3c8 + 0xf4))(&piStack_3c8);
  (**(code **)(*piStack_3cc + 0x14))();
  if ((int *)puVar3[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[0x1b] + 0x28))(1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x9e) = 0;
  FUN_50083bf0(param_1);
  *(undefined4 *)(param_1 + 0x20) = 0xff;
  puVar13 = (undefined4 *)(param_1 + 4);
  iVar6 = 0;
  *(int *)(param_1 + 0x2c) = (param_1 - DAT_5015cca0) / 0x464 + -1;
  *puVar13 = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = local_410[0];
  puStack_41c = puVar3 + 5;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + 1.0;
  do {
    lVar15 = __ftol();
    iVar6 = iVar6 + 1;
    *(short *)puStack_41c = (short)lVar15;
    puStack_41c = (undefined4 *)((int)puStack_41c + 2);
  } while (iVar6 < 3);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x14) = local_3fc;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar3[7] = 0;
  puVar3[8] = *(undefined4 *)(param_1 + 0x14);
  puVar3[9] = *(undefined4 *)(param_1 + 0x18);
  puVar3[0x13f] = *(undefined4 *)(param_1 + 0x10);
  puVar3[0x140] = *(undefined4 *)(param_1 + 0x14);
  puVar3[0x141] = *(undefined4 *)(param_1 + 0x18);
  if (puVar3[0xb7] == 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0x2010003;
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffe;
    puVar3[200] = 0;
    FUN_500c3b20(param_1);
    (*DAT_5015cb28)(param_1);
    iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar6 != 0) {
      *(float *)(*(int *)(param_1 + 0x74) + 0x564) = DAT_5015ccdc + 4.0;
    }
    iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar6 != 0) {
      FUN_50085660(param_1);
      iVar9 = 0;
      uVar8 = 1;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff7ff;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x554) = 0;
      iVar6 = (*DAT_5015c9f8)(s_environ_prespawn_50144cc4);
      FUN_500852e0(&DAT_5015c518,iVar6,puVar13,uVar8,iVar9);
      uVar8 = (*DAT_5015c9f4)(s_dm_prespawn_wav_50144c78,0x3f19999a,0x3f800000,0,0);
      (*DAT_5015ca48)(param_1,4,uVar8);
    }
  }
  else {
    puVar3[0x14e] = 0;
    puVar3[200] = 1;
    *(undefined4 *)(param_1 + 0x19c) = 0xc;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x6c) = 0;
    (*DAT_5015cb28)();
  }
  puVar3[0x122] = 1;
  if ((*(int *)(param_1 + 0x458) == 0) && (DAT_5015d1b8 != 0)) {
    FUN_500bd070(param_1,(char)DAT_5015d1b8);
  }
  FUN_50096c00();
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x348) = 0;
  return;
}



## raw_result.limitations



## normalized_result


void __cdecl FUN_500f38a0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  longlong lVar15;
  undefined4 *puStack_41c;
  undefined4 local_410 [3];
  undefined4 uStack_404;
  undefined4 uStack_400;
  int local_3fc;
  undefined4 local_3f8 [3];
  undefined4 auStack_3ec [8];
  int *piStack_3cc;
  int *piStack_3c8;
  int iStack_3c4;
  undefined4 auStack_390 [8];
  undefined4 auStack_370 [8];
  undefined4 auStack_350 [13];
  undefined4 auStack_31c [25];
  undefined4 auStack_2b8 [32];
  uint auStack_238 [142];
  
  FUN_500f3290(param_1,local_410,local_3f8);
  puVar3 = *(undefined4 **)(param_1 + 0x74);
  local_3fc = (param_1 - DAT_5015cca0) / 0x464 + -1;
  iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
  iVar9 = 10;
  puVar13 = auStack_3ec;
  if (iVar6 == 0) {
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x458);
    puVar11 = puVar3 + 0xc1;
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    if (iVar6 == 0) {
      puVar12 = puVar3 + 0x33;
      puVar14 = auStack_238;
      for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = puVar3 + 0x33;
      for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar3[0xbc] = 0xffffffff;
      puVar3[0xbf] = 100;
      puVar3[0xc0] = 100;
      puVar3[0xbe] = 1;
      FUN_500f43a0(param_1,auStack_238);
    }
    else {
      pcVar10 = (char *)(*(int *)(param_1 + 0x74) + 0xcc);
      if (pcVar10 != (char *)0x0) {
        pcVar7 = (char *)(*(int *)(param_1 + 0x45c) + 0x90);
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar7 = cVar1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
      }
      puVar12 = puVar3 + 0x33;
      puVar14 = puVar12;
      for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      puVar3[0xbc] = 0xffffffff;
      puVar3[0xbf] = 100;
      puVar3[0xc0] = 100;
      puVar3[0xbe] = 1;
      pcVar10 = (char *)(*(int *)(param_1 + 0x45c) + 0x90);
      if (pcVar10 != (char *)0x0) {
        pcVar7 = (char *)(*(int *)(param_1 + 0x74) + 0xcc);
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar7 = cVar1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
      }
      if ((puVar12 == (uint *)0x0) || ((char)*puVar12 == '\0')) {
        FUN_500adb20((byte *)s_Bot___s__has_no_userinfo__50154560);
      }
      FUN_500f43a0(param_1,puVar12);
      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x200;
    }
  }
  if ((*(int *)(param_1 + 0x458) != 0) && (DAT_50159684 != 3)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x74) + 0x34c);
    if (iVar6 != 0) {
      (**(code **)(DAT_5015d9b8 + 0x28))(iVar6);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x34c) = 0;
    uVar8 = (**(code **)(DAT_5015d9b8 + 0x24))();
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x34c) = uVar8;
  }
  uStack_404 = puVar3[0xd4];
  puVar12 = puVar3 + 0x33;
  puVar14 = auStack_238;
  for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar8 = puVar3[0xd3];
  uStack_400 = puVar3[0x1f];
  puVar13 = puVar3 + 0x15c;
  puVar11 = auStack_370;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar4 = puVar3[0xd5];
  puVar13 = puVar3 + 0x164;
  puVar11 = auStack_390;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = puVar3 + 0xd6;
  puVar11 = auStack_2b8;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar2 = *(undefined1 *)((int)puVar3 + 0x46e);
  puVar13 = puVar3 + 0xf6;
  puVar11 = auStack_31c;
  for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = puVar3 + 0x10f;
  puVar11 = auStack_350;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar13;
  puVar13 = puVar3;
  for (iVar6 = 0x180; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  puVar13 = auStack_370;
  puVar11 = puVar3 + 0x15c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = auStack_390;
  puVar11 = puVar3 + 0x164;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar3[0xd3] = uVar8;
  puVar13 = auStack_2b8;
  puVar11 = puVar3 + 0xd6;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = auStack_31c;
  puVar11 = puVar3 + 0xf6;
  for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined1 *)((int)puVar3 + 0x46e) = uVar2;
  puVar13 = auStack_350;
  puVar11 = puVar3 + 0x10f;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar13;
  puVar3[0xd5] = uVar4;
  puVar12 = auStack_238;
  puVar14 = puVar3 + 0x33;
  for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar3[0xd4] = uStack_404;
  if ((int)puVar3[0xbf] < 1) {
    puVar13 = puVar3 + 0x33;
    for (iVar6 = 0x8e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    puVar3[0xbc] = 0xffffffff;
    puVar3[0xbf] = 100;
    puVar3[0xc0] = 100;
    puVar3[0xbe] = 1;
  }
  puVar3[0x15b] = 0xffffffd8;
  puVar13 = auStack_3ec;
  puVar11 = puVar3 + 0xc1;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x2fc);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x300);
  *(undefined4 *)(param_1 + 0x330) = 0;
  iVar6 = local_3fc * 0x600 + DAT_5015d6c4;
  *(undefined4 *)(param_1 + 0x30c) = 2;
  *(int *)(param_1 + 0x74) = iVar6;
  *(undefined4 *)(param_1 + 0x19c) = 4;
  *(undefined4 *)(param_1 + 0x304) = 0x23;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(char **)(param_1 + 0x1b4) = s_player_50142e48;
  *(undefined4 *)(param_1 + 0x27c) = 200;
  *(undefined4 *)(param_1 + 0x158) = 2;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  fVar5 = DAT_5015ccdc + 12.0;
  *(undefined4 *)(param_1 + 0x15c) = 0x2010003;
  *(code **)(param_1 + 0x2cc) = FUN_50096c00;
  *(code **)(param_1 + 0x2d0) = FUN_500f2a30;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(float *)(param_1 + 0x2a0) = fVar5;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) & 0xfffff7ff;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1c00000;
  *(undefined4 *)(param_1 + 0x128) = 0x41800000;
  *(undefined4 *)(param_1 + 300) = 0x41800000;
  *(undefined4 *)(param_1 + 0x130) = 0x42200000;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  puVar13 = *(undefined4 **)(param_1 + 0x74);
  for (iVar6 = 0x32; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  puVar3[0x1f] = uStack_400;
  lVar15 = __ftol();
  *(short *)(puVar3 + 1) = (short)lVar15;
  lVar15 = __ftol();
  *(short *)((int)puVar3 + 6) = (short)lVar15;
  lVar15 = __ftol();
  *(short *)(puVar3 + 2) = (short)lVar15;
  puVar3[0x19] = 0xffffffff;
  puVar3[0x25] = 0x42be0000;
  if (*(int *)(param_1 + 0x458) == 0) {
    (**(code **)(*DAT_5015c4d8 + 0xb4))(param_1);
  }
  (**(code **)(*DAT_5015c4d8 + 0xc0))(param_1);
  piStack_3c8 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  iStack_3c4 = param_1;
  (**(code **)(*piStack_3c8 + 0xf4))(&piStack_3c8);
  (**(code **)(*piStack_3cc + 0x14))();
  if ((int *)puVar3[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)puVar3[0x1b] + 0x28))(1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x9e) = 0;
  FUN_50083bf0(param_1);
  *(undefined4 *)(param_1 + 0x20) = 0xff;
  puVar13 = (undefined4 *)(param_1 + 4);
  iVar6 = 0;
  *(int *)(param_1 + 0x2c) = (param_1 - DAT_5015cca0) / 0x464 + -1;
  *puVar13 = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = local_410[0];
  puStack_41c = puVar3 + 5;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + 1.0;
  do {
    lVar15 = __ftol();
    iVar6 = iVar6 + 1;
    *(short *)puStack_41c = (short)lVar15;
    puStack_41c = (undefined4 *)((int)puStack_41c + 2);
  } while (iVar6 < 3);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x14) = local_3fc;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar3[7] = 0;
  puVar3[8] = *(undefined4 *)(param_1 + 0x14);
  puVar3[9] = *(undefined4 *)(param_1 + 0x18);
  puVar3[0x13f] = *(undefined4 *)(param_1 + 0x10);
  puVar3[0x140] = *(undefined4 *)(param_1 + 0x14);
  puVar3[0x141] = *(undefined4 *)(param_1 + 0x18);
  if (puVar3[0xb7] == 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0x2010003;
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffe;
    puVar3[200] = 0;
    FUN_500c3b20(param_1);
    (*DAT_5015cb28)(param_1);
    iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar6 != 0) {
      *(float *)(*(int *)(param_1 + 0x74) + 0x564) = DAT_5015ccdc + 4.0;
    }
    iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar6 != 0) {
      FUN_50085660(param_1);
      iVar9 = 0;
      uVar8 = 1;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff7ff;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x554) = 0;
      iVar6 = (*DAT_5015c9f8)(s_environ_prespawn_50144cc4);
      FUN_500852e0(&DAT_5015c518,iVar6,puVar13,uVar8,iVar9);
      uVar8 = (*DAT_5015c9f4)(s_dm_prespawn_wav_50144c78,0x3f19999a,0x3f800000,0,0);
      (*DAT_5015ca48)(param_1,4,uVar8);
    }
  }
  else {
    puVar3[0x14e] = 0;
    puVar3[200] = 1;
    *(undefined4 *)(param_1 + 0x19c) = 0xc;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x6c) = 0;
    (*DAT_5015cb28)();
  }
  puVar3[0x122] = 1;
  if ((*(int *)(param_1 + 0x458) == 0) && (DAT_5015d1b8 != 0)) {
    FUN_500bd070(param_1,(char)DAT_5015d1b8);
  }
  FUN_50096c00();
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x348) = 0;
  return;
}



## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.,External functions and functions without an analyzable body return null; other decompiler failures remain explicit.,Windows Ghidra P0 accepts native x86 and x86-64 PE applications and DLLs, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## relationship_coverage

null

## locations



## evidence_links

