// rea decompile_all
// name: FUN_2005f5b0
// address: 0x2005f5b0
// body: available
// range: 0x2005f5b0-0x2005f718 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005f5b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_20396ddc != (undefined4 *)0x0) {
    *DAT_20396ddc = 0;
  }
  DAT_20249f48 = 0;
  DAT_20249e40 = 0;
  if (DAT_20396de0 != 0) {
    DAT_20396de4 = DAT_20396de4 + param_1;
    FUN_2005f290();
    FUN_2005f100();
    if ((*(float *)(DAT_203fec98 + 0x18) == 0.0) && (DAT_20396de4 < DAT_203a1f28)) {
      if (100 < DAT_203a1f28 - DAT_20396de4) {
        if (*(float *)(DAT_203fecc8 + 0x18) != 0.0) {
          Com_Printf(s_sv_lowclamp_20139c40);
        }
        DAT_20396de4 = DAT_203a1f28 - 100;
        return;
      }
    }
    else {
      if (*(int *)(DAT_203fec84 + 0x14) != 0) {
        FUN_2005d670(*(undefined4 *)(DAT_203fec84 + 4));
        *(undefined4 *)(DAT_203fec84 + 0x14) = 0;
      }
      FUN_2005f060();
      if (((byte)DAT_203a1f30 & 0xf) == 0) {
        iVar3 = 0;
        iVar1 = __ftol();
        if (0 < iVar1) {
          iVar4 = 0;
          iVar1 = DAT_20396eec;
          do {
            if (*(int *)(iVar4 + iVar1) != 0) {
              *(undefined4 *)(iVar4 + 0x220 + iVar1) = 0x708;
              iVar1 = DAT_20396eec;
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0xd2ac;
            iVar2 = __ftol();
          } while (iVar3 < iVar2);
        }
      }
      FUN_2005f3f0();
      FUN_20062560();
      FUN_2005c090();
      FUN_2005f720();
      iVar1 = 0;
      if (0 < *(int *)(DAT_20396dd8 + 0x68)) {
        do {
          iVar3 = *(int *)(DAT_20396dd8 + 100) * iVar1 + *(int *)(DAT_20396dd8 + 0x60);
          iVar1 = iVar1 + 1;
          *(undefined4 *)(iVar3 + 0x44) = 0;
          *(undefined4 *)(iVar3 + 0x48) = 0;
          *(undefined4 *)(iVar3 + 0x4c) = 0;
        } while (iVar1 < *(int *)(DAT_20396dd8 + 0x68));
      }
    }
  }
  return;
}

