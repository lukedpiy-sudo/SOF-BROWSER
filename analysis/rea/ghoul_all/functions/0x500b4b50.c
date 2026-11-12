// rea decompile_all
// name: FUN_500b4b50
// address: 0x500b4b50
// body: available
// range: 0x500b4b50-0x500b4c68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b4b50(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  
  iVar5 = 1;
  if (1 < DAT_5015c938) {
    pfVar6 = (float *)(DAT_5015cca0 + 0x470);
    iVar7 = DAT_5015cca0;
    do {
      iVar7 = iVar7 + 0x464;
      if ((((pfVar6[0x1b] != 0.0) && (fVar1 = pfVar6[100], fVar1 != 2.8026e-45)) &&
          (fVar1 != 4.2039e-45)) &&
         (((fVar1 != 0.0 && (fVar1 != 1.4013e-45)) &&
          ((pfVar6[0x1d] != 0.0 && (pfVar6[0xc9] == param_1)))))) {
        fVar1 = *(float *)((int)param_1 + 0x24c) * 0.1;
        fVar2 = *(float *)((int)param_1 + 0x250) * 0.1;
        fVar3 = *(float *)((int)param_1 + 0x254) * 0.1;
        pfVar6[-2] = fVar1 + pfVar6[-2];
        pfVar6[-1] = fVar2 + pfVar6[-1];
        *pfVar6 = fVar3 + *pfVar6;
        uVar4 = FUN_500b7600(iVar7);
        if (uVar4 == 0) {
          (*DAT_5015cb28)(iVar7);
        }
        else {
          pfVar6[-2] = pfVar6[-2] - fVar1;
          pfVar6[-1] = pfVar6[-1] - fVar2;
          *pfVar6 = *pfVar6 - fVar3;
        }
      }
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 0x119;
    } while (iVar5 < DAT_5015c938);
  }
  return;
}

