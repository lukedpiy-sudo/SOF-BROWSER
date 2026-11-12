// rea decompile_all
// name: FUN_20077610
// address: 0x20077610
// body: available
// range: 0x20077610-0x200778cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20077610(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  
  cVar4 = FUN_200a10a0(param_1);
  if ((((cVar4 != '\0') && (*(short *)(in_ECX + 0x90) == *(short *)(param_1 + 0x90))) &&
      (*(char *)(in_ECX + 0x92) == *(char *)(param_1 + 0x92))) &&
     (*(int *)(in_ECX + 0x94) == *(int *)(param_1 + 0x94))) {
    pcVar5 = *(char **)(in_ECX + 0xb4);
    if (pcVar5 == (char *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(in_ECX + 0xb8) - (int)pcVar5;
    }
    iVar8 = *(int *)(param_1 + 0xb4);
    if (iVar8 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xb8) - iVar8;
    }
    if (iVar7 == iVar6) {
      pcVar1 = *(char **)(in_ECX + 0xb8);
      if (pcVar5 != pcVar1) {
        iVar8 = iVar8 - (int)pcVar5;
        do {
          if (*pcVar5 != pcVar5[iVar8]) {
            if (pcVar5 != pcVar1) {
              return 0;
            }
            break;
          }
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != pcVar1);
      }
      if (((((*(short *)(in_ECX + 0xaa) == *(short *)(param_1 + 0xaa)) &&
            (ABS(*(float *)(in_ECX + 0x98) - *(float *)(param_1 + 0x98)) < 0.033333335)) &&
           ((ABS(*(float *)(in_ECX + 0x9c) - *(float *)(param_1 + 0x9c)) < 0.033333335 &&
            ((*(char *)(in_ECX + 0xa4) == '\0' ||
             (*(float *)(in_ECX + 0xa0) == *(float *)(param_1 + 0xa0))))))) &&
          (*(char *)(in_ECX + 0xa4) == *(char *)(param_1 + 0xa4))) &&
         ((((*(int *)(in_ECX + 0xac) == *(int *)(param_1 + 0xac) &&
            (*(char *)(in_ECX + 0xa5) == *(char *)(param_1 + 0xa5))) &&
           (*(char *)(in_ECX + 0xa6) == *(char *)(param_1 + 0xa6))) &&
          (((*(char *)(in_ECX + 0xa7) == *(char *)(param_1 + 0xa7) &&
            (*(char *)(in_ECX + 0xa8) == *(char *)(param_1 + 0xa8))) &&
           ((*(char *)(in_ECX + 0xa9) == *(char *)(param_1 + 0xa9) &&
            (*(int *)(in_ECX + 0xe4) == *(int *)(param_1 + 0xe4))))))))) {
        piVar2 = *(int **)(in_ECX + 0xd8);
        piVar3 = (int *)*piVar2;
        iVar7 = **(int **)(param_1 + 0xd8);
        while (piVar3 != piVar2) {
          if ((*(short *)(piVar3 + 3) != *(short *)(iVar7 + 0xc)) ||
             (*(short *)((int)piVar3 + 0xe) != *(short *)(iVar7 + 0xe))) {
            if (piVar3 != piVar2) {
              return 0;
            }
            break;
          }
          FUN_200850b0();
          FUN_200850b0();
        }
        if (*(int *)(in_ECX + 0xd0) == *(int *)(param_1 + 0xd0)) {
          piVar2 = *(int **)(in_ECX + 0xc4);
          piVar3 = (int *)*piVar2;
          iVar7 = **(int **)(param_1 + 0xc4);
          if (piVar3 != piVar2) {
            while (((*(short *)(piVar3 + 3) == *(short *)(iVar7 + 0xc) &&
                    (cVar4 = FUN_20087a00(piVar3 + 4,iVar7 + 0x10), cVar4 != '\0')) &&
                   (*(short *)(piVar3 + 6) == *(short *)(iVar7 + 0x18)))) {
              FUN_20027950();
              FUN_20027950();
              if (piVar3 == piVar2) {
                return 1;
              }
            }
            if (piVar3 != piVar2) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

