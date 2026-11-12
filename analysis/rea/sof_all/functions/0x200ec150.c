// rea decompile_all
// name: FUN_200ec150
// address: 0x200ec150
// body: available
// range: 0x200ec150-0x200ed907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200ec150(int param_1,undefined4 param_2,undefined4 param_3)

{
  CFeelPeriodic *pCVar1;
  undefined4 uVar2;
  CFeelConstant *pCVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_24;
  undefined4 local_14;
  void *local_c;
  CFeelConstant *pCStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pCStack_8 = (CFeelConstant *)&LAB_2011066f;
  local_c = ExceptionList;
  local_24 = 1;
  switch(param_2) {
  case 0:
    uStack_3c = 0x200ec19b;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ec1bd;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x5f,10000,0);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112ff8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    (&DAT_204065a0)[param_1 * 3] = pCVar1;
    iVar4 = *(int *)pCVar1;
    local_24 = -1;
    uVar2 = __ftol(0xa0,10000,9000,0,0,0);
    (**(code **)(iVar4 + 0x1c))(local_14,uVar2);
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    *(CFeelPeriodic **)(&DAT_204065a4 + param_1 * 0xc) = pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x22,10000,31000,0,0,0);
    iVar4 = (**(code **)(iVar4 + 0x1c))(local_14,uVar2);
    break;
  case 1:
    uStack_3c = 0x200ec33d;
    ExceptionList = &local_c;
    pCVar3 = operator_new(0x84);
    local_4 = 3;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    local_4 = 0xffffffff;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar3;
    iVar4 = *(int *)pCVar3;
    uStack_3c = 0x200ec397;
    uStack_3c = __ftol();
    uStack_40 = 0x9c4;
    uVar2 = 0;
    goto LAB_200ed3ed;
  case 2:
    uStack_3c = 0x200ec3cc;
    ExceptionList = &local_c;
    pCVar3 = operator_new(0x84);
    local_4 = 4;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    local_4 = 0xffffffff;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar3;
    iVar4 = *(int *)pCVar3;
    uStack_3c = 0x200ec426;
    uStack_3c = __ftol();
    uStack_40 = 0x96;
    uVar2 = 18000;
    goto LAB_200ed3ed;
  case 3:
    uStack_3c = 0x200ec445;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 5;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ec467;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_40 = 0;
    uVar8 = 0;
    uVar6 = 10000;
    piVar5 = &DAT_2040659c + param_1 * 3;
    uVar2 = 0x32;
    *piVar5 = (int)pCVar1;
    goto LAB_200ec49f;
  case 4:
    uStack_3c = 0x200ec4d4;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 6;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ec4f6;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x3c,1000,9000);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    (&DAT_204065a0)[param_1 * 3] = pCVar1;
    iVar4 = *(int *)pCVar1;
    local_24 = -1;
    uVar2 = __ftol(100,1000,18000,4000,0,0);
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    break;
  case 5:
    uStack_3c = 0x200ec5e2;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 8;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ec604;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x3c,1000,9000);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    (&DAT_204065a0)[param_1 * 3] = pCVar1;
    iVar4 = *(int *)pCVar1;
    local_24 = -1;
    uVar2 = __ftol(100,1000,18000,5000,0,0);
    (**(code **)(iVar4 + 0x1c))(local_14,uVar2);
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    *(CFeelPeriodic **)(&DAT_204065a4 + param_1 * 0xc) = pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x154,1000,18000,4000,0,0);
    iVar4 = (**(code **)(iVar4 + 0x1c))(local_14,uVar2);
    break;
  case 6:
    uStack_3c = 0x200ec773;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0xb;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ec795;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112ff8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0xfa,10000,18000);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    (&DAT_204065a0)[param_1 * 3] = pCVar1;
    iVar4 = *(int *)pCVar1;
    local_24 = -1;
    uVar2 = __ftol(0x7d,10000,18000,0x5dc,0,0);
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    break;
  case 7:
    uStack_3c = 0x200ec884;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0xd;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ec8a6;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uVar8 = 18000;
    uVar6 = 300;
    uVar2 = 500;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar1;
    goto LAB_200ec8e3;
  case 8:
    uStack_3c = 0x200ec938;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0xe;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ec95a;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uVar8 = 0;
    uVar6 = 0xfa;
    piVar5 = &DAT_2040659c + param_1 * 3;
    uVar2 = 0x2ee;
    *piVar5 = (int)pCVar1;
