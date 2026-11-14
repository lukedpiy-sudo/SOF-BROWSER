// rea decompile_all
// name: FUN_30008800
// address: 0x30008800
// body: available
// range: 0x30008800-0x300088d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30008800(float *param_1,uint param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *param_3;
  while (iVar4 == -1) {
    pfVar1 = (float *)param_3[9];
    fVar2 = (*pfVar1 * *param_1 + pfVar1[1] * param_1[1] + pfVar1[2] * param_1[2]) - pfVar1[3];
    if (fVar2 <= param_1[6] - 64.0) {
      if (64.0 - param_1[6] <= fVar2) {
        iVar4 = 0;
        if (*(short *)((int)param_3 + 0x3a) != 0) {
          puVar3 = (uint *)(*(int *)(DAT_3008fc6c + 0xb8) + (uint)*(ushort *)(param_3 + 0xe) * 0x6c
                           + 0x48);
          do {
            if (puVar3[-1] != DAT_3004c638) {
              *puVar3 = 0;
              puVar3[-1] = DAT_3004c638;
            }
            iVar4 = iVar4 + 1;
            *puVar3 = *puVar3 | param_2;
            puVar3 = puVar3 + 0x1b;
          } while (iVar4 < (int)(uint)*(ushort *)((int)param_3 + 0x3a));
        }
        FUN_30008800(param_1,param_2,(int *)param_3[10]);
      }
      param_3 = (int *)param_3[0xb];
    }
    else {
      param_3 = (int *)param_3[10];
    }
    iVar4 = *param_3;
  }
  return;
}

