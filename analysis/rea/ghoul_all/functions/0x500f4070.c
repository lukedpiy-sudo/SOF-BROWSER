// rea decompile_all
// name: FUN_500f4070
// address: 0x500f4070
// body: available
// range: 0x500f4070-0x500f4393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f4070(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  param_1[0x1d] = (((int)param_1 - DAT_5015cca0) / 0x464) * 0x600 + -0x600 + DAT_5015d6c4;
  iVar3 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar3 != 0) {
    FUN_500c35c0(param_1);
    iVar3 = param_1[0x1d];
    uVar4 = *(undefined4 *)(iVar3 + 0x324);
    puVar6 = (undefined4 *)(iVar3 + 0x304);
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = uVar4;
    *(undefined4 *)(iVar3 + 0x304) = DAT_5015ccd8;
    FUN_500f4cf0((int)param_1);
    uVar4 = (**(code **)(DAT_5015d9b8 + 0x24))();
    *(undefined4 *)(param_1[0x1d] + 0x34c) = uVar4;
    if (param_1[0x116] == 0) {
      FUN_500f3860(param_1);
    }
    FUN_500f98a0((int)param_1);
    (**(code **)(*DAT_5015c4d8 + 0x90))(param_1);
    FUN_500efb70((int)param_1);
    FUN_500f38a0((int)param_1);
    (*DAT_5015cab0)(0,0x3d,param_1[0x1d] + 0x2cc);
    if (param_1[0x116] == 0) {
      (*DAT_5015ca30)(param_1);
      if (param_1[0x116] == 0) {
        FUN_50057260((int)param_1);
      }
    }
    FUN_500f9a00(param_1);
    return;
  }
  if (DAT_5015d244 != 0) {
    DAT_5015d244 = 0;
  }
  (**(code **)(*DAT_5015c4d8 + 0x90))(param_1);
  if (param_1[0x1e] == 0) {
    FUN_500c35c0(param_1);
    iVar3 = param_1[0x1d];
    param_1[0x6d] = (int)s_player_50142e48;
    uVar4 = *(undefined4 *)(iVar3 + 0x324);
    puVar6 = (undefined4 *)(iVar3 + 0x304);
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = uVar4;
    *(undefined4 *)(iVar3 + 0x304) = DAT_5015ccd8;
    piVar2 = *(int **)(param_1[0x1d] + 0x34c);
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(param_1[0x1d] + 0x34c) = 0;
      uVar4 = (**(code **)(DAT_5015d9b8 + 0x24))();
      *(undefined4 *)(param_1[0x1d] + 0x34c) = uVar4;
      *(char *)(param_1[0x1d] + 0x46e) = *(char *)(param_1[0x1d] + 0x46e) + '\x01';
      (*DAT_5015ca9c)(0x1d,*param_1 + -1);
      (*DAT_5015ca9c)(*(undefined1 *)(param_1[0x1d] + 0x46e),*param_1 + -1);
    }
    else {
      iVar3 = (**(code **)(*piVar2 + 0x5c))();
      if (iVar3 != 0) {
        uVar4 = (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0x5c))();
        *(undefined4 *)(param_1[0x1d] + 0x2f0) = uVar4;
      }
    }
    FUN_500f38a0((int)param_1);
  }
  else {
    iVar3 = 0x14;
    iVar5 = 0x1c;
    do {
      iVar1 = param_1[0x1d];
      lVar7 = __ftol();
      *(short *)(iVar1 + iVar3) = (short)lVar7;
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 2;
    } while (iVar5 < 0x28);
    *(char *)(param_1[0x1d] + 0x46e) = *(char *)(param_1[0x1d] + 0x46e) + '\x01';
    (*DAT_5015ca9c)(0x1d,*param_1 + -1);
    (*DAT_5015ca9c)(*(undefined1 *)(param_1[0x1d] + 0x46e),*param_1 + -1);
    (*DAT_5015ca9c)(0x1e,*param_1 + -1);
    (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0x138))(*param_1 + -1);
    (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0xf4))(&stack0xffffffc4);
    (**(code **)(DAT_5015d9b8 + 0x2c))(*(undefined4 *)(param_1[0x1d] + 0x34c));
    *(float *)(param_1[0x1d] + 0x94) = (float)*(int *)(param_1[0x1d] + 0x2f4);
  }
  if (_DAT_5015d1c8 == 0.0) {
    if (1 < DAT_5015d8c8) {
      (*DAT_5015ca30)(param_1);
    }
  }
  else {
    FUN_500f63e0((int)param_1,0);
  }
  FUN_500f9a00(param_1);
  if (DAT_50188944 != 0) {
    (**(code **)(DAT_50188944 + 0x2c4))(DAT_50188944,DAT_50188944,param_1);
  }
  return;
}

