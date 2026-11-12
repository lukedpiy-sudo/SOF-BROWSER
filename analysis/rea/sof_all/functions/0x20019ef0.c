// rea decompile_all
// name: FUN_20019ef0
// address: 0x20019ef0
// body: available
// range: 0x20019ef0-0x20019fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20019ef0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_4;
  
  if (param_1 == 0) {
    puVar4 = &DAT_20243c58;
    for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DAT_20246d0c = DAT_20246d0c + 1;
    iVar1 = 0;
    param_1 = 1;
    if (1 < DAT_201204a8) {
      local_4 = 0x10;
      do {
        piVar3 = (int *)(local_4 + DAT_20244cd0);
        if (piVar3[3] != DAT_20246d0c) {
          iVar1 = iVar1 + 1;
          piVar3[2] = iVar1;
          piVar3[3] = DAT_20246d0c;
          iVar2 = 0;
          piVar5 = (int *)(DAT_20246cec + piVar3[1] * 8);
          if (0 < *piVar3) {
            do {
              if ((&DAT_20243c58)[*piVar5] != 0) {
                FUN_2001bf30(piVar5[1] * 0x10 + DAT_20244cd0,iVar1);
              }
              iVar2 = iVar2 + 1;
              piVar5 = piVar5 + 2;
            } while (iVar2 < *piVar3);
          }
        }
        param_1 = param_1 + 1;
        local_4 = local_4 + 0x10;
      } while (param_1 < DAT_201204a8);
    }
  }
  iVar1 = 0;
  if (0 < DAT_20248e00) {
    piVar3 = (int *)(DAT_20246cdc + 0x34);
    do {
      *piVar3 = piVar3[1];
      piVar3[-2] = piVar3[-1];
      piVar3[3] = (int)*(char *)(piVar3[1] + 0x100);
      piVar3[4] = 0;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x12;
    } while (iVar1 < DAT_20248e00);
  }
  return;
}

