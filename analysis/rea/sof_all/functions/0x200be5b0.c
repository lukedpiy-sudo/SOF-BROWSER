// rea decompile_all
// name: FUN_200be5b0
// address: 0x200be5b0
// body: available
// range: 0x200be5b0-0x200bf1de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200bf0bf) */

byte * FUN_200be5b0(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined1 *puVar11;
  int iVar12;
  void *pvVar13;
  byte *in_ECX;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  ushort *puVar18;
  byte *pbVar19;
  char *pcVar20;
  uint uVar21;
  int *piVar22;
  int iVar23;
  byte local_25d;
  byte local_25c;
  byte local_25b;
  byte local_25a;
  void *local_258;
  byte local_254;
  uint local_250;
  uint local_24c;
  int local_248;
  int local_244;
  byte local_23d;
  uint local_23c;
  uint local_238;
  byte local_232;
  byte local_231;
  byte local_22a;
  byte local_229;
  byte local_228;
  byte local_227;
  byte local_226;
  byte local_225;
  byte local_224;
  byte local_223;
  byte local_222;
  byte local_221;
  int local_220 [4];
  int local_210;
  undefined1 local_20c [440];
  void *pvStack_54;
  char cStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010da79;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = local_25a;
  FUN_2000a5b0(0);
  local_4 = 0;
  in_ECX[0x14] = local_25a;
  FUN_2000a5b0(0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_2000a3a0(param_2,0,0xffffffff);
  uVar14 = 0xffffffff;
  in_ECX[0x120] = 1;
  in_ECX[0x121] = 0;
  in_ECX[0x122] = 0;
  in_ECX[0x123] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x11c] = 0xff;
  in_ECX[0x11d] = 0xff;
  in_ECX[0x11e] = 0xff;
  in_ECX[0x11f] = 0xff;
  pcVar20 = &DAT_2015813c;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    cVar6 = *pcVar20;
    pcVar20 = pcVar20 + 1;
  } while (cVar6 != '\0');
  FUN_2008c2d0(&DAT_2015813c,0,~uVar14 - 1);
  in_ECX[0x118] = 0;
  if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
    local_254 = (byte)*DAT_204064f0;
    DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
  }
  if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
    local_25c = (byte)*DAT_204064f0;
    DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
  }
  if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
    local_25d = (byte)*DAT_204064f0;
    DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
  }
  if (DAT_204064f0 + 1 <= DAT_204064f4) {
    DAT_204064f0 = DAT_204064f0 + 1;
  }
  if (DAT_204064f0 + 1 <= DAT_204064f4) {
    DAT_204064f0 = DAT_204064f0 + 1;
  }
  if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
    DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
  }
  if (DAT_204064f0 + 1 <= DAT_204064f4) {
    DAT_204064f0 = DAT_204064f0 + 1;
  }
  if (DAT_204064f0 + 1 <= DAT_204064f4) {
    DAT_204064f0 = DAT_204064f0 + 1;
  }
  if (DAT_204064f0 + 1 <= DAT_204064f4) {
    local_24c = (uint)*DAT_204064f0;
    DAT_204064f0 = DAT_204064f0 + 1;
  }
  if (DAT_204064f0 + 1 <= DAT_204064f4) {
    local_258 = (void *)(uint)*DAT_204064f0;
    DAT_204064f0 = DAT_204064f0 + 1;
  }
  if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
    local_25b = (byte)*DAT_204064f0;
    DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
  }
  if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
    DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
  }
  if ((local_25d != 2) && (local_25d != 10)) {
    puVar11 = *(undefined1 **)(param_2 + 4);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_201116cc;
    }
    FUN_200fabac(local_20c,s_LoadTGA__Only_type_2_and_10_targ_20158100,puVar11);
    FUN_2008e9e0(local_20c);
  }
  if ((local_25c != 0) || ((local_25b != 0x20 && (local_25b != 0x18)))) {
    puVar11 = *(undefined1 **)(param_2 + 4);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_201116cc;
    }
    FUN_200fabac(local_20c,s_LoadTGA__Only_32_or_24_bit_image_201580c0,puVar11);
    FUN_2008e9e0(local_20c);
  }
  if ((local_254 != 0) && ((ushort *)((int)DAT_204064f0 + (uint)local_254) <= DAT_204064f4)) {
    DAT_204064f0 = (ushort *)((int)DAT_204064f0 + (uint)local_254);
  }
  iVar12 = 1;
  uVar14 = local_24c & 0xffff;
  uVar21 = (uint)local_258 & 0xffff;
  in_ECX[0x24] = 1;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  *(uint *)(in_ECX + 0x28) = uVar14;
  *(uint *)(in_ECX + 0x2c) = uVar21;
  iVar15 = 0;
  do {
    if ((int)uVar14 <= iVar12) break;
    iVar12 = iVar12 * 2;
    iVar15 = iVar15 + 1;
  } while (iVar12 < 0x400);
  *(int *)(in_ECX + 0x30) = iVar15;
  iVar12 = 1;
  iVar17 = 0;
  do {
    if ((int)uVar21 <= iVar12) break;
    iVar12 = iVar12 * 2;
    iVar17 = iVar17 + 1;
  } while (iVar12 < 0x400);
  *(int *)(in_ECX + 0x34) = iVar17;
  if ((uVar14 != 1 << ((byte)iVar15 & 0x1f)) || (uVar21 != 1 << ((byte)iVar17 & 0x1f))) {
    puVar11 = *(undefined1 **)(param_2 + 4);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_201116cc;
    }
    FUN_200fabac(local_20c,s_LoadTGA__Bitmap_is_not_a_power_o_20158078,puVar11);
    FUN_2008e9e0(local_20c);
  }
  pvVar13 = operator_new(*(int *)(in_ECX + 0x2c) * *(int *)(in_ECX + 0x28) * 4);
  *(void **)(in_ECX + 0x38) = pvVar13;
  if (local_25d == 2) {
    iVar12 = *(int *)(in_ECX + 0x2c);
    local_258 = pvVar13;
    while (iVar12 = iVar12 + -1, -1 < iVar12) {
      iVar15 = 0;
      if (0 < *(int *)(in_ECX + 0x28)) {
        do {
          if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
            local_24c = (uint)(byte)*DAT_204064f0;
            DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
          }
          *(undefined1 *)((int)pvVar13 + (*(int *)(in_ECX + 0x28) * iVar12 + iVar15) * 4 + 2) =
               *(undefined1 *)((int)&DAT_204063e8 + (local_24c & 0xff));
          if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
            local_254 = (byte)*DAT_204064f0;
            DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
          }
          *(undefined1 *)((int)pvVar13 + (*(int *)(in_ECX + 0x28) * iVar12 + iVar15) * 4 + 1) =
               *(undefined1 *)((int)&DAT_204063e8 + (uint)local_254);
          if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
            local_258 = (void *)(uint)(byte)*DAT_204064f0;
            DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
          }
          *(undefined1 *)((int)pvVar13 + (*(int *)(in_ECX + 0x28) * iVar12 + iVar15) * 4) =
               *(undefined1 *)((int)&DAT_204063e8 + ((uint)local_258 & 0xff));
          if (local_25b == 0x20) {
            if ((ushort *)((int)DAT_204064f0 + 1U) <= DAT_204064f4) {
              local_25c = (byte)*DAT_204064f0;
              DAT_204064f0 = (ushort *)((int)DAT_204064f0 + 1U);
            }
            *(byte *)((int)pvVar13 + (*(int *)(in_ECX + 0x28) * iVar12 + iVar15) * 4 + 3) =
                 local_25c;
            if (*(char *)((int)pvVar13 + (*(int *)(in_ECX + 0x28) * iVar12 + iVar15) * 4 + 3) != -1)
            {
              in_ECX[0x118] = 1;
            }
          }
          else {
            *(undefined1 *)((int)pvVar13 + (*(int *)(in_ECX + 0x28) * iVar12 + iVar15) * 4 + 3) =
                 0xff;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(in_ECX + 0x28));
      }
    }
  }
  else {
    local_248 = *(int *)(in_ECX + 0x28);
    puVar16 = DAT_204064f0;
    puVar18 = DAT_204064f4;
joined_r0x200be9fa:
    local_248 = local_248 + -1;
    if (-1 < local_248) {
      local_244 = 0;
      puVar11 = (undefined1 *)((int)pvVar13 + *(int *)(in_ECX + 0x2c) * local_248 * 4);
      if (0 < *(int *)(in_ECX + 0x2c)) {
        do {
          if (local_248 < 0) break;
          puVar1 = (ushort *)((int)puVar16 + 1);
          if (puVar1 <= puVar18) {
            local_23d = (byte)*puVar16;
            puVar16 = puVar1;
            DAT_204064f0 = puVar1;
          }
          bVar10 = (local_23d & 0x7f) + 1;
          if ((char)local_23d < '\0') {
            puVar1 = (ushort *)((int)puVar16 + 1);
            if (local_25b == 0x18) {
              if (puVar1 <= puVar18) {
                local_223 = (byte)*puVar16;
                puVar16 = puVar1;
                DAT_204064f0 = puVar1;
              }
              local_23c = (uint)local_223;
              puVar1 = (ushort *)((int)puVar16 + 1);
              if (puVar1 <= puVar18) {
                local_224 = (byte)*puVar16;
                puVar16 = puVar1;
                DAT_204064f0 = puVar1;
              }
              local_238 = (uint)local_224;
              puVar1 = (ushort *)((int)puVar16 + 1);
              if (puVar1 <= puVar18) {
                local_228 = (byte)*puVar16;
                puVar16 = puVar1;
                DAT_204064f0 = puVar1;
              }
              local_25d = 0xff;
              local_250 = (uint)local_228;
            }
            else {
              if (puVar1 <= puVar18) {
                local_221 = (byte)*puVar16;
                puVar16 = puVar1;
                DAT_204064f0 = puVar1;
              }
              local_23c = (uint)local_221;
              puVar1 = (ushort *)((int)puVar16 + 1);
              if (puVar1 <= puVar18) {
                local_226 = (byte)*puVar16;
                puVar16 = puVar1;
                DAT_204064f0 = puVar1;
              }
              local_238 = (uint)local_226;
              puVar1 = (ushort *)((int)puVar16 + 1);
              if (puVar1 <= puVar18) {
                local_231 = (byte)*puVar16;
                puVar16 = puVar1;
                DAT_204064f0 = puVar1;
              }
              local_250 = (uint)local_231;
              puVar1 = (ushort *)((int)puVar16 + 1);
              if (puVar1 <= puVar18) {
                local_229 = (byte)*puVar16;
                puVar16 = puVar1;
                DAT_204064f0 = puVar1;
              }
              local_25d = local_229;
              if (local_229 != 0xff) {
                in_ECX[0x118] = 1;
                puVar16 = DAT_204064f0;
                puVar18 = DAT_204064f4;
              }
            }
            uVar7 = *(undefined1 *)((int)&DAT_204063e8 + local_238);
            uVar8 = *(undefined1 *)((int)&DAT_204063e8 + local_250);
            uVar9 = *(undefined1 *)((int)&DAT_204063e8 + local_23c);
            if (bVar10 != 0) {
              local_24c = (uint)bVar10;
              do {
                *puVar11 = uVar8;
                puVar11[1] = uVar7;
                puVar11[2] = uVar9;
                puVar11[3] = local_25d;
                puVar11 = puVar11 + 4;
                local_244 = local_244 + 1;
                if (local_244 == *(int *)(in_ECX + 0x2c)) {
                  local_248 = local_248 + -1;
                  local_244 = 0;
                  puVar11 = (undefined1 *)((int)pvVar13 + *(int *)(in_ECX + 0x2c) * local_248 * 4);
                }
                local_24c = local_24c - 1;
                puVar16 = DAT_204064f0;
                puVar18 = DAT_204064f4;
              } while (local_24c != 0);
            }
          }
          else if (bVar10 != 0) {
            local_24c = (uint)bVar10;
            do {
              puVar1 = (ushort *)((int)puVar16 + 1);
              if (local_25b == 0x18) {
                if (puVar1 <= puVar18) {
                  local_227 = (byte)*puVar16;
                  puVar16 = puVar1;
                  DAT_204064f0 = puVar1;
                }
                local_23c = (uint)local_227;
                puVar1 = (ushort *)((int)puVar16 + 1);
                if (puVar1 <= puVar18) {
                  local_225 = (byte)*puVar16;
                  puVar16 = puVar1;
                  DAT_204064f0 = puVar1;
                }
                local_238 = (uint)local_225;
                if ((ushort *)((int)puVar16 + 1U) <= puVar18) {
                  local_232 = (byte)*puVar16;
                  DAT_204064f0 = (ushort *)((int)puVar16 + 1U);
                }
                local_25d = 0xff;
                local_250 = (uint)local_232;
              }
              else {
                if (puVar1 <= puVar18) {
                  local_222 = (byte)*puVar16;
                  puVar16 = puVar1;
                  DAT_204064f0 = puVar1;
                }
                local_23c = (uint)local_222;
                puVar1 = (ushort *)((int)puVar16 + 1);
                if (puVar1 <= puVar18) {
                  local_22a = (byte)*puVar16;
                  puVar16 = puVar1;
                  DAT_204064f0 = puVar1;
                }
                local_238 = (uint)local_22a;
                puVar1 = (ushort *)((int)puVar16 + 1);
                if (puVar1 <= puVar18) {
                  local_25a = (byte)*puVar16;
                  puVar16 = puVar1;
                  DAT_204064f0 = puVar1;
                }
                local_250 = (uint)local_25a;
                if ((ushort *)((int)puVar16 + 1U) <= puVar18) {
                  local_25c = (byte)*puVar16;
                  DAT_204064f0 = (ushort *)((int)puVar16 + 1U);
                }
                local_25d = local_25c;
                if (local_25c != 0xff) {
                  in_ECX[0x118] = 1;
                }
              }
              uVar7 = *(undefined1 *)((int)&DAT_204063e8 + local_238);
              uVar8 = *(undefined1 *)((int)&DAT_204063e8 + local_23c);
              *puVar11 = *(undefined1 *)((int)&DAT_204063e8 + local_250);
              puVar11[1] = uVar7;
              puVar11[2] = uVar8;
              puVar11[3] = local_25d;
              puVar11 = puVar11 + 4;
              local_244 = local_244 + 1;
              if (local_244 == *(int *)(in_ECX + 0x2c)) {
                local_248 = local_248 + -1;
                local_244 = 0;
                puVar11 = (undefined1 *)((int)pvVar13 + *(int *)(in_ECX + 0x2c) * local_248 * 4);
              }
              local_24c = local_24c - 1;
              puVar16 = DAT_204064f0;
              puVar18 = DAT_204064f4;
            } while (local_24c != 0);
          }
        } while (local_244 < *(int *)(in_ECX + 0x2c));
      }
      goto joined_r0x200be9fa;
    }
  }
  while( true ) {
    iVar15 = *(int *)(in_ECX + 0x24);
    iVar12 = iVar15 + 1;
    pbVar19 = in_ECX + iVar12 * 0x14;
    piVar22 = local_220;
    for (iVar17 = 5; iVar17 != 0; iVar17 = iVar17 + -1) {
      *piVar22 = *(int *)pbVar19;
      pbVar19 = pbVar19 + 4;
      piVar22 = piVar22 + 1;
    }
    if ((local_220[2] == 0) && (local_220[3] == 0)) break;
    iVar17 = local_220[2] - (uint)(0 < local_220[2]);
    pbVar19 = in_ECX + (iVar15 * 5 + 10) * 4;
    *(int *)(in_ECX + 0x24) = iVar12;
    iVar15 = local_220[3] - (uint)(0 < local_220[3]);
    *(int *)(pbVar19 + 8) = iVar17;
    iVar17 = 1 << ((byte)iVar17 & 0x1f);
    iVar12 = 1 << ((byte)iVar15 & 0x1f);
    *(int *)(pbVar19 + 0xc) = iVar15;
    *(int *)pbVar19 = iVar17;
    *(int *)(pbVar19 + 4) = iVar12;
    pvVar13 = operator_new(iVar12 * iVar17 * 4);
    *(void **)(pbVar19 + 0x10) = pvVar13;
    local_258 = (void *)0x0;
    if (0 < *(int *)(pbVar19 + 4)) {
      iVar12 = *(int *)pbVar19;
      local_244 = 0;
      do {
        iVar15 = 0;
        if (0 < iVar12) {
          iVar23 = ((local_244 + 1) % local_220[1]) * local_220[0];
          iVar17 = (local_244 % local_220[1]) * local_220[0];
          local_248 = 0;
          do {
            iVar12 = (local_248 + 1) % local_220[0];
            pbVar4 = (byte *)(local_210 + (iVar23 + iVar12) * 4);
            pbVar5 = (byte *)(local_210 + (iVar17 + iVar12) * 4);
            pbVar2 = (byte *)(local_210 + (iVar23 + local_248 % local_220[0]) * 4);
            pbVar3 = (byte *)(local_210 + (iVar17 + local_248 % local_220[0]) * 4);
            *(char *)((int)pvVar13 + (*(int *)pbVar19 * (int)local_258 + iVar15) * 4) =
                 (char)((int)((uint)*pbVar4 + (uint)*pbVar5 + (uint)*pbVar3 + 2 + (uint)*pbVar2) >>
                       2);
            *(char *)((int)pvVar13 + (*(int *)pbVar19 * (int)local_258 + iVar15) * 4 + 1) =
                 (char)((int)((uint)pbVar3[1] + (uint)pbVar2[1] + (uint)pbVar5[1] + 2 +
                             (uint)pbVar4[1]) >> 2);
            *(char *)((int)pvVar13 + (*(int *)pbVar19 * (int)local_258 + iVar15) * 4 + 2) =
                 (char)((int)((uint)pbVar3[2] + (uint)pbVar2[2] + (uint)pbVar5[2] + 2 +
                             (uint)pbVar4[2]) >> 2);
            *(char *)((int)pvVar13 + (*(int *)pbVar19 * (int)local_258 + iVar15) * 4 + 3) =
                 (char)((int)((uint)pbVar3[3] + (uint)pbVar2[3] + (uint)pbVar5[3] + 2 +
                             (uint)pbVar4[3]) >> 2);
            iVar12 = *(int *)pbVar19;
            iVar15 = iVar15 + 1;
            local_248 = local_248 + 2;
          } while (iVar15 < iVar12);
        }
        local_258 = (void *)((int)local_258 + 1);
        local_244 = local_244 + 2;
      } while ((int)local_258 < *(int *)(pbVar19 + 4));
    }
  }
  (**(code **)(DAT_20403c04 + 0x5c))(0xcf5,1);
  (**(code **)(DAT_20403c04 + 0x3c))(1,in_ECX + 0x10);
  (**(code **)(DAT_20403c04 + 8))(0xde1,*(undefined4 *)(in_ECX + 0x10));
  (**(code **)(DAT_20403c04 + 0x80))(0xde1,0x2802);
  (**(code **)(DAT_20403c04 + 0x80))(0xde1,0x2803,(cStack_14 != '\0') + 0x2900);
  (**(code **)(DAT_20403c04 + 0x80))(0xde1,0x2800);
  (**(code **)(DAT_20403c04 + 0x80))(0xde1,0x2801,0x2600);
  if (DAT_204063d8 < *(int *)(in_ECX + 0x24)) {
    pbVar19 = in_ECX + DAT_204063d8 * 0x14 + 0x38;
    iVar12 = DAT_204063d8;
    do {
      if ((*(int *)(pbVar19 + -8) < 9) && (*(int *)(pbVar19 + -4) < 9)) {
        if (in_ECX[0x118] == 0) {
          (**(code **)(DAT_20403c04 + 0x7c))
                    (0xde1,0,0x1907,*(undefined4 *)(pbVar19 + -0x10),*(undefined4 *)(pbVar19 + -0xc)
                     ,0,0x1908,0x1401,*(undefined4 *)pbVar19);
        }
        else {
          (**(code **)(DAT_20403c04 + 0x7c))
                    (0xde1,0,0x1908,*(undefined4 *)(pbVar19 + -0x10),*(undefined4 *)(pbVar19 + -0xc)
                     ,0,0x1908,0x1401,*(undefined4 *)pbVar19);
        }
        break;
      }
      iVar12 = iVar12 + 1;
      pbVar19 = pbVar19 + 0x14;
    } while (iVar12 < *(int *)(in_ECX + 0x24));
  }
  iVar12 = 0;
  if (0 < *(int *)(in_ECX + 0x24)) {
    pbVar19 = in_ECX + 0x38;
    do {
      FUN_200f9f75(*(undefined4 *)pbVar19);
      pbVar19[0] = 0;
      pbVar19[1] = 0;
      pbVar19[2] = 0;
      pbVar19[3] = 0;
      iVar12 = iVar12 + 1;
      pbVar19 = pbVar19 + 0x14;
    } while (iVar12 < *(int *)(in_ECX + 0x24));
  }
  ExceptionList = pvStack_54;
  return in_ECX;
}

