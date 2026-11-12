// rea decompile_all
// name: FUN_500ed860
// address: 0x500ed860
// body: available
// range: 0x500ed860-0x500ed9f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500ed860(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  char cStack_37;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  
  iVar4 = 0;
  for (iVar5 = param_1; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x33c)) {
    iVar4 = iVar4 + 1;
  }
  iVar2 = (*DAT_5015cb24)(0,iVar4 + -1);
  iVar5 = param_1;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar5 = *(int *)(iVar5 + 0x33c);
  }
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      piVar1 = (int *)(iVar5 + 0x33c);
      iVar5 = *piVar1;
      if (*piVar1 == 0) {
        iVar5 = param_1;
      }
      FUN_500f2d60(iVar5);
      lVar6 = __ftol();
      if (((int)lVar6 < 0x301) && (iVar3 = FUN_500ed6b0(iVar5), iVar3 == 0)) {
        uStack_68 = *(undefined4 *)(iVar5 + 4);
        uStack_64 = *(undefined4 *)(iVar5 + 8);
        fStack_60 = *(float *)(iVar5 + 0xc) + 8.0;
        uStack_5c = *(undefined4 *)(iVar5 + 4);
        uStack_58 = *(undefined4 *)(iVar5 + 8);
        fStack_54 = *(float *)(iVar5 + 0xc) - 256.0;
        (*DAT_5015cac0)((undefined4 *)(iVar5 + 4),&DAT_5018bf0c,&DAT_5018bf0c,&uStack_5c,param_1,3,
                        &uStack_38);
        uStack_68 = uStack_30;
        uStack_64 = uStack_2c;
        fStack_60 = fStack_28 + 12.0;
        uStack_44 = 0xc1800000;
        uStack_40 = 0xc1800000;
        uStack_3c = 0;
        uStack_50 = 0x41800000;
        uStack_4c = 0x41800000;
        uStack_48 = 0x42920000;
        (*DAT_5015cac0)(&uStack_68,&uStack_44,&uStack_50,&uStack_68,0,0x2020003,&uStack_38);
        if (cStack_37 == '\0') {
          *param_3 = iVar5;
          *param_2 = uStack_68;
          param_2[1] = uStack_64;
          param_2[2] = fStack_60;
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return 0;
}