LAB_200ec8e3:
    uStack_3c = 0;
    uStack_40 = 0;
    iVar4 = *(int *)pCVar1;
    local_4 = 0xffffffff;
    uVar2 = __ftol(uVar2,uVar6,uVar8);
LAB_200ec8f8:
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
LAB_200ec8fd:
    if (iVar4 != 0) {
      ExceptionList = local_c;
      return 1;
    }
    local_24 = 0;
    goto LAB_200ed8d4;
  case 9:
    uStack_3c = 0x200ec9a6;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0xf;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ec9c8;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0x9c4;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x46,1000,0);
    goto LAB_200ec8f8;
  case 10:
    uStack_3c = 0x200eca3d;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x10;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200eca5f;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    local_4 = 0xffffffff;
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x82,0x46,0);
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    goto LAB_200ed3f2;
  case 0xb:
    uStack_3c = 0x200ecad6;
    ExceptionList = &local_c;
    pCVar3 = operator_new(0x84);
    local_4 = 0x11;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    local_4 = 0xffffffff;
    (&DAT_204065a0)[param_1 * 3] = pCVar3;
    iVar4 = *(int *)pCVar3;
    uStack_3c = 0x200ecb36;
    uStack_3c = __ftol();
    uStack_40 = 400;
    (**(code **)(iVar4 + 0x1c))(param_3,18000);
    local_24 = 100000;
    pCVar3 = operator_new(0x84);
    pCStack_8 = pCVar3;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar3;
    iVar4 = *(int *)pCVar3;
    uVar2 = __ftol(&stack0xffffffcc);
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,0,1000,uVar2);
    break;
  case 0xc:
    uStack_3c = 0x200ecbfe;
    ExceptionList = &local_c;
    pCVar3 = operator_new(0x84);
    local_4 = 0x13;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    local_4 = 0xffffffff;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar3;
    iVar4 = *(int *)pCVar3;
    uStack_3c = 0x200ecc57;
    uStack_3c = __ftol();
    uStack_40 = 400;
    uVar2 = 0;
    goto LAB_200ed3ed;
  case 0xd:
    uStack_3c = 0x200ecc72;
    ExceptionList = &local_c;
    pCVar3 = operator_new(0x84);
    local_4 = 0x14;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    local_4 = 0xffffffff;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar3;
    iVar4 = *(int *)pCVar3;
    uStack_3c = 0x200eccc5;
    uStack_3c = __ftol();
    uStack_40 = 0x32;
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,18000);
    goto LAB_200ec8fd;
  case 0xe:
    uStack_3c = 0x200ecce6;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x15;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ecd08;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_40 = 0;
    uVar8 = 18000;
    uVar6 = 500;
    piVar5 = &DAT_2040659c + param_1 * 3;
    uVar2 = 1000;
    *piVar5 = (int)pCVar1;
    goto LAB_200ec49f;
  case 0xf:
    uStack_3c = 0x200ecd6f;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x16;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ecd91;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112ff8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    local_4 = 0xffffffff;
    piVar5 = &DAT_2040659c + param_1 * 3;
    uStack_3c = 0;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uStack_40 = 0;
    uVar2 = __ftol(0x50,2000,0);
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    if (iVar4 != 0) {
      ExceptionList = local_c;
      return 1;
    }
    local_24 = 0;
    goto LAB_200ed8d4;
  case 0x10:
    uStack_3c = 0x200ecdfe;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x17;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ece20;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_40 = 0;
    uVar2 = 0;
    uVar8 = 0x32;
    uVar6 = 0x82;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar1;
    goto LAB_200ed1c6;
  case 0x11:
    uStack_3c = 0x200ece66;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x18;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ece88;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(100,100,18000);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    uStack_3c = 0;
    pCVar3 = operator_new(0x84);
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    (&DAT_204065a0)[param_1 * 3] = pCVar3;
    goto LAB_200ed8a5;
  case 0x12:
    uStack_3c = 0x200ecf5d;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x1a;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ecf7f;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 2000;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x19,1000,18000);
    goto LAB_200ec4b4;
  case 0x13:
    uStack_3c = 0x200ecfe1;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x1b;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
      uStack_40 = 3000;
    }
    else {
      uStack_3c = 0x200ed003;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
      uStack_40 = 3000;
    }
    goto LAB_200ed133;
  case 0x14:
    uStack_3c = 0x200ed02f;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x1c;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
      uStack_40 = 0;
      uVar2 = 9000;
    }
    else {
      uStack_3c = 0x200ed051;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      uStack_40 = 0;
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
      uVar2 = 9000;
    }
    goto LAB_200ed1a1;
  case 0x15:
    uStack_3c = 0x200ed080;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x1d;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ed0a2;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x19,1000,9000);
    goto LAB_200ec4b4;
  case 0x16:
    uStack_3c = 0x200ed101;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x1e;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ed123;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_40 = 0;
