// rea decompile_all
// name: FUN_2000dde0
// address: 0x2000dde0
// body: available
// range: 0x2000dde0-0x2000df35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2000df31 to 0x200206f0 FUN_200206f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000dde0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_40 [64];
  
  if ((DAT_20249618 == 0) || (*(float *)(DAT_20249618 + 0x18) == 0.0)) {
    if (DAT_202250b8 == 0) {
      DAT_202250b8 = 1;
      DAT_201c1f24 = 1;
      if (DAT_201c1f00 != 0) {
        uVar1 = FUN_20025760();
        Com_sprintf(local_40,0x40,s__s_config_cfg_2011de9c,uVar1);
        FUN_20024d60(local_40);
        iVar2 = FUN_200faa9a(local_40,&DAT_2011de68);
        if (iVar2 == 0) {
          Com_Printf(s_Could_not_write__s_2011de88,local_40);
        }
        else {
          FUN_200fa9ae(iVar2);
          uVar1 = FUN_200faa9a(local_40,&DAT_2011de68);
          FUN_200faa48(uVar1,s____generated_by_Soldier_of_Fortu_2011de28);
          FUN_2004c1d0(uVar1);
          FUN_200fa9ae(uVar1);
          FUN_20022a10(local_40);
          Com_Printf(s_Wrote_configuration_to__s__2011de6c,local_40);
        }
      }
      FUN_20011670();
      if (DAT_20225054 != 0) {
        (**(code **)(DAT_20225054 + 0xc))();
        FUN_20066090(0xffffffff);
        DAT_20225054 = 0;
      }
      FUN_200c85a0();
      FUN_20001e30();
      if ((DAT_20390da0 != 0) && (DAT_20390d50 != (code *)0x0)) {
        (*DAT_20390d50)();
      }
      FUN_200ebec0();
      FUN_20031840();
      FUN_2004a910();
      FUN_20067460();
      FUN_20055bf0();
      FUN_20057f40(1);
      FUN_200206f0();
      return;
    }
    FUN_200faaad(s_recursive_shutdown_2011e748);
  }
  return;
}

