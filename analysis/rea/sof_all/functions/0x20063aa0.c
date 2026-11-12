// rea decompile_all
// name: FUN_20063aa0
// address: 0x20063aa0
// body: available
// range: 0x20063aa0-0x20063bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_20063aa0(int param_1,float *param_2,float *param_3)

{
  undefined *puVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = DAT_204034f8;
  if (0x3f < DAT_204034f8) {
    return (int *)0x0;
  }
  iVar9 = DAT_204034f8 * 0x20;
  piVar10 = &DAT_20402ce0 + DAT_204034f8 * 8;
  DAT_204034f8 = DAT_204034f8 + 1;
  puVar1 = &DAT_20402cf0 + iVar9;
  *(undefined **)(&DAT_20402cf4 + iVar9) = puVar1;
  *(undefined **)puVar1 = puVar1;
  puVar1 = &DAT_20402cf8 + iVar9;
  *(undefined **)(&DAT_20402cfc + iVar9) = puVar1;
  *(undefined **)puVar1 = puVar1;
  if (param_1 != 4) {
    if (*param_3 - *param_2 <= param_3[1] - param_2[1]) {
      *piVar10 = 1;
    }
    else {
      *piVar10 = 0;
    }
    iVar3 = *piVar10;
    (&DAT_20402ce4)[iVar6 * 8] = (param_2[iVar3] + param_3[iVar3]) * 0.5;
    local_c = *param_2;
    local_8 = param_2[1];
    local_4 = param_2[2];
    local_30[0] = *param_2;
    local_30[1] = param_2[1];
    local_30[2] = param_2[2];
    local_30[3] = *param_3;
    local_20 = param_3[1];
    fVar2 = (float)(&DAT_20402ce4)[iVar6 * 8];
    fVar4 = param_3[2];
    local_30[iVar3] = fVar2;
    fVar5 = *param_3;
    local_1c = fVar4;
    local_30[iVar3 + 3] = fVar2;
    local_14 = param_3[1];
    local_10 = param_3[2];
    local_18 = fVar5;
    uVar7 = FUN_20063aa0(param_1 + 1,local_30,local_30 + 6);
    (&DAT_20402ce8)[iVar6 * 8] = uVar7;
    iVar8 = FUN_20063aa0(param_1 + 1,&local_c,local_30 + 3);
    iVar3 = (&DAT_20402ce8)[iVar6 * 8];
    *(int *)(&DAT_20402cec + iVar9) = iVar8;
    if ((iVar3 != 0) && (iVar8 != 0)) {
      return piVar10;
    }
  }
  *piVar10 = -1;
  *(undefined4 *)(&DAT_20402cec + iVar9) = 0;
  (&DAT_20402ce8)[iVar6 * 8] = 0;
  return piVar10;
}

