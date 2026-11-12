// rea decompile_all
// name: FUN_5004c120
// address: 0x5004c120
// body: available
// range: 0x5004c120-0x5004c397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5004c120(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int local_8c;
  int iStack_88;
  int local_84;
  undefined1 local_80 [128];
  
  iVar4 = 0;
  iVar5 = 0;
  if (0 < (int)*param_1) {
    local_8c = 0;
    do {
      iVar6 = param_1[1] + local_8c;
      FUN_50106b60(*(undefined **)(iVar6 + 0x14));
      FUN_50106b60(*(undefined **)(iVar6 + 0x20));
      FUN_50106b60(*(undefined **)(iVar6 + 0x24));
      FUN_50106b60(*(undefined **)(iVar6 + 0x1c));
      iVar5 = iVar5 + 1;
      local_8c = local_8c + 0x50;
    } while (iVar5 < (int)*param_1);
  }
  iVar5 = 0;
  if (0 < (int)param_1[2]) {
    local_8c = 0;
    do {
      iVar6 = param_1[3] + local_8c;
      FUN_50106b60(*(undefined **)(iVar6 + 0x14));
      FUN_50106b60(*(undefined **)(iVar6 + 0x20));
      FUN_50106b60(*(undefined **)(iVar6 + 0x24));
      FUN_50106b60(*(undefined **)(iVar6 + 0x1c));
      iVar5 = iVar5 + 1;
      local_8c = local_8c + 0x50;
    } while (iVar5 < (int)param_1[2]);
  }
  FUN_50106b60((undefined *)param_1[1]);
  FUN_50106b60((undefined *)param_1[3]);
  param_1[1] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  FUN_5004bb80(param_1 + 10);
  puVar10 = &DAT_5015cd20;
  pcVar9 = s_maps__s_nvb_50142de4;
  puVar7 = local_80;
  uVar8 = 0x80;
  FUN_500fe2b0();
  iVar5 = (*DAT_5015cb64)(local_80,&local_84,0,puVar7,uVar8,pcVar9,puVar10);
  if (iVar5 != -1) {
    iStack_88 = local_84;
    uVar8 = FUN_50043fe0(&iStack_88);
    if ((char)uVar8 == '(') {
      uVar1 = FUN_50043fe0(&iStack_88);
      *param_1 = uVar1;
      pvVar2 = operator_new(uVar1 * 0x50);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else if (-1 < (int)(uVar1 - 1)) {
        puVar3 = (undefined4 *)((int)pvVar2 + 0x20);
        do {
          puVar3[-3] = 0;
          *puVar3 = 0;
          puVar3[-1] = 0;
          puVar3[-4] = 0;
          puVar3[-2] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[1] = 0;
          puVar3 = puVar3 + 0x14;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      param_1[1] = (uint)pvVar2;
      uVar1 = *param_1;
      iVar5 = 0;
      if (0 < (int)uVar1) {
        iVar6 = 0;
        do {
          FUN_5004bd20((void *)(param_1[1] + iVar6),&iStack_88,uVar1);
          uVar1 = *param_1;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x50;
        } while (iVar5 < (int)uVar1);
      }
      uVar1 = FUN_50043fe0(&iStack_88);
      param_1[2] = uVar1;
      pvVar2 = operator_new(uVar1 * 0x50);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else if (-1 < (int)(uVar1 - 1)) {
        puVar3 = (undefined4 *)((int)pvVar2 + 0x20);
        do {
          puVar3[-3] = 0;
          *puVar3 = 0;
          puVar3[-1] = 0;
          puVar3[-4] = 0;
          puVar3[-2] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[1] = 0;
          puVar3 = puVar3 + 0x14;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      param_1[3] = (uint)pvVar2;
      uVar1 = param_1[2];
      iVar5 = 0;
      if (0 < (int)uVar1) {
        do {
          FUN_5004bd20((void *)(param_1[3] + iVar4),&iStack_88,uVar1);
          uVar1 = param_1[2];
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x50;
        } while (iVar5 < (int)uVar1);
      }
      FUN_5004b8b0(param_1 + 10,&iStack_88);
      (*DAT_5015cb68)(local_84);
      return;
    }
    iVar4 = (int)(char)uVar8;
    uVar8 = 0x28;
    pcVar9 = s_Invalid_version___d__for_Info_Po_50142d88;
    *param_1 = 0;
    param_1[2] = 0;
    FUN_500adb20((byte *)s_Invalid_version___d__for_Info_Po_50142d88);
    (*DAT_5015cb68)(local_84,pcVar9,iVar4,uVar8);
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

