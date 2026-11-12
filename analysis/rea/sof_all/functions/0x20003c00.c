// rea decompile_all
// name: FUN_20003c00
// address: 0x20003c00
// body: available
// range: 0x20003c00-0x20003dc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20003db9 to 0x20016690 FUN_20016690 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20003c00(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = DAT_20225820;
  sVar1 = DAT_2022581c;
  if ((*(float *)(DAT_2015ee60 + 0x18) != 0.0) && (*(float *)(param_1 + 0x94) <= 95.0)) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      if (((DAT_20225820 == 0) || (DAT_2022581c != 0)) && (*(short *)(param_1 + 0x70) != 0)) {
        iVar2 = 0;
        puVar5 = &DAT_2015eb10;
        for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        do {
          *(undefined4 *)((int)&DAT_2015eb38 + iVar2) = *(undefined4 *)((int)&DAT_201e8ff0 + iVar2);
          *(undefined4 *)((int)&DAT_2015eb14 + iVar2) = *(undefined4 *)((int)&DAT_201e8ffc + iVar2);
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0xc);
        _DAT_2015eb1c = _DAT_2015eb1c * -1.0;
        DAT_2015eb14 = DAT_2015eb14 * -1.0;
        _DAT_2015eb4c = 1.0 - DAT_201e8fd0;
        if (iVar3 == 0) {
          sVar1 = *(short *)(param_1 + 0x70);
        }
        _DAT_2015eb44 = (int)sVar1;
        FUN_200037e0(param_2,param_1);
        _DAT_2015eb64 = 0x400015;
        goto LAB_20003d9c;
      }
    }
    else if (*(short *)(param_1 + 0x80) != 0) {
      puVar5 = &DAT_2015eb10;
      for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      DAT_2015eb38 = DAT_2015f1e4;
      DAT_2015eb3c = DAT_2015f1e8;
      _DAT_2015eb1c = 0.0;
      DAT_2015eb14 = 0.0;
      DAT_2015eb18 = DAT_201e7e4c;
      _DAT_2015eb40 = *(float *)(param_1 + 0x30) * 0.3 + DAT_2015f1ec;
      _DAT_2015eb4c = 1.0 - DAT_201e8fd0;
      _DAT_2015eb44 = (int)*(short *)(param_1 + 0x80);
      _DAT_2015eb64 = 0x400001;
LAB_20003d9c:
      _DAT_2015eb68 = 0;
      FUN_20016690();
      return;
    }
  }
  return;
}

