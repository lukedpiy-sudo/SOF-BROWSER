// rea decompile_all
// name: FUN_2004e630
// address: 0x2004e630
// body: available
// range: 0x2004e630-0x2004e992 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2004e630(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int *piVar12;
  bool bVar13;
  float10 fVar14;
  int aiStack_48 [3];
  char *pcStack_3c;
  undefined4 *puStack_38;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  char local_10 [8];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_3;
  iVar1 = *(int *)(&DAT_2037ff14 + param_1 * 0x10018);
  iVar4 = param_1 * 0x10018;
  if (4 < iVar1 - *(int *)(&DAT_2037ff10 + param_1 * 0x10018)) {
    *(int *)(&DAT_2037ff10 + iVar4) = iVar1 + -4;
  }
  uVar7 = *(uint *)(&DAT_2037ff10 + iVar4);
  if ((int)uVar7 < iVar1) {
    *(uint *)(&DAT_2037ff10 + iVar4) = uVar7 + 1;
    puVar3 = (undefined4 *)(&DAT_2036ff00 + (uVar7 & 3) * 0x4004 + iVar4);
    uVar7 = puVar3[0x1000];
    puVar8 = puVar3;
    puVar10 = *(undefined4 **)(param_3 + 4);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined4 *)(param_3 + 0xc) = puVar3[0x1000];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *param_2 = 0;
    if ((0.0 < *(float *)(DAT_20367eb8 + 0x18)) && (*(float *)(DAT_20367eb8 + 0x18) < 1.0)) {
      puStack_38 = (undefined4 *)0x3f800000;
      pcStack_3c = (char *)0x0;
      aiStack_48[2] = 0x2004e70a;
      fVar14 = (float10)flrand();
      if ((float10)*(float *)(DAT_20367eb8 + 0x18) < fVar14) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
        return 0;
      }
    }
    return 1;
  }
  local_24 = 0;
  do {
    if (local_24 == 0) {
      iVar4 = (&DAT_20390118)[param_1];
    }
    else {
      iVar4 = (&DAT_20390110)[param_1];
    }
    if (iVar4 != 0) {
      puStack_38 = &param_3;
      pcStack_3c = local_10;
      aiStack_48[1] = *(undefined4 *)(iVar2 + 8);
      aiStack_48[0] = *(int *)(iVar2 + 4);
      aiStack_48[2] = 0;
      param_3 = 0x10;
      puVar3 = (undefined4 *)Ordinal_17(iVar4);
      if (puVar3 == (undefined4 *)0xffffffff) {
        puStack_38 = (undefined4 *)0x2004e787;
        iVar4 = Ordinal_111();
        if ((iVar4 != 0x2733) && (iVar4 != 0x2746)) {
          if ((*(float *)(DAT_20249618 + 0x18) == 0.0) && (DAT_203a1f20 == 0)) {
            puStack_38 = (undefined4 *)0x2004e7c0;
            puStack_38 = (undefined4 *)FUN_2004f5b0();
            pcStack_3c = s_NET_GetPacket___s_20136dc4;
            aiStack_48[2] = 1;
            aiStack_48[1] = 0x2004e7cd;
            Com_Error();
          }
          else {
            puStack_38 = (undefined4 *)0x2004e7da;
            puStack_38 = (undefined4 *)FUN_2004f5b0();
            pcStack_3c = s_NET_GetPacket___s_20136db0;
            aiStack_48[2] = 0x2004e7e5;
            Com_DPrintf();
          }
        }
      }
      else {
        if (local_24 == 0) {
          uStack_8 = 0;
          uStack_4 = 0;
          if ((DAT_20390164 == 0) || (*(char *)(DAT_20390164 + 4) == '\0')) goto LAB_2004e8cf;
          uStack_20 = *(undefined4 *)(DAT_20390164 + 0xc);
          uStack_1c = *(undefined4 *)(DAT_20390164 + 0x10);
          uStack_18 = *(undefined4 *)(DAT_20390164 + 0x14);
          bVar13 = true;
          uStack_14 = *(undefined4 *)(DAT_20390164 + 0x18);
          iVar4 = param_3;
          pcVar9 = local_10;
          pcVar11 = (char *)&uStack_20;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar13 = *pcVar9 == *pcVar11;
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar13);
          if (!bVar13) goto LAB_2004e8cf;
          if (((((int)puVar3 < 10) || (pcVar9 = *(char **)(iVar2 + 4), *pcVar9 != '\0')) ||
              (pcVar9[1] != '\0')) || ((pcVar9[2] != '\0' || (pcVar9[3] != '\x01'))))
          goto LAB_2004e911;
          puVar3 = (undefined4 *)((int)puVar3 + -10);
          *param_2 = 2;
          *(undefined1 *)(param_2 + 1) = *(undefined1 *)(*(int *)(iVar2 + 4) + 4);
          *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)(*(int *)(iVar2 + 4) + 5);
          *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)(*(int *)(iVar2 + 4) + 6);
          *(undefined1 *)((int)param_2 + 7) = *(undefined1 *)(*(int *)(iVar2 + 4) + 7);
          *(undefined2 *)((int)param_2 + 0x12) = *(undefined2 *)(*(int *)(iVar2 + 4) + 8);
          aiStack_48[2] = *(int *)(iVar2 + 4);
          pcStack_3c = (char *)(aiStack_48[2] + 10);
          aiStack_48[1] = 0x2004e8ca;
          puStack_38 = puVar3;
          FUN_200fa360();
        }
        else {
LAB_2004e8cf:
          pcStack_3c = local_10;
          puStack_38 = param_2;
          aiStack_48[2] = 0x2004e8de;
          FUN_2004dd50();
        }
        if (puVar3 != *(undefined4 **)(iVar2 + 8)) {
          *(undefined4 **)(iVar2 + 0xc) = puVar3;
          if (*(float *)(DAT_20367eb8 + 0x18) <= 0.0) {
            return 1;
          }
          if (1.0 <= *(float *)(DAT_20367eb8 + 0x18)) {
            return 1;
          }
          puStack_38 = (undefined4 *)0x3f800000;
          pcStack_3c = (char *)0x0;
          aiStack_48[2] = 0x2004e960;
          fVar14 = (float10)flrand();
          if (fVar14 <= (float10)*(float *)(DAT_20367eb8 + 0x18)) {
            return 1;
          }
          *(undefined4 *)(iVar2 + 0xc) = 0;
          return 0;
        }
        puVar3 = param_2;
        piVar12 = aiStack_48;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          piVar12 = piVar12 + 1;
        }
        uVar5 = FUN_2004def0();
        Com_Printf(s_Oversize_packet_from__s_20136d94,uVar5);
      }
    }
LAB_2004e911:
    local_24 = local_24 + 1;
    if (1 < local_24) {
      return 0;
    }
  } while( true );
}

