// rea decompile_all
// name: FUN_5000e310
// address: 0x5000e310
// body: available
// range: 0x5000e310-0x5000e515 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_5000e310(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x2fc) == 0) {
    if ((char)((uint)*(undefined4 *)(param_1 + 0x30) >> 8) < '\0') {
      iVar3 = FUN_500850a0(param_1);
      return iVar3 != 0;
    }
    if ((((float)_DAT_5015dadc < *(float *)(DAT_5015c994 + 0x18)) || (DAT_5015d8d5 != '\0')) ||
       (bVar2 = FUN_500887e0(param_1,DAT_5015d1ec), CONCAT31(extraout_var,bVar2) != 0)) {
      _DAT_5015dadc = _DAT_5015dadc + 1;
    }
    else if (*(float *)((int)this + 0x70) + 3.0 < DAT_5015ccdc) {
      if (*(int *)(param_1 + 0x164) == 0) {
        return true;
      }
      FUN_50085010(param_1);
      return false;
    }
    if (DAT_5015ccdc - *(float *)((int)this + 0x70) < *(float *)(DAT_5015c994 + 0x18) * 15.0) {
      return false;
    }
    iVar3 = 0;
    if (0 < DAT_5015d8c8) {
      iVar5 = 0x464;
      do {
        iVar1 = iVar5 + DAT_5015cca0;
        if (*(int *)(iVar5 + 0x78 + DAT_5015cca0) != 0) {
          local_18 = *(float *)(param_1 + 4) - *(float *)(iVar1 + 4);
          local_14 = *(float *)(param_1 + 8) - *(float *)(iVar1 + 8);
          local_10 = *(float *)(param_1 + 0xc) - *(float *)(iVar1 + 0xc);
          if ((local_18 * local_18 + local_14 * local_14 + local_10 * local_10 <= 640000.0) &&
             (iVar4 = (*DAT_5015cad0)(param_1 + 4,param_1 + 4), iVar4 != 0)) {
            FUN_500fdd70((float *)(iVar1 + 0x10),&fStack_c,(float *)0x0,(float *)0x0);
            FUN_500fe050(&local_18);
            if (-0.35 < fStack_c * local_18 + fStack_8 * local_14 + fStack_4 * local_10) {
              *(float *)((int)this + 0x70) = DAT_5015ccdc - 25.0;
              return false;
            }
          }
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x464;
      } while (iVar3 < DAT_5015d8c8);
    }
    *(float *)((int)this + 0x70) = DAT_5015ccdc - 25.0;
  }
  return true;
}

