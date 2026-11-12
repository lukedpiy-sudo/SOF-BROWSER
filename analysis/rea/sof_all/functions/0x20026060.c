// rea decompile_all
// name: FUN_20026060
// address: 0x20026060
// body: available
// range: 0x20026060-0x20026293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20026060(void)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_a8;
  int local_a0;
  undefined1 local_9c [4];
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [31];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010b01b;
  local_c = ExceptionList;
  local_8c = DAT_20131364;
  iVar8 = 0;
  puVar9 = local_88;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar4 = Cmd_Argc();
  if (iVar4 != 1) {
    pcVar2 = (char *)Cmd_Argv(1);
    pcVar5 = (char *)&local_8c;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  FUN_20025bb0(local_9c,&local_8c,1);
  Com_Printf(&DAT_20131334);
  iVar6 = 0;
  iVar10 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar7 = 0;
  iVar4 = local_98;
  while ((iVar4 != 0 && (uVar7 < (uint)(local_94 - iVar4 >> 6)))) {
    switch(*(undefined4 *)(iVar8 + 0x14 + iVar4)) {
    case 0:
      puVar3 = *(undefined1 **)(iVar8 + 8 + iVar4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      Com_Printf(&DAT_20131308,*(undefined4 *)(iVar8 + 0x18 + iVar4),puVar3);
      iVar6 = iVar6 + 1;
      iVar4 = local_98;
    default:
      iVar10 = iVar10 + *(int *)(iVar8 + 0x18 + iVar4);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x40;
      break;
    case 1:
      puVar3 = *(undefined1 **)(iVar8 + 8 + iVar4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      Com_Printf(&PTR_DAT_20131314,puVar3);
      local_a8 = local_a8 + 1;
      iVar10 = iVar10 + *(int *)(iVar8 + 0x18 + local_98);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x40;
      iVar4 = local_98;
      break;
    case 2:
    case 3:
      puVar3 = *(undefined1 **)(iVar8 + 8 + iVar4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      Com_Printf(&PTR_DAT_20131324,puVar3);
      local_a0 = local_a0 + 1;
      iVar10 = iVar10 + *(int *)(iVar8 + 0x18 + local_98);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x40;
      iVar4 = local_98;
    }
  }
  Com_Printf(s__d_bytes_in__d_files_and__d_fold_201312d4,iVar10,iVar6,local_a8,local_a0);
  Com_Printf(&DAT_20131334);
  iVar8 = local_94;
  iVar4 = local_98;
  if (local_98 != local_94) {
    iVar6 = local_98 + 0x20;
    do {
      FUN_2000a5b0(1);
      FUN_2000a5b0(1);
      FUN_2000a5b0(1);
      iVar10 = iVar6 + 0x20;
      iVar6 = iVar6 + 0x40;
    } while (iVar10 != iVar8);
  }
  local_94 = iVar4;
  local_4 = 0xffffffff;
  if (local_98 != iVar4) {
    iVar8 = local_98 + 0x20;
    do {
      FUN_2000a5b0(1);
      FUN_2000a5b0(1);
      FUN_2000a5b0(1);
      iVar6 = iVar8 + 0x20;
      iVar8 = iVar8 + 0x40;
    } while (iVar6 != iVar4);
  }
  FUN_200f9f75(local_98);
  ExceptionList = local_c;
  return;
}

