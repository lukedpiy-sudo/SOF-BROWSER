// rea decompile_all
// name: FUN_300077b0
// address: 0x300077b0
// body: available
// range: 0x300077b0-0x30007865 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_300077b0(void)

{
  int *piVar1;
  int *piVar2;
  int *local_8;
  undefined4 local_4;
  
  piVar2 = DAT_30034dec;
  local_8 = (int *)*DAT_30034dec;
  if (DAT_30034df8 == 0) {
    DAT_30034df8 = 0;
    piVar1 = local_8;
    while (piVar1 != piVar2) {
      local_8 = piVar1;
      FUN_300085b0((int *)&local_8);
      FUN_30005580(&DAT_30034de8,&local_4,piVar1);
      piVar1 = local_8;
    }
    return;
  }
  piVar2 = (int *)DAT_30034dec[1];
  if ((int *)DAT_30034dec[1] != DAT_30034df0) {
    do {
      FUN_30008250(&DAT_30034de8,(int *)piVar2[2]);
      piVar1 = (int *)*piVar2;
      FUN_30004c50((int)(piVar2 + 3));
      FUN_3001f8bc((undefined *)piVar2);
      piVar2 = piVar1;
    } while (piVar1 != DAT_30034df0);
  }
  DAT_30034dec[1] = (int)DAT_30034df0;
  DAT_30034df8 = 0;
  *DAT_30034dec = (int)DAT_30034dec;
  DAT_30034dec[2] = (int)DAT_30034dec;
  return;
}

