// rea decompile_all
// name: FUN_2000e620
// address: 0x2000e620
// body: available
// range: 0x2000e620-0x2000e68e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000e620(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_40 [64];
  
  if (param_1 != 0) {
    piVar4 = (int *)(param_1 + 0x28);
    iVar2 = 0x100;
    do {
      if ((piVar4 != (int *)0xc) && ((*(byte *)(piVar4 + -2) & 8) != 0)) {
        iVar1 = *piVar4;
        iVar3 = 0;
        do {
          if (iVar1 == 0) goto LAB_2000e682;
          iVar1 = FUN_200faaf0(iVar1 + 1,0x3b);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 8);
        if (iVar1 != 0) {
          Com_sprintf(local_40,0x40,s_pics__s_2011eef8,iVar1 + 1);
          (*DAT_20403590)(local_40);
        }
      }
LAB_2000e682:
      piVar4 = piVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

