// rea decompile_all
// name: FUN_200dad50
// address: 0x200dad50
// body: available
// range: 0x200dad50-0x200db20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dad50(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int in_ECX;
  undefined1 *puVar9;
  undefined4 uStack_cc;
  char *pcStack_c8;
  undefined1 *puStack_c4;
  undefined1 auStack_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  char *pcStack_9c;
  undefined1 *local_90;
  undefined1 auStack_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f1db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0();
  local_4 = 0;
  local_90 = (undefined1 *)&uStack_cc;
  FUN_200234d0(in_ECX + 0x8c);
  uVar3 = FUN_200cf780();
  if (-1 < (int)uVar3) {
    if (param_1 != 1) {
LAB_200db1a5:
      for (puVar1 = *(undefined4 **)(in_ECX + 0x88); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        if ((param_1 == puVar1[1]) || (puVar1[1] == 0)) {
          (*DAT_20390d94)();
          FUN_200c7190();
        }
      }
      if (pcStack_9c == (char *)0x0) {
        ExceptionList = local_c;
        return;
      }
      if (pcStack_9c[-1] != '\0') {
        pcStack_9c[-1] = pcStack_9c[-1] + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_200f9f75();
      ExceptionList = local_c;
      return;
    }
    (*DAT_20390d94)();
    if ((uVar3 == 0) && (*(int *)(in_ECX + 0xa8) != 0)) {
      puStack_c4 = auStack_a8;
      auStack_a8[0] = 0x2f;
      pcStack_c8 = (char *)0x200dae50;
      iVar4 = FUN_2008c2d0();
      if (iVar4 == -1) {
        iVar4 = -1;
        pcVar8 = &DAT_2015ee44;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        puStack_c4 = (undefined1 *)0x200daf04;
        FUN_2000a600();
      }
      else {
        iVar4 = *(int *)(in_ECX + 0xa8);
        puStack_c4 = auStack_a8;
        local_a4[0] = 0x2f;
        auStack_a8[0] = 0x2f;
        pcStack_c8 = (char *)0x200dae79;
        uVar5 = FUN_200c94a0();
        puStack_c4 = local_a4;
        pcStack_c8 = (char *)0x200dae8b;
        iVar6 = FUN_200c94a0();
        uVar3 = iVar4 - iVar6;
        if (*(uint *)(in_ECX + 0xa8) < uVar5) {
          FUN_201077fc();
        }
        uVar7 = *(int *)(in_ECX + 0xa8) - uVar5;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
        if (uVar3 != 0) {
          FUN_2000a930();
          puStack_c4 = (undefined1 *)(*(int *)(in_ECX + 0xa4) + uVar5);
          pcStack_c8 = (char *)0x200daec8;
          FUN_200fa360();
          puStack_c4 = (undefined1 *)0x200daeda;
          cVar2 = FUN_2000a6c0();
          if (cVar2 != '\0') {
            FUN_2000a6a0();
          }
        }
      }
      puStack_c4 = &DAT_201116cc;
      if (*(undefined1 **)(in_ECX + 0xa4) != (undefined1 *)0x0) {
        puStack_c4 = *(undefined1 **)(in_ECX + 0xa4);
      }
      pcStack_c8 = s__s__s__s_20158b38;
      uStack_cc = 0x80;
      Com_sprintf(auStack_8c);
      FUN_20025bb0(in_ECX + 0xd0,auStack_8c,0);
      FUN_200db850();
    }
    else {
      if (*(int *)(in_ECX + 0xa8) != 0) {
        uVar3 = uVar3 - 1;
      }
      iVar4 = *(int *)(in_ECX + 0xf4);
      if ((iVar4 == 0) || ((uint)(*(int *)(in_ECX + 0xf8) - iVar4 >> 6) <= uVar3)) {
        if (*(int *)(in_ECX + 0xf4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(in_ECX + 0xf8) - *(int *)(in_ECX + 0xf4) >> 6;
        }
        iVar6 = *(int *)(in_ECX + 0xe4);
        if ((iVar6 == 0) || ((uint)(*(int *)(in_ECX + 0xe8) - iVar6 >> 6) <= uVar3 - iVar4))
        goto LAB_200db1a5;
        iVar6 = (uVar3 - iVar4) * 0x40 + iVar6;
        pcVar8 = *(char **)(iVar6 + 8);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = "";
        }
        puStack_c4 = (undefined1 *)0x200db0d3;
        iVar4 = __strcmpi(pcVar8,&DAT_2011f220);
        if (iVar4 == 0) {
          iVar4 = -1;
          pcVar8 = &DAT_2011f220;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          puStack_c4 = (undefined1 *)0x200db0f6;
          FUN_2000a600();
        }
        else {
          puVar9 = *(undefined1 **)(iVar6 + 8);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &DAT_201116cc;
          }
          iVar4 = *(int *)(in_ECX + 0xa8);
          uVar3 = 0xffffffff;
          pcVar8 = puVar9 + iVar4 + 1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          puStack_c4 = (undefined1 *)0x200db128;
          cVar2 = FUN_2000a6c0();
          if (cVar2 != '\0') {
            pcVar8 = puVar9 + iVar4 + 1;
            for (uVar5 = ~uVar3 - 1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcStack_9c = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcStack_9c = pcStack_9c + 4;
            }
            for (uVar3 = ~uVar3 - 1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcStack_9c = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcStack_9c = pcStack_9c + 1;
            }
            FUN_2000a6a0();
          }
        }
        if (*(int *)(in_ECX + 0x50) != 0) {
          puStack_c4 = (undefined1 *)0x200db167;
          Cvar_Set();
        }
        for (puVar1 = *(undefined4 **)(in_ECX + 0x88); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          if ((puVar1[1] == 1) || (puVar1[1] == 0)) {
            (*DAT_20390d94)();
            FUN_200c7190();
          }
        }
      }
      else {
        iVar4 = uVar3 * 0x40 + iVar4;
        pcVar8 = *(char **)(iVar4 + 8);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = "";
        }
        puStack_c4 = (undefined1 *)0x200dafb5;
        iVar6 = __strcmpi(pcVar8,&DAT_2011f220);
        if (iVar6 == 0) {
          iVar4 = -1;
          pcVar8 = &DAT_2011f220;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
        }
        else {
          puVar9 = *(undefined1 **)(iVar4 + 8);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &DAT_201116cc;
          }
          iVar4 = -1;
          pcVar8 = puVar9 + *(int *)(in_ECX + 0xa8) + 1;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
        }
        puStack_c4 = (undefined1 *)0x200daffe;
        FUN_2000a600();
        puStack_c4 = local_a0;
        pcStack_c8 = (char *)0x200db014;
        FUN_200e3cb0();
        puStack_c4 = *(undefined1 **)(in_ECX + 0xa4);
        if (puStack_c4 == (undefined1 *)0x0) {
          puStack_c4 = &DAT_201116cc;
        }
        pcStack_c8 = s__s__s__s_20158b38;
        uStack_cc = 0x80;
        Com_sprintf(auStack_8c);
        FUN_20025bb0(in_ECX + 0xd0,auStack_8c,0);
        FUN_200db850();
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_2000a5b0();
  ExceptionList = local_c;
  return;
}

