// rea decompile_all
// name: FUN_20031340
// address: 0x20031340
// body: available
// range: 0x20031340-0x20031597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20031340(char *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char local_100 [256];
  
  if ((DAT_201e7f58._3_1_ == '\0') && (DAT_201e8fe8 == 95.0)) {
    iVar3 = -(int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)(local_100 + iVar3)] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_200fb453(local_100,&DAT_2011d72c);
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_200fb453(0,&DAT_2011d72c);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = s_flash_20131568;
      }
      iVar5 = FUN_200fa6a0(iVar3,s_exhaust_20132e70);
      if (iVar5 != 0) {
        pcVar4 = s_exhause_l_20132e64;
      }
      if (DAT_20225820 == 0) {
        if (DAT_201e7f00 == (int *)0x0) {
          return 1;
        }
        piVar6 = (int *)(**(code **)(*DAT_201e7f00 + 0x88))();
      }
      else {
        if (DAT_20225258 == (int *)0x0) {
          return 1;
        }
        piVar6 = (int *)(**(code **)(*DAT_20225258 + 0x88))();
      }
      if ((piVar6 != (int *)0x0) && (sVar2 = (**(code **)(*piVar6 + 0x1c))(pcVar4), sVar2 != 0)) {
        if (DAT_20225820 == 0) {
          (**(code **)(*DAT_201e7f00 + 0x9c))();
        }
        else {
          (**(code **)(*DAT_20225258 + 0x9c))();
        }
        FUN_20043460(iVar3,&stack0xfffffe78,2);
      }
    }
  }
  return 1;
}

