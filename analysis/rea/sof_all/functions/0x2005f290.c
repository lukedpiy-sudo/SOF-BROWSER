// rea decompile_all
// name: FUN_2005f290
// address: 0x2005f290
// body: available
// range: 0x2005f290-0x2005f3ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005f290(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = __ftol();
  iVar2 = __ftol();
  piVar5 = DAT_20396eec;
  iVar4 = 0;
  iVar3 = __ftol();
  if (0 < iVar3) {
    do {
      if (DAT_20396de4 < piVar5[0x1499]) {
        piVar5[0x1499] = DAT_20396de4;
      }
      iVar3 = *piVar5;
      if ((iVar3 == 1) && (piVar5[0x1499] < iVar2)) {
LAB_2005f3b7:
        *piVar5 = 0;
        FUN_2008ea80(iVar4);
      }
      else if (((iVar3 == 2) || (iVar3 == 3)) && (piVar5[0x1499] < iVar1)) {
        FUN_200618d0(2,s__s_timed_out_20139c14,piVar5 + 0xa7);
        FUN_2001cb00(piVar5 + 0x14ad,8);
        FUN_2001cb70(piVar5 + 0x14ad,0x40b);
        (**(code **)(DAT_20396dd8 + 0x3c))(piVar5[0xa6]);
        if (*piVar5 == 3) {
          (**(code **)(DAT_20396dd8 + 0x30))(piVar5[0xa6]);
        }
        if (piVar5[0x1496] != 0) {
          FS_FreeFile(piVar5[0x1496]);
          piVar5[0x1496] = 0;
        }
        *(undefined1 *)(piVar5 + 0xa7) = 0;
        goto LAB_2005f3b7;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x34ab;
      iVar3 = __ftol();
    } while (iVar4 < iVar3);
  }
  return;
}

