// rea decompile_all
// name: FUN_2002df30
// address: 0x2002df30
// body: available
// range: 0x2002df30-0x2002e36d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002df30(int param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  void *pvVar5;
  int *in_ECX;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b162;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_2002ea80(param_1);
  }
  if ((float)param_2 == 0.0) {
    ExceptionList = local_c;
    return;
  }
  switch(in_ECX[8]) {
  case 0:
    param_2 = operator_new(0x24c);
    local_4 = 0;
    if (param_2 == (void *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_200360a0();
    }
    local_4 = 0xffffffff;
    FUN_2002ed20(&param_2,in_ECX[4],&param_1);
    goto switchD_2002e13f_default;
  case 1:
    iVar4 = __ftol();
    *in_ECX = iVar4;
    if (iVar4 < 0) {
      do {
        iVar4 = iVar4 + 2;
      } while (iVar4 < 0);
      *in_ECX = iVar4;
    }
    iVar4 = *in_ECX;
    if (1 < iVar4) {
      do {
        iVar4 = iVar4 + -2;
      } while (1 < iVar4);
      *in_ECX = iVar4;
    }
    goto switchD_2002e13f_default;
  case 2:
    fVar3 = (float)param_2 * 0.05 + (float)in_ECX[1];
    in_ECX[1] = (int)fVar3;
    if ((float)in_ECX[2] < fVar3) {
      in_ECX[2] = (int)fVar3;
    }
    if ((float)in_ECX[6] < (float)in_ECX[1]) {
      in_ECX[6] = in_ECX[1];
    }
    if ((float)in_ECX[7] < (float)in_ECX[2]) {
      in_ECX[7] = in_ECX[2];
    }
    break;
  case 3:
    fVar3 = (float)param_2 * 0.05 + (float)in_ECX[2];
    in_ECX[2] = (int)fVar3;
    if (fVar3 < (float)in_ECX[1]) {
      in_ECX[1] = (int)fVar3;
    }
    if ((float)in_ECX[6] < (float)in_ECX[1]) {
      in_ECX[6] = in_ECX[1];
    }
    if ((float)in_ECX[7] < (float)in_ECX[2]) {
      in_ECX[7] = in_ECX[2];
    }
    break;
  default:
    uVar6 = in_ECX[8] - 4;
    iVar4 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 3U)) >> 2;
    uVar6 = uVar6 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    iVar7 = 0;
    for (puVar1 = *(undefined4 **)in_ECX[4]; puVar1 != (undefined4 *)in_ECX[4];
        puVar1 = (undefined4 *)*puVar1) {
      if (iVar7 == iVar4) goto switchD_2002e13f_switchD;
      iVar7 = iVar7 + 1;
    }
    if (iVar7 != iVar4) goto switchD_2002e13f_default;
switchD_2002e13f_switchD:
    switch(uVar6) {
    case 0:
      (**(code **)(*(int *)puVar1[2] + 0x14))();
      uVar6 = __ftol();
      if ((int)uVar6 < 0) {
        uVar6 = ((-uVar6 - 1) / 5 + 1) * 5 + uVar6;
      }
      if (4 < (int)uVar6) {
        uVar6 = uVar6 % 5;
      }
      iVar4 = puVar1[2];
      param_2 = *(void **)(iVar4 + 8);
      uVar2 = *(undefined4 *)(iVar4 + 0xc);
      FUN_200f9f75(iVar4);
      switch(uVar6) {
      case 0:
        pvVar5 = operator_new(0x24c);
        local_4 = 1;
        if (pvVar5 == (void *)0x0) {
LAB_2002e27a:
          param_1 = 0;
        }
        else {
          param_1 = FUN_200360a0();
        }
        break;
      case 1:
        pvVar5 = operator_new(100);
        local_4 = 2;
        if (pvVar5 == (void *)0x0) goto LAB_2002e27a;
        param_1 = FUN_2003c660();
        break;
      case 2:
        pvVar5 = operator_new(0x38);
        local_4 = 3;
        if (pvVar5 == (void *)0x0) goto LAB_2002e27a;
        param_1 = FUN_2003c830();
        break;
      case 3:
        pvVar5 = operator_new(100);
        local_4 = 4;
        if (pvVar5 == (void *)0x0) goto LAB_2002e27a;
        param_1 = FUN_2003ca20();
        break;
      case 4:
        pvVar5 = operator_new(0x2c);
        local_4 = 5;
        if (pvVar5 == (void *)0x0) goto LAB_2002e27a;
        param_1 = FUN_2003ce10();
        break;
      default:
        goto switchD_2002e1ba_default;
      }
      local_4 = 0xffffffff;
switchD_2002e1ba_default:
      puVar1[2] = param_1;
      *(void **)(param_1 + 8) = param_2;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      break;
    case 1:
      iVar4 = puVar1[2];
      fVar3 = (float)param_2 * 0.05 + *(float *)(iVar4 + 8);
      *(float *)(iVar4 + 8) = fVar3;
      if (*(float *)(iVar4 + 0xc) < fVar3) {
        *(float *)(iVar4 + 0xc) = fVar3;
      }
      goto LAB_2002e2f0;
    case 2:
      iVar4 = puVar1[2];
      fVar3 = (float)param_2 * 0.05 + *(float *)(iVar4 + 0xc);
      *(float *)(iVar4 + 0xc) = fVar3;
      if (fVar3 < *(float *)(iVar4 + 8)) {
        *(float *)(iVar4 + 8) = fVar3;
      }
LAB_2002e2f0:
      iVar4 = puVar1[2];
      pfVar8 = (float *)(iVar4 + 8);
      if (0.0 <= *pfVar8) {
        if (100.0 < *pfVar8) {
          *pfVar8 = 100.0;
        }
      }
      else {
        *pfVar8 = 0.0;
      }
      if (*(float *)(iVar4 + 0xc) < 0.0) {
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
      if (100.0 < *(float *)(iVar4 + 0xc)) {
        *(undefined4 *)(iVar4 + 0xc) = 0x42c80000;
      }
      break;
    case 3:
      in_ECX[9] = puVar1[2];
    }
    goto switchD_2002e13f_default;
  }
  if (0.0 <= (float)in_ECX[1]) {
    if (100.0 < (float)in_ECX[1]) {
      in_ECX[1] = 0x42c80000;
    }
  }
  else {
    in_ECX[1] = 0;
  }
  if ((float)in_ECX[2] < 0.0) {
    in_ECX[2] = 0;
  }
  if (100.0 < (float)in_ECX[2]) {
    in_ECX[2] = 0x42c80000;
  }
switchD_2002e13f_default:
  FUN_2002ea80(0);
  ExceptionList = local_c;
  return;
}

