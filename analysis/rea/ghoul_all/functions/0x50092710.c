// rea decompile_all
// name: FUN_50092710
// address: 0x50092710
// body: available
// range: 0x50092710-0x5009295d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50092710(int *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_1[0x109] == 2) {
    return;
  }
  if (param_1[0x109] == 0) {
    if ((float)param_1[0x108] < 0.0) {
      return;
    }
    param_1[0xad] = (int)(DAT_5015ccdc + (float)param_1[0x108]);
    return;
  }
  if ((param_1[0x68] & 0x400U) == 0) {
    if (param_1[0x101] != -1) {
      (*DAT_5015ca48)(param_1,10,param_1[0x101],0x3f800000,0x3f800000,0,0);
    }
    if (param_1[0x102] != -1) {
      param_1[0xf] = param_1[0x102];
      param_1[0x10] = 0xf8;
    }
  }
  pcVar6 = (char *)param_1[0x6d];
  iVar4 = 10;
  bVar9 = true;
  param_1[0x109] = 2;
  pcVar5 = pcVar6;
  pcVar7 = s_func_door_501420e8;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (!bVar9) {
    iVar4 = 0x15;
    bVar9 = true;
    pcVar5 = pcVar6;
    pcVar7 = s_func_door_portcullis_50147690;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar4 = 0x19;
      bVar9 = true;
      pcVar5 = pcVar6;
      pcVar7 = s_func_door_rotating_smart_501477b0;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar9);
      if (bVar9) {
        iVar4 = FUN_50092030((int)param_1,param_2);
        if (iVar4 != 0) {
          param_1[0xfe] = (int)-(float)param_1[0xfe];
          param_1[0xff] = (int)-(float)param_1[0xff];
          param_1[0x100] = (int)-(float)param_1[0x100];
        }
      }
      else {
        iVar4 = 0x13;
        bVar9 = true;
        pcVar5 = s_func_door_rotating_501477cc;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar9 = *pcVar6 == *pcVar5;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar9);
        if (!bVar9) goto LAB_500928b6;
      }
      param_1[0x96] = 0;
      param_1[0x97] = 0;
      param_1[0x98] = 0;
      param_1[0x112] = (int)FUN_50092180;
      piVar2 = param_1;
      if ((param_1[0x68] & 0x400U) != 0) {
        piVar2 = (int *)param_1[0xd1];
      }
      if (DAT_5015d228 == piVar2) {
        FUN_5008fad0((int)param_1);
      }
      else {
        fVar1 = DAT_5015ccdc + 0.1;
        param_1[0xae] = (int)FUN_5008fad0;
        param_1[0xad] = (int)fVar1;
      }
      goto LAB_500928b6;
    }
  }
  FUN_5008f880((int)param_1,(float *)(param_1 + 0xfb),FUN_50092180);
LAB_500928b6:
  FUN_500c2f80(param_1,param_2);
  if ((((*(byte *)(param_1 + 0x6e) & 1) == 0) && (param_1[0xbf] == 0)) &&
     ((char *)param_1[0x71] != (char *)0x0)) {
    for (uVar3 = FUN_500c26a0(0,0x1c8,(char *)param_1[0x71],(void *)0x0); uVar3 != 0;
        uVar3 = FUN_500c26a0(uVar3,0x1c8,(char *)param_1[0x71],(void *)0x0)) {
      iVar4 = __strcmpi(*(char **)(uVar3 + 0x1b4),s_func_areaportal_5014268c);
      if (iVar4 == 0) {
        uVar8 = *(uint *)(uVar3 + 0x318) ^ 1;
        *(uint *)(uVar3 + 0x318) = uVar8;
        (*DAT_5015cad8)(*(undefined4 *)(uVar3 + 0x3bc),uVar8);
      }
    }
  }
  return;
}

