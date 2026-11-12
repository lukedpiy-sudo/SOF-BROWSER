// rea decompile_all
// name: FUN_20042720
// address: 0x20042720
// body: available
// range: 0x20042720-0x200427d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20042720(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = param_1;
  if ((param_1 != (int *)0x0) &&
     (piVar4 = (int *)(**(code **)(*param_1 + 0x88))(), piVar4 != (int *)0x0)) {
    param_1 = (int *)0x0;
    do {
      uVar3 = (**(code **)(*piVar4 + 0x20))();
      iVar5 = irand(1,uVar3);
      cVar2 = (**(code **)(*piVar1 + 0x24))(iVar5);
      if (cVar2 != '\0') {
        return iVar5;
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < 6);
    uVar6 = (**(code **)(*piVar4 + 0x20))();
    param_1 = (int *)(uVar6 & 0xffff);
    iVar5 = irand(1,param_1);
    do {
      cVar2 = (**(code **)(*piVar1 + 0x24))(iVar5);
      if (cVar2 != '\0') {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      uVar6 = (**(code **)(*piVar4 + 0x20))();
      if ((int)(uVar6 & 0xffff) < iVar5) {
        iVar5 = 1;
      }
      param_1 = (int *)((int)param_1 - 1);
    } while (0 < (int)param_1);
  }
  return 0;
}

