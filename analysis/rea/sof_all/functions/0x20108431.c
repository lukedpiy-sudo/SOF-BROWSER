// rea decompile_all
// name: FUN_20108431
// address: 0x20108431
// body: available
// range: 0x20108431-0x20108548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_20108431(char *param_1,undefined1 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined1 local_8c [136];
  
  if (param_1 == (char *)0x0) {
LAB_201084d7:
    puVar2 = (undefined *)0x0;
  }
  else {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      param_2[1] = 0;
      *param_2 = 0x43;
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_2015e124,param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_2015e0a0,param_1), iVar1 != 0)) {
      iVar1 = FUN_2010856e(local_8c,param_1);
      if ((iVar1 != 0) || (iVar1 = FUN_2010962a(local_8c,&DAT_20408798,local_8c), iVar1 == 0))
      goto LAB_201084d7;
      _DAT_204087a0 = (uint)DAT_2040879c;
      FUN_2010863a(&DAT_2015e124,local_8c);
      if (*param_1 == '\0') {
        param_1 = &DAT_2015e124;
      }
      FUN_20101cf0(&DAT_2015e0a0,param_1);
    }
    if (param_3 != (undefined2 *)0x0) {
      FUN_200fe470(param_3,&DAT_20408798,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_200fe470(param_4,&DAT_204087a0,4);
    }
    FUN_20101cf0(param_2,&DAT_2015e124);
    puVar2 = &DAT_2015e124;
  }
  return puVar2;
}

