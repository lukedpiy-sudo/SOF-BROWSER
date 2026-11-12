// rea decompile_all
// name: FUN_500b1ee0
// address: 0x500b1ee0
// body: available
// range: 0x500b1ee0-0x500b1f9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500b1ee0(void *this,float *param_1,float param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x118)) {
    piVar7 = (int *)((int)this + 0x18);
    do {
      iVar2 = *piVar7;
      fVar3 = *(float *)(DAT_5015cca0 + 4 + iVar2 * 0x464) - *param_1;
      iVar1 = DAT_5015cca0 + iVar2 * 0x464;
      fVar5 = *(float *)(DAT_5015cca0 + 8 + iVar2 * 0x464) - param_1[1];
      fVar4 = *(float *)(iVar1 + 0xc) - param_1[2];
      if (param_4 != 0) {
        fVar4 = fVar4 * 3.0;
      }
      if (fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 < param_2 * param_2) {
        *(int *)(param_3 + *(int *)(param_3 + 0x1000) * 4) = iVar1;
        *(int *)(param_3 + 0x1000) = *(int *)(param_3 + 0x1000) + 1;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < *(int *)((int)this + 0x118));
  }
  return;
}

