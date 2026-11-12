// rea decompile_all
// name: FUN_200a9840
// address: 0x200a9840
// body: available
// range: 0x200a9840-0x200a98c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float FUN_200a9840(float *param_1,float *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = (*param_1 - *param_2) * (*param_1 - *param_2);
  fVar2 = (float)(uint)(ushort)((ushort)(fVar1 < param_3) << 8 | (ushort)(fVar1 == param_3) << 0xe);
  if (fVar1 >= param_3 && (fVar1 == param_3) == 0) {
    return fVar2;
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      fVar2 = (*param_1 - *param_2) * (*param_1 - *param_2) +
              (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
      if (fVar2 >= param_3 && (fVar2 == param_3) == 0) {
        return (float)(uint)(ushort)((ushort)(fVar2 < param_3) << 8 |
                                    (ushort)(fVar2 == param_3) << 0xe);
      }
      iVar3 = iVar3 + 1;
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      fVar2 = param_2[2];
      param_1[2] = fVar2;
      param_1 = param_1 + 3;
      param_2 = param_2 + 3;
    } while (iVar3 < param_4);
  }
  return (float)CONCAT31((int3)((uint)fVar2 >> 8),1);
}

