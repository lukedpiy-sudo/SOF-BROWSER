// rea decompile_all
// name: FUN_200eafe0
// address: 0x200eafe0
// body: available
// range: 0x200eafe0-0x200eb411 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200eb22f) */
/* WARNING: Removing unreachable block (ram,0x200eb23d) */
/* WARNING: Removing unreachable block (ram,0x200eb237) */

undefined4 FUN_200eafe0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int extraout_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  char in_stack_00000024;
  void *in_stack_00002024;
  int in_stack_00002034;
  undefined4 uStack_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_201103d1;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_200fa720();
  local_4 = 0;
  if (in_stack_00002034 != 0) {
    local_8 = (undefined1 *)(extraout_ECX + 0x24);
    uVar2 = FUN_200c59d0();
    FUN_200716d0();
    *(undefined4 *)(extraout_ECX + 0x2c) = uVar2;
    if (0 < in_stack_00002034) {
      do {
        in_stack_00000024 = '\0';
        pcVar7 = &stack0x00001024;
        uStack_c._0_3_ = CONCAT12(1,(short)uStack_c);
        uStack_c = (void *)(uint)(uint3)uStack_c;
        iVar9 = 0;
LAB_200eb071:
        do {
          while( true ) {
            pcVar4 = *(char **)(extraout_ECX + 4);
            if (*(char **)(extraout_ECX + 8) <= pcVar4) goto LAB_200eb1c5;
            cVar1 = *pcVar4;
            *(char **)(extraout_ECX + 4) = pcVar4 + 1;
            if (cVar1 != '^') break;
            cVar1 = pcVar4[1];
            while (cVar1 != '^') {
              uVar6 = *(int *)(extraout_ECX + 4) + 1;
              *(uint *)(extraout_ECX + 4) = uVar6;
              if (*(uint *)(extraout_ECX + 8) <= uVar6) goto LAB_200eb0cd;
              iVar3 = FUN_200faaf0();
              if (iVar3 != 0) {
                FUN_200eb490();
                goto LAB_200eb0cd;
              }
              pcVar4 = *(char **)(extraout_ECX + 4);
              *pcVar7 = cVar1;
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar4;
            }
            *(int *)(extraout_ECX + 4) = *(int *)(extraout_ECX + 4) + 1;
LAB_200eb0cd:
            *pcVar7 = '\0';
            pcVar7 = pcVar7 + 1;
            pcVar4 = (char *)FUN_200581a0();
            iVar3 = -1;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            if (iVar3 == -2) {
              FUN_200eb490();
            }
            else {
              FUN_200eaec0();
            }
          }
          iVar3 = FUN_200faaf0();
          if (iVar3 != 0) {
            if (uStack_c._2_1_ != '\0') {
              (&stack0x00000024)[iVar9] = cVar1;
              (&stack0x00000025)[iVar9] = 0;
              if (local_4 != 0) {
                FUN_200eb490();
              }
              FUN_2000a5b0();
              uVar6 = 0xffffffff;
              pcVar7 = &stack0x00000024;
              goto code_r0x200eb2c4;
            }
            *(int *)(extraout_ECX + 4) = *(int *)(extraout_ECX + 4) + -1;
            break;
          }
          if (cVar1 == '\n') {
            *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
          }
          else if (cVar1 == '\"') {
            bVar11 = uStack_c._3_1_ == '\0';
            uStack_c = (void *)CONCAT13(bVar11,(uint3)uStack_c);
            if (!bVar11) break;
            goto LAB_200eb071;
          }
          iVar3 = FUN_200faaf0();
          if ((iVar3 == 0) || (cVar1 = ' ', uStack_c._3_1_ != '\0')) {
            uStack_c._0_3_ = (uint3)(ushort)uStack_c;
            if (iVar9 < 0x1000) {
              (&stack0x00000024)[iVar9] = cVar1;
              iVar9 = iVar9 + 1;
            }
            goto LAB_200eb071;
          }
        } while (uStack_c._2_1_ != '\0');
LAB_200eb1c5:
        (&stack0x00000024)[iVar9] = 0;
        iVar9 = -1;
        pcVar7 = &stack0x00000024;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_2000a600();
        FUN_2008ce10();
        local_4 = local_4 + 1;
      } while (local_4 < in_stack_00002034);
    }
  }
  ExceptionList = in_stack_00002024;
  return 0;
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\0') break;
code_r0x200eb2c4:
    if (uVar6 == 0) break;
  }
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_2000a6c0();
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)&stack0x00000024;
    puVar10 = param_1;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined1 *)((int)param_1 + uVar6) = 0;
  }
  FUN_2008ce10();
  FUN_2000a5b0();
  if (local_4 < in_stack_00002034) {
    local_8 = (undefined1 *)(in_stack_00002034 - local_4);
    do {
      FUN_2000a5b0();
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_2015ee44;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_2000a6c0();
      if (cVar1 != '\0') {
        puVar8 = (undefined4 *)&DAT_2015ee44;
        puVar10 = param_1;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)param_1 + uVar6) = 0;
      }
      FUN_2008ce10();
      if (param_1 != (undefined4 *)0x0) {
        if (*(char *)((int)param_1 + -1) == '\0') {
          FUN_200f9f75();
        }
        else {
          *(char *)((int)param_1 + -1) = *(char *)((int)param_1 + -1) + -1;
        }
      }
      param_1 = (undefined4 *)0x0;
      local_8 = (undefined1 *)((int)local_8 + -1);
    } while (local_8 != (undefined1 *)0x0);
  }
  ExceptionList = in_stack_00002024;
  return 1;
}

