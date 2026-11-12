// rea decompile_all
// name: FUN_500b5790
// address: 0x500b5790
// body: available
// range: 0x500b5790-0x500b5ef5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float __fastcall FUN_500b5790(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float local_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  int iStack_34c;
  int iStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_314;
  float fStack_310;
  float afStack_300 [4];
  undefined4 local_2f0;
  undefined4 auStack_2ec [12];
  float afStack_2bc [4];
  undefined4 local_2ac;
  float fStack_284;
  undefined1 auStack_278 [16];
  undefined4 local_268;
  undefined1 auStack_234 [16];
  undefined4 local_224;
  float afStack_1f4 [5];
  undefined4 local_1e0;
  float afStack_1ac [4];
  undefined4 local_19c;
  undefined1 auStack_198 [44];
  float afStack_16c [5];
  undefined4 local_158;
  float fStack_128;
  undefined1 auStack_124 [16];
  undefined4 local_114;
  float afStack_e4 [5];
  undefined4 local_d0;
  float afStack_9c [4];
  undefined4 local_8c;
  undefined1 auStack_5c [20];
  undefined4 local_48;
  undefined4 local_4;
  
  local_36c = 1.4013e-45;
  if ((((*param_1 != 0) && (*(int *)(*param_1 + 0x164) != 0)) &&
      ((*(char *)((int)param_1 + 0x3d) != '\0' || ((char)param_1[0xf] != '\0')))) &&
     (param_1[3] != 0)) {
    local_35c = (float)param_1[0xb];
    local_350 = (float)param_1[10];
    local_354 = (float)param_1[8];
    local_2ac = 0;
    local_158 = 0;
    local_2f0 = 0;
    local_1e0 = 0;
    local_48 = 0;
    local_268 = 0;
    local_224 = 0;
    local_d0 = 0;
    local_19c = 0;
    local_8c = 0;
    local_114 = 0;
    local_4 = 0;
    local_358 = (float)param_1[9];
    iVar2 = (**(code **)(*(int *)param_1[1] + 0x8c))();
    FUN_500c3da0((undefined4 *)(*param_1 + 4),(float *)(*param_1 + 0x10),auStack_2ec);
    fVar6 = 7.00649e-45;
    (**(code **)(*(int *)param_1[1] + 200))
              (DAT_5015ccdc,auStack_198,(short)param_1[2],5,*(undefined1 *)((int)param_1 + 0x3e));
    FUN_500ed0d0(&fStack_344,afStack_1ac,afStack_300);
    FUN_500ec880(auStack_234,&fStack_344);
    local_350 = (float)param_1[5];
    iStack_34c = param_1[6];
    iStack_348 = param_1[7];
    FUN_500ed3e0(auStack_234,&fStack_37c,&local_350);
    fVar5 = (float10)fpatan((float10)fStack_378,(float10)fStack_37c);
    fVar8 = (float)-fVar5;
    fVar5 = (float10)fpatan((float10)fStack_374,
                            SQRT((float10)fStack_378 * (float10)fStack_378 +
                                 (float10)fStack_37c * (float10)fStack_37c));
    fVar7 = (float)fVar5;
    if (iVar2 == *(int *)(*param_1 + 0x164)) {
      pfVar3 = afStack_300;
      pfVar4 = afStack_2bc;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
    }
    else {
      (**(code **)(*(int *)param_1[3] + 200))
                (DAT_5015ccdc,afStack_9c,CONCAT22((short)((uint)*param_1 >> 0x10),(short)param_1[4])
                 ,5,1);
      FUN_500ed0d0(afStack_2bc,afStack_9c,afStack_300);
    }
    local_358 = fStack_33c;
    fStack_360 = fStack_344;
    local_35c = fStack_340;
    fStack_37c = fStack_314;
    fStack_378 = fStack_310;
    FUN_500ec880(auStack_278,afStack_2bc);
    fStack_360 = fStack_360 * 100.0 + fStack_37c;
    local_35c = fStack_378 + local_35c * 100.0;
    local_358 = fStack_284 + local_358 * 100.0;
    FUN_500ed3e0(auStack_278,&fStack_37c,&fStack_360);
    fVar5 = (float10)fpatan((float10)fStack_378,(float10)fStack_37c);
    fVar9 = (float)-fVar5;
    fVar5 = (float10)fpatan((float10)fStack_374,
                            SQRT((float10)fStack_378 * (float10)fStack_378 +
                                 (float10)fStack_37c * (float10)fStack_37c));
    fVar10 = (float)fVar5;
    FUN_500ed3e0(auStack_278,&fStack_37c,&local_350);
    fVar5 = (float10)fpatan((float10)fStack_378,(float10)fStack_37c);
    local_354 = (float)-fVar5;
    fVar5 = (float10)fpatan((float10)fStack_374,
                            SQRT((float10)fStack_378 * (float10)fStack_378 +
                                 (float10)fStack_37c * (float10)fStack_37c));
    if (local_354 <= 3.1415927) {
      fVar1 = local_354;
      if (local_354 < -3.1415927) {
        fVar1 = local_354 + 6.2831855;
      }
    }
    else {
      fVar1 = -(6.2831855 - local_354);
    }
    if (fVar5 <= (float10)3.141592653589793) {
      if (fVar5 < (float10)-3.141592653589793) {
        fVar5 = fVar5 + (float10)6.283185307179586;
      }
    }
    else {
      fVar5 = -((float10)6.283185307179586 - fVar5);
    }
    if (fVar9 <= 3.1415927) {
      if (fVar9 < -3.1415927) {
        fVar9 = fVar9 + 6.2831855;
      }
    }
    else {
      fVar9 = -(6.2831855 - fVar9);
    }
    if (fVar10 <= 3.1415927) {
      if (fVar10 < -3.1415927) {
        fVar10 = fVar10 + 6.2831855;
      }
    }
    else {
      fVar10 = -(6.2831855 - fVar10);
    }
    if (((fVar1 < fStack_364 - 0.0005) && (*(char *)((int)param_1 + 0x3d) != '\0')) ||
       ((fStack_370 + 0.0005 < fVar1 &&
        (fStack_364 = fStack_370, *(char *)((int)param_1 + 0x3d) != '\0')))) {
      fVar8 = fStack_364 - fVar9;
    }
    if (((fVar5 < (float10)fStack_368 - (float10)0.0005) &&
        (fVar1 = fStack_368, (char)param_1[0xf] != '\0')) ||
       (((float10)local_36c + (float10)0.0005 < fVar5 &&
        (fVar1 = local_36c, (char)param_1[0xf] != '\0')))) {
      fVar7 = fVar1 - fVar10;
    }
    (**(code **)(*(int *)param_1[1] + 8))(auStack_124);
    if ((fVar7 <= 0.01) && (-0.01 <= fVar7)) {
      fVar7 = 0.0;
    }
    if ((fVar6 <= 0.01) && (-0.01 <= fVar6)) {
      fVar6 = 0.0;
    }
    if ((fVar7 <= (float)param_1[0xc]) || (*(char *)((int)param_1 + 0x3d) == '\0')) {
      if ((fVar7 < -(float)param_1[0xc]) && (*(char *)((int)param_1 + 0x3d) != '\0')) {
        fVar7 = -(float)param_1[0xc];
      }
    }
    else {
      fVar7 = (float)param_1[0xc];
    }
    if ((fVar6 <= (float)param_1[0xc]) || ((char)param_1[0xf] == '\0')) {
      if ((fVar6 < -(float)param_1[0xc]) && ((char)param_1[0xf] != '\0')) {
        fVar6 = -(float)param_1[0xc];
      }
    }
    else {
      fVar6 = (float)param_1[0xc];
    }
    if (fVar8 - fStack_374 <= 0.0001) {
      fStack_368 = fStack_368 - fVar8;
      if ((0.0001 < fStack_368) && (fVar7 = fStack_368, (float)param_1[0xc] < fStack_368)) {
        fVar7 = (float)param_1[0xc];
      }
    }
    else if (fVar8 - fStack_374 <= (float)param_1[0xc]) {
      fVar7 = fStack_374 - fVar8;
    }
    else {
      fVar7 = -(float)param_1[0xc];
    }
    if (fVar9 - fStack_370 <= 0.0001) {
      fVar10 = local_36c - fVar9;
      if ((0.0001 < fVar10) && (fVar6 = fVar10, (float)param_1[0xc] < fVar10)) {
        fVar6 = (float)param_1[0xc];
      }
    }
    else if ((float)param_1[0xc] < fVar9 - fStack_370) {
      fVar6 = -(float)param_1[0xc];
    }
    else {
      fVar6 = fStack_370 - fVar9;
    }
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      fVar7 = 0.0;
    }
    if ((char)param_1[0xf] == '\0') {
      fVar6 = 0.0;
    }
    param_1[0xe] = (int)(fVar7 + fVar8);
    param_1[0xd] = (int)(fVar6 + fVar9);
    FUN_500ecef0(afStack_1f4,1,fVar6);
    FUN_500ecef0(afStack_e4,2,fVar7);
    FUN_500ed0d0(afStack_16c,afStack_1f4,&fStack_128);
    FUN_500ed0d0(auStack_5c,afStack_e4,afStack_16c);
    (*(code *)**(undefined4 **)param_1[1])(auStack_5c);
    return fVar9;
  }
  return 4.2039e-45;
}

