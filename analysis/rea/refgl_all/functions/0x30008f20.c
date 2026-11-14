// rea decompile_all
// name: FUN_30008f20
// address: 0x30008f20
// body: available
// range: 0x30008f20-0x30008fe5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30008f20(float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = 0;
  if (0 < DAT_3008fd50) {
    pfVar4 = DAT_3008fd54 + 5;
    pfVar2 = DAT_3008fd54;
    do {
      local_c = *param_1 - *pfVar2;
      local_8 = param_1[1] - pfVar4[-4];
      local_4 = param_1[2] - pfVar4[-3];
      fVar5 = FUN_3001d310(&local_c);
      fVar5 = ((float10)pfVar4[1] - fVar5) * (float10)0.00390625;
      if ((float10)0.0 < fVar5) {
        *param_2 = (float)(fVar5 * (float10)pfVar4[-2] + (float10)*param_2);
        param_2[1] = (float)(fVar5 * (float10)pfVar4[-1] + (float10)param_2[1]);
        param_2[2] = (float)(fVar5 * (float10)*pfVar4 + (float10)param_2[2]);
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 7;
      pfVar4 = pfVar4 + 7;
    } while (iVar3 < DAT_3008fd50);
  }
  iVar3 = 0;
  do {
    fVar1 = _DAT_3008fff4 * param_2[iVar3];
    param_2[iVar3] = fVar1;
    if (1.0 < fVar1) {
      param_2[iVar3] = 1.0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

