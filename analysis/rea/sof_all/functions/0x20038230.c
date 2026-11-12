// rea decompile_all
// name: FUN_20038230
// address: 0x20038230
// body: available
// range: 0x20038230-0x200383ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20038230(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  uint local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98 [3];
  float local_8c [3];
  float local_80 [4];
  float local_70 [14];
  undefined1 local_38 [56];
  
  pfVar1 = param_1 + 3;
  FUN_20054c90(local_98,pfVar1);
  FUN_20055280(pfVar1,local_98,local_8c);
  pfVar5 = local_80;
  local_bc = 0;
  do {
    *pfVar5 = 1.2;
    do {
      if (0.25 <= *pfVar5) {
        fVar2 = 0.2;
      }
      else {
        fVar2 = 0.1;
      }
      fVar2 = *pfVar5 - fVar2;
      *pfVar5 = fVar2;
      pfVar4 = local_8c;
      if ((int)local_bc < 2) {
        pfVar4 = local_98;
      }
      if ((local_bc & 1) == 0) {
        fVar3 = -1.0;
      }
      else {
        fVar3 = 1.0;
      }
      fVar3 = fVar2 * *param_2 * fVar3;
      local_b0 = fVar3 * *pfVar4 + *param_1;
      local_ac = fVar3 * pfVar4[1] + param_1[1];
      local_a8 = fVar3 * pfVar4[2] + param_1[2];
      local_a4 = local_b0 - (*pfVar1 + *pfVar1);
      local_a0 = local_ac - (param_1[4] + param_1[4]);
      local_9c = local_a8 - (param_1[5] + param_1[5]);
      pfVar4 = (float *)FUN_2002fdb0(local_38,&local_b0,&DAT_20390c24,&DAT_20390c24,&local_a4);
      pfVar7 = local_70;
      for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
    } while ((0.0 < fVar2) && (0.99 < local_70[1]));
    local_bc = local_bc + 1;
    pfVar5 = pfVar5 + 1;
  } while ((int)local_bc < 4);
  iVar6 = 0;
  fVar2 = *param_2;
  do {
    fVar3 = *param_2 * local_80[iVar6];
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  *param_2 = fVar2;
  return;
}

