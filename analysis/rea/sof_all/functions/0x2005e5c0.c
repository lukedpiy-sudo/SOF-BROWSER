// rea decompile_all
// name: FUN_2005e5c0
// address: 0x2005e5c0
// body: available
// range: 0x2005e5c0-0x2005ec94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005e5c0(void)

{
  char *_Source;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int **ppiVar12;
  float10 fVar13;
  undefined4 in_stack_00000010;
  float fStack00000014;
  int *piStack_38;
  char *pcStack_34;
  char *pcStack_30;
  int *apiStack_2c [2];
  int aiStack_24 [2];
  size_t _Count;
  
  FUN_200fa720();
  puVar7 = &DAT_2036bed4;
  puVar9 = (undefined4 *)register0x00000010;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  Com_DPrintf();
  Cmd_Argv();
  aiStack_24[1] = 0x2005e5f5;
  iVar3 = FUN_200f9e9e();
  if (iVar3 != 0x21) {
    puVar7 = (undefined4 *)register0x00000010;
    ppiVar12 = apiStack_2c + 1;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppiVar12 = (int *)*puVar7;
      puVar7 = puVar7 + 1;
      ppiVar12 = ppiVar12 + 1;
    }
    apiStack_2c[0] = (int *)0x1;
    pcStack_30 = (char *)0x2005e61b;
    FUN_2004d2f0();
    pcStack_34 = s_rejected_connect_from_version__i_20139afc;
    piStack_38 = (int *)0x2005e626;
    pcStack_30 = (char *)iVar3;
    Com_DPrintf();
    return;
  }
  Cmd_Argv();
  iVar3 = FUN_200f9e9e();
  aiStack_24[1] = 0x2005e64c;
  aiStack_24[1] = Cmd_Argv();
  aiStack_24[0] = 0x2005e652;
  iVar4 = FUN_200f9e9e();
  aiStack_24[0] = 5;
  apiStack_2c[1] = (int *)0x2005e65d;
  apiStack_2c[1] = (int *)Cmd_Argv();
  apiStack_2c[0] = (int *)0x2005e663;
  fVar13 = (float10)FUN_200fafcc();
  _Count = 0x1ff;
  fStack00000014 = (float)(fVar13 * (float10)0.7407407276587887);
  _Source = (char *)Cmd_Argv();
  aiStack_24[1] = 0x2005e68a;
  _strncpy(&stack0x00000020,_Source,_Count);
  puVar7 = (undefined4 *)register0x00000010;
  piVar8 = aiStack_24;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  apiStack_2c[1] = (int *)0x2005e69f;
  iVar5 = FUN_2004e340();
  if (iVar5 == 0) {
    iVar5 = 0;
    puVar7 = &DAT_20396f00;
    do {
      puVar9 = puVar7;
      piVar8 = aiStack_24;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        piVar8 = piVar8 + 1;
      }
      puVar9 = &DAT_2036bed4;
      ppiVar12 = &piStack_38;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppiVar12 = (int *)*puVar9;
        puVar9 = puVar9 + 1;
        ppiVar12 = ppiVar12 + 1;
      }
      iVar6 = FUN_2004de60();
      if (iVar6 != 0) {
        if (iVar4 != (&DAT_20396f14)[iVar5 * 7]) {
          puVar7 = (undefined4 *)register0x00000010;
          ppiVar12 = apiStack_2c;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppiVar12 = (int *)*puVar7;
            puVar7 = puVar7 + 1;
            ppiVar12 = ppiVar12 + 1;
          }
          pcStack_30 = (char *)0x1;
          pcStack_34 = (char *)0x2005e74f;
          FUN_2004d2f0();
          goto LAB_2005e838;
        }
        break;
      }
      puVar7 = puVar7 + 7;
      iVar5 = iVar5 + 1;
    } while ((int)puVar7 < 0x2039df00);
    if (iVar5 == 0x400) {
      puVar7 = (undefined4 *)register0x00000010;
      ppiVar12 = apiStack_2c;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppiVar12 = (int *)*puVar7;
        puVar7 = puVar7 + 1;
        ppiVar12 = ppiVar12 + 1;
      }
      pcStack_30 = (char *)0x1;
      pcStack_34 = (char *)0x2005e70e;
      FUN_2004d2f0();
      goto LAB_2005e838;
    }
  }
  FUN_20055590();
  aiStack_24[1] = 0x2005e771;
  uVar1 = FUN_200f9e9e();
  uVar2 = __ftol();
  iVar4 = 5;
  if ((uVar2 & uVar1) != uVar1) {
    puVar7 = (undefined4 *)register0x00000010;
    ppiVar12 = apiStack_2c + 1;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppiVar12 = (int *)*puVar7;
      puVar7 = puVar7 + 1;
      ppiVar12 = ppiVar12 + 1;
    }
    apiStack_2c[0] = (int *)0x1;
    pcStack_30 = (char *)0x2005e7a6;
    FUN_2004d2f0();
    puVar7 = (undefined4 *)register0x00000010;
    ppiVar12 = apiStack_2c + 1;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppiVar12 = (int *)*puVar7;
      puVar7 = puVar7 + 1;
      ppiVar12 = ppiVar12 + 1;
    }
    apiStack_2c[0] = (int *)0x1;
    pcStack_30 = (char *)0x2005e7c5;
    FUN_2004d2f0();
    pcStack_30 = s_rejected_connect__Server_violenc_20139a20;
    pcStack_34 = (char *)0x2005e7cf;
    Com_DPrintf();
    return;
  }
  puVar7 = &DAT_2036bed4;
  piVar8 = aiStack_24;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  apiStack_2c[1] = (int *)0x2005e7ee;
  apiStack_2c[1] = (int *)FUN_2004def0();
  pcStack_30 = &stack0x00000020;
  apiStack_2c[0] = (int *)&DAT_20136f6c;
  pcStack_34 = (char *)0x2005e7fe;
  FUN_20055750();
  if ((char)DAT_203a1f24 != '\0') {
    puVar7 = (undefined4 *)register0x00000010;
    piVar8 = aiStack_24;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    apiStack_2c[1] = (int *)0x2005e81f;
    iVar4 = FUN_2004e340();
    if (iVar4 == 0) {
      Com_Printf();
LAB_2005e838:
      puVar7 = (undefined4 *)register0x00000010;
      ppiVar12 = apiStack_2c + 1;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppiVar12 = (int *)*puVar7;
        puVar7 = puVar7 + 1;
        ppiVar12 = ppiVar12 + 1;
      }
      apiStack_2c[0] = (int *)0x1;
      pcStack_30 = (char *)0x2005e84f;
      FUN_2004d2f0();
      return;
    }
  }
  piVar8 = DAT_20396eec;
  puVar7 = (undefined4 *)&stack0x00000220;
  for (iVar4 = 0x34ab; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = 0;
  iVar4 = __ftol();
  if (0 < iVar4) {
    do {
      if (*piVar8 != 0) {
        piVar10 = piVar8 + 0x14a0;
        piVar11 = aiStack_24;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar11 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        }
        puVar7 = (undefined4 *)register0x00000010;
        ppiVar12 = &piStack_38;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppiVar12 = (int *)*puVar7;
          puVar7 = puVar7 + 1;
          ppiVar12 = ppiVar12 + 1;
        }
        iVar4 = FUN_2004de60();
        if ((iVar4 != 0) &&
           ((piVar8[0x14a5] == iVar3 ||
            (in_stack_00000010._2_2_ == *(short *)((int)piVar8 + 0x5292))))) {
          iVar5 = DAT_20396de4 - piVar8[0x149a];
          iVar3 = __ftol();
          puVar7 = (undefined4 *)register0x00000010;
          piVar10 = aiStack_24;
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar10 = *puVar7;
            puVar7 = puVar7 + 1;
            piVar10 = piVar10 + 1;
          }
          if (iVar5 < iVar3 * 1000) {
            apiStack_2c[1] = (int *)0x2005e9b3;
            apiStack_2c[1] = (int *)FUN_2004def0();
            apiStack_2c[0] = (int *)s__s_reconnect_rejected___too_soon_20139974;
            pcStack_30 = (char *)0x2005e9be;
            Com_DPrintf();
            return;
          }
          apiStack_2c[1] = (int *)0x2005e9d1;
          apiStack_2c[1] = (int *)FUN_2004def0();
          apiStack_2c[0] = (int *)s__s_reconnect_20139964;
          pcStack_30 = (undefined1 *)0x2005e9dc;
          Com_Printf();
          fStack00000014 = fStack00000014 + (float)piVar8[0xb0];
          goto LAB_2005e9ed;
        }
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 0x34ab;
      iVar4 = __ftol();
    } while (iVar5 < iVar4);
  }
  piVar8 = DAT_20396eec;
  iVar4 = 0;
  iVar3 = __ftol();
  if (0 < iVar3) {
    do {
      if (*piVar8 == 0) {
LAB_2005e9ed:
        iVar6 = (int)piVar8 - (int)DAT_20396eec;
        iVar3 = *(int *)(DAT_20396dd8 + 0x60);
        iVar4 = *(int *)(DAT_20396dd8 + 100);
        iVar5 = (**(code **)(DAT_20396dd8 + 0x20))();
        if (iVar5 == 0) {
          iVar3 = FUN_20055590();
          if (iVar3 != 0) {
            FUN_20055590();
            puVar7 = (undefined4 *)register0x00000010;
            ppiVar12 = apiStack_2c;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
              *ppiVar12 = (int *)*puVar7;
              puVar7 = puVar7 + 1;
              ppiVar12 = ppiVar12 + 1;
            }
            pcStack_30 = (char *)0x1;
            pcStack_34 = (char *)0x2005ea76;
            FUN_2004d2f0();
            piStack_38 = (int *)&stack0x00000020;
            pcStack_34 = s_rejmsg_2013995c;
            FUN_20055590();
            puVar7 = (undefined4 *)register0x00000010;
            ppiVar12 = apiStack_2c;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
              *ppiVar12 = (int *)*puVar7;
              puVar7 = puVar7 + 1;
              ppiVar12 = ppiVar12 + 1;
            }
            pcStack_30 = (char *)0x1;
            pcStack_34 = (char *)0x2005eaa5;
            FUN_2004d2f0();
            Com_DPrintf();
            return;
          }
        }
        else {
          piVar10 = (int *)&stack0x00000220;
          piVar11 = piVar8;
          for (iVar5 = 0x34ab; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar11 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar11 = piVar11 + 1;
          }
          DAT_203fec94 = piVar8;
          piVar8[0xa6] = (iVar6 / 0xd2ac + 1) * iVar4 + iVar3;
          FUN_2008ea60();
          aiStack_24[1] = 0x2005eb0e;
          iVar3 = (**(code **)(DAT_20396dd8 + 0x24))();
          if (iVar3 != 0) {
            puVar7 = (undefined4 *)register0x00000010;
            ppiVar12 = apiStack_2c + 1;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
              *ppiVar12 = (int *)*puVar7;
              puVar7 = puVar7 + 1;
              ppiVar12 = ppiVar12 + 1;
            }
            apiStack_2c[0] = (int *)0x1;
            pcStack_30 = (char *)0x2005ebfb;
            FUN_2004d2f0();
            puVar7 = (undefined4 *)register0x00000010;
            ppiVar12 = apiStack_2c + 1;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
              *ppiVar12 = (int *)*puVar7;
              puVar7 = puVar7 + 1;
              ppiVar12 = ppiVar12 + 1;
            }
            apiStack_2c[0] = piVar8 + 0x149b;
            pcStack_30 = (char *)0x1;
            pcStack_34 = (char *)0x2005ec21;
            FUN_2004d390();
            *piVar8 = 2;
            piStack_38 = piVar8 + 0xb6;
            pcStack_34 = (char *)DAT_20136a0c;
            FUN_2001e700();
            *(undefined1 *)(piVar8 + 0xb1) = 1;
            piVar8[0x1499] = DAT_20396de4;
            iVar3 = DAT_20396de4;
            piVar8[0xb0] = (int)(fStack00000014 * 4.0);
            piVar8[0x149a] = iVar3;
            _strncpy((char *)(piVar8 + 1),&stack0x00000020,0x1ff);
            FUN_2005f7d0();
            return;
          }
          iVar3 = FUN_20055590();
          if (iVar3 != 0) {
            FUN_20055590();
            puVar7 = (undefined4 *)register0x00000010;
            ppiVar12 = apiStack_2c;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
              *ppiVar12 = (int *)*puVar7;
              puVar7 = puVar7 + 1;
              ppiVar12 = ppiVar12 + 1;
            }
            pcStack_30 = (char *)0x1;
            pcStack_34 = (char *)0x2005eb5e;
            FUN_2004d2f0();
            piStack_38 = (int *)&stack0x00000020;
            pcStack_34 = s_rejmsg_2013995c;
            FUN_20055590();
            puVar7 = (undefined4 *)register0x00000010;
            ppiVar12 = apiStack_2c;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
              *ppiVar12 = (int *)*puVar7;
              puVar7 = puVar7 + 1;
              ppiVar12 = ppiVar12 + 1;
            }
            pcStack_30 = (char *)0x1;
            pcStack_34 = (char *)0x2005eb8d;
            FUN_2004d2f0();
            Com_DPrintf();
            return;
          }
        }
        puVar7 = (undefined4 *)register0x00000010;
        ppiVar12 = apiStack_2c + 1;
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppiVar12 = (int *)*puVar7;
          puVar7 = puVar7 + 1;
          ppiVar12 = ppiVar12 + 1;
        }
        apiStack_2c[0] = (int *)0x1;
        pcStack_30 = (char *)0x2005ebc4;
        FUN_2004d2f0();
        Com_DPrintf();
        return;
      }
      iVar4 = iVar4 + 1;
      piVar8 = piVar8 + 0x34ab;
    } while (iVar4 < iVar3);
  }
  puVar7 = (undefined4 *)register0x00000010;
  ppiVar12 = apiStack_2c + 1;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppiVar12 = (int *)*puVar7;
    puVar7 = puVar7 + 1;
    ppiVar12 = ppiVar12 + 1;
  }
  apiStack_2c[0] = (int *)0x1;
  pcStack_30 = (char *)0x2005e93b;
  FUN_2004d2f0();
  puVar7 = (undefined4 *)register0x00000010;
  ppiVar12 = apiStack_2c + 1;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppiVar12 = (int *)*puVar7;
    puVar7 = puVar7 + 1;
    ppiVar12 = ppiVar12 + 1;
  }
  apiStack_2c[0] = (int *)0x1;
  pcStack_30 = (char *)0x2005e95a;
  FUN_2004d2f0();
  pcStack_30 = s_Rejected_a_connection__20139998;
  pcStack_34 = (char *)0x2005e964;
  Com_DPrintf();
  return;
}

