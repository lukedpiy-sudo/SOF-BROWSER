// rea decompile_all
// name: FUN_30008e00
// address: 0x30008e00
// body: available
// range: 0x30008e00-0x30008eb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30008e00(void)

{
  int *piVar1;
  int *piVar2;
  int *local_8;
  undefined4 local_4;
  
  piVar2 = DAT_3004c644;
  local_8 = (int *)*DAT_3004c644;
  if (DAT_3004c650 == 0) {
    DAT_3004c650 = 0;
    piVar1 = local_8;
    while (piVar1 != piVar2) {
      local_8 = piVar1;
      FUN_300085b0((int *)&local_8);
      FUN_30009cd0(&DAT_3004c640,&local_4,piVar1);
      piVar1 = local_8;
    }
    DAT_3007c658 = 0;
    return;
  }
  piVar2 = (int *)DAT_3004c644[1];
  if ((int *)DAT_3004c644[1] != DAT_3004c648) {
    do {
      FUN_3000a130(&DAT_3004c640,(int *)piVar2[2]);
      piVar1 = (int *)*piVar2;
      FUN_3001f8bc((undefined *)piVar2);
      piVar2 = piVar1;
    } while (piVar1 != DAT_3004c648);
  }
  DAT_3004c644[1] = (int)DAT_3004c648;
  DAT_3004c650 = 0;
  *DAT_3004c644 = (int)DAT_3004c644;
  DAT_3004c644[2] = (int)DAT_3004c644;
  DAT_3007c658 = 0;
  return;
}

