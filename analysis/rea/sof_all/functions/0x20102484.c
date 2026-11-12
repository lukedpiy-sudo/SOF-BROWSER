// rea decompile_all
// name: FUN_20102484
// address: 0x20102484
// body: available
// range: 0x20102484-0x201025c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LONG FUN_20102484(undefined4 param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar4 = (int *)FUN_201025c5(param_1);
  uVar3 = DAT_2040856c;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
  }
  else if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    LVar5 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DAT_2040856c = param_2;
      if (piVar4[1] == 8) {
        if (DAT_2015d7a8 < DAT_2015d7ac + DAT_2015d7a8) {
          iVar6 = (DAT_2015d7ac + DAT_2015d7a8) - DAT_2015d7a8;
          puVar7 = (undefined4 *)(DAT_2015d7a8 * 0xc + 0x2015d738);
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = DAT_2015d7b4;
        iVar6 = *piVar4;
        if (iVar6 == -0x3fffff72) {
          DAT_2015d7b4 = 0x83;
        }
        else if (iVar6 == -0x3fffff70) {
          DAT_2015d7b4 = 0x81;
        }
        else if (iVar6 == -0x3fffff6f) {
          DAT_2015d7b4 = 0x84;
        }
        else if (iVar6 == -0x3fffff6d) {
          DAT_2015d7b4 = 0x85;
        }
        else if (iVar6 == -0x3fffff73) {
          DAT_2015d7b4 = 0x82;
        }
        else if (iVar6 == -0x3fffff71) {
          DAT_2015d7b4 = 0x86;
        }
        else if (iVar6 == -0x3fffff6e) {
          DAT_2015d7b4 = 0x8a;
        }
        (*pcVar1)(8,DAT_2015d7b4);
        DAT_2015d7b4 = uVar2;
      }
      else {
        piVar4[2] = 0;
        (*pcVar1)(piVar4[1]);
      }
    }
    LVar5 = -1;
    DAT_2040856c = (_EXCEPTION_POINTERS *)uVar3;
  }
  return LVar5;
}

