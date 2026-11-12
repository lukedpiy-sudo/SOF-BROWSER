// rea decompile_all
// name: FUN_20030b70
// address: 0x20030b70
// body: available
// range: 0x20030b70-0x20030d42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20030b70(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  
  if (DAT_20225820 == 0) {
    piVar1 = (int *)FUN_20069630(1,0);
    DAT_201e7f00 = (int *)(**(code **)(*piVar1 + 0x24))(CONCAT22(extraout_var,DAT_201e7f04));
    if (DAT_201e7f00 != (int *)0x0) {
      iVar2 = (**(code **)(*DAT_201e7f00 + 0x58))();
      if (iVar2 == 0) {
        (**(code **)(*DAT_201e7f00 + 0x54))(&DAT_2027c45c);
        piVar1 = DAT_201e7f00;
        piVar3 = (int *)(**(code **)(*DAT_201e7f00 + 0x88))();
        uVar4 = (**(code **)(*piVar3 + 0x30))(s_sound_20132e2c);
        (**(code **)(*piVar1 + 0x5c))(&DAT_2027c458,uVar4);
        piVar1 = DAT_201e7f00;
        piVar3 = (int *)(**(code **)(*DAT_201e7f00 + 0x88))();
        uVar4 = (**(code **)(*piVar3 + 0x30))(&DAT_20132e24);
        (**(code **)(*piVar1 + 0x5c))(&DAT_2027c47c,uVar4);
        piVar1 = DAT_201e7f00;
        piVar3 = (int *)(**(code **)(*DAT_201e7f00 + 0x88))();
        uVar4 = (**(code **)(*piVar3 + 0x30))(s_altfire_20132e1c);
        (**(code **)(*piVar1 + 0x5c))(&DAT_2027c480,uVar4);
        piVar1 = DAT_201e7f00;
        piVar3 = (int *)(**(code **)(*DAT_201e7f00 + 0x88))();
        uVar4 = (**(code **)(*piVar3 + 0x30))(s_effect_20132e14);
        (**(code **)(*piVar1 + 0x5c))(&DAT_2027c470,uVar4);
      }
      (**(code **)(*DAT_201e7f00 + 0xb4))(DAT_201e8fc8 + 0.001);
    }
  }
  FUN_2003b7f0();
  FUN_2002fd00();
  FUN_2002fb40();
  FUN_20043950();
  _DAT_2027c444 = 1.0 / *(float *)(DAT_2027c450 + 0x18);
  if (DAT_2027c478 < DAT_201e8fc8 - 0.2) {
    DAT_2027c478 = DAT_201e8fc8 - 0.2;
  }
  if (DAT_2027c478 < DAT_201e8fc8) {
    do {
      FUN_200431b0();
      FUN_2003b6a0();
      FUN_20030aa0();
      DAT_2027c478 = DAT_2027c478 + _DAT_2027c444;
      if (DAT_201e8fc8 < DAT_2027c478) {
        DAT_2027c478 = DAT_201e8fc8;
      }
    } while (DAT_2027c478 < DAT_201e8fc8);
  }
  return;
}

