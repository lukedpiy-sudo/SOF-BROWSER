// rea decompile_all
// name: FUN_500bdfa0
// address: 0x500bdfa0
// body: available
// range: 0x500bdfa0-0x500be58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500bdfa0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *this;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int *piVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  bool bVar14;
  longlong lVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_501151fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = (*DAT_5015cb4c)(s_sv_globalrankings_501502d0,&DAT_50144958,0);
  *(undefined4 *)(param_1 + 0x19c) = 2;
  *(undefined4 *)(param_1 + 0x158) = 3;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  if (*(float *)(iVar4 + 0x18) == 0.0) {
    FUN_50057170();
  }
  _DAT_5015cda0 = DAT_5015cbc8;
  _DAT_5015cda4 = 0;
  _DAT_5015d1bc = 0xc479c000;
  _DAT_5015d1c0 = 0;
  _DAT_5015cdb0 = 0;
  _DAT_5015cdac = 0;
  _DAT_5015cdb4 = 0;
  puVar12 = &DAT_5015cdb8;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  if (DAT_5015cc94 == (char *)0x0) {
    DAT_5015d968 = 0;
  }
  else {
    iVar4 = (int)&DAT_5015d968 - (int)DAT_5015cc94;
    pcVar5 = DAT_5015cc94;
    do {
      cVar1 = *pcVar5;
      pcVar5[iVar4] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  DAT_5015d248 = DAT_5015cc8c;
  DAT_5015d23c = DAT_5015cc90;
  if (DAT_5015cc78 == 0) {
    if ((DAT_5015cc7c == 0) || (iVar4 = DAT_5015cc7c, DAT_5015cc7c < 0)) goto LAB_500be16c;
  }
  else {
    iVar4 = 0;
  }
  if (*(int *)(param_1 + 0x210) == 0) {
    this = operator_new(0x70);
    if (this == (undefined1 *)0x0) {
      this = (undefined1 *)0x0;
    }
    else {
      param_1._0_1_ = SUB41(this,0);
      *(undefined4 *)(this + 4) = 0;
      *this = (undefined1)param_1;
      *(undefined4 *)(this + 8) = 0;
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      uStack_4._0_1_ = 2;
      uStack_4._1_3_ = 0;
      *(undefined ***)(this + 0x14) = &PTR_FUN_501298a8;
      *(undefined4 *)(this + 0x1c) = 0;
      FUN_500b6980((int)(this + 0x14));
      *(undefined4 *)(this + 0x2c) = 0;
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      *(undefined ***)(this + 0x28) = &PTR_FUN_501298b0;
      *(undefined4 *)(this + 0x30) = 0;
      FUN_500b70f0((int)(this + 0x28));
      *(int *)(this + 0x10) = iVar3;
      *(undefined4 *)(this + 0x1c) = 0;
      *(undefined4 *)(this + 0x30) = 0;
    }
    uStack_4 = 0xffffffff;
    *(undefined1 **)(iVar3 + 0x210) = this;
    if (this != (undefined1 *)0x0) {
      iVar6 = FUN_500b6a30(this,2);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar6 + 0x18) = 0xbf800000;
      }
      else if (iVar4 == 1) {
        *(undefined4 *)(iVar6 + 0x18) = 0xc0000000;
      }
    }
  }
