// rea decompile_all
// name: FUN_200106d0
// address: 0x200106d0
// body: available
// range: 0x200106d0-0x200112e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200106d0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  char local_c0 [128];
  byte local_40 [64];
  
  *(undefined4 *)(DAT_20225068 + 0x18) = 0;
  **(undefined1 **)(_DAT_2015ee48 + 4) = 0;
  **(undefined1 **)(DAT_2015ee5c + 4) = 0;
  if (DAT_201c1f00 != 7) {
    return;
  }
  if (DAT_20225240 == 0x23) {
    if (*(float *)(DAT_203fec74 + 0x18) != 0.0) {
      if (DAT_2022524c == 0) {
        DAT_2022524c = 1;
        iVar3 = FUN_2000fc70(&DAT_201e9dcc);
        if (iVar3 == 0) {
          return;
        }
      }
      if (DAT_2022524c == 1) {
        DAT_2022524c = 2;
        FUN_20055310(&DAT_201e9dcc,local_c0);
        iVar3 = -1;
        pcVar9 = local_c0;
        do {
          pcVar10 = pcVar9;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        *(undefined4 *)(pcVar10 + -1) = DAT_2011f3c4;
        pcVar10[3] = DAT_2011f3c8;
        iVar3 = FUN_2000fc70(local_c0);
        if (iVar3 == 0) {
          return;
        }
      }
      if (DAT_2022524c == 2) {
        DAT_2022524c = 3;
        FUN_20055310(&DAT_201e9dcc,local_c0);
        Com_sprintf(local_c0,0x80,s_strip_menu__s_sp_2011f3b0,local_c0);
        iVar3 = FUN_2000fc70(local_c0);
        if (iVar3 == 0) {
          return;
        }
      }
      if (DAT_2022524c == 3) {
        DAT_2022524c = 4;
        FUN_20055310(&DAT_201e9dcc,local_c0);
        Com_sprintf(local_c0,0x80,s_bot_wpfiles__s_wrs_2011f39c,local_c0);
        iVar3 = FUN_2000fc70(local_c0);
        if (iVar3 == 0) {
          return;
        }
      }
    }
    DAT_20225240 = 0xc;
    DAT_2022524c = 0;
LAB_2001086f:
    if ((*(float *)(DAT_203fac64 + 0x18) != 0.0) && (DAT_201e97cc != '\0')) {
      if (DAT_2022524c == 0) {
        DAT_2022524c = 1;
        iVar3 = FUN_2000fc70(&DAT_201e97cc);
        if (iVar3 == 0) {
          return;
        }
      }
      if (DAT_2022524c == 1) {
        DAT_2022524c = 2;
        DAT_20225248 = FUN_2000feb0(&DAT_201e97cc);
      }
      if (DAT_2022524c + -2 < DAT_20225248) {
        do {
          iVar3 = DAT_2022524c + -2;
          DAT_2022524c = DAT_2022524c + 1;
          iVar3 = FUN_2000fc70(iVar3 * 0x100 + DAT_20225250);
          if (iVar3 == 0) {
            return;
          }
        } while (DAT_2022524c + -2 < DAT_20225248);
      }
      if (DAT_20225250 != 0) {
        FUN_200f9d32(DAT_20225250);
        DAT_20225250 = 0;
      }
    }
    DAT_20225240 = 0xd;
    DAT_2022524c = 0;
LAB_20010952:
    if ((*(float *)(DAT_203fac64 + 0x18) != 0.0) && (DAT_201e980c != '\0')) {
      Com_sprintf(local_c0,0x80,s_sound_music__s_dms_2011f388,&DAT_201e980c);
      if (DAT_2022524c == 0) {
        DAT_2022524c = 1;
        iVar3 = FUN_2000fc70(local_c0);
        if (iVar3 == 0) {
          return;
        }
      }
      if (DAT_2022524c == 1) {
        DAT_2022524c = 2;
        DAT_20225248 = FUN_2000ff70(local_c0);
      }
      if (DAT_2022524c + -2 < DAT_20225248) {
        do {
          iVar3 = DAT_2022524c + -2;
          DAT_2022524c = DAT_2022524c + 1;
          iVar3 = FUN_2000fc70(iVar3 * 0x100 + DAT_20225250);
          if (iVar3 == 0) {
            return;
          }
        } while (DAT_2022524c + -2 < DAT_20225248);
      }
      if (DAT_20225250 != 0) {
        FUN_200f9d32(DAT_20225250);
        DAT_20225250 = 0;
      }
    }
    DAT_20225240 = 0xe;
    DAT_2022524c = 0;
LAB_20010a55:
    if ((*(float *)(DAT_203fec74 + 0x18) != 0.0) && (DAT_201e984c != '\0')) {
      Com_sprintf(local_c0,0x80,s_env__s_trn_2011f37c,&DAT_201e984c);
      if (DAT_2022524c == 0) {
        DAT_2022524c = 1;
        iVar3 = FUN_2000fc70(local_c0);
        if (iVar3 == 0) {
          return;
        }
      }
      if (DAT_2022524c == 1) {
        DAT_2022524c = 2;
        DAT_20225248 = FUN_20010270(local_c0);
      }
      if (DAT_2022524c + -2 < DAT_20225248) {
        do {
          iVar3 = DAT_2022524c + -2;
          DAT_2022524c = DAT_2022524c + 1;
          iVar3 = FUN_2000fc70(iVar3 * 0x100 + DAT_20225250);
          if (iVar3 == 0) {
            return;
          }
        } while (DAT_2022524c + -2 < DAT_20225248);
      }
      if (DAT_20225250 != 0) {
        FUN_200f9d32(DAT_20225250);
        DAT_20225250 = 0;
      }
    }
    DAT_20225240 = 0x123;
    DAT_2022524c = 0;
LAB_20010b68:
    if (*(float *)(DAT_203fac64 + 0x18) != 0.0) {
      if (DAT_20225240 == 0x123) {
        DAT_20225240 = 0x124;
      }
      do {
        iVar3 = DAT_20225240 * 0x40;
        if ((&DAT_201e94cc)[iVar3] == '\0') break;
        DAT_20225240 = DAT_20225240 + 1;
        if ((&DAT_201e94cc)[iVar3] != '*') {
          Com_sprintf(local_c0,0x80,s_sound__s_2011f234,&DAT_201e94cc + iVar3);
          iVar3 = FUN_2000fc70(local_c0);
          if (iVar3 == 0) {
            return;
          }
        }
      } while (DAT_20225240 < 0x287);
    }
    DAT_2022524c = 0;
    DAT_20225240 = 0x287;
LAB_20010c0e:
    if (*(float *)(DAT_203fec74 + 0x18) != 0.0) {
      if (DAT_20225240 == 0x287) {
        DAT_20225240 = 0x288;
      }
      do {
        if ((&DAT_201e94cc)[DAT_20225240 * 0x40] == '\0') break;
        Com_sprintf(local_c0,0x80,s_effects__s_eft_2011f36c,&DAT_201e94cc + DAT_20225240 * 0x40);
        if (DAT_2022524c == 0) {
          DAT_2022524c = 1;
          iVar3 = FUN_2000fc70(local_c0);
          if (iVar3 == 0) {
            return;
          }
        }
        if (DAT_2022524c == 1) {
          DAT_2022524c = 2;
          DAT_20225248 = FUN_20010610(local_c0);
        }
        if (DAT_2022524c + -2 < DAT_20225248) {
          do {
            iVar3 = DAT_2022524c + -2;
            DAT_2022524c = DAT_2022524c + 1;
            iVar3 = FUN_2000fc70(iVar3 * 0x100 + DAT_20225250);
            if (iVar3 == 0) {
              return;
            }
          } while (DAT_2022524c + -2 < DAT_20225248);
        }
        if (DAT_20225250 != 0) {
          FUN_200f9d32(DAT_20225250);
          DAT_20225250 = 0;
        }
        DAT_2022524c = 0;
        DAT_20225240 = DAT_20225240 + 1;
      } while (DAT_20225240 < 0x387);
    }
    DAT_2022524c = 0;
LAB_20010d54:
    DAT_20225240 = 0x388;
LAB_20010d59:
    do {
      iVar3 = DAT_20225240 * 0x40;
      if ((&DAT_201e94cc)[iVar3] == '\0') break;
      DAT_20225240 = DAT_20225240 + 1;
      Com_sprintf(local_c0,0x80,s__s_m32_2011f224,&DAT_201e94cc + iVar3);
      iVar3 = FUN_2000fc70(local_c0);
      if (iVar3 == 0) {
        return;
      }
    } while (DAT_20225240 < 0x487);
LAB_20010dcf:
    DAT_20225240 = 0x5a8;
LAB_20010dd4:
    do {
      iVar3 = DAT_20225240 * 0x40;
      if ((&DAT_201e94cc)[iVar3] == '\0') break;
      DAT_20225240 = DAT_20225240 + 1;
      Com_sprintf(local_c0,0x80,s_pics_dmicons__s_m32_2011f358,&DAT_201e94cc + iVar3);
      iVar3 = FUN_2000fc70(local_c0);
      if (iVar3 == 0) {
        return;
      }
    } while (DAT_20225240 < 0x5b7);
    DAT_2022524c = 0;
    DAT_20225240 = 0x5b7;
LAB_20010e53:
    if (*(float *)(DAT_203feca0 + 0x18) == 0.0) {
LAB_20010f9d:
      DAT_20225240 = 0x5da;
    }
    else {
      if (DAT_20225240 == 0x5b7) {
        DAT_20225240 = 0x5b8;
      }
      do {
        if ((&DAT_201e94cc)[DAT_20225240 * 0x40] == '\0') goto LAB_20010f9d;
        Com_sprintf(local_c0,0x80,s_strip__s_sp_2011f34c,&DAT_201e94cc + DAT_20225240 * 0x40);
        if (DAT_2022524c == 0) {
          DAT_2022524c = 1;
          iVar3 = FUN_2000fc70(local_c0);
          if (iVar3 == 0) {
            return;
          }
        }
        if (DAT_2022524c == 1) {
          DAT_2022524c = 2;
          DAT_20225248 = FUN_20010080(local_c0);
        }
        if (DAT_2022524c + -2 < DAT_20225248) {
          do {
            iVar3 = DAT_2022524c + -2;
            DAT_2022524c = DAT_2022524c + 1;
            iVar3 = FUN_2000fc70(iVar3 * 0x100 + DAT_20225250);
            if (iVar3 == 0) {
              return;
            }
          } while (DAT_2022524c + -2 < DAT_20225248);
        }
        if (DAT_20225250 != 0) {
          FUN_200f9d32(DAT_20225250);
          DAT_20225250 = 0;
        }
        DAT_2022524c = 0;
        DAT_20225240 = DAT_20225240 + 1;
      } while (DAT_20225240 < 0x5d5);
      DAT_20225240 = 0x5da;
    }
LAB_20010fb2:
    do {
      if ((&DAT_201e94cc)[DAT_20225240 * 0x40] == '\0') break;
      Com_sprintf(local_c0,0x80,&DAT_2011d114,&DAT_201e94cc + DAT_20225240 * 0x40);
      DAT_20225240 = DAT_20225240 + 1;
      iVar3 = FUN_2000fc70(local_c0);
      if (iVar3 == 0) {
        return;
      }
    } while (DAT_20225240 < 0xdd9);
LAB_20011018:
    DAT_20225240 = 0xde4;
    DAT_2022524c = 0;
    FUN_2001a000(&DAT_201e9dcc,1);
    FUN_200180b0(&DAT_201e9dcc,local_40);
    pbVar8 = &DAT_201e964c;
    pbVar4 = local_40;
    do {
      bVar2 = *pbVar4;
      bVar12 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_20011077:
        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_2001107c;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar12 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_20011077;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_2001107c:
    if (iVar3 != 0) {
      FUN_2000ba00(0x415);
      return;
    }
    bVar12 = DAT_20225240 == 0xde3;
  }
  else {
    if (DAT_20225240 == 0xc) goto LAB_2001086f;
    if (DAT_20225240 == 0xd) goto LAB_20010952;
    if (DAT_20225240 == 0xe) goto LAB_20010a55;
    if (0x122 < DAT_20225240) {
      if (0x286 < DAT_20225240) goto LAB_20010c02;
      goto LAB_20010b68;
    }
    if (0x286 < DAT_20225240) {
LAB_20010c02:
      if (0x386 < DAT_20225240) goto LAB_20010d44;
      goto LAB_20010c0e;
    }
    if (0x386 < DAT_20225240) {
LAB_20010d44:
      if (0x486 < DAT_20225240) goto LAB_20010daf;
      if (DAT_20225240 == 0x387) goto LAB_20010d54;
      goto LAB_20010d59;
    }
LAB_20010daf:
    if (0x5a6 < DAT_20225240) {
      if (0x5b6 < DAT_20225240) goto LAB_20010e47;
      if (DAT_20225240 == 0x5a7) goto LAB_20010dcf;
      goto LAB_20010dd4;
    }
    if (0x5b6 < DAT_20225240) {
LAB_20010e47:
      if (0x5d4 < DAT_20225240) goto LAB_20010f85;
      goto LAB_20010e53;
    }
LAB_20010f85:
    if ((0x5d8 < DAT_20225240) && (DAT_20225240 < 0xdb7)) {
      if (DAT_20225240 == 0x5d9) goto LAB_20010f9d;
      if (0xdd8 < DAT_20225240) goto LAB_20011018;
      goto LAB_20010fb2;
    }
    bVar12 = false;
    if (DAT_20225240 == 0xde3) goto LAB_20011018;
  }
  if ((bVar12 || DAT_20225240 < 0xde3) || (0xde9 < DAT_20225240)) {
    if (DAT_20225240 != 0xdea) goto LAB_20011231;
  }
  else {
    if ((*(float *)(DAT_203fec74 + 0x18) != 0.0) && (DAT_201e954c != '\0')) {
      Com_sprintf(local_c0,0x80,s_pics_sky__s_txt_2011f33c,&DAT_201e954c);
      if (DAT_2022524c == 0) {
        DAT_2022524c = 1;
        iVar3 = FUN_2000fc70(local_c0);
        if (iVar3 == 0) {
          return;
        }
      }
      if (DAT_2022524c == 1) {
        DAT_2022524c = 2;
        FUN_2000fe00(local_c0,&DAT_202250c0);
      }
      while (DAT_20225240 < 0xdea) {
        iVar3 = DAT_20225240 + -0xde4;
        DAT_20225240 = DAT_20225240 + 1;
        iVar3 = iVar3 * 0x40;
        if (((&DAT_202250c0)[iVar3] != '\0') &&
           (iVar3 = FUN_2000fc70(&DAT_202250c0 + iVar3), iVar3 == 0)) {
          return;
        }
      }
    }
    DAT_20225240 = 0xdea;
    DAT_2022524c = 0;
  }
  if (*(float *)(DAT_203fec74 + 0x18) != 0.0) {
    piVar5 = (int *)FUN_20018050(&DAT_201e9dcc,5,0);
    iVar3 = *piVar5;
    if (DAT_2022524c < piVar5[2]) {
      do {
        iVar6 = DAT_2022524c * 0x4c;
        DAT_2022524c = DAT_2022524c + 1;
        Com_sprintf(local_c0,0x80,s_textures__s_m32_2011f32c,iVar3 + 0x28 + iVar6);
        iVar6 = FUN_2000fc70(local_c0);
        if (iVar6 == 0) {
          return;
        }
      } while (DAT_2022524c < piVar5[2]);
    }
  }
  DAT_20225240 = 0x11d1;
LAB_20011231:
  (*DAT_20390d44)();
  FUN_2002d570();
  puVar11 = &DAT_20221590;
  pcVar9 = &DAT_201eddcc;
  do {
    if (*pcVar9 != '\0') {
      uVar7 = (*DAT_20390d88)(pcVar9);
      *puVar11 = uVar7;
      FUN_20065cf0();
    }
    pcVar9 = pcVar9 + 0x40;
    puVar11 = puVar11 + 1;
  } while ((int)pcVar9 < 0x201f368c);
  (*DAT_20390d60)(&DAT_201e97cc);
  (*DAT_20390d5c)(&DAT_201e980c);
  (*DAT_20390d58)();
  FUN_200168b0();
  FUN_200317f0();
  piVar5 = (int *)FUN_20069630(1,0);
  (**(code **)(*piVar5 + 0x5c))();
  piVar5 = (int *)FUN_20069630(1,0);
  (**(code **)(*piVar5 + 0x1c))();
  FUN_20017e50();
  FUN_2000c770();
  uVar7 = FUN_20055450(s_sv_precache__i_2011f31c,DAT_20225244);
  FUN_20018180(uVar7);
  return;
}

