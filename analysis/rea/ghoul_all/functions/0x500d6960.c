// rea decompile_all
// name: FUN_500d6960
// address: 0x500d6960
// body: available
// range: 0x500d6960-0x500d6bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d6960(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  piVar2 = *(int **)(param_1 + 0x450);
  iVar3 = (**(code **)(*piVar2 + 0x238))();
  iVar4 = FUN_500d5b90(param_1,(int)piVar2,iVar3);
  if (iVar4 != 0) {
    if (iVar4 == 2) {
      return;
    }
    iVar4 = *(int *)(iVar3 + 0x15c);
    *(int *)(iVar3 + 0x15c) = iVar4 + 1;
    if (iVar4 == 0) {
      iVar4 = piVar2[0xa6];
      if (iVar4 != 0) {
        iVar3 = (*DAT_5015cb24)(0,100);
        iVar3 = iVar3 % iVar4;
        if (((-1 < iVar3) && (iVar3 <= piVar2[0xa6])) && (piVar2[0xa5] != 0)) {
          iVar5 = 0;
          for (iVar4 = piVar2[0xa4]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x28)) {
            if ((((*(float *)(iVar4 + 0x10) == 0.0) && (*(float *)(iVar4 + 0x14) == 0.0)) &&
                ((*(float *)(iVar4 + 0x18) == 0.0 &&
                 ((*(float *)(iVar4 + 0x1c) == 0.0 && (*(float *)(iVar4 + 0x20) == 0.0)))))) &&
               (*(float *)(iVar4 + 0x24) == 0.0)) {
              if (iVar5 == iVar3) goto LAB_500d6b5a;
              iVar5 = iVar5 + 1;
            }
          }
        }
        iVar4 = 0;
LAB_500d6b5a:
        piVar2 = *(int **)(param_1 + 0x450);
        iVar3 = (**(code **)(*piVar2 + 0x238))();
        pfVar1 = (float *)(iVar3 + 0xf0);
        *pfVar1 = *(float *)(iVar4 + 4);
        *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(iVar3 + 0xf8) = *(undefined4 *)(iVar4 + 0xc);
        *(uint *)(iVar3 + 0x194) = *(uint *)(iVar3 + 0x194) | 0x400;
        FUN_500d4070(param_1,pfVar1,pfVar1);
        piVar2 = (int *)piVar2[99];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x90))(&LAB_500d43b0);
        }
        goto LAB_500d6a8d;
      }
    }
    else {
      if (iVar4 == 1) {
        iVar3 = *(int *)(iVar3 + 0x1a0);
        piVar2 = *(int **)(param_1 + 0x450);
        (**(code **)(*piVar2 + 0x238))();
        iVar4 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
        *(undefined4 *)(iVar4 + 0xc0) = *(undefined4 *)(iVar3 + 4);
        *(undefined4 *)(iVar4 + 0xc4) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar4 + 200) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(iVar4 + 300) = *(undefined4 *)(param_1 + 0x14);
        piVar2 = (int *)piVar2[99];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x90))(&LAB_500d5a60);
        }
LAB_500d6a8d:
        *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
        return;
      }
      if (iVar4 == 2) {
        fVar6 = (float10)(*DAT_5015cb20)(0x3f800000,0x40400000);
        piVar2 = *(int **)(param_1 + 0x450);
        iVar3 = (**(code **)(*piVar2 + 0x238))();
        *(uint *)(iVar3 + 0x194) = *(uint *)(iVar3 + 0x194) | 0x180;
        *(float *)(iVar3 + 0x13c) = DAT_5015ccdc + (float)fVar6;
        *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
        piVar2 = (int *)piVar2[99];
        if (piVar2 == (int *)0x0) {
          return;
        }
        (**(code **)(*piVar2 + 0x90))(&LAB_500d4c00);
        return;
      }
    }
  }
  *(undefined4 *)(iVar3 + 0x158) = 0xffffffff;
  return;
}

