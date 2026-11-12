// rea decompile_all
// name: FUN_50013140
// address: 0x50013140
// body: available
// range: 0x50013140-0x500131ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50013140(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x54) + 0x1c);
  }
  piVar1 = (int *)(**(code **)(*piVar1 + 0x88))();
  if (piVar1 == (int *)0x0) {
    return;
  }
  uVar2 = (**(code **)(*piVar1 + 0x40))(s_canopy_5012fa04);
  uVar3 = 0;
  if (unaff_retaddr == 1) {
    pcVar4 = s_glass_blood_fnt_5012f9d4;
  }
  else {
    if (unaff_retaddr == 2) {
      uVar3 = (**(code **)(*piVar1 + 0x50))(uVar2,s_glass_blood_bk_5012f9e4,0);
      goto LAB_500131a6;
    }
    if (unaff_retaddr != 3) goto LAB_500131a6;
    pcVar4 = s_glass_bloody_5012f9f4;
  }
  uVar3 = (**(code **)(*piVar1 + 0x50))(uVar2,pcVar4,0);
LAB_500131a6:
  if (*(int *)(param_1 + 0x54) == 0) {
    (**(code **)(iRam00000000 + 0x2c))(uVar2,uVar3,0);
    return;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x1c) + 0x2c))(uVar2,uVar3,0);
  return;
}

