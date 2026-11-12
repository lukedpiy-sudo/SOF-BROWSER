// rea decompile_all
// name: FUN_500b3fe0
// address: 0x500b3fe0
// body: available
// range: 0x500b3fe0-0x500b408e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b3fe0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iStack_8;
  int iStack_4;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x88))();
    piVar3 = (int *)FUN_500a5e10(&DAT_5015c79c,uVar2);
    if (piVar3 != (int *)0x0) {
      param_1 = piVar3;
      piVar4 = (int *)FUN_5006b100(&DAT_5018b468,&iStack_4,(uint *)&param_1);
      if (*piVar4 == DAT_5018b46c) {
        iStack_8 = DAT_501546ec;
        DAT_501546ec = DAT_501546ec + 1;
        piVar4 = (int *)FUN_500a6440(&DAT_5018b468,(uint *)&param_1);
        *piVar4 = iStack_8;
        puVar5 = (undefined4 *)FUN_50010ba0(&DAT_5018b47c,&iStack_8);
        *puVar5 = param_1;
      }
      if ((int *)piVar3[9] != (int *)0x0) {
        uVar6 = (**(code **)(*(int *)piVar3[9] + 0x1c))(param_2);
        if ((short)uVar6 != 0) {
          (**(code **)(*piVar1 + 0x20))(uVar6,1);
        }
      }
    }
  }
  return;
}

