// rea decompile_all
// name: FUN_500923d0
// address: 0x500923d0
// body: available
// range: 0x500923d0-0x500925e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500923d0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  
  if (*(int *)(param_1 + 0x2f0) != 0) {
    *(undefined4 *)(param_1 + 0x30c) = 1;
    *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2f0);
  }
  pcVar5 = *(char **)(param_1 + 0x1b4);
  iVar3 = 10;
  bVar8 = true;
  *(undefined4 *)(param_1 + 0x424) = 3;
  pcVar4 = pcVar5;
  pcVar6 = s_func_door_501420e8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar3 = 0x15;
    bVar8 = true;
    pcVar4 = pcVar5;
    pcVar6 = s_func_door_portcullis_50147690;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *pcVar4 == *pcVar6;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar3 = 0x19;
      bVar8 = true;
      pcVar4 = pcVar5;
      pcVar6 = s_func_door_rotating_smart_501477b0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *pcVar4 == *pcVar6;
        pcVar4 = pcVar4 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        *(undefined4 *)(param_1 + 600) = 0;
        *(undefined4 *)(param_1 + 0x25c) = 0;
        *(undefined4 *)(param_1 + 0x260) = 0;
        *(undefined1 **)(param_1 + 0x448) = &LAB_500922d0;
        iVar3 = param_1;
        if ((*(uint *)(param_1 + 0x1a0) & 0x400) != 0) {
          iVar3 = *(int *)(param_1 + 0x344);
        }
        if (DAT_5015d228 == iVar3) {
          FUN_5008fad0(param_1);
        }
        else {
          fVar1 = DAT_5015ccdc + 0.1;
          *(code **)(param_1 + 0x2b8) = FUN_5008fad0;
          *(float *)(param_1 + 0x2b4) = fVar1;
        }
        *(float *)(param_1 + 0x3f8) = ABS(*(float *)(param_1 + 0x3f8));
        *(float *)(param_1 + 0x3fc) = ABS(*(float *)(param_1 + 0x3fc));
        *(float *)(param_1 + 0x400) = ABS(*(float *)(param_1 + 0x400));
      }
      else {
        iVar3 = 0x13;
        bVar8 = true;
        pcVar4 = s_func_door_rotating_501477cc;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *pcVar5 == *pcVar4;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar8);
        if (bVar8) {
          *(undefined4 *)(param_1 + 600) = 0;
          *(undefined4 *)(param_1 + 0x25c) = 0;
          *(undefined4 *)(param_1 + 0x260) = 0;
          *(undefined1 **)(param_1 + 0x448) = &LAB_500922d0;
          iVar3 = param_1;
          if ((*(uint *)(param_1 + 0x1a0) & 0x400) != 0) {
            iVar3 = *(int *)(param_1 + 0x344);
          }
          if (DAT_5015d228 == iVar3) {
            FUN_5008fad0(param_1);
          }
          else {
            fVar1 = DAT_5015ccdc + 0.1;
            *(code **)(param_1 + 0x2b8) = FUN_5008fad0;
            *(float *)(param_1 + 0x2b4) = fVar1;
          }
        }
      }
      goto LAB_5009255e;
    }
  }
  FUN_5008f880(param_1,(float *)(param_1 + 0x3d4),&LAB_500922d0);
LAB_5009255e:
  if ((((*(byte *)(param_1 + 0x1b8) & 1) != 0) && (*(int *)(param_1 + 0x2fc) == 0)) &&
     (*(char **)(param_1 + 0x1c4) != (char *)0x0)) {
    for (uVar2 = FUN_500c26a0(0,0x1c8,*(char **)(param_1 + 0x1c4),(void *)0x0); uVar2 != 0;
        uVar2 = FUN_500c26a0(uVar2,0x1c8,*(char **)(param_1 + 0x1c4),(void *)0x0)) {
      iVar3 = __strcmpi(*(char **)(uVar2 + 0x1b4),s_func_areaportal_5014268c);
      if (iVar3 == 0) {
        uVar7 = *(uint *)(uVar2 + 0x318) ^ 1;
        *(uint *)(uVar2 + 0x318) = uVar7;
        (*DAT_5015cad8)(*(undefined4 *)(uVar2 + 0x3bc),uVar7);
      }
    }
  }
  return;
}

