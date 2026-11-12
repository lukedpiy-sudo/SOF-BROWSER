// rea decompile_all
// name: FUN_20005240
// address: 0x20005240
// body: available
// range: 0x20005240-0x200057f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20005240(undefined1 *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  float local_c;
  float fStack_8;
  undefined4 local_4;
  
  puVar5 = param_1;
  if (((DAT_201e7e94 == 3) && (((DAT_2015ec98 & 3) != 0 || ((DAT_2015ec68 & 3) != 0)))) ||
     ((DAT_201e7f58._3_1_ != '\0' && ((DAT_2015ec98 & 3) != 0)))) {
    param_1[1] = param_1[1] | 0x40;
  }
  if ((param_2 == 0) || (param_2 == 1)) {
    if ((DAT_2015ec68 & 3) != 0) {
      param_1[1] = param_1[1] | 1;
    }
    if ((DAT_2015edfc & 3) != 0) {
      param_1[1] = param_1[1] | 4;
    }
    if ((DAT_2015ecd8 & 3) != 0) {
      param_1[1] = param_1[1] | 8;
    }
    if ((DAT_2015ecf0 & 3) != 0) {
      param_1[1] = param_1[1] | 0x10;
    }
    if (DAT_20225820 != 0) {
      if ((DAT_20225054 != 0) && (**(int **)(DAT_20225054 + 0x14) != 0)) {
        *(undefined4 *)(param_1 + 0x10) = DAT_201e8fc8;
      }
      if (((DAT_20225820 != 0) && (DAT_20225054 != 0)) && (**(int **)(DAT_20225054 + 0x18) != 0)) {
        *(undefined4 *)(param_1 + 0x14) = DAT_201e8fc8;
      }
    }
  }
  if ((DAT_2015ec98 & 3) != 0) {
    param_1[1] = param_1[1] | 2;
  }
  DAT_2015ec68 = DAT_2015ec68 & 0xfffffffd;
  DAT_2015edfc = DAT_2015edfc & 0xfffffffd;
  DAT_2015ecd8 = DAT_2015ecd8 & 0xfffffffd;
  DAT_2015ecf0 = DAT_2015ecf0 & 0xfffffffd;
  DAT_2015ec98 = DAT_2015ec98 & 0xfffffffd;
  if ((DAT_20364e90 != 0) && (DAT_201c1f04 == 0)) {
    param_1[1] = param_1[1] | 0x80;
  }
  iVar8 = __ftol();
  if (0xfa < iVar8) {
    iVar8 = 100;
  }
  *param_1 = (char)iVar8;
  fVar1 = (float)(int)DAT_201e7ea8 * 0.005493164;
  if (180.0 < fVar1) {
    fVar1 = fVar1 - 360.0;
  }
  if (89.0 < DAT_201e8fac + fVar1) {
    DAT_201e8fac = 89.0 - fVar1;
  }
  if (DAT_201e8fac + fVar1 < -89.0) {
    DAT_201e8fac = -89.0 - fVar1;
  }
  puVar10 = &DAT_201e8fac;
  puVar9 = (undefined2 *)(param_1 + 4);
  do {
    uVar7 = __ftol();
    *puVar9 = uVar7;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
  } while ((int)puVar10 < 0x201e8fb8);
  if (*(float *)(DAT_2015ee50 + 0x18) != 0.0) {
    Com_Printf(s_cl_viewangles_PITCH___f__delta_a_2011c974,(double)DAT_201e8fac,
               (double)(int)DAT_201e7ea8 * 0.0054931640625);
  }
  iVar4 = DAT_2015edc4;
  iVar3 = DAT_2015edc0;
  iVar2 = DAT_2015ec94;
  iVar8 = DAT_2015ec90;
  param_1 = (undefined1 *)DAT_2015ec94;
  DAT_2015ec98 = DAT_2015ec98 & 1;
  DAT_2015ec94 = 0;
  if (DAT_2015ec98 != 0) {
    DAT_2015ec90 = DAT_20403528;
    param_1 = (undefined1 *)(iVar2 + (DAT_20403528 - iVar8));
  }
  fVar1 = (float)(int)param_1 / (float)(uint)DAT_2015ecc0;
  if ((0.0 <= fVar1) && ((1.0 < fVar1 || (fVar1 != 0.0)))) {
    DAT_2015edc8 = DAT_2015edc8 & 1;
    param_1 = (undefined1 *)DAT_2015edc4;
    DAT_2015edc4 = 0;
    if (DAT_2015edc8 != 0) {
      DAT_2015edc0 = DAT_20403528;
      param_1 = (undefined1 *)(iVar4 + (DAT_20403528 - iVar3));
    }
    fVar1 = (float)(int)param_1 / (float)(uint)DAT_2015ecc0;
    if ((((0.0 <= fVar1) && ((1.0 < fVar1 || (fVar1 != 0.0)))) || (DAT_2015edcc != '\0')) ||
       ((DAT_2015ed54 & DAT_2015edb4) != 0)) {
      puVar5[3] = 0xff;
    }
    iVar2 = DAT_2015ed7c;
    iVar8 = DAT_2015ed78;
    DAT_2015ed80 = DAT_2015ed80 & 1;
    param_1 = (undefined1 *)DAT_2015ed7c;
    DAT_2015ed7c = 0;
    if (DAT_2015ed80 != 0) {
      DAT_2015ed78 = DAT_20403528;
      param_1 = (undefined1 *)(iVar2 + (DAT_20403528 - iVar8));
    }
    fVar1 = (float)(int)param_1 / (float)(int)DAT_2015ecc0;
    if (((0.0 <= fVar1) && ((1.0 < fVar1 || (fVar1 != 0.0)))) || (DAT_2015ed84 != '\0')) {
      puVar5[3] = 1;
    }
    else if ((DAT_2015ed3c & DAT_2015edb4) != 0) {
      puVar5[3] = 1;
    }
  }
  iVar8 = DAT_2015ed1c;
  DAT_2015ed20 = DAT_2015ed20 & 1;
  param_1 = (undefined1 *)DAT_2015ed1c;
  DAT_2015ed1c = 0;
  if (DAT_2015ed20 != 0) {
    param_1 = (undefined1 *)(iVar8 + (DAT_20403528 - DAT_2015ed18));
    DAT_2015ed18 = DAT_20403528;
  }
  fVar1 = (float)(int)param_1 / (float)(int)DAT_2015ecc0;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      puVar5[3] = 0xff;
    }
    else if (fVar1 != 0.0) {
      puVar5[3] = 0xff;
    }
  }
  iVar8 = DAT_2015ed94;
  DAT_2015ed98 = DAT_2015ed98 & 1;
  param_1 = (undefined1 *)DAT_2015ed94;
  DAT_2015ed94 = 0;
  if (DAT_2015ed98 != 0) {
    param_1 = (undefined1 *)(iVar8 + (DAT_20403528 - DAT_2015ed90));
    DAT_2015ed90 = DAT_20403528;
  }
  fStack_8 = 0.0;
  local_c = DAT_2015ecc0;
  fVar1 = (float)(int)param_1 / (float)(int)DAT_2015ecc0;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      puVar5[3] = 1;
    }
    else if (fVar1 != 0.0) {
      puVar5[3] = 1;
    }
  }
  uVar6 = __ftol();
  puVar5[2] = uVar6;
  if ((*(short *)(puVar5 + 0xc) != 0) && (*(short *)(puVar5 + 10) != 0)) {
    local_4 = 0;
    local_c = (float)(int)*(short *)(puVar5 + 0xc);
    fStack_8 = (float)(int)*(short *)(puVar5 + 10);
    VectorNormalize(&local_c);
    uVar7 = __ftol();
    *(undefined2 *)(puVar5 + 0xc) = uVar7;
    uVar7 = __ftol();
    *(undefined2 *)(puVar5 + 10) = uVar7;
  }
  return;
}

