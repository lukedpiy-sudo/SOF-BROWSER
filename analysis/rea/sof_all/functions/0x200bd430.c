// rea decompile_all
// name: FUN_200bd430
// address: 0x200bd430
// body: available
// range: 0x200bd430-0x200bd799 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bd430(int param_1,int param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  char *in_ECX;
  
  *in_ECX = (char)param_2;
  in_ECX[1] = param_3;
  in_ECX[0x18] = '\0';
  in_ECX[0x19] = '\0';
  in_ECX[0x1a] = '\0';
  in_ECX[0x1b] = '\0';
  in_ECX[0x14] = '\0';
  in_ECX[0x15] = '\0';
  in_ECX[0x16] = '\0';
  in_ECX[0x17] = '\0';
  in_ECX[0x1c] = '\0';
  in_ECX[0x1d] = '\0';
  in_ECX[0x1e] = '\0';
  in_ECX[0x1f] = '\0';
  in_ECX[4] = '\0';
  in_ECX[5] = '\0';
  in_ECX[6] = '\0';
  in_ECX[7] = '\0';
  in_ECX[2] = '\0';
  in_ECX[8] = '\0';
  in_ECX[9] = '\0';
  in_ECX[10] = '\0';
  in_ECX[0xb] = '\0';
  if ((char)param_2 == '\0') {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_201116cc;
    }
    iVar4 = (*DAT_204058a4)(puVar3,&DAT_201311d4);
    *(int *)(in_ECX + 4) = iVar4;
    in_ECX[2] = iVar4 == 0;
    if (iVar4 != 0) {
      uVar5 = (*DAT_204058b0)(iVar4);
      *(undefined4 *)(in_ECX + 8) = uVar5;
    }
    if ((in_ECX[2] == '\0') && (in_ECX[1] != '\0')) {
      if (*in_ECX == '\0') {
        iVar4 = (*DAT_204058ac)(&param_2,4,1,*(undefined4 *)(in_ECX + 4));
        in_ECX[2] = in_ECX[2] | iVar4 != 1;
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x18) + 1;
        if (*(int **)(in_ECX + 0x20) < piVar1) {
          in_ECX[2] = '\x01';
          *(int **)(in_ECX + 0x18) = *(int **)(in_ECX + 0x20);
        }
        else {
          param_2 = **(int **)(in_ECX + 0x18);
          *(int **)(in_ECX + 0x18) = piVar1;
        }
      }
      if (param_2 != 0x198237fe) {
        in_ECX[2] = '\x01';
        return;
      }
      piVar1 = (int *)(in_ECX + 0x10);
      if (*in_ECX == '\0') {
        iVar4 = (*DAT_204058ac)(piVar1,4,1,*(undefined4 *)(in_ECX + 4));
        in_ECX[2] = in_ECX[2] | iVar4 != 1;
      }
      else if (*(int **)(in_ECX + 0x20) < *(int **)(in_ECX + 0x18) + 1) {
        in_ECX[2] = '\x01';
        *(int **)(in_ECX + 0x18) = *(int **)(in_ECX + 0x20);
      }
      else {
        *piVar1 = **(int **)(in_ECX + 0x18);
        *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 4;
      }
      puVar2 = (uint *)(in_ECX + 0xc);
      if (*in_ECX == '\0') {
        iVar4 = (*DAT_204058ac)(puVar2,4,1,*(undefined4 *)(in_ECX + 4));
        in_ECX[2] = in_ECX[2] | iVar4 != 1;
      }
      else if (*(uint **)(in_ECX + 0x20) < *(uint **)(in_ECX + 0x18) + 1) {
        in_ECX[2] = '\x01';
        *(uint **)(in_ECX + 0x18) = *(uint **)(in_ECX + 0x20);
      }
      else {
        *puVar2 = **(uint **)(in_ECX + 0x18);
        *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 4;
      }
      pvVar6 = operator_new(*puVar2);
      *(void **)(in_ECX + 0x14) = pvVar6;
      if (*puVar2 != 0) {
        (*DAT_204058b4)(*(undefined4 *)(in_ECX + 4),*piVar1 + *(int *)(in_ECX + 8),0);
        iVar4 = (*DAT_204058ac)(*(undefined4 *)(in_ECX + 0x14),*puVar2,1,*(undefined4 *)(in_ECX + 4)
                               );
        if (iVar4 != 1) {
          in_ECX[2] = '\x01';
          return;
        }
        (*DAT_204058b4)(*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 8) + 0xc,0);
      }
    }
  }
  else {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_201116cc;
    }
    iVar4 = (*DAT_204058a4)(puVar3,&DAT_201311d4);
    *(int *)(in_ECX + 4) = iVar4;
    in_ECX[2] = iVar4 == 0;
    if (iVar4 != 0) {
      uVar5 = (*DAT_204058b0)(iVar4);
      *(undefined4 *)(in_ECX + 8) = uVar5;
    }
    if ((in_ECX[2] == '\0') && (in_ECX[1] != '\0')) {
      param_2 = 0;
      iVar4 = (*DAT_204058ac)(&param_2,4,1,*(undefined4 *)(in_ECX + 4));
      if (iVar4 != 1) {
        in_ECX[2] = '\x01';
      }
      if (param_2 != 0x198237fe) {
        in_ECX[2] = '\x01';
        return;
      }
      piVar1 = (int *)(in_ECX + 0x10);
      iVar4 = (*DAT_204058ac)(piVar1,4,1,*(undefined4 *)(in_ECX + 4));
      if (iVar4 != 1) {
        in_ECX[2] = '\x01';
      }
      puVar2 = (uint *)(in_ECX + 0xc);
      iVar4 = (*DAT_204058ac)(puVar2,4,1,*(undefined4 *)(in_ECX + 4));
      if (iVar4 != 1) {
        in_ECX[2] = '\x01';
      }
      if (in_ECX[2] == '\0') {
        pvVar6 = operator_new(*piVar1 - 0xc);
        *(void **)(in_ECX + 0x1c) = pvVar6;
        *(int *)(in_ECX + 0x20) = *piVar1 + -0xc + (int)pvVar6;
        iVar4 = (*DAT_204058ac)(pvVar6,*piVar1 + -0xc,1,*(undefined4 *)(in_ECX + 4));
        if (iVar4 != 1) {
          in_ECX[2] = '\x01';
        }
        if (in_ECX[2] == '\0') {
          *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x1c);
          pvVar6 = operator_new(*puVar2);
          *(void **)(in_ECX + 0x14) = pvVar6;
          if (*puVar2 != 0) {
            (*DAT_204058b4)(*(undefined4 *)(in_ECX + 4),*piVar1 + *(int *)(in_ECX + 8),0);
            iVar4 = (*DAT_204058ac)(*(undefined4 *)(in_ECX + 0x14),*puVar2,1,
                                    *(undefined4 *)(in_ECX + 4));
            if (iVar4 != 1) {
              in_ECX[2] = '\x01';
              return;
            }
            (*DAT_204058b4)(*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 8) + 0xc,0);
            return;
          }
        }
      }
    }
  }
  return;
}