LAB_200ed133:
    uVar8 = 0;
    uVar6 = 1000;
    uVar2 = 0x19;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar1;
LAB_200ec49f:
    uStack_3c = 0;
    iVar4 = *(int *)pCVar1;
    local_4 = 0xffffffff;
    uVar2 = __ftol(uVar2,uVar6,uVar8);
    goto LAB_200ec4b4;
  case 0x17:
    uStack_3c = 0x200ed16a;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x1f;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ed18c;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_40 = 2000;
    uVar2 = 0;
LAB_200ed1a1:
    uVar8 = 1000;
    uVar6 = 0x19;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar1;
LAB_200ed1c6:
    uStack_3c = 0;
    iVar4 = *(int *)pCVar1;
    local_4 = 0xffffffff;
    uVar2 = __ftol(uVar6,uVar8,uVar2);
    goto LAB_200ec4b4;
  case 0x18:
    uStack_3c = 0x200ed1ea;
    ExceptionList = &local_c;
    pCVar3 = operator_new(0x84);
    local_4 = 0x20;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    local_4 = 0xffffffff;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar3;
    iVar4 = *(int *)pCVar3;
    uStack_3c = 0x200ed241;
    uStack_3c = __ftol();
    uStack_40 = 10;
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,18000);
    goto LAB_200ec4b9;
  case 0x19:
    uStack_3c = 0x200ed262;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x21;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ed284;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0xfa,1000,18000);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    puVar7 = (undefined4 *)0x0;
    (&DAT_204065a0)[param_1 * 3] = pCVar1;
    uVar6 = 1000;
    uVar2 = 0x32;
    goto LAB_200ed348;
  case 0x1a:
    uStack_3c = 0x200ed387;
    ExceptionList = &local_c;
    pCVar3 = operator_new(0x84);
    local_4 = 0x23;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    local_4 = 0xffffffff;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar3;
    iVar4 = *(int *)pCVar3;
    uStack_3c = 0x200ed3e1;
    uStack_3c = __ftol();
    uStack_40 = 0xfa;
    uVar2 = 0;
LAB_200ed3ed:
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
LAB_200ed3f2:
    if (iVar4 != 0) {
      ExceptionList = local_c;
      return 1;
    }
    local_24 = 0;
    goto LAB_200ed8d4;
  case 0x1b:
    uStack_3c = 0x200ed40d;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x24;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ed42f;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112ff8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 1000;
    local_4 = 0xffffffff;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(100,1000,0);
