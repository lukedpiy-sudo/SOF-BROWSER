// rea decompile_all
// name: FUN_3000b050
// address: 0x3000b050
// body: available
// range: 0x3000b050-0x3000b5aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3000b050(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puStack_10;
  undefined4 uStack_c;
  int aiStack_8 [2];
  
  piVar6 = param_1;
  iVar3 = (*DAT_3008fe20)(param_1,0x15,&LAB_3000b880);
  DAT_3007c678[0x34] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x33] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,2,0);
  DAT_3007c678[0x23] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x22] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,0xb,0);
  DAT_3007c678[0x25] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x24] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,0xc,0);
  DAT_3007c678[0x30] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x2f] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,7,0);
  DAT_3007c678[0x38] = *(undefined4 *)(iVar3 + 4);
  iVar3 = (*DAT_3008fe20)(piVar6,1,0);
  DAT_3007c678[0x1f] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x1e] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,5,&LAB_3000b5b0);
  DAT_3007c678[0x2a] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x29] = *(undefined4 *)(iVar3 + 8);
  DAT_3008fc78 = DAT_3007c678;
  puVar7 = DAT_3007c678;
  FUN_300167b0();
  iVar3 = (*DAT_3008fe20)(piVar6,0x13,&LAB_3000b620,puVar7);
  DAT_3007c678[0x2c] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x2b] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,6,FUN_3000b790);
  DAT_3007c678[0x2e] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x2d] = *(undefined4 *)(iVar3 + 8);
  FUN_30016940();
  iVar3 = (*DAT_3008fe20)(piVar6,9,0);
  DAT_3007c678[0x32] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x31] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,3,0);
  DAT_3007c678[0x37] = *(undefined4 *)(iVar3 + 4);
  iVar3 = (*DAT_3008fe20)(piVar6,8,&DAT_3000b8f0);
  DAT_3007c678[0x21] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x20] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,4,0);
  DAT_3007c678[0x28] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x26] = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_3008fe20)(piVar6,0xd,0);
  DAT_3007c678[0x1d] = *(undefined4 *)(iVar3 + 4);
  DAT_3007c678[0x1c] = *(undefined4 *)(iVar3 + 8);
  (**(code **)(*DAT_300aa4a0 + 0x90))();
  (*DAT_3008fe20)(piVar6,0x14,&LAB_3000b800);
  (**(code **)(*DAT_300aa4a0 + 0x8c))();
  FUN_30008e00();
  piVar6[0x10] = 2;
  param_1 = (int *)0x0;
  if (0 < piVar6[0x1c]) {
    do {
      piVar2 = param_1;
      puStack_10 = (undefined4 *)(piVar6[0x1d] + (int)param_1 * 0x38);
      iVar3 = (int)param_1 * 0x3d;
      puVar7 = DAT_3007c678;
      puVar5 = &DAT_3007c774 + iVar3;
      for (iVar4 = 0x3d; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
      }
      (&DAT_3007c7d8)[(int)param_1 * 0x3d] = puStack_10[0xc];
      (&DAT_3007c7dc)[(int)param_1 * 0x3d] = puStack_10[0xd];
      iVar4 = puStack_10[10];
      (&DAT_3007c810)[(int)param_1 * 0x3d] = iVar4;
      if ((int)DAT_3007c678[0x26] <= iVar4) {
        (*DAT_3008fdc8)(1,s_Inline_model__i_has_bad_firstnod_3002eccc,param_1);
      }
      (&DAT_3007c7c8)[(int)piVar2 * 0x3d] = puStack_10[3];
      (&DAT_3007c7cc)[(int)piVar2 * 0x3d] = puStack_10[4];
      (&DAT_3007c7d0)[(int)piVar2 * 0x3d] = puStack_10[5];
      (&DAT_3007c7bc)[(int)piVar2 * 0x3d] = *puStack_10;
      (&DAT_3007c7c0)[(int)piVar2 * 0x3d] = puStack_10[1];
      (&DAT_3007c7c4)[(int)piVar2 * 0x3d] = puStack_10[2];
      (&DAT_3007c7d4)[(int)piVar2 * 0x3d] = puStack_10[9];
      if (param_1 == (int *)0x0) {
        puVar7 = &DAT_3007c774 + iVar3;
        puVar5 = DAT_3007c678;
        for (iVar4 = 0x3d; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 1);
      (&DAT_3007c7f4)[(int)piVar2 * 0x3d] = puStack_10[0xb];
    } while ((int)param_1 < piVar6[0x1c]);
  }
  iVar3 = DAT_3008db84;
  if (DAT_3008db84 != 0) {
    iVar4 = piVar6[0x3b];
    puVar7 = (undefined4 *)0x0;
    iVar1 = DAT_3008fc78[0x3c];
    DAT_3007c678[0x39] = iVar4;
    piVar6[0x3b] = piVar6[0x3b] + iVar3 * 0x10;
    if (0 < iVar3) {
      puVar5 = (undefined4 *)(iVar1 + iVar4 + 8);
      do {
        uStack_c = 0;
        puStack_10 = puVar7;
        FUN_3000ba40(&DAT_3007c660,aiStack_8,(int *)&puStack_10);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        iVar4 = piVar6[0x23] + *(int *)(aiStack_8[0] + 0x10) * 0xc;
        puVar5[-2] = *(undefined4 *)(piVar6[0x23] + *(int *)(aiStack_8[0] + 0x10) * 0xc);
        puVar5[-1] = *(undefined4 *)(iVar4 + 4);
        *puVar5 = *(undefined4 *)(iVar4 + 8);
        puVar5[1] = 0xffffffff;
        puVar5 = puVar5 + 4;
      } while ((int)puVar7 < iVar3);
    }
    DAT_3007c678[0x3a] = piVar6[0x3b];
    piVar6[0x3b] = piVar6[0x3b] + iVar3 * 4;
    piVar6 = DAT_3008db78;
    param_1 = (int *)*DAT_3008db78;
    if (DAT_3008db84 == 0) {
      DAT_3008db84 = 0;
      piVar2 = param_1;
      while (piVar2 != piVar6) {
        param_1 = piVar2;
        FUN_3000c390((int *)&param_1);
        FUN_3000bc50(&DAT_3008db74,&puStack_10,piVar2);
        piVar2 = param_1;
      }
    }
    else {
      piVar6 = (int *)DAT_3008db78[1];
      if ((int *)DAT_3008db78[1] != DAT_3008db7c) {
        do {
          FUN_3000c060(&DAT_3008db74,(int *)piVar6[2]);
          piVar2 = (int *)*piVar6;
          FUN_3001f8bc((undefined *)piVar6);
          piVar6 = piVar2;
        } while (piVar2 != DAT_3008db7c);
      }
      DAT_3008db78[1] = (int)DAT_3008db7c;
      DAT_3008db84 = 0;
      *DAT_3008db78 = (int)DAT_3008db78;
      DAT_3008db78[2] = (int)DAT_3008db78;
    }
    piVar6 = DAT_3007c664;
    param_1 = (int *)*DAT_3007c664;
    if (DAT_3007c670 != 0) {
      piVar6 = (int *)DAT_3007c664[1];
      if ((int *)DAT_3007c664[1] != DAT_3007c668) {
        do {
          FUN_3000c060(&DAT_3007c660,(int *)piVar6[2]);
          piVar2 = (int *)*piVar6;
          FUN_3001f8bc((undefined *)piVar6);
          piVar6 = piVar2;
        } while (piVar2 != DAT_3007c668);
      }
      DAT_3007c664[1] = (int)DAT_3007c668;
      DAT_3007c670 = 0;
      *DAT_3007c664 = (int)DAT_3007c664;
      DAT_3007c664[2] = (int)DAT_3007c664;
      return;
    }
    DAT_3007c670 = 0;
    piVar2 = param_1;
    while (piVar2 != piVar6) {
      param_1 = piVar2;
      FUN_3000c390((int *)&param_1);
      FUN_3000bc50(&DAT_3007c660,&puStack_10,piVar2);
      piVar2 = param_1;
    }
  }
  return;
}

