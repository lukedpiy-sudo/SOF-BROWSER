// rea decompile_all
// name: FUN_500d6bd0
// address: 0x500d6bd0
// body: available
// range: 0x500d6bd0-0x500d6e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d6bd0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  piVar2 = *(int **)(param_1 + 0x450);
  iVar7 = (**(code **)(*piVar2 + 0x238))();
  iVar8 = FUN_500d5b90(param_1,(int)piVar2,iVar7);
  if (iVar8 != 0) {
    if (iVar8 == 2) {
      return;
    }
    iVar8 = *(int *)(iVar7 + 0x15c);
    *(int *)(iVar7 + 0x15c) = iVar8 + 1;
    switch(iVar8) {
    case 0:
    case 2:
      iVar8 = piVar2[0xa7];
      if (iVar8 != 0) {
        iVar7 = (*DAT_5015cb24)(0,100);
        iVar7 = iVar7 % iVar8;
        if (((-1 < iVar7) && (iVar7 <= piVar2[0xa7])) && (piVar2[0xa5] != 0)) {
          iVar9 = 0;
          for (iVar8 = piVar2[0xa4]; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x28)) {
            if ((((*(float *)(iVar8 + 0x10) != 0.0) || (*(float *)(iVar8 + 0x14) != 0.0)) ||
                ((*(float *)(iVar8 + 0x18) != 0.0 ||
                 ((*(float *)(iVar8 + 0x1c) != 0.0 || (*(float *)(iVar8 + 0x20) != 0.0)))))) ||
               (*(float *)(iVar8 + 0x24) != 0.0)) {
              if (iVar9 == iVar7) goto LAB_500d6ce3;
              iVar9 = iVar9 + 1;
            }
          }
        }
        iVar8 = 0;
LAB_500d6ce3:
        uVar3 = *(undefined4 *)(iVar8 + 0x10);
        uVar4 = *(undefined4 *)(iVar8 + 0x14);
        uVar5 = *(undefined4 *)(iVar8 + 0x1c);
        uVar6 = *(undefined4 *)(iVar8 + 0x20);
        fVar12 = (float10)(*DAT_5015cb20)(*(undefined4 *)(iVar8 + 0x18),
                                          *(undefined4 *)(iVar8 + 0x24));
        fVar10 = (float10)(*DAT_5015cb20)(uVar4,uVar6);
        fVar11 = (float10)(*DAT_5015cb20)(uVar3,uVar5);
        piVar2 = *(int **)(param_1 + 0x450);
        iVar7 = (**(code **)(*piVar2 + 0x238))();
        pfVar1 = (float *)(iVar7 + 0xf0);
        *pfVar1 = (float)fVar11;
        *(float *)(iVar7 + 0xf4) = (float)fVar10;
        *(float *)(iVar7 + 0xf8) = (float)fVar12;
        *(uint *)(iVar7 + 0x194) = *(uint *)(iVar7 + 0x194) | 0x400;
        FUN_500d4070(param_1,pfVar1,pfVar1);
        piVar2 = (int *)piVar2[99];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x90))(&LAB_500d43b0);
        }
        *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
        return;
      }
      break;
    case 1:
    case 3:
      fVar12 = (float10)(*DAT_5015cb20)(0x3f800000,0x40400000);
      piVar2 = *(int **)(param_1 + 0x450);
      iVar7 = (**(code **)(*piVar2 + 0x238))();
      *(uint *)(iVar7 + 0x194) = *(uint *)(iVar7 + 0x194) | 0x180;
      *(float *)(iVar7 + 0x13c) = DAT_5015ccdc + (float)fVar12;
      *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
      piVar2 = (int *)piVar2[99];
      if (piVar2 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar2 + 0x90))(&LAB_500d4c00);
      return;
    }
  }
  *(undefined4 *)(iVar7 + 0x158) = 0xffffffff;
  return;
}

