// rea decompile_all
// name: FUN_500b3dc0
// address: 0x500b3dc0
// body: available
// range: 0x500b3dc0-0x500b3e92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b3dc0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iStack_4;
  
  uVar1 = param_1;
  uVar6 = 0;
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar3 = FUN_500a5e10(&DAT_5015c79c,uVar3);
    iVar2 = param_2;
    param_1 = uVar3;
    if (uVar3 != 0) {
      piVar4 = (int *)FUN_5006b100(&DAT_5018b468,&iStack_4,&param_1);
      if (*piVar4 == DAT_5018b46c) {
        param_2 = DAT_501546ec;
        DAT_501546ec = DAT_501546ec + 1;
        piVar4 = (int *)FUN_500a6440(&DAT_5018b468,&param_1);
        *piVar4 = param_2;
        puVar5 = (uint *)FUN_50010ba0(&DAT_5018b47c,&param_2);
        *puVar5 = param_1;
      }
      if (*(int **)(uVar3 + 0x24) != (int *)0x0) {
        uVar6 = (**(code **)(**(int **)(uVar3 + 0x24) + 0x1c))(iVar2);
      }
    }
    if ((*(int **)(uVar1 + 0x164) != (int *)0x0) && ((short)uVar6 != 0)) {
      (**(code **)(**(int **)(uVar1 + 0x164) + 0x20))(uVar6,0);
      return;
    }
    (*DAT_5015ca24)(s_ERROR__SimpleModelRemoveObject___5014d308,iVar2);
  }
  return;
}

