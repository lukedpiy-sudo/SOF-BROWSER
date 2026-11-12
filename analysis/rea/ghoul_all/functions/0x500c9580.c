// rea decompile_all
// name: FUN_500c9580
// address: 0x500c9580
// body: available
// range: 0x500c9580-0x500c9660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c9580(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  int *local_10 [2];
  int *local_8;
  undefined4 local_4;
  
  piVar2 = param_1;
  FUN_500cd650((int)param_1);
  param_1 = FUN_50008e90(100,(int)piVar2);
  piVar2[0x114] = (int)param_1;
  if (param_1 != (int *)0x0) {
    FUN_500c7d40(&DAT_5018b440,(int *)local_10,(uint *)&param_1);
    piVar1 = DAT_501546ec;
    if ((local_10[0] == DAT_5018b444) || (param_1 < (int *)local_10[0][3])) {
      local_8 = DAT_5018b444;
      ppiVar3 = &local_8;
    }
    else {
      ppiVar3 = local_10;
    }
    if (*ppiVar3 == DAT_5018b444) {
      local_8 = param_1;
      DAT_501546ec = (int *)((int)DAT_501546ec + 1);
      local_4 = 0;
      FUN_5000a3d0(&DAT_5018b440,local_10,(uint *)&local_8);
      local_10[0][4] = (int)piVar1;
      local_8 = piVar1;
      local_4 = 0;
      FUN_5000a5e0(&DAT_5018b454,local_10,(int *)&local_8);
      local_10[0][4] = (int)param_1;
    }
  }
  piVar2[0xae] = (int)&LAB_500cd070;
  return;
}