LAB_200ec4b4:
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
LAB_200ec4b9:
    if (iVar4 != 0) {
      ExceptionList = local_c;
      return 1;
    }
    local_24 = 0;
    goto LAB_200ed8d4;
  case 0x1c:
    uStack_3c = 0x200ed4a7;
    ExceptionList = &local_c;
    pCVar3 = operator_new(0x84);
    local_4 = 0x25;
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    local_4 = 0xffffffff;
    uStack_3c = 0;
    uStack_40 = 0xfa;
    piVar5 = &DAT_2040659c + param_1 * 3;
    *piVar5 = (int)pCVar3;
    (**(code **)(*(int *)pCVar3 + 0x1c))(param_3,0);
    local_24 = 250000;
    pCVar1 = operator_new(0x90);
    pCStack_8 = (CFeelConstant *)pCVar1;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    (&DAT_204065a0)[param_1 * 3] = pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(0x1e,0xfa,0,0,0,&stack0xffffffcc);
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    break;
  case 0x1d:
    uStack_3c = 0x200ed5a0;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x27;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ed5c2;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0xffffec78;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(500,400,18000);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    uStack_3c = 0;
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    puVar7 = &uStack_40;
    (&DAT_204065a0)[param_1 * 3] = pCVar1;
    uVar6 = 0xfa;
    uVar2 = 0x1e;
    goto LAB_200ed348;
  case 0x1e:
    uStack_3c = 0x200ed6ac;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x29;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ed6ce;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0xfffff060;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(1000,800,18000);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    uStack_3c = 0;
    pCVar1 = operator_new(0x90);
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fc8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    puVar7 = &uStack_40;
    (&DAT_204065a0)[param_1 * 3] = pCVar1;
    uVar6 = 500;
    uVar2 = 0x23;
LAB_200ed348:
    iVar4 = *(int *)pCVar1;
    local_24 = -1;
    uVar2 = __ftol(uVar2,uVar6,0,0,0,puVar7);
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    break;
  case 0x1f:
    uStack_3c = 0x200ed7be;
    ExceptionList = &local_c;
    pCVar1 = operator_new(0x90);
    local_4 = 0x2b;
    if (pCVar1 == (CFeelPeriodic *)0x0) {
      pCVar1 = (CFeelPeriodic *)0x0;
    }
    else {
      uStack_3c = 0x200ed7e0;
      CFeelPeriodic::CFeelPeriodic(pCVar1,(_GUID *)&DAT_20112fb8);
      *(undefined ***)pCVar1 = &PTR_FUN_201133ac;
    }
    uStack_3c = 0;
    uStack_40 = 0;
    piVar5 = &DAT_2040659c + param_1 * 3;
    local_4 = 0xffffffff;
    *piVar5 = (int)pCVar1;
    iVar4 = *(int *)pCVar1;
    uVar2 = __ftol(100,100,18000);
    (**(code **)(iVar4 + 0x1c))(param_3,uVar2);
    uStack_3c = 0;
    pCVar3 = operator_new(0x84);
    if (pCVar3 == (CFeelConstant *)0x0) {
      pCVar3 = (CFeelConstant *)0x0;
    }
    else {
      CFeelConstant::CFeelConstant(pCVar3);
      *(undefined ***)pCVar3 = &PTR_FUN_20113384;
    }
    (&DAT_204065a0)[param_1 * 3] = pCVar3;
LAB_200ed8a5:
    iVar4 = *(int *)pCVar3;
    local_24 = -1;
    uVar2 = __ftol(&uStack_40);
    iVar4 = (**(code **)(iVar4 + 0x1c))(param_3,0,300,uVar2);
    break;
  default:
    goto switchD_200ec18a_default;
  }
  if (iVar4 == 0) {
    local_24 = 0;
  }
  else if (local_24 != 0) {
    ExceptionList = local_c;
    return local_24;
  }
LAB_200ed8d4:
  iVar4 = 3;
  do {
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      uStack_3c = 0x200ed8e5;
      (*(code *)**(undefined4 **)*piVar5)();
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
switchD_200ec18a_default:
  ExceptionList = local_c;
  return local_24;
}

