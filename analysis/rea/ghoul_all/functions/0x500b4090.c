// rea decompile_all
// name: FUN_500b4090
// address: 0x500b4090
// body: available
// range: 0x500b4090-0x500b4150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b4090(uint param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iStack_8;
  int iStack_4;
  
  uVar1 = param_1;
  uVar5 = 0;
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar2 = FUN_500a5e10(&DAT_5015c79c,uVar2);
    param_1 = uVar2;
    if (uVar2 != 0) {
      piVar3 = (int *)FUN_5006b100(&DAT_5018b468,&iStack_4,&param_1);
      if (*piVar3 == DAT_5018b46c) {
        iStack_8 = DAT_501546ec;
        DAT_501546ec = DAT_501546ec + 1;
        piVar3 = (int *)FUN_500a6440(&DAT_5018b468,&param_1);
        *piVar3 = iStack_8;
        puVar4 = (uint *)FUN_50010ba0(&DAT_5018b47c,&iStack_8);
        *puVar4 = param_1;
      }
      if (*(int **)(uVar2 + 0x24) != (int *)0x0) {
        uVar5 = (**(code **)(**(int **)(uVar2 + 0x24) + 0x1c))(param_2);
      }
    }
    if ((*(int **)(uVar1 + 0x164) != (int *)0x0) && ((short)uVar5 != 0)) {
      (**(code **)(**(int **)(uVar1 + 0x164) + 0x20))(uVar5,1);
    }
  }
  return;
}

