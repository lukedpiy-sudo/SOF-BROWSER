// rea decompile_all
// name: FUN_20034e30
// address: 0x20034e30
// body: available
// range: 0x20034e30-0x20035ce8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_20034e30(void)

{
  float fVar1;
  float fVar2;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  char *pcVar38;
  float *in_ECX;
  float fVar39;
  int iVar40;
  char *pcVar41;
  int iVar42;
  int iVar43;
  undefined *puVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  undefined8 uVar52;
  undefined1 local_108 [260];
  
  fVar39 = in_ECX[0x6f];
  if ((int)fVar39 < 0) {
    fVar39 = (float)((int)fVar39 + ((-(int)fVar39 - 1U) / 0x53 + 1) * 0x53);
  }
  iVar40 = (int)fVar39 % 0x53;
  if (iVar40 < 0xd) {
    iVar42 = 0;
  }
  else if (iVar40 < 0x19) {
    iVar42 = 0xd;
  }
  else if (iVar40 < 0x24) {
    iVar42 = 0x19;
  }
  else if (iVar40 < 0x2e) {
    iVar42 = 0x24;
  }
  else if (iVar40 < 0x36) {
    iVar42 = 0x2e;
  }
  else if (iVar40 < 0x42) {
    iVar42 = 0x36;
  }
  else if (iVar40 < 0x49) {
    iVar42 = 0x42;
  }
  else {
    iVar42 = ((0x4e < iVar40) - 1 & 0xfffffffa) + 0x4f;
  }
  uVar3 = FUN_2002e3e0(iVar40,1);
  uVar4 = FUN_2002e3e0(iVar40,2);
  uVar5 = FUN_2002e3e0(iVar40,3);
  uVar6 = FUN_2002e3e0(iVar40,4);
  uVar45 = 5;
  iVar43 = iVar40;
  uVar7 = FUN_2002e3e0();
  uVar45 = FUN_2002e3e0(iVar40,6,iVar43,uVar45);
  uVar8 = FUN_2002e3e0(iVar40,7);
  uVar9 = FUN_2002e3e0(iVar40,8);
  uVar10 = FUN_2002e3e0(iVar40,9);
  uVar11 = FUN_2002e3e0(iVar40,10);
  uVar12 = FUN_2002e3e0(iVar40,0xb);
  uVar13 = FUN_2002e3e0(iVar40,0xc);
  uVar46 = 0xd;
  iVar43 = iVar40;
  uVar14 = FUN_2002e3e0();
  uVar46 = FUN_2002e3e0(iVar40,0xe,iVar43,uVar46);
  uVar15 = FUN_2002e3e0(iVar40,0xf);
  uVar16 = FUN_2002e3e0(iVar40,0x10);
  uVar17 = FUN_2002e3e0(iVar40,0x11);
  uVar18 = FUN_2002e3e0(iVar40,0x13);
  uVar19 = FUN_2002e3e0(iVar40,0x14);
  uVar20 = FUN_2002e3e0(iVar40,0x15);
  uVar47 = 0x16;
  iVar43 = iVar40;
  uVar21 = FUN_2002e3e0();
  uVar47 = FUN_2002e3e0(iVar40,0x12,iVar43,uVar47);
  uVar22 = FUN_2002e3e0(iVar40,0x17);
  uVar23 = FUN_2002e3e0(iVar40,0x18);
  uVar24 = FUN_2002e3e0(iVar40,0x1a);
  uVar25 = FUN_2002e3e0(iVar40,0x1b);
  FUN_2002e3e0(iVar40,0x1c);
  FUN_2002e3e0(iVar40,0x1d);
  uVar48 = 0x1e;
  iVar43 = iVar40;
  uVar26 = FUN_2002e3e0();
  uVar48 = FUN_2002e3e0(iVar40,0x1f,iVar43,uVar48);
  uVar27 = FUN_2002e3e0(iVar40,0x21);
  uVar28 = FUN_2002e3e0(iVar40,0x22);
  FUN_2002e3e0(iVar40,0x23);
  uVar29 = FUN_2002e3e0(iVar40,0x2c);
  uVar30 = FUN_2002e3e0(iVar40,0x24);
  uVar31 = FUN_2002e3e0(iVar40,0x25);
  uVar49 = 0x26;
  iVar43 = iVar40;
  FUN_2002e3e0();
  FUN_2002e3e0(iVar40,0x27,iVar43,uVar49);
  FUN_2002e3e0(iVar40,0x28);
  FUN_2002e3e0(iVar40,0x29);
  uVar49 = FUN_2002e3e0(iVar40,0x2a);
  uVar32 = FUN_2002e3e0(iVar40,0x42);
  uVar33 = FUN_2002e3e0(iVar40,0x43);
  uVar34 = FUN_2002e3e0(iVar40,0x44);
  uVar50 = 0x45;
  iVar43 = iVar40;
  uVar35 = FUN_2002e3e0();
  uVar50 = FUN_2002e3e0(iVar40,0x46,iVar43,uVar50);
  uVar36 = FUN_2002e3e0(iVar40,0x47);
  uVar37 = FUN_2002e3e0(iVar40,0x48);
  pcVar38 = (char *)FUN_2002e3e0(iVar40,0x49);
  switch(iVar42) {
  case 0:
    uVar14 = FUN_2002e3e0(iVar40,0);
    Com_Printf(&DAT_20133a0c,uVar14);
    Com_Printf(&DAT_201339c0,uVar3,(double)*in_ECX,uVar4,(double)in_ECX[1],uVar8,(double)in_ECX[6],
               uVar9,(double)in_ECX[7]);
    Com_Printf(&DAT_20133970,uVar5,(double)in_ECX[2],uVar6,(double)in_ECX[3],uVar10,
               (double)in_ECX[8],uVar11,(double)in_ECX[9]);
    Com_Printf(&PTR_DAT_20133920,uVar7,(double)in_ECX[4],uVar45,(double)in_ECX[5],uVar12,
               (double)in_ECX[10],uVar13,(double)in_ECX[0xb]);
    return;
  default:
    return;
  case 0xd:
    break;
  case 0x19:
    switch(in_ECX[0x6d]) {
    case 0.0:
      pcVar38 = s_Linear_Fall_20132fb0;
      break;
    case 1.4013e-45:
      pcVar38 = s_Linear_Rise_20132fa4;
      break;
    case 2.8026e-45:
      pcVar38 = s_L_Rise_Fall_20132f98;
      break;
    case 4.2039e-45:
      pcVar38 = s_TrigRiseFall_20132f88;
      break;
    default:
      pcVar38 = &DAT_2015ee44;
    }
    switch(in_ECX[0x6e]) {
    case 0.0:
      pcVar41 = s_Random_Linear_20132fe4;
      break;
    case 1.4013e-45:
      pcVar41 = s_Random_Any_20132fd8;
      break;
    case 2.8026e-45:
      pcVar41 = s_Linear_Slide_20132fc8;
      break;
    case 4.2039e-45:
      pcVar41 = s_Trig_Slide_20132fbc;
      break;
    default:
      pcVar41 = &DAT_2015ee44;
    }
    uVar3 = FUN_2002e3e0(iVar40,0x20,pcVar38);
    uVar3 = FUN_2002e3e0(iVar40,0x19,pcVar41,uVar3);
    Com_Printf(&DAT_201336e0,uVar3);
    Com_Printf(&DAT_20133690,uVar24,(double)in_ECX[0x2a],uVar25,(double)in_ECX[0x2b],uVar27,
               (double)in_ECX[0x30],uVar28,(double)in_ECX[0x31]);
    Com_Printf();
    Com_Printf(&DAT_2013361c,uVar26,(double)in_ECX[0x2e],uVar48,(double)in_ECX[0x2f]);
    return;
  case 0x24:
    fVar39 = in_ECX[0x29];
    fVar1 = in_ECX[0x28];
    uVar3 = FUN_2002e3e0(iVar40,0x2b,in_ECX + 0x51);
    Com_Printf(&DAT_201335dc,uVar30,(double)fVar1,uVar31,(double)fVar39,uVar3);
    fVar39 = in_ECX[0xc];
    if (((fVar39 != 1.4013e-45) && (fVar39 != 4.2039e-45)) && (fVar39 != 5.60519e-45)) {
      Com_Printf();
      FUN_2002e3e0(iVar40,0x2d,(double)in_ECX[0x50]);
      Com_Printf();
      Com_Printf(&DAT_2013352c,uVar49,in_ECX + 0x18);
      return;
    }
    Com_Printf(&PTR_DAT_201334e8,uVar29,(double)in_ECX[0x33]);
    uVar3 = FUN_2002e3e0(iVar40,0x2d,(double)in_ECX[0x50]);
    Com_Printf(&PTR_DAT_201334a0,uVar3);
    Com_Printf(&DAT_2013352c,uVar49,in_ECX + 0x18);
    return;
  case 0x2e:
    uVar3 = FUN_2002e3e0(iVar40,0x35,(double)in_ECX[0x3f]);
    FUN_2002e3e0(iVar40,0x2f,(double)in_ECX[0x3c],uVar3);
    FUN_2002e3e0();
    Com_Printf();
    uVar3 = FUN_2002e3e0(iVar40,0x31,(double)in_ECX[0x3d]);
    uVar3 = FUN_2002e3e0(iVar40,0x30,(double)in_ECX[0x3a],uVar3);
    Com_Printf(&DAT_20133430,uVar3);
    uVar3 = FUN_2002e3e0(iVar40,0x33,(double)in_ECX[0x3e]);
    uVar3 = FUN_2002e3e0(iVar40,0x32,(double)in_ECX[0x3b],uVar3);
    Com_Printf(&DAT_20133408,uVar3);
    uVar3 = FUN_2002e3e0(iVar40,0x34,in_ECX + 0x40);
    Com_Printf(&DAT_201333ec,uVar3);
    return;
  case 0x36:
    fVar39 = in_ECX[0x67];
    fVar1 = in_ECX[0x62];
    fVar2 = in_ECX[0x61];
    uVar3 = FUN_2002e3e0(iVar40,0x3d,(double)in_ECX[0x68]);
    uVar3 = FUN_2002e3e0(iVar40,0x3c,(double)fVar39,uVar3);
    dVar51 = (double)fVar1;
    uVar4 = FUN_2002e3e0();
    uVar3 = FUN_2002e3e0(iVar40,0x36,(double)fVar2,uVar4,dVar51,uVar3);
    Com_Printf(&DAT_201333a0,uVar3);
    fVar39 = in_ECX[0x69];
    fVar1 = in_ECX[100];
    fVar2 = in_ECX[99];
    uVar3 = FUN_2002e3e0(iVar40,0x3f,(double)in_ECX[0x6a]);
    uVar3 = FUN_2002e3e0(iVar40,0x3e,(double)fVar39,uVar3);
    dVar51 = (double)fVar1;
    uVar4 = FUN_2002e3e0();
    uVar3 = FUN_2002e3e0(iVar40,0x38,(double)fVar2,uVar4,dVar51,uVar3);
    Com_Printf(&DAT_20133350,uVar3);
    fVar39 = in_ECX[0x6b];
    fVar1 = in_ECX[0x65];
    uVar3 = FUN_2002e3e0(iVar40,0x41,(double)in_ECX[0x6c]);
    FUN_2002e3e0(iVar40,0x40,(double)fVar39,uVar3);
    uVar3 = FUN_2002e3e0();
    uVar3 = FUN_2002e3e0(iVar40,0x3a,(double)fVar1,uVar3);
    Com_Printf(&PTR_DAT_20133300,uVar3);
    Com_Printf(&DAT_2011dd40);
    return;
  case 0x42:
    uVar3 = FUN_20041d10(in_ECX[0x38],0x10);
    uVar3 = FUN_20041d10(in_ECX[0x38],1,uVar50,uVar3);
    Com_Printf(&DAT_201332b0,uVar32,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],2);
    puVar44 = &DAT_20133284;
    Com_Printf();
    uVar3 = FUN_20041d10(in_ECX[0x38],0x40,puVar44,uVar33,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],4,uVar36,uVar3);
    Com_Printf(&DAT_20133238,uVar34,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x80);
    uVar3 = FUN_20041d10(in_ECX[0x38],8,uVar37,uVar3);
    Com_Printf(&DAT_201331e8,uVar35,uVar3);
    return;
  case 0x49:
    uVar3 = FUN_20041d10(in_ECX[0x38],0x1000);
    uVar3 = FUN_2002e3e0(iVar40,0x4b,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x100,uVar3);
    Com_Printf(&DAT_20133198,pcVar38,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x2000);
    uVar3 = FUN_2002e3e0(iVar40,0x4c,uVar3);
    Com_Printf(&PTR_DAT_20133148,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x10000);
    uVar3 = FUN_2002e3e0(iVar40,0x4d,uVar3);
    Com_Printf(&PTR_DAT_201330f8,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x8000);
    uVar3 = FUN_2002e3e0(iVar40,0x4e,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x800,uVar3);
    uVar3 = FUN_2002e3e0(iVar40,0x4a,uVar3);
    Com_Printf(&DAT_201330a8,uVar3);
    return;
  case 0x4f:
    uVar3 = FUN_20041d10(in_ECX[0x38],0x4000);
    uVar3 = FUN_2002e3e0(iVar40,0x4f,uVar3);
    Com_Printf(&DAT_20133078,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x20000);
    uVar3 = FUN_2002e3e0(iVar40,0x50,uVar3);
    Com_Printf(&DAT_2013304c,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x40000);
    uVar3 = FUN_2002e3e0(iVar40,0x51,uVar3);
    Com_Printf(&DAT_20133020,uVar3);
    uVar3 = FUN_20041d10(in_ECX[0x38],0x80000);
    uVar3 = FUN_2002e3e0(iVar40,0x52,uVar3);
    Com_Printf(&DAT_20132ff4,uVar3);
    return;
  }
  switch(in_ECX[0xc]) {
  case 0.0:
    uVar52 = CONCAT44(s_Sprite_20133918,local_108);
    break;
  case 1.4013e-45:
    pcVar41 = &DAT_20133910;
    goto LAB_200352e1;
  case 2.8026e-45:
    uVar52 = CONCAT44(s_Oriented_Sprite_20133900,local_108);
    break;
  case 4.2039e-45:
    uVar52 = CONCAT44(s_Ghoul_Object_201338f0,local_108);
    break;
  case 5.60519e-45:
    pcVar41 = s_Ghoul_Persistent_Debris_201338d8;
LAB_200352e1:
    uVar52 = CONCAT44(pcVar41,local_108);
    break;
  default:
    goto switchD_200352a1_default;
  }
  FUN_200fabac(uVar52);
