// rea decompile_all
// name: FUN_500ebcc0
// address: 0x500ebcc0
// body: available
// range: 0x500ebcc0-0x500ebdfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_500ebcc0(void *this,int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *unaff_EBP;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  
  iVar2 = (**(code **)(*(int *)this + 0x228))();
  uVar5 = 0;
  if (((iVar2 != 0) && (uVar5 = *(uint *)(iVar2 + 0x5c), uVar5 != 0)) &&
     (piVar6 = *(int **)(uVar5 + 0x1c), piVar6 != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
    uVar5 = 0;
    if (piVar3 != (int *)0x0) {
      FUN_50084ab0(param_1 + 4,1,2);
      uVar1 = (**(code **)(*piVar3 + 0x1c))(s_flash_canon_50153f6c);
      iVar7 = *(int *)(iVar2 + 0x54);
      iVar11 = 0;
      iVar9 = 0;
      uVar8 = 1;
      piVar3 = piVar6;
      iVar4 = (*DAT_5015c9f8)(s_weapons_othermz_tank_50153d78);
      FUN_50085470(&DAT_5015c518,iVar4,iVar7,piVar3,uVar1,uVar8,iVar9,iVar11);
      FUN_500b41d0(piVar6,s_canon_50153eec,0);
      if (*(int *)(iVar2 + 0x58) == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *(int **)(*(int *)(iVar2 + 0x58) + 0x1c);
      }
      FUN_500b41d0(piVar6,s_turret_50153ca0,0);
      *(undefined1 *)(iVar2 + 0x7e) = 1;
      iVar7 = *(int *)(iVar2 + 0x54);
      if (*(char *)(iVar2 + 0x7d) == '\0') {
        if (iVar7 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = *(int **)(iVar7 + 0x164);
        }
        pcVar10 = s_tank_still_50153f54;
      }
      else if (iVar7 == 0) {
        piVar6 = (int *)0x0;
        pcVar10 = s_tank_fire_50153f60;
      }
      else {
        piVar6 = *(int **)(iVar7 + 0x164);
        pcVar10 = s_tank_fire_50153f60;
      }
      FUN_500b41d0(piVar6,pcVar10,0);
      uVar5 = FUN_500ebe00(unaff_EBP);
      if ((char)uVar5 == '\0') {
        if ((int *)unaff_EBP[99] != (int *)0x0) {
          uVar5 = (**(code **)(*(int *)unaff_EBP[99] + 0x8c))(&LAB_500ec360);
        }
        return uVar5 & 0xffffff00;
      }
    }
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}

