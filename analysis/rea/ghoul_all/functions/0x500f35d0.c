// rea decompile_all
// name: FUN_500f35d0
// address: 0x500f35d0
// body: available
// range: 0x500f35d0-0x500f385a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f35d0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  longlong lVar11;
  char *pcVar12;
  
  puVar2 = param_1;
  pbVar3 = (byte *)(param_1[0x1d] + 0xcc);
  if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
    pbVar4 = FUN_500fe320(pbVar3,(byte *)s_password_5014c884);
    pbVar3 = *(byte **)(DAT_5015cca8 + 4);
    if (*pbVar3 != 0) {
      iVar5 = 5;
      bVar10 = true;
      pbVar8 = pbVar3;
      pbVar9 = &DAT_501502c8;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar10);
      if (!bVar10) {
        do {
          bVar1 = *pbVar3;
          bVar10 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_500f3758:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_500f375d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar10 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_500f3758;
          pbVar3 = pbVar3 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_500f375d:
        if (iVar5 != 0) {
          (*DAT_5015cab0)(param_1,0x33);
          *(undefined4 *)(param_1[0x1d] + 0x2dc) = 1;
          (*DAT_5015ca70)(0xd);
          pcVar12 = s_spectator_1_50154540;
          goto LAB_500f3784;
        }
      }
    }
  }
  else {
    pbVar4 = FUN_500fe320(pbVar3,(byte *)s_spectator_password_5014c870);
    pbVar3 = *(byte **)(DAT_5015c8a0 + 4);
    if (*pbVar3 != 0) {
      iVar5 = 5;
      bVar10 = true;
      pbVar8 = pbVar3;
      pbVar9 = &DAT_501502c8;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar10);
      if (!bVar10) {
        do {
          bVar1 = *pbVar3;
          bVar10 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_500f3647:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_500f364c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar10 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_500f3647;
          pbVar3 = pbVar3 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_500f364c:
        if (iVar5 != 0) {
          (*DAT_5015cab0)(param_1,0x31);
          *(undefined4 *)(param_1[0x1d] + 0x2dc) = 0;
          (*DAT_5015ca70)(0xd);
          pcVar12 = s_spectator_0_50154550;
          goto LAB_500f3784;
        }
      }
    }
    puVar7 = (undefined4 *)0x0;
    param_1 = (undefined4 *)0x0;
    lVar11 = __ftol();
    iVar5 = (int)lVar11;
    if (0 < iVar5) {
      piVar6 = (int *)(DAT_5015cca0 + 0x4d8);
      do {
        if ((piVar6[1] != 0) && (*(int *)(*piVar6 + 0x2dc) != 0)) {
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        piVar6 = piVar6 + 0x119;
        iVar5 = iVar5 + -1;
        param_1 = puVar7;
      } while (iVar5 != 0);
    }
    if (*(float *)(DAT_5015d280 + 0x18) < (float)(int)param_1) {
      (*DAT_5015cab0)(puVar2,0x32);
      *(undefined4 *)(puVar2[0x1d] + 0x2dc) = 0;
      (*DAT_5015ca70)(0xd);
      pcVar12 = s_spectator_0_50154550;
LAB_500f3784:
      (*DAT_5015ca80)(pcVar12);
      (*DAT_5015ca68)(puVar2,1);
      return;
    }
  }
  iVar5 = (**(code **)(**(int **)(puVar2[0x1d] + 0x34c) + 0x54))(7);
  if (iVar5 != 0) {
    (**(code **)(*DAT_5015c4d8 + 0xa4))(puVar2,7,0);
  }
  *(undefined4 *)(puVar2[0x1d] + 0x308) = 0;
  puVar2[0x46] = puVar2[0x46] & 0xfffffffe;
  FUN_500f38a0((int)puVar2);
  if (*(int *)(puVar2[0x1d] + 0x2dc) == 0) {
    FUN_50083bb0((int)puVar2,0xf);
    *(undefined1 *)(puVar2[0x1d] + 0x10) = 0x20;
    *(undefined1 *)(puVar2[0x1d] + 0x11) = 0xe;
  }
  puVar2[0xc] = puVar2[0xc] | 0x4000;
  *(undefined4 *)(puVar2[0x1d] + 0x560) = DAT_5015ccdc;
  if (*(int *)(puVar2[0x1d] + 0x2dc) == 0) {
    (*DAT_5015cab0)(puVar2,0x35,*puVar2);
    return;
  }
  (*DAT_5015cab0)(puVar2,0x34,*puVar2);
  return;
}

