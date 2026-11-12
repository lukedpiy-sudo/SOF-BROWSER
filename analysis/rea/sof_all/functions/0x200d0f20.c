// rea decompile_all
// name: FUN_200d0f20
// address: 0x200d0f20
// body: available
// range: 0x200d0f20-0x200d110a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d0f20(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  if (param_1 != 1) {
    return;
  }
  piVar1 = *(int **)(in_ECX + 0x68);
  if (*(char *)(in_ECX + 0xdc) == '\0') {
    iVar4 = *(int *)(in_ECX + 0xc);
    if (piVar1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar1;
    }
    iVar5 = FUN_200c66a0();
    param_1 = *(int *)(in_ECX + 0xd4);
    iVar4 = (iVar5 - iVar6) - iVar4;
    if (iVar4 < param_1) {
      if (*(int *)(in_ECX + 0x50) != 0) {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x50) + 0x18) - *(float *)(in_ECX + 0x58);
        goto LAB_200d10a5;
      }
      goto LAB_200d102d;
    }
    if (iVar4 <= *(int *)(in_ECX + 0xa4) + param_1) {
      iVar6 = *(int *)(in_ECX + 0xa4) - *(int *)(in_ECX + 0xbc);
      param_1 = (iVar4 - (*(int *)(in_ECX + 0xbc) >> 1)) - param_1;
      if (iVar6 < param_1) {
        param_1 = iVar6;
      }
      if (param_1 < 0) {
        param_1 = 0;
      }
      fVar3 = ((*(float *)(in_ECX + 0x90) - *(float *)(in_ECX + 0x8c)) * (float)param_1) /
              (float)iVar6;
      goto LAB_200d109f;
    }
    if (*(int *)(in_ECX + 0x50) != 0) {
      fVar3 = *(float *)(*(int *)(in_ECX + 0x50) + 0x18) + *(float *)(in_ECX + 0x58);
      goto LAB_200d10a5;
    }
  }
  else {
    iVar4 = *(int *)(in_ECX + 4);
    iVar6 = *(int *)(in_ECX + 0x10);
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    param_1 = FUN_200c66d0();
    iVar2 = *(int *)(in_ECX + 0xd8);
    param_1 = param_1 + ((*(int *)(iVar4 + 0x80) - iVar5) - iVar6);
    if (iVar2 <= param_1) {
      if (param_1 <= *(int *)(in_ECX + 0xa8) + iVar2) {
        iVar4 = *(int *)(in_ECX + 0xc0);
        iVar6 = *(int *)(in_ECX + 0xa8) - iVar4;
        param_1 = ((((iVar4 >> 1) + *(int *)(in_ECX + 0x24)) - iVar4) - iVar2) - param_1;
        if (iVar6 < param_1) {
          param_1 = iVar6;
        }
        if (param_1 < 0) {
          param_1 = 0;
        }
        fVar3 = ((*(float *)(in_ECX + 0x90) - *(float *)(in_ECX + 0x8c)) * (float)param_1) /
                (float)iVar6;
LAB_200d109f:
        fVar3 = fVar3 + *(float *)(in_ECX + 0x8c);
        goto LAB_200d10a5;
      }
      if (*(int *)(in_ECX + 0x50) != 0) {
        fVar3 = *(float *)(*(int *)(in_ECX + 0x50) + 0x18) - *(float *)(in_ECX + 0x58);
        goto LAB_200d10a5;
      }
LAB_200d102d:
      fVar3 = 0.0 - *(float *)(in_ECX + 0x58);
      goto LAB_200d10a5;
    }
    if (*(int *)(in_ECX + 0x50) != 0) {
      fVar3 = *(float *)(*(int *)(in_ECX + 0x50) + 0x18) + *(float *)(in_ECX + 0x58);
      goto LAB_200d10a5;
    }
  }
  fVar3 = *(float *)(in_ECX + 0x58) + 0.0;
LAB_200d10a5:
  *(float *)(in_ECX + 0x54) = fVar3;
  fVar3 = *(float *)(in_ECX + 0x54);
  if (*(float *)(in_ECX + 0x90) < *(float *)(in_ECX + 0x54)) {
    fVar3 = *(float *)(in_ECX + 0x90);
  }
  if (fVar3 < *(float *)(in_ECX + 0x8c)) {
    fVar3 = *(float *)(in_ECX + 0x8c);
  }
  *(float *)(in_ECX + 0x54) = fVar3;
  if (*(undefined4 **)(in_ECX + 0x50) == (undefined4 *)0x0) {
    return;
  }
  Cvar_SetValue(**(undefined4 **)(in_ECX + 0x50),fVar3);
  return;
}

