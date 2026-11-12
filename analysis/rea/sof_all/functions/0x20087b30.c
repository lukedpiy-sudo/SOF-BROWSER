// rea decompile_all
// name: FUN_20087b30
// address: 0x20087b30
// body: available
// range: 0x20087b30-0x20087d8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x20087d4e) */
/* WARNING: Removing unreachable block (ram,0x20087d56) */
/* WARNING: Removing unreachable block (ram,0x20087d6f) */
/* WARNING: Removing unreachable block (ram,0x20087d01) */
/* WARNING: Removing unreachable block (ram,0x20087d13) */
/* WARNING: Removing unreachable block (ram,0x20087d2f) */
/* WARNING: Removing unreachable block (ram,0x20087d31) */
/* WARNING: Removing unreachable block (ram,0x20087d36) */
/* WARNING: Removing unreachable block (ram,0x20087d38) */

void FUN_20087b30(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  char local_3f4 [1000];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010c20b;
  pvStack_c = ExceptionList;
  pcVar3 = *(char **)(param_1 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  pcVar7 = local_3f4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_20107ed2(local_3f4);
  iVar4 = -1;
  uVar8 = 0;
  pcVar3 = local_3f4;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    do {
      if (local_3f4[uVar8] == '\\') {
        local_3f4[uVar8] = '/';
      }
      uVar5 = 0xffffffff;
      uVar8 = uVar8 + 1;
      pcVar3 = local_3f4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    } while (uVar8 < ~uVar5 - 1);
  }
  uVar8 = 0xffffffff;
  pcVar3 = local_3f4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar6 = ~uVar8 - 2;
  iVar4 = 0;
  if (iVar6 != 0) {
    do {
      if (local_3f4[iVar6] == '/') {
        iVar4 = iVar6 + 1;
        goto LAB_20087bc9;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar4 = 0;
  }
LAB_20087bc9:
  if (iVar4 < 1) {
    FUN_2000a3a0(param_2,0,0xffffffff);
  }
  else {
    local_3f4[iVar4] = '\0';
    uVar8 = 0xffffffff;
    pcVar3 = local_3f4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_2000a6c0(uVar8,1);
    if (cVar1 != '\0') {
      pcVar3 = local_3f4;
      pcVar7 = *(char **)(param_3 + 4);
      for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(uint *)(param_3 + 8) = uVar8;
      *(undefined1 *)(*(int *)(param_3 + 4) + uVar8) = 0;
    }
    uVar8 = 0xffffffff;
    if (*(uint *)(param_2 + 8) != 0xffffffff) {
      uVar8 = *(uint *)(param_2 + 8);
    }
    if (-*(int *)(param_3 + 8) - 1U <= uVar8) {
      FUN_201075d0();
    }
    if (uVar8 != 0) {
      iVar4 = *(int *)(param_3 + 8) + uVar8;
      cVar1 = FUN_2000a6c0(iVar4,0);
      if (cVar1 != '\0') {
        puVar2 = *(undefined4 **)(param_2 + 4);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)&DAT_201116cc;
        }
        puVar9 = (undefined4 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8));
        for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_2000a6a0(iVar4);
      }
    }
  }
  uVar8 = 0xffffffff;
  pcVar3 = &DAT_20157108;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_20157108,~uVar8 - 1);
  uStack_4 = 0;
  if (*(int *)(param_3 + 8) == -1) {
    FUN_201075d0();
  }
  ExceptionList = pvStack_c;
  return;
}

