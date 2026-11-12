// rea decompile_all
// name: FUN_2010388c
// address: 0x2010388c
// body: available
// range: 0x2010388c-0x201039bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2010388c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_2015d988;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_20103917:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_201039b2;
        if (param_3 < 0.0) goto LAB_20103949;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_201039bc(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_2015d988;
          if (iVar3 == 1) {
            dVar2 = -_DAT_2015d988;
          }
          goto LAB_201039b2;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_2015d9a8;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_201039b2;
        }
      }
      dVar2 = 1.0;
      goto LAB_201039b2;
    }
    if (1.0 < dVar1) goto LAB_201039b2;
    if (1.0 <= dVar1) {
LAB_201038dc:
      *param_4 = _DAT_2015d990;
      return 1;
    }
  }
  else {
    if ((param_3._4_4_ != -0x100000) || (param_3._0_4_ != 0)) goto LAB_20103917;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_201038dc;
      goto LAB_201039b2;
    }
  }
LAB_20103949:
  dVar2 = 0.0;
LAB_201039b2:
  *param_4 = dVar2;
  return 0;
}

