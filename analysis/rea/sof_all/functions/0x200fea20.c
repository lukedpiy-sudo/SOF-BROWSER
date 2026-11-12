// rea decompile_all
// name: FUN_200fea20
// address: 0x200fea20
// body: available
// range: 0x200fea20-0x200feafd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_200fea20(undefined8 *param_1,undefined1 *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  piVar1 = DAT_20408420;
  if (DAT_20408424 == '\0') {
    piVar1 = (int *)FUN_2010555b(*param_1);
    FUN_201054e4(param_2 + (*piVar1 == 0x2d),piVar1[1] + param_3,piVar1);
  }
  else if (DAT_20408428 == param_3) {
    iVar2 = (*DAT_20408420 == 0x2d) + DAT_20408428;
    param_2[iVar2] = 0x30;
    (param_2 + iVar2)[1] = 0;
  }
  puVar3 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar3 = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_200fec34(puVar3,1);
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + piVar1[1];
  }
  if (0 < (int)param_3) {
    FUN_200fec34(puVar3,1);
    *puVar3 = DAT_2015d4c8;
    iVar2 = piVar1[1];
    if (iVar2 < 0) {
      if ((DAT_20408424 != '\0') || (-iVar2 <= (int)param_3)) {
        param_3 = -iVar2;
      }
      FUN_200fec34(puVar3 + 1,param_3);
      _memset(puVar3 + 1,0x30,param_3);
    }
  }
  return param_2;
}

