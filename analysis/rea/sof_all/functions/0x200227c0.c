// rea decompile_all
// name: FUN_200227c0
// address: 0x200227c0
// body: available
// range: 0x200227c0-0x2002282b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200227c0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iStack_20;
  undefined1 *puStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ae88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  iVar2 = Cmd_Argc();
  if (iVar2 < 3) {
    Com_Printf(s_usage__sset_<variable>_<parm1>___20130d68);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    ExceptionList = local_c;
    return;
  }
  iVar7 = 2;
  iStack_20 = 2;
  iVar2 = Cmd_Argc();
  if (2 < iVar2 + -1) {
    do {
      pcVar3 = (char *)Cmd_Argv(iStack_20);
      uVar5 = 0xffffffff;
      pcVar11 = pcVar3;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      if (-iStack_14 - 1U <= uVar5) {
        FUN_201075d0();
      }
      if (uVar5 != 0) {
        iVar2 = iStack_14 + uVar5;
        cVar1 = FUN_2000a6c0(iVar2,0);
        if (cVar1 != '\0') {
          pcVar11 = puStack_18 + iStack_14;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar11 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar11 = pcVar11 + 1;
          }
          puStack_18[iVar2] = 0;
          iStack_14 = iVar2;
        }
      }
      uVar5 = 0xffffffff;
      pcVar3 = (char *)&DAT_2011d72c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      if (-iStack_14 - 1U <= uVar5) {
        FUN_201075d0();
      }
      if (uVar5 != 0) {
        iVar2 = iStack_14 + uVar5;
        cVar1 = FUN_2000a6c0(iVar2,0);
        if (cVar1 != '\0') {
          puVar8 = (undefined4 *)&DAT_2011d72c;
          puVar10 = (undefined4 *)(puStack_18 + iStack_14);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          puStack_18[iVar2] = 0;
          iStack_14 = iVar2;
        }
      }
      iVar7 = iStack_20 + 1;
      iVar2 = Cmd_Argc();
      iStack_20 = iVar7;
    } while (iVar7 < iVar2 + -1);
  }
  pcVar3 = (char *)Cmd_Argv(iVar7);
  uVar5 = 0xffffffff;
  pcVar11 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  if (-iStack_14 - 1U <= uVar5) {
    FUN_201075d0();
  }
  if (uVar5 != 0) {
    cVar1 = FUN_2000a6c0(iStack_14 + uVar5,0);
    if (cVar1 != '\0') {
      pcVar11 = puStack_18 + iStack_14;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar11 = pcVar11 + 1;
      }
      puStack_18[iStack_14 + uVar5] = 0;
    }
  }
  puVar9 = puStack_18;
  if (puStack_18 == (undefined1 *)0x0) {
    puVar9 = &DAT_201116cc;
  }
  uVar4 = Cmd_Argv(1);
  FUN_20021d70(uVar4,puVar9,0);
  if (puStack_18 != (undefined1 *)0x0) {
    if (puStack_18[-1] != '\0') {
      puStack_18[-1] = puStack_18[-1] + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75(puStack_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

