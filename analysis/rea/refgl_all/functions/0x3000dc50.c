// rea decompile_all
// name: FUN_3000dc50
// address: 0x3000dc50
// body: available
// range: 0x3000dc50-0x3000dccd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_3000dc50(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (*(float *)(DAT_3008fec4 + 0x18) == 0.0) {
    pbVar3 = &DAT_3008fe58;
    do {
      if (*pbVar3 < 3) {
        iVar2 = (uint)*pbVar3 * 4;
        fVar1 = *(float *)(iVar2 + (int)param_1);
        if (*(float *)(pbVar3 + -4) < fVar1 == (*(float *)(pbVar3 + -4) == fVar1)) {
          bVar4 = *(float *)(iVar2 + (int)param_2) <= *(float *)(pbVar3 + -4);
          goto LAB_3000dcb2;
        }
      }
      else {
        iVar2 = FUN_3001ce10(param_1,param_2,(undefined8 *)(pbVar3 + -0x10));
        bVar4 = iVar2 == 2;
LAB_3000dcb2:
        if (bVar4) {
          return 1;
        }
      }
      pbVar3 = pbVar3 + 0x14;
    } while ((int)pbVar3 < 0x3008fea8);
  }
  return 0;
}

