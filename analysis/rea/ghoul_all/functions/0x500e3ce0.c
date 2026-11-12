// rea decompile_all
// name: FUN_500e3ce0
// address: 0x500e3ce0
// body: available
// range: 0x500e3ce0-0x500e3df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_500e3ce0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *local_18;
  undefined4 local_14;
  int local_10 [4];
  
  piVar2 = param_1;
  FUN_500cd650((int)param_1);
  param_1 = FUN_50008e90(0x22,(int)piVar2);
  piVar2[0x114] = (int)param_1;
  if (param_1 != (int *)0x0) {
    FUN_5006b100(&DAT_5018b440,(int *)&local_18,(uint *)&param_1);
    iVar1 = DAT_501546ec;
    if (local_18 == DAT_5018b444) {
      DAT_501546ec = DAT_501546ec + 1;
      local_18 = param_1;
      local_14 = 0;
      FUN_5000a3d0(&DAT_5018b440,local_10,(uint *)&local_18);
      FUN_50010d30(local_10 + 2,local_10,(undefined1 *)(local_10 + 1));
      *(int *)(local_10[2] + 0x10) = iVar1;
      local_10[0] = iVar1;
      local_10[1] = 0;
      piVar3 = (int *)FUN_500c7c80(&DAT_5018b454,local_10 + 2,local_10);
      *(int **)(*piVar3 + 0x10) = param_1;
    }
  }
  piVar2[0xae] = (int)&LAB_500cd070;
  (*DAT_5015c9f4)(s_impact_Hawk_LookOut_adp_501538a0);
  FUN_500071c0((void *)piVar2[0x114],0,0xc1800000,0xc1800000,0xc2000000,0x41800000,0x41800000,
               0x42240000);
  return;
}

