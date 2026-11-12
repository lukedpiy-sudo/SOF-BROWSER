// rea decompile_all
// name: FUN_200a98d0
// address: 0x200a98d0
// body: available
// range: 0x200a98d0-0x200aa241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a98d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int in_ECX;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = 0;
  local_24 = 0;
  local_14 = in_ECX;
  for (local_34 = 0;
      (uVar14 = local_14, iVar7 = *(int *)(param_5 + 4), iVar7 != 0 &&
      (local_34 < (uint)(*(int *)(param_5 + 8) - iVar7 >> 2))); local_34 = local_34 + 1) {
    iVar7 = *(int *)(iVar7 + local_34 * 4);
    local_30 = *(int *)(iVar7 + 4);
    local_1c = *(int *)(iVar7 + 8);
    while( true ) {
      if (*(int *)(iVar7 + 0x4c) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (*(int *)(iVar7 + 0x50) - *(int *)(iVar7 + 0x4c)) / 0xc;
      }
      if (param_1 + 1U <= uVar14) break;
      if (*(int *)(iVar7 + 0x4c) == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = (*(int *)(iVar7 + 0x50) - *(int *)(iVar7 + 0x4c)) / 0xc;
      }
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      FUN_200b9800(*(undefined4 *)(iVar7 + 0x50),&local_c);
      iVar19 = iVar17 * 0xc;
      iVar17 = *(int *)(*(int *)(param_4 + 0x14) + iVar17 * 4);
      piVar16 = (int *)(*(int *)(iVar7 + 0x4c) + iVar19);
      *piVar16 = iVar17;
      pvVar5 = operator_new(iVar17 * local_30 * 0xc);
      piVar16[1] = (int)pvVar5;
      pvVar5 = operator_new(*piVar16 * local_1c * 8);
      piVar16[2] = (int)pvVar5;
      local_2c = 0;
      if (0 < *(int *)(iVar19 + *(int *)(iVar7 + 0x4c))) {
        do {
          iVar17 = 0;
          if (0 < local_30) {
            iVar18 = 0;
            do {
              puVar10 = (undefined4 *)(*(int *)(iVar7 + 0x30) + iVar18);
              iVar18 = iVar18 + 0xc;
              iVar6 = *(int *)(iVar19 + *(int *)(iVar7 + 0x4c)) * iVar17;
              iVar17 = iVar17 + 1;
              puVar1 = (undefined4 *)
                       (*(int *)(iVar19 + *(int *)(iVar7 + 0x4c) + 4) + (iVar6 + local_2c) * 0xc);
              *puVar1 = *puVar10;
              puVar1[1] = puVar10[1];
              puVar1[2] = puVar10[2];
            } while (iVar17 < local_30);
          }
          iVar17 = 0;
          if (0 < local_1c) {
            do {
              piVar16 = (int *)(*(int *)(iVar7 + 0x4c) + iVar19);
              *(undefined4 *)(piVar16[2] + (*piVar16 * iVar17 + local_2c) * 8) =
                   *(undefined4 *)(*(int *)(iVar7 + 0x34) + iVar17 * 8);
              piVar16 = (int *)(*(int *)(iVar7 + 0x4c) + iVar19);
              iVar18 = iVar17 * 8;
              iVar6 = *piVar16 * iVar17;
              iVar17 = iVar17 + 1;
              *(undefined4 *)(piVar16[2] + 4 + (iVar6 + local_2c) * 8) =
                   *(undefined4 *)(*(int *)(iVar7 + 0x34) + 4 + iVar18);
            } while (iVar17 < local_1c);
          }
          local_2c = local_2c + 1;
        } while (local_2c < *(int *)(iVar19 + *(int *)(iVar7 + 0x4c)));
      }
    }
    if (local_30 == 0) {
      FUN_2008e9e0(s_Mesh_with_no_vertices_20157a3c);
    }
  }
  local_34 = 0;
  do {
    iVar7 = *(int *)(param_5 + 4);
    if ((iVar7 == 0) || ((uint)(*(int *)(param_5 + 8) - iVar7 >> 2) <= local_34)) {
      return;
    }
    local_30 = *(int *)(iVar7 + local_34 * 4);
    local_1c = *(int *)(local_30 + 8);
    local_18 = *(int *)(local_30 + 4);
    iVar7 = *(int *)(uVar14 + 4);
    if (iVar7 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int *)(uVar14 + 8) - iVar7 >> 2;
    }
    uVar2 = local_18 + local_28;
    local_14 = uVar2;
    if (uVar11 < uVar2) {
      local_20 = 0xffffffff;
      if (iVar7 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(int *)(uVar14 + 8) - iVar7 >> 2;
      }
      if (uVar11 < uVar2) {
        uVar3 = *(undefined4 *)(uVar14 + 8);
        puVar8 = &local_20;
        iVar7 = FUN_2008c740(puVar8);
        FUN_200a8890(uVar3,uVar2 - iVar7,puVar8);
      }
      else {
        uVar11 = FUN_2008c740();
        if (uVar2 < uVar11) {
          FUN_2009e4c0(*(int *)(uVar14 + 4) + uVar2 * 4,*(undefined4 *)(uVar14 + 8));
        }
      }
      if (*(int *)(uVar14 + 0x24) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(int *)(uVar14 + 0x28) - *(int *)(uVar14 + 0x24) >> 2;
      }
      if (uVar11 < uVar2) {
        uVar3 = *(undefined4 *)(uVar14 + 0x28);
        puVar8 = &local_34;
        iVar7 = FUN_2008c740(puVar8);
        FUN_200a8890(uVar3,uVar2 - iVar7,puVar8);
      }
      else {
        uVar11 = FUN_2008c740();
        if (uVar2 < uVar11) {
          FUN_2009e4c0(*(int *)(uVar14 + 0x24) + uVar2 * 4,*(undefined4 *)(uVar14 + 0x28));
        }
      }
      local_20 = 0xffffffff;
      if (*(int *)(uVar14 + 0x34) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(int *)(uVar14 + 0x38) - *(int *)(uVar14 + 0x34) >> 2;
      }
      if (uVar11 < uVar2) {
        uVar3 = *(undefined4 *)(uVar14 + 0x38);
        puVar8 = &local_20;
        iVar7 = FUN_2008c740(puVar8);
        FUN_200a8890(uVar3,uVar2 - iVar7,puVar8);
      }
      else {
        uVar11 = FUN_2008c740();
        if (uVar2 < uVar11) {
          FUN_2009e4c0(*(int *)(uVar14 + 0x34) + uVar2 * 4,*(undefined4 *)(uVar14 + 0x38));
        }
      }
    }
    if (*(int *)(uVar14 + 0x14) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int *)(uVar14 + 0x18) - *(int *)(uVar14 + 0x14) >> 2;
    }
    uVar2 = local_1c + local_24;
    local_10 = uVar2;
    if (uVar11 < uVar2) {
      local_20 = 0xffffffff;
      if (*(int *)(uVar14 + 0x14) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(int *)(uVar14 + 0x18) - *(int *)(uVar14 + 0x14) >> 2;
      }
      if (uVar11 < uVar2) {
        uVar3 = *(undefined4 *)(uVar14 + 0x18);
        puVar8 = &local_20;
        iVar7 = FUN_2008c740(puVar8);
        FUN_200a8890(uVar3,uVar2 - iVar7,puVar8);
      }
      else {
        uVar11 = FUN_2008c740();
        if (uVar2 < uVar11) {
          FUN_2009e4c0(*(int *)(uVar14 + 0x14) + uVar2 * 4,*(undefined4 *)(uVar14 + 0x18));
        }
      }
      if (*(int *)(uVar14 + 0x44) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(int *)(uVar14 + 0x48) - *(int *)(uVar14 + 0x44) >> 2;
      }
      if (uVar11 < uVar2) {
        uVar3 = *(undefined4 *)(uVar14 + 0x48);
        puVar8 = &local_34;
        iVar7 = FUN_2008c740(puVar8);
        FUN_200a8890(uVar3,uVar2 - iVar7,puVar8);
      }
      else {
        uVar11 = FUN_2008c740();
        if (uVar2 < uVar11) {
          FUN_2009e4c0(*(int *)(uVar14 + 0x44) + uVar2 * 4,*(undefined4 *)(uVar14 + 0x48));
        }
      }
      local_20 = 0xffffffff;
      if (*(int *)(uVar14 + 0x54) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(int *)(uVar14 + 0x58) - *(int *)(uVar14 + 0x54) >> 2;
      }
      if (uVar11 < uVar2) {
        uVar3 = *(undefined4 *)(uVar14 + 0x58);
        puVar8 = &local_20;
        iVar7 = FUN_2008c740(puVar8);
        FUN_200a8890(uVar3,uVar2 - iVar7,puVar8);
      }
      else {
        uVar11 = FUN_2008c740();
        if (uVar2 < uVar11) {
          FUN_2009e4c0(*(int *)(uVar14 + 0x54) + uVar2 * 4,*(undefined4 *)(uVar14 + 0x58));
        }
      }
    }
    local_2c = param_1 * 0xc;
    piVar16 = (int *)(*(int *)(local_30 + 0x4c) + local_2c);
    if (piVar16[1] == 0) {
      local_28 = local_14;
      local_24 = uVar2;
    }
    else {
      local_3c = 0;
      if (0 < local_1c) {
        iVar7 = local_24 * 4;
LAB_200a9d94:
        uVar11 = local_3c + local_24;
        *(int *)(iVar7 + *(int *)(uVar14 + 0x54)) = local_3c;
        puVar8 = (uint *)(*(int *)(uVar14 + 0x14) + iVar7);
        uVar2 = *puVar8;
        if (uVar2 == 0xffffffff) {
          *puVar8 = uVar11;
          local_38 = 0;
          if (0 < (int)uVar11) {
            do {
              if ((*(int *)(*(int *)(uVar14 + 0x14) + local_38 * 4) == local_38) &&
                 (iVar17 = *(int *)(*(int *)(uVar14 + 0x54) + local_38 * 4), -1 < iVar17)) {
                piVar9 = (int *)(*(int *)(*(int *)(*(int *)(param_5 + 4) +
                                                  *(int *)(*(int *)(uVar14 + 0x44) + local_38 * 4) *
                                                  4) + 0x4c) + local_2c);
                iVar19 = piVar9[2];
                if (iVar19 != 0) {
                  iVar18 = *piVar16;
                  iVar6 = 0;
                  pfVar15 = (float *)(iVar19 + *piVar9 * iVar17 * 8);
                  pfVar13 = (float *)(piVar16[2] + iVar18 * local_3c * 8);
                  if (iVar18 < 1) {
LAB_200a9e58:
                    *(int *)(iVar7 + *(int *)(uVar14 + 0x14)) = local_38;
                    break;
                  }
                  while ((*pfVar13 - *pfVar15) * (*pfVar13 - *pfVar15) +
                         (pfVar13[1] - pfVar15[1]) * (pfVar13[1] - pfVar15[1]) <= 3.8146973e-06) {
                    iVar6 = iVar6 + 1;
                    *pfVar13 = *pfVar15;
                    pfVar13[1] = pfVar15[1];
                    pfVar13 = pfVar13 + 2;
                    pfVar15 = pfVar15 + 2;
                    if (iVar18 <= iVar6) goto LAB_200a9e58;
                  }
                }
              }
              local_38 = local_38 + 1;
            } while (local_38 < (int)uVar11);
          }
        }
        else if (uVar2 != uVar11) {
          piVar9 = (int *)(*(int *)(*(int *)(*(int *)(param_5 + 4) +
                                            *(int *)(*(int *)(uVar14 + 0x44) + uVar2 * 4) * 4) +
                                   0x4c) + local_2c);
          iVar17 = piVar9[2];
          uVar12 = uVar11;
          if (iVar17 == 0) {
LAB_200a9f1f:
            do {
              uVar12 = uVar12 + 1;
              iVar17 = *(int *)(uVar14 + 0x14);
              if ((iVar17 == 0) || ((uint)(*(int *)(uVar14 + 0x18) - iVar17 >> 2) <= uVar12))
              goto LAB_200a9ff5;
              if ((*(int *)(iVar17 + uVar12 * 4) == *(int *)(iVar17 + iVar7)) &&
                 (iVar17 = *(int *)(*(int *)(uVar14 + 0x54) + uVar12 * 4), -1 < iVar17)) {
                piVar9 = (int *)(*(int *)(*(int *)(*(int *)(param_5 + 4) +
                                                  *(int *)(*(int *)(uVar14 + 0x44) + uVar12 * 4) * 4
                                                  ) + 0x4c) + local_2c);
                iVar19 = piVar9[2];
                if (iVar19 != 0) {
                  iVar18 = *piVar16;
                  iVar6 = 0;
                  pfVar15 = (float *)(iVar19 + *piVar9 * iVar17 * 8);
                  pfVar13 = (float *)(piVar16[2] + iVar18 * local_3c * 8);
                  if (0 < iVar18) {
                    do {
                      if (3.8146973e-06 <
                          (*pfVar13 - *pfVar15) * (*pfVar13 - *pfVar15) +
                          (pfVar13[1] - pfVar15[1]) * (pfVar13[1] - pfVar15[1])) goto LAB_200a9f1f;
                      iVar6 = iVar6 + 1;
                      *pfVar13 = *pfVar15;
                      pfVar13[1] = pfVar15[1];
                      pfVar13 = pfVar13 + 2;
                      pfVar15 = pfVar15 + 2;
                    } while (iVar6 < iVar18);
                  }
                  *(uint *)(*(int *)(uVar14 + 0x14) + uVar12 * 4) = uVar11;
                }
              }
            } while( true );
          }
          iVar19 = *piVar16;
          iVar18 = 0;
          pfVar15 = (float *)(iVar17 + *(int *)(*(int *)(uVar14 + 0x54) + uVar2 * 4) * *piVar9 * 8);
          pfVar13 = (float *)(piVar16[2] + iVar19 * local_3c * 8);
          if (0 < iVar19) {
            do {
              if (3.8146973e-06 <
                  (*pfVar13 - *pfVar15) * (*pfVar13 - *pfVar15) +
                  (pfVar13[1] - pfVar15[1]) * (pfVar13[1] - pfVar15[1])) goto LAB_200a9f1f;
              iVar18 = iVar18 + 1;
              *pfVar13 = *pfVar15;
              pfVar13[1] = pfVar15[1];
              pfVar13 = pfVar13 + 2;
              pfVar15 = pfVar15 + 2;
            } while (iVar18 < iVar19);
          }
        }
        goto LAB_200a9ffb;
      }
LAB_200aa01b:
      local_3c = 0;
      if (0 < local_18) {
        iVar7 = local_28 * 4;
        do {
          local_20 = local_3c + local_28;
          *(int *)(*(int *)(uVar14 + 0x34) + iVar7) = local_3c;
          iVar17 = *(int *)(uVar14 + 4);
          uVar11 = *(uint *)(iVar17 + iVar7);
          local_30 = iVar7;
          if (uVar11 == 0xffffffff) {
            iVar19 = 0;
            *(uint *)(iVar17 + iVar7) = local_20;
            if (0 < (int)local_20) {
              do {
                if (*(int *)(*(int *)(uVar14 + 4) + iVar19 * 4) == iVar19) {
                  piVar9 = (int *)(*(int *)(*(int *)(*(int *)(param_5 + 4) +
                                                    *(int *)(*(int *)(uVar14 + 0x24) + iVar19 * 4) *
                                                    4) + 0x4c) + local_2c);
                  iVar7 = piVar9[1];
                  if ((iVar7 != 0) &&
                     (cVar4 = FUN_200a9840(piVar16[1] + *piVar16 * local_3c * 0xc,
                                           iVar7 + *(int *)(*(int *)(uVar14 + 0x34) + iVar19 * 4) *
                                                   *piVar9 * 0xc,0x3c23d70b,*piVar16), cVar4 != '\0'
                     )) {
                    *(int *)(local_30 + *(int *)(uVar14 + 4)) = iVar19;
                    iVar7 = local_30;
                    break;
                  }
                }
                iVar19 = iVar19 + 1;
                iVar7 = local_30;
              } while (iVar19 < (int)local_20);
            }
          }
          else if (uVar11 != local_20) {
            piVar9 = (int *)(*(int *)(*(int *)(*(int *)(param_5 + 4) +
                                              *(int *)(*(int *)(uVar14 + 0x24) + uVar11 * 4) * 4) +
                                     0x4c) + local_2c);
            local_1c = piVar9[1];
            uVar11 = local_20;
            if ((local_1c == 0) ||
               (cVar4 = FUN_200a9840(piVar16[1] + *piVar16 * local_3c * 0xc,
                                     local_1c +
                                     *(int *)(*(int *)(uVar14 + 0x34) + *(int *)(iVar17 + iVar7) * 4
                                             ) * *piVar9 * 0xc,0x3c23d70b,*piVar16),
               uVar11 = local_20, cVar4 == '\0')) {
              while( true ) {
                uVar11 = uVar11 + 1;
                iVar17 = *(int *)(uVar14 + 4);
                if ((iVar17 == 0) || ((uint)(*(int *)(uVar14 + 8) - iVar17 >> 2) <= uVar11)) break;
                piVar9 = (int *)(iVar17 + iVar7);
                iVar7 = local_30;
                if ((*(int *)(iVar17 + uVar11 * 4) == *piVar9) &&
                   (-1 < *(int *)(*(int *)(uVar14 + 0x34) + uVar11 * 4))) {
                  piVar9 = (int *)(*(int *)(*(int *)(*(int *)(param_5 + 4) +
                                                    *(int *)(*(int *)(uVar14 + 0x24) + uVar11 * 4) *
                                                    4) + 0x4c) + local_2c);
                  iVar17 = piVar9[1];
                  if ((iVar17 != 0) &&
                     (cVar4 = FUN_200a9840(piVar16[1] + *piVar16 * local_3c * 0xc,
                                           iVar17 + *(int *)(*(int *)(uVar14 + 0x34) + uVar11 * 4) *
                                                    *piVar9 * 0xc,0x3c23d70b,*piVar16),
                     iVar7 = local_30, cVar4 != '\0')) {
                    *(uint *)(*(int *)(uVar14 + 4) + uVar11 * 4) = local_20;
                  }
                }
              }
              *(uint *)(*(int *)(uVar14 + 4) + iVar7) = local_20;
            }
          }
          local_3c = local_3c + 1;
          iVar7 = iVar7 + 4;
        } while (local_3c < local_18);
      }
      local_28 = local_14;
      local_24 = local_10;
    }
    local_34 = local_34 + 1;
  } while( true );
LAB_200a9ff5:
  *(uint *)(iVar7 + *(int *)(uVar14 + 0x14)) = uVar11;
LAB_200a9ffb:
  local_3c = local_3c + 1;
  iVar7 = iVar7 + 4;
  if (local_1c <= local_3c) goto LAB_200aa01b;
  goto LAB_200a9d94;
}

