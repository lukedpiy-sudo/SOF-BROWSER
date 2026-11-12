// rea decompile_all
// name: FUN_2010962a
// address: 0x2010962a
// body: available
// range: 0x2010962a-0x201097a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2010962a(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if (DAT_20408808 == (code *)0x0) {
    iVar1 = FUN_20109d5b();
    if (iVar1 == 0) {
      DAT_20408808 = FUN_20109d91;
    }
    else {
      DAT_20408808 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_204087f8 = param_1;
    if (*param_1 != '\0') {
      FUN_201097a7(&PTR_s_american_2015e860,0x40,&DAT_204087f8);
    }
    DAT_204087fc = param_1 + 0x40;
    if ((DAT_204087fc != (char *)0x0) && (*DAT_204087fc != '\0')) {
      FUN_201097a7(&PTR_s_america_2015e7a8,0x16,&DAT_204087fc);
    }
    DAT_20408800 = 0;
    if ((DAT_204087f8 != (char *)0x0) && (*DAT_204087f8 != '\0')) {
      if ((DAT_204087fc == (char *)0x0) || (*DAT_204087fc == '\0')) {
        FUN_20109a8a();
      }
      else {
        FUN_201097ff();
      }
      goto LAB_201096e7;
    }
    if ((DAT_204087fc != (char *)0x0) && (*DAT_204087fc != '\0')) {
      FUN_20109b9d();
      goto LAB_201096e7;
    }
  }
  FUN_20109c5a();
LAB_201096e7:
  if ((((DAT_20408800 == 0) || (uVar2 = FUN_20109c74(param_1 + 0x80), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_204087e8,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_204087e8;
    param_2[1] = (undefined2)DAT_20408804;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_20408808)(DAT_204087e8,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_20408808)(DAT_20408804,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_2010a313(uVar2,param_3 + 0x80,10);
  }
  return 1;
}

