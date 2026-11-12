// rea decompile_all
// name: FUN_2001c1d0
// address: 0x2001c1d0
// body: available
// range: 0x2001c1d0-0x2001c2a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001c1d0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  int local_4;
  
  FUN_20060490(0x50525453,&DAT_20243c58,0x1000,0);
  DAT_20246d0c = DAT_20246d0c + 1;
  iVar2 = 0;
  local_8 = 1;
  if (1 < DAT_201204a8) {
    local_4 = 0x10;
    do {
      piVar3 = (int *)(local_4 + DAT_20244cd0);
      if (piVar3[3] != DAT_20246d0c) {
        iVar2 = iVar2 + 1;
        piVar3[2] = iVar2;
        piVar3[3] = DAT_20246d0c;
        iVar1 = 0;
        piVar4 = (int *)(DAT_20246cec + piVar3[1] * 8);
        if (0 < *piVar3) {
          do {
            if ((&DAT_20243c58)[*piVar4] != 0) {
              FUN_2001bf30(piVar4[1] * 0x10 + DAT_20244cd0,iVar2);
            }
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 2;
          } while (iVar1 < *piVar3);
        }
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 0x10;
    } while (local_8 < DAT_201204a8);
  }
  return;
}

