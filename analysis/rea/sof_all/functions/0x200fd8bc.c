// rea decompile_all
// name: FUN_200fd8bc
// address: 0x200fd8bc
// body: available
// range: 0x200fd8bc-0x200fdbb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200fd8bc(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar6 = param_1[4];
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar4 = uVar10 * 0x204 + 0x144 + uVar6;
  iVar7 = *(int *)(param_2 + -4);
  param_3 = iVar7 + -1;
  uVar13 = *(uint *)(iVar7 + -5 + param_2);
  iVar7 = iVar7 + -5 + param_2;
  if (param_3 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + param_3) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (*(int *)(iVar7 + 4) == *(int *)(iVar7 + 8)) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar6);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar8 = (uint *)(uVar6 + 0x44 + uVar10 * 4);
        *puVar8 = *puVar8 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar6);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar8 = (uint *)(uVar6 + 0xc4 + uVar10 * 4);
        *puVar8 = *puVar8 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar7 + 8) + 4) = *(undefined4 *)(iVar7 + 4);
    *(undefined4 *)(*(int *)(iVar7 + 4) + 8) = *(undefined4 *)(iVar7 + 8);
    iVar7 = uVar13 + (param_3 - uVar12);
    if (0 < iVar7) {
      uVar13 = (iVar7 >> 4) - 1;
      iVar2 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar4 = iVar4 + uVar13 * 8;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar4 + 4);
      *(int *)(iVar2 + 8) = iVar4;
      *(int *)(iVar4 + 4) = iVar2;
      *(int *)(*(int *)(iVar2 + 4) + 8) = iVar2;
      if (*(int *)(iVar2 + 4) == *(int *)(iVar2 + 8)) {
        cVar5 = *(char *)(uVar13 + 4 + uVar6);
        *(char *)(uVar13 + 4 + uVar6) = cVar5 + '\x01';
        bVar9 = (byte)uVar13;
        if (uVar13 < 0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
          }
          puVar8 = (uint *)(uVar6 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar6 + 0xc4 + uVar10 * 4);
          bVar9 = bVar9 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> (bVar9 & 0x1f);
      }
      piVar3 = (int *)(param_2 + -4 + uVar12);
      *piVar3 = iVar7;
      *(int *)(iVar7 + -4 + (int)piVar3) = iVar7;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < param_3) {
    param_3 = param_3 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar3 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar3[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (*(int *)(iVar7 + 4) == *(int *)(iVar7 + 8)) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar6);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar8 = (uint *)(uVar6 + 0x44 + uVar10 * 4);
          *puVar8 = *puVar8 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar6);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar8 = (uint *)(uVar6 + 0xc4 + uVar10 * 4);
          *puVar8 = *puVar8 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(undefined4 *)(*(int *)(iVar7 + 8) + 4) = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)(*(int *)(iVar7 + 4) + 8) = *(undefined4 *)(iVar7 + 8);
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar7 = iVar4 + uVar11 * 8;
    piVar3[1] = *(int *)(iVar4 + 4 + uVar11 * 8);
    piVar3[2] = iVar7;
    *(int **)(iVar7 + 4) = piVar3;
    *(int **)(piVar3[1] + 8) = piVar3;
    if (piVar3[1] == piVar3[2]) {
      cVar5 = *(char *)(uVar11 + 4 + uVar6);
      *(char *)(uVar11 + 4 + uVar6) = cVar5 + '\x01';
      bVar9 = (byte)uVar11;
      if (uVar11 < 0x20) {
        if (cVar5 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
        }
        puVar8 = (uint *)(uVar6 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar5 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar6 + 0xc4 + uVar10 * 4);
        bVar9 = bVar9 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> (bVar9 & 0x1f);
    }
    *piVar3 = param_3;
    *(int *)(param_3 + -4 + (int)piVar3) = param_3;
  }
  return 1;
}

