// rea decompile_all
// name: FUN_20037410
// address: 0x20037410
// body: available
// range: 0x20037410-0x200379d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20037410(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int in_ECX;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  char *pcVar24;
  undefined1 local_108 [260];
  
  if (*(int *)(in_ECX + 0x248) != 0) {
    FUN_20034e30();
    return;
  }
  uVar13 = *(uint *)(in_ECX + 0x7c);
  if ((int)uVar13 < 0) {
    uVar13 = uVar13 + ((-uVar13 - 1) / 0x1f + 1) * 0x1f;
  }
  if (0x1e < (int)uVar13) {
    uVar13 = uVar13 % 0x1f;
  }
  if ((int)uVar13 < 6) {
    cVar1 = '\x02';
  }
  else if ((int)uVar13 < 0x10) {
    cVar1 = '\x06';
  }
  else {
    cVar1 = (0x17 < (int)uVar13) * '\b' + '\x10';
  }
  FUN_2002e3e0(uVar13,2);
  uVar19 = 3;
  uVar17 = uVar13;
  FUN_2002e3e0();
  FUN_2002e3e0(uVar13,4,uVar17,uVar19);
  FUN_2002e3e0(uVar13,5);
  uVar14 = 6;
  uVar17 = uVar13;
  uVar19 = FUN_2002e3e0();
  uVar14 = FUN_2002e3e0(uVar13,7,uVar17,uVar14);
  uVar3 = FUN_2002e3e0(uVar13,8);
  uVar4 = FUN_2002e3e0();
  uVar5 = FUN_2002e3e0(uVar13,10);
  uVar20 = 0xb;
  uVar17 = uVar13;
  uVar6 = FUN_2002e3e0();
  uVar20 = FUN_2002e3e0(uVar13,0xc,uVar17,uVar20);
  uVar7 = FUN_2002e3e0(uVar13,0xd);
  uVar15 = 0xe;
  uVar17 = uVar13;
  FUN_2002e3e0();
  uVar15 = FUN_2002e3e0(uVar13,0x10,uVar17,uVar15);
  uVar8 = FUN_2002e3e0(uVar13,0x11);
  FUN_2002e3e0();
  FUN_2002e3e0(uVar13,0x13);
  uVar21 = 0x14;
  uVar17 = uVar13;
  FUN_2002e3e0();
  FUN_2002e3e0(uVar13,0x16,uVar17,uVar21);
  FUN_2002e3e0(uVar13,0x17);
  uVar16 = 0x18;
  uVar17 = uVar13;
  uVar21 = FUN_2002e3e0();
  uVar16 = FUN_2002e3e0(uVar13,0x19,uVar17,uVar16);
  uVar9 = FUN_2002e3e0(uVar13,0x1a);
  uVar10 = FUN_2002e3e0();
  uVar11 = FUN_2002e3e0(uVar13,0x1c);
  uVar22 = 0x1d;
  uVar17 = uVar13;
  uVar12 = FUN_2002e3e0();
  uVar22 = FUN_2002e3e0(uVar13,0x1e,uVar17,uVar22);
  switch(cVar1) {
  case '\x02':
    uVar19 = FUN_2002e3e0(uVar13,0);
    puVar18 = &DAT_20133e14;
    Com_Printf();
    uVar19 = FUN_2002e3e0(uVar13,1,puVar18,uVar19);
    Com_Printf(&DAT_20133dfc,uVar19);
    Com_Printf();
    Com_Printf();
    return;
  default:
    goto switchD_2003762e_caseD_4;
  case '\x06':
    break;
  case '\x10':
    uVar19 = FUN_20041d10(*(undefined4 *)(in_ECX + 0x28),1);
    Com_Printf(&DAT_20133c10,uVar15,uVar19);
    uVar19 = FUN_20041d10();
    uVar14 = FUN_2002e3e0(uVar13,0x15,uVar19);
    uVar23 = CONCAT44(uVar19,uVar14);
    uVar19 = FUN_20041d10();
    Com_Printf(&DAT_20133bd0,uVar8,uVar19,uVar23);
    FUN_20041d10();
    Com_Printf();
    Com_Printf();
    return;
  case '\x18':
    uVar19 = FUN_20041d10(*(undefined4 *)(in_ECX + 0x2c),8);
    uVar23 = CONCAT44(uVar19,uVar11);
    uVar19 = FUN_20041d10();
    Com_Printf(&DAT_20133b08,uVar21,uVar19,uVar23);
    uVar19 = FUN_20041d10();
    uVar23 = CONCAT44(uVar19,uVar12);
    uVar19 = FUN_20041d10();
    Com_Printf(&DAT_20133ab8,uVar16,uVar19,uVar23);
    uVar19 = FUN_20041d10();
    uVar23 = CONCAT44(uVar19,uVar22);
    uVar19 = FUN_20041d10();
    Com_Printf(&DAT_20133a68,uVar9,uVar19,uVar23);
    if (*(int *)(in_ECX + 0x20) == 3) {
      uVar19 = FUN_20041d10(*(undefined4 *)(in_ECX + 0x2c),0x40);
      Com_Printf(&DAT_20133a3c,uVar10,uVar19);
      return;
    }
    goto LAB_200379bc;
  }
  switch(*(undefined4 *)(in_ECX + 0x20)) {
  case 0:
    uVar23 = CONCAT44(s_From_a_Spot_20133da0,local_108);
    break;
  case 1:
    uVar23 = CONCAT44(s_From_a_Region_20133d90,local_108);
    break;
  case 2:
    pcVar24 = s_In_a_Line_20133d84;
    goto LAB_2003771d;
  case 3:
    uVar23 = CONCAT44(s_In_a_Ring_20133d78,local_108);
    break;
  case 4:
    uVar23 = CONCAT44(s_In_a_Directed_Line_20133d64,local_108);
    break;
  case 5:
    pcVar24 = s_From_Position2_20133d54;
    goto LAB_2003771d;
  case 6:
    uVar23 = CONCAT44(s_From_the_floor_beneath_the_effec_20133d30,local_108);
    break;
  case 7:
    uVar23 = CONCAT44(s_From_the_ceiling_above_the_effec_20133d0c,local_108);
    break;
  case 8:
    pcVar24 = s_From_surface_in_front_of_effect_20133cec;
LAB_2003771d:
    uVar23 = CONCAT44(pcVar24,local_108);
    break;
  default:
    goto switchD_200376bb_default;
  }
  FUN_200fabac(uVar23);
switchD_200376bb_default:
  Com_Printf(&DAT_20133cd4,uVar19,local_108);
  Com_Printf(&DAT_20133cbc,uVar14,*(undefined4 *)(in_ECX + 0x24));
  iVar2 = *(int *)(in_ECX + 0x20);
  if (iVar2 == 0) {
    Com_Printf();
  }
  else if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 4)) {
    Com_Printf(&DAT_20133c50,uVar3,(double)*(float *)(in_ECX + 0x30),uVar4,
               (double)*(float *)(in_ECX + 0x34),uVar5,(double)*(float *)(in_ECX + 0x38),uVar6,
               (double)*(float *)(in_ECX + 0x3c),uVar20,(double)*(float *)(in_ECX + 0x40),uVar7,
               (double)*(float *)(in_ECX + 0x44));
  }
  else if (iVar2 == 3) {
    Com_Printf();
  }
  if ((*(int *)(in_ECX + 0x20) == 2) || (*(int *)(in_ECX + 0x20) == 4)) {
    FUN_2002e3e0();
    Com_Printf();
    return;
  }
LAB_200379bc:
  Com_Printf();
switchD_2003762e_caseD_4:
  return;
}

