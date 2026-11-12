// rea decompile_all
// name: FUN_20030d50
// address: 0x20030d50
// body: available
// range: 0x20030d50-0x2003117a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_20030d50(int param_1)

{
  float fVar1;
  undefined2 extraout_var;
  float *pfVar2;
  undefined2 extraout_var_00;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8 [10];
  int local_80;
  float local_70 [2];
  undefined1 local_68 [48];
  undefined1 local_38 [56];
  
  _DAT_2027c44c = DAT_201e8fc8;
  _DAT_2027c448 = param_1;
  fVar1 = *(float *)(DAT_2027c474 + 0x18);
  uVar4 = CONCAT22((short)((uint)DAT_201e8fc8 >> 0x10),
                   (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                   (ushort)(fVar1 == 0.0) << 0xe);
  if (fVar1 != 0.0) goto LAB_20031171;
  if ((DAT_201e8fe8 != 95.0) && (param_1 == 5)) {
    local_12c = 0;
    local_128 = 0;
    local_124 = 0;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_114 = 0;
    local_110 = 0;
    local_10c = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 1;
    local_108 = 0x3f800000;
    local_104 = 0;
    local_100 = 0;
    local_f0 = 0;
    local_ec = 0x3f800000;
    local_e8 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0x3f800000;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 0;
    FUN_20043460(s_weapons_playermz_sniper_alt_20132e34,&local_12c,2);
  }
  local_130 = DAT_201e8ff8 - 256.0;
  local_138 = DAT_201e8ff0;
  uVar4 = param_1 - 1;
  local_134 = DAT_201e8ff4;
  switch(uVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
    fVar9 = (float10)flrand(0,0x3f800000);
    fVar8 = (float10)0.5;
    uVar4 = CONCAT22(extraout_var,
                     (ushort)(fVar9 < fVar8) << 8 | (ushort)(NAN(fVar9) || NAN(fVar8)) << 10 |
                     (ushort)(fVar9 == fVar8) << 0xe);
    if (fVar9 < fVar8) {
      pfVar2 = (float *)FUN_200119c0(local_38,&DAT_201e8ff0,&DAT_20390c24,&DAT_20390c24,&local_138);
      pfVar6 = pfVar2;
      pfVar7 = local_a8;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      uVar4 = CONCAT22((short)((uint)pfVar2 >> 0x10),
                       (ushort)(local_a8[1] < 1.0) << 8 | (ushort)NAN(local_a8[1]) << 10 |
                       (ushort)(local_a8[1] == 1.0) << 0xe);
      pfVar6 = local_a8;
      pfVar7 = local_70;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      if (local_a8[1] < 1.0) {
        uVar4 = (uint)(byte)(&DAT_201348bf)[*(char *)(local_80 + 0x23) * 0x10];
        if ((uVar4 == 0x27) || (uVar4 == 0x25)) {
          fVar8 = (float10)flrand(0x3ecccccd,0x3f19999a);
          uVar4 = FUN_200f9f57(0x3f800000,0x40000000,(float)fVar8);
          uVar4 = uVar4 & 0x80000001;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
          }
          uVar3 = FUN_2002d860(uVar4 + 0x61);
          goto LAB_20031166;
        }
        if (uVar4 == 0x2c) {
          fVar8 = (float10)flrand(0x3ecccccd,0x3f19999a);
          iVar5 = FUN_200f9f57(0x3f800000,0x40000000,(float)fVar8);
          iVar5 = iVar5 % 3 + 0x5e;
          goto LAB_20031152;
        }
      }
    }
    break;
  case 4:
  case 7:
    pfVar2 = (float *)FUN_200119c0(local_38,&DAT_201e8ff0,&DAT_20390c24,&DAT_20390c24,&local_138);
    pfVar6 = pfVar2;
    pfVar7 = local_a8;
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    uVar4 = CONCAT22((short)((uint)pfVar2 >> 0x10),
                     (ushort)(local_a8[1] < 1.0) << 8 | (ushort)NAN(local_a8[1]) << 10 |
                     (ushort)(local_a8[1] == 1.0) << 0xe);
    pfVar6 = local_a8;
    pfVar7 = local_70;
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    if ((local_a8[1] < 1.0) &&
       (((uVar4 = (uint)(byte)(&DAT_201348bf)[*(char *)(local_80 + 0x23) * 0x10], uVar4 == 0x27 ||
         (uVar4 == 0x25)) || (uVar4 == 0x2c)))) {
      fVar8 = (float10)flrand(0x3ecccccd,0x3f333333);
      iVar5 = FUN_200f9f57(0x3f800000,0x40000000,(float)fVar8);
      iVar5 = iVar5 % 3 + 0x6f;
LAB_20031152:
      uVar3 = FUN_2002d860(iVar5);
LAB_20031166:
      uVar4 = (*DAT_20390d7c)(local_68,0,0,uVar3);
    }
    break;
  case 6:
    fVar9 = (float10)flrand(0,0x3f800000);
    fVar8 = (float10)0.75;
    uVar4 = CONCAT22(extraout_var_00,
                     (ushort)(fVar9 < fVar8) << 8 | (ushort)(NAN(fVar9) || NAN(fVar8)) << 10 |
                     (ushort)(fVar9 == fVar8) << 0xe);
    if (fVar9 < fVar8) {
      pfVar2 = (float *)FUN_200119c0(local_38,&DAT_201e8ff0,&DAT_20390c24,&DAT_20390c24,&local_138);
      pfVar6 = pfVar2;
      pfVar7 = local_a8;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      uVar4 = CONCAT22((short)((uint)pfVar2 >> 0x10),
                       (ushort)(local_a8[1] < 1.0) << 8 | (ushort)NAN(local_a8[1]) << 10 |
                       (ushort)(local_a8[1] == 1.0) << 0xe);
      pfVar6 = local_a8;
      pfVar7 = local_70;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      if ((local_a8[1] < 1.0) &&
         (((uVar4 = (uint)(byte)(&DAT_201348bf)[*(char *)(local_80 + 0x23) * 0x10], uVar4 == 0x27 ||
           (uVar4 == 0x25)) || (uVar4 == 0x2c)))) {
        fVar8 = (float10)flrand(0x3ecccccd,0x3f4ccccd);
        iVar5 = FUN_200f9f57(0x3f800000,0x40000000,(float)fVar8);
        iVar5 = iVar5 % 3 + 0x6c;
        goto LAB_20031152;
      }
    }
  }
LAB_20031171:
  return uVar4 & 0xffffff00;
}

