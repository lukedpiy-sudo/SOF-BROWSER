// rea decompile_all
// name: FUN_20106ffe
// address: 0x20106ffe
// body: available
// range: 0x20106ffe-0x2010712a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20106ffe(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *extraout_EAX;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  iVar2 = param_1;
  if (param_1 == 2) {
    puVar3 = &DAT_204086e0;
    pcVar6 = DAT_204086e0;
  }
  else if (((param_1 == 4) || (param_1 == 8)) || (param_1 == 0xb)) {
    iVar4 = FUN_2010712b(param_1);
    pcVar6 = *(code **)(iVar4 + 8);
    puVar3 = (undefined4 *)(iVar4 + 8);
  }
  else if (param_1 == 0xf) {
    puVar3 = &DAT_204086ec;
    pcVar6 = DAT_204086ec;
  }
  else if (param_1 == 0x15) {
    puVar3 = &DAT_204086e4;
    pcVar6 = DAT_204086e4;
  }
  else {
    if (param_1 != 0x16) {
      return 0xffffffff;
    }
    puVar3 = &DAT_204086e8;
    pcVar6 = DAT_204086e8;
  }
  if (pcVar6 == (code *)0x1) {
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    __exit(3);
    puVar3 = extraout_EAX;
  }
  iVar1 = DAT_2040856c;
  iVar4 = DAT_2015d7b4;
  if (((param_1 == 8) || (param_1 == 0xb)) || (iVar5 = param_1, param_1 == 4)) {
    DAT_2040856c = 0;
    iVar5 = iVar1;
    if (param_1 == 8) {
      DAT_2015d7b4 = 0x8c;
      param_1 = iVar4;
      goto LAB_201070c2;
    }
LAB_201070ee:
    *puVar3 = 0;
    if (iVar2 != 8) {
      (*pcVar6)(iVar2);
      if ((iVar2 != 0xb) && (iVar2 != 4)) {
        return 0;
      }
      goto LAB_20107111;
    }
  }
  else {
LAB_201070c2:
    if (iVar2 != 8) goto LAB_201070ee;
    if (DAT_2015d7a8 < DAT_2015d7ac + DAT_2015d7a8) {
      iVar4 = (DAT_2015d7ac + DAT_2015d7a8) - DAT_2015d7a8;
      puVar3 = (undefined4 *)(DAT_2015d7a8 * 0xc + 0x2015d738);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  (*pcVar6)(8,DAT_2015d7b4);
LAB_20107111:
  if (iVar2 == 8) {
    DAT_2015d7b4 = param_1;
  }
  DAT_2040856c = iVar5;
  return 0;
}

