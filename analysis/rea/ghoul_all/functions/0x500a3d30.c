// rea decompile_all
// name: FUN_500a3d30
// address: 0x500a3d30
// body: available
// range: 0x500a3d30-0x500a3e08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a3d30(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar4 = (int *)**(undefined4 **)(param_1 + 4);
  local_14 = *(int *)(param_1 + 8);
  if (0 < local_14) {
    do {
      piVar1 = (int *)*piVar4;
      if (((undefined4 *)piVar4[2] != (undefined4 *)0x0) &&
         (local_18 = (undefined4 *)piVar4[2],
         FUN_5006b100(&DAT_5018b490,(int *)&local_10,(uint *)&local_18), piVar3 = local_10,
         local_10 != DAT_5018b494)) {
        FUN_5006b1a0(&DAT_5018b4a4,(int *)&local_c,local_10 + 4);
        FUN_500c4640(&DAT_5018b4a4,&local_8,local_c);
        FUN_500c4640(&DAT_5018b490,&local_4,piVar3);
        puVar2 = local_18;
        if (local_18 != (undefined4 *)0x0) {
          FUN_500a31a0(local_18);
          FUN_50106b60((undefined *)puVar2);
        }
      }
      piVar4[2] = 0;
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
      FUN_50106b60((undefined *)piVar4);
      local_14 = local_14 + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      piVar4 = piVar1;
    } while (local_14 != 0);
  }
  return;
}

