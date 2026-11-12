// rea decompile_all
// name: FUN_5004b7c0
// address: 0x5004b7c0
// body: available
// range: 0x5004b7c0-0x5004b8a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5004b7c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  
  iVar6 = 1;
  iVar1 = *(int *)this;
  iVar4 = iVar1 >> 1;
  for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 >> 1) {
    iVar6 = iVar6 * 2;
  }
  iVar2 = *(int *)((int)this + 4);
  iVar6 = iVar6 >> 2;
  while( true ) {
    if (*(float *)(iVar2 + 8 + iVar4 * 0xc) <= *(float *)(param_1 + 4)) {
      if (*(float *)(param_1 + 4) <= *(float *)(iVar2 + 8 + iVar4 * 0xc) + 48.0) {
        _DAT_50159188 = *(undefined4 *)(iVar4 * 0xc + 8 + iVar2);
        piVar5 = (int *)(*(int *)((int)this + 4) + iVar4 * 0xc);
        uVar3 = *piVar5 - 1;
        if (-1 < (int)uVar3) {
          pfVar7 = (float *)(piVar5[1] + 8 + uVar3 * 0x38);
          do {
            if (*pfVar7 < *(float *)(param_1 + 8)) {
              _DAT_5015918c = *(undefined4 *)(uVar3 * 0x38 + 8 + piVar5[1]);
              return piVar5[1] + uVar3 * 0x38;
            }
            uVar3 = uVar3 - 1;
            pfVar7 = pfVar7 + -0xe;
          } while (uVar3 < 0x80000000);
        }
        return 0;
      }
      iVar4 = iVar4 + iVar6;
      if (iVar1 <= iVar4) {
        iVar4 = iVar1 + -1;
      }
    }
    else {
      iVar4 = iVar4 - iVar6;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
    }
    if (iVar6 == 0) break;
    iVar6 = iVar6 >> 1;
  }
  return 0;
}

