// rea decompile_all
// name: FUN_5004bbf0
// address: 0x5004bbf0
// body: available
// range: 0x5004bbf0-0x5004bcae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5004bbf0(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 8);
  iVar3 = iVar1 >> 1;
  iVar4 = 1;
  for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 >> 1) {
    iVar4 = iVar4 * 2;
  }
  iVar2 = *(int *)((int)this + 0xc);
  iVar4 = iVar4 >> 2;
  if (iVar2 != 0) {
    if (param_1 != (float *)0x0) {
      while( true ) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        if (iVar1 <= iVar3) {
          iVar3 = iVar1 + -1;
        }
        if (*(float *)(iVar2 + 8 + iVar3 * 0xc) <= *param_1) {
          if (*param_1 <= *(float *)(iVar2 + 8 + iVar3 * 0xc) + 48.0) {
            _DAT_50159184 = *(undefined4 *)(iVar3 * 0xc + 8 + iVar2);
            iVar3 = FUN_5004b7c0((void *)(*(int *)((int)this + 0xc) + iVar3 * 0xc),(int)param_1);
            return iVar3;
          }
          iVar3 = iVar3 + iVar4;
          if (iVar1 <= iVar3) {
            iVar3 = iVar1 + -1;
          }
        }
        else {
          iVar3 = iVar3 - iVar4;
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        if (iVar4 == 0) break;
        iVar4 = iVar4 >> 1;
      }
    }
    return 0;
  }
  return 0;
}