LAB_500be16c:
  DAT_5015d238 = DAT_5015cc80;
  if (DAT_5015cc80 == 0) {
    DAT_5015d238 = 3;
  }
  DAT_5015d240 = 0;
  DAT_5015d244 = 0;
  FUN_500f3520();
  if (DAT_5015cbac != (char *)0x0) {
    iVar4 = (int)&DAT_5015cd60 - (int)DAT_5015cbac;
    pcVar5 = DAT_5015cbac;
    do {
      cVar1 = *pcVar5;
      pcVar5[iVar4] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  if ((*(char **)(iVar3 + 0x1ac) == (char *)0x0) || (**(char **)(iVar3 + 0x1ac) == '\0')) {
    _strncpy(&DAT_5015cce0,&DAT_5015cd20,0x40);
  }
  else {
    (*DAT_5015cb00)(0);
    _strncpy(&DAT_5015cce0,*(char **)(iVar3 + 0x1ac),0x40);
  }
  (*DAT_5015cb00)(2);
  if ((DAT_5015cba8 != (char *)0x0) && (*DAT_5015cba8 != '\0')) {
    FUN_500fe1e0(&DAT_50142f40);
    (*DAT_5015cb00)(0xe);
  }
  FUN_500fe1e0(&DAT_501431b4);
  (*DAT_5015cb00)();
  dVar19 = (double)_DAT_5015cba0;
  dVar18 = (double)_DAT_5015cb9c;
  dVar17 = (double)_DAT_5015cb98;
  pcVar5 = s__f__f__f_50145ee8;
  puVar7 = FUN_500fe1e0((byte *)s__f__f__f_50145ee8);
  (*DAT_5015cb00)(3,puVar7,pcVar5,dVar17,dVar18,dVar19);
  uVar8 = *(undefined4 *)(iVar3 + 0x314);
  puVar16 = &DAT_501502c4;
  puVar7 = FUN_500fe1e0(&DAT_501502c4);
  (*DAT_5015cb00)(1,puVar7,puVar16,uVar8);
  lVar15 = __ftol();
  uVar8 = (undefined4)lVar15;
  puVar16 = &DAT_501502c4;
  puVar7 = FUN_500fe1e0(&DAT_501502c4);
  (*DAT_5015cb00)(0x1f,puVar7,puVar16,uVar8);
  puVar7 = FUN_500fe1e0(&DAT_501502c4);
  (*DAT_5015cb00)(0xf,puVar7);
  if ((DAT_5015cba4 != (char *)0x0) && (*DAT_5015cba4 != '\0')) {
    puVar7 = FUN_500fe1e0(&DAT_50142f40);
    (*DAT_5015cb00)(0xd,puVar7);
  }
  if ((DAT_5015cc84 == (char *)0x0) || (*DAT_5015cc84 == '\0')) {
    (*DAT_5015cb00)(0xc);
  }
  else {
    puVar7 = FUN_500fe1e0(&DAT_50142f40);
    (*DAT_5015cb00)(0xc,puVar7);
  }
  DAT_5015d1b8 = DAT_5015cc88;
  if (DAT_5015cc30 != 0) {
    DAT_50188944 = FUN_500c3690();
    DAT_50188944[0x6d] = (int)s_script_runner_5012f5a4;
    FUN_500bd570(DAT_50188944);
  }
  DAT_5015d230 = 0;
  (*DAT_5015c9fc)();
  (*DAT_5015c9fc)(s_pics_scope_arrows128_2_50150294);
  (*DAT_5015c9fc)();
  (*DAT_5015c9fc)(s_pics_scope_arrows128_4_50150264);
  (*DAT_5015cb50)(s_sv_gravity_5014cb14);
  (*DAT_5015cb00)(0x487);
  (*DAT_5015cb00)(0x488,s_mmnmmommommnonmmonqnmmo_5015024c);
  (*DAT_5015cb00)(0x489,s_abcdefghijklmnopqrstuvwxyzyxwvut_50150218);
  (*DAT_5015cb00)(0x48a,s_mmmmmaaaaammmmmaaaaaabcdefgabcde_501501f4);
  (*DAT_5015cb00)(0x48b,s_mamamamamama_501501e4);
  (*DAT_5015cb00)(0x48c,s_jklmnopqrstuvwxyzyxwvutsrqponmlk_501501c0);
  (*DAT_5015cb00)(0x48d,s_nmonqnmomnmomomno_501501ac);
  (*DAT_5015cb00)(0x48e,s_mmmaaaabcdefgmmmmaaaammmaamm_5015018c);
  (*DAT_5015cb00)(0x48f);
  (*DAT_5015cb00)(0x490,s_aaaaaaaazzzzzzzz_5015014c);
  (*DAT_5015cb00)(0x491,s_mmamammmmammamamaaamammma_50150130);
  (*DAT_5015cb00)(0x492,s_abcdefghijklmnopqrrqponmlkjihgfe_50150108);
  (*DAT_5015cb00)(0x493,s_mkigegik_501500fc);
  (*DAT_5015cb00)(0x494,&DAT_501500f8);
  (*DAT_5015cb00)(0x4c6,&DAT_50144224);
  (*DAT_5015cb50)(s_timescale_501500ec,&DAT_5014caec);
  FUN_500bdf80();
  uVar8 = DAT_501889c4;
  param_1 = 0;
  pbVar13 = (byte *)0x0;
  DAT_501889c4 = 1;
  do {
    if (param_1 == 0) {
      pbVar13 = *(byte **)(iVar3 + 0x1ec);
    }
    else if (param_1 == 1) {
      pbVar13 = *(byte **)(iVar3 + 0x1f0);
    }
    else if (param_1 == 2) {
      pbVar13 = *(byte **)(iVar3 + 500);
    }
    if (pbVar13 != (byte *)0x0) {
      pbVar11 = &DAT_5015911c;
      pbVar9 = pbVar13;
      do {
        bVar2 = *pbVar9;
        bVar14 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_500be53d:
          iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_500be542;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar14 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_500be53d;
        pbVar9 = pbVar9 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_500be542:
      if (iVar4 != 0) {
        piVar10 = FUN_500c3690();
        piVar10[0x6d] = (int)pbVar13;
        FUN_500bd570(piVar10);
        FUN_500c3880(piVar10);
      }
    }
    param_1 = param_1 + 1;
    if (2 < param_1) {
      DAT_501889c4 = uVar8;
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

