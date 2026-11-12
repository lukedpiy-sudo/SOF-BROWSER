// rea decompile_all
// name: FUN_200a0b20
// address: 0x200a0b20
// body: available
// range: 0x200a0b20-0x200a0c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a0b20(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_ECX;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int local_20;
  float local_18 [6];
  
  in_ECX[0x10] = 0;
  puVar10 = in_ECX + 3;
  local_20 = 3;
  puVar9 = param_1;
  puVar13 = in_ECX;
  do {
    iVar11 = 3;
    puVar5 = puVar9;
    puVar7 = puVar13;
    do {
      uVar3 = *puVar5;
      puVar5 = puVar5 + 4;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *puVar10 = 0;
    puVar13 = puVar13 + 4;
    puVar10 = puVar10 + 4;
    puVar9 = puVar9 + 1;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  in_ECX[0xf] = 0x3f800000;
  local_18[0] = (float)param_1[0xc];
  local_18[1] = (float)param_1[0xd];
  local_18[3] = local_18[0];
  local_18[2] = (float)param_1[0xe];
  local_18[4] = local_18[1];
  local_18[5] = local_18[2];
  if ((*(byte *)(in_ECX + 0x10) & 1) == 0) {
    local_18[0] = 0.0;
    local_18[1] = 0.0;
    local_18[2] = 0.0;
    pfVar12 = local_18;
    iVar11 = 3;
    do {
      fVar1 = *pfVar12;
      iVar6 = 0;
      pfVar8 = (float *)(((int)in_ECX - (int)local_18) + (int)pfVar12);
      do {
        iVar4 = iVar6 + 3;
        fVar2 = *pfVar8;
        iVar6 = iVar6 + 1;
        pfVar8 = pfVar8 + 4;
        fVar1 = local_18[iVar4] * fVar2 + fVar1;
      } while (iVar6 < 3);
      *pfVar12 = fVar1;
      pfVar12 = pfVar12 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  in_ECX[0xc] = local_18[0] * -1.0;
  in_ECX[0xe] = local_18[2] * -1.0;
  in_ECX[0xd] = local_18[1] * -1.0;
  in_ECX[0x10] = 0;
  return;
}

