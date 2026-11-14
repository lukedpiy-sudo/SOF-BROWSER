// rea decompile_all
// name: FUN_3002457c
// address: 0x3002457c
// body: available
// range: 0x3002457c-0x300246ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_3002457c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_30033fa8;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_30024607:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_300246a2;
        if (param_3 < 0.0) goto LAB_30024639;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_300246ac(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_30033fa8;
          if (iVar3 == 1) {
            dVar2 = -_DAT_30033fa8;
          }
          goto LAB_300246a2;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_30033fc8;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_300246a2;
        }
      }
      dVar2 = 1.0;
      goto LAB_300246a2;
    }
    if (1.0 < dVar1) goto LAB_300246a2;
    if (1.0 <= dVar1) {
LAB_300245cc:
      *param_4 = _DAT_30033fb0;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_30024607;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_300245cc;
      goto LAB_300246a2;
    }
  }
LAB_30024639:
  dVar2 = 0.0;
LAB_300246a2:
  *param_4 = dVar2;
  return 0;
}

