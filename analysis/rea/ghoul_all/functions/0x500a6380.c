// rea decompile_all
// name: FUN_500a6380
// address: 0x500a6380
// body: available
// range: 0x500a6380-0x500a6430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a6380(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int **ppiVar4;
  undefined4 *local_c;
  int *local_8;
  int *local_4;
  
  local_c = (undefined4 *)*param_1;
  if (local_c != (undefined4 *)0x0) {
    FUN_5006b100(&DAT_5018b4b8,(int *)&local_8,(uint *)&local_c);
    piVar3 = local_8;
    if (local_8 != DAT_5018b4bc) {
      piVar1 = local_8 + 4;
      local_4 = FUN_5000a3a0(&DAT_5018b4cc,piVar1);
      if ((local_4 == DAT_5018b4d0) || (*piVar1 < local_4[3])) {
        local_8 = DAT_5018b4d0;
        ppiVar4 = &local_8;
      }
      else {
        ppiVar4 = &local_4;
      }
      FUN_500c4640(&DAT_5018b4cc,&local_4,*ppiVar4);
      FUN_500c4640(&DAT_5018b4b8,&local_4,piVar3);
      puVar2 = local_c;
      if (local_c != (undefined4 *)0x0) {
        FUN_500a3bd0(local_c);
        FUN_50106b60((undefined *)puVar2);
      }
    }
  }
  *param_1 = 0;
  return;
}