switchD_200352a1_default:
  if (in_ECX[0xc] == 1.4013e-45) {
    switch(in_ECX[0x15]) {
    case 0.0:
      pcVar38 = s_Dir_of_Velocity_201338c8;
      break;
    case 1.4013e-45:
      pcVar38 = s_From_Server_201338bc;
      break;
    case 2.8026e-45:
      pcVar38 = s_End_of_Prev_201338b0;
      break;
    case 4.2039e-45:
      pcVar38 = s_End2_is_vel_201338a4;
    }
  }
  else {
    switch(in_ECX[0x15]) {
    case 0.0:
      pcVar38 = s_Forward_2013389c;
      break;
    case 1.4013e-45:
      pcVar38 = s_Right_20133894;
      break;
    case 2.8026e-45:
      pcVar38 = &DAT_20133890;
      break;
    case 4.2039e-45:
      pcVar38 = s_Backward_20133884;
    }
  }
  Com_Printf(&DAT_20133868,uVar14,local_108);
  if (((uint)in_ECX[0x38] & 1) == 0) {
    Com_Printf(&DAT_201337c8,uVar46,(double)in_ECX[0xd],uVar15,(double)in_ECX[0xe],uVar18,
               (double)in_ECX[0x11],uVar19,(double)in_ECX[0x12]);
    Com_Printf(&DAT_20133778,uVar16,(double)in_ECX[0xf],uVar17,(double)in_ECX[0x10],uVar20,
               (double)in_ECX[0x13],uVar21,(double)in_ECX[0x14]);
  }
  else {
    Com_Printf(&DAT_20133840,uVar46,(double)in_ECX[0xd],uVar15,(double)in_ECX[0xe]);
    Com_Printf(&DAT_20133818,uVar16,(double)in_ECX[0xf],uVar17,(double)in_ECX[0x10]);
  }
  fVar39 = in_ECX[0xc];
  if (fVar39 != 1.4013e-45) {
    if (((fVar39 != 0.0) && (fVar39 != 4.2039e-45)) && (fVar39 != 5.60519e-45)) {
      Com_Printf(&DAT_2013371c,uVar47,pcVar38);
      return;
    }
    Com_Printf();
    return;
  }
  Com_Printf(&DAT_20133734,uVar47,pcVar38,uVar22,(double)in_ECX[0x16],uVar23,(double)in_ECX[0x17]);
  return;
}

