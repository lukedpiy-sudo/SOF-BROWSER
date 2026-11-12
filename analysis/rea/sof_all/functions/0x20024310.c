// rea decompile_all
// name: FUN_20024310
// address: 0x20024310
// body: available
// range: 0x20024310-0x200245ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20024310(HWND param_1)

{
  HRESULT HVar1;
  int iVar2;
  byte bVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  CoInitialize((LPVOID)0x0);
  if (param_1 == (HWND)0x0) {
    param_1 = GetActiveWindow();
  }
  HVar1 = CoCreateInstance((IID *)&DAT_20113448,(LPUNKNOWN)0x0,1,(IID *)&DAT_2013117c,&DAT_2026a9e4)
  ;
  if ((((-1 < HVar1) ||
       (HVar1 = CoCreateInstance((IID *)&DAT_2013114c,(LPUNKNOWN)0x0,1,(IID *)&DAT_2013117c,
                                 &DAT_2026a9e4), -1 < HVar1)) &&
      (iVar2 = (**(code **)(*DAT_2026a9e4 + 0x28))(DAT_2026a9e4,0), iVar2 == 0)) &&
     (iVar2 = (**(code **)(*DAT_2026a9e4 + 0x18))(DAT_2026a9e4,param_1,2), iVar2 == 0)) {
    uStack_c = 0;
    uStack_14 = 0x14;
    uStack_8 = 0;
    uStack_10 = 0x11;
    uStack_4 = 0;
    iVar2 = (**(code **)(*DAT_2026a9e4 + 0xc))(DAT_2026a9e4,&uStack_14,&DAT_2026a9e8,0);
    if ((iVar2 == 0) &&
       (iVar2 = (**(code **)*DAT_2026a9e8)(DAT_2026a9e8,&DAT_2013116c,&DAT_2026a9ec), -1 < iVar2)) {
      uStack_1c = 0;
      puStack_18 = &uStack_3c;
      uStack_2c = 0;
      uStack_3c = 0x10001;
      uStack_38 = 0x5622;
      uStack_30 = 0x100002;
      uStack_34 = 0xac44;
      uStack_28 = 0x14;
      uStack_24 = 0x12;
      uStack_20 = 0x40;
      iVar2 = (**(code **)(*DAT_2026a9e4 + 0xc))(DAT_2026a9e4,&uStack_28,&DAT_2026a9f0,0);
      if ((iVar2 != 0) ||
         (iVar2 = (**(code **)*DAT_2026a9f0)(DAT_2026a9f0,&DAT_2013115c,&DAT_2026a9f4), iVar2 < 0))
      {
        if (DAT_2026a9f4 != (int *)0x0) {
          (**(code **)(*DAT_2026a9f4 + 8))(DAT_2026a9f4);
        }
        if (DAT_2026a9f0 != (int *)0x0) {
          (**(code **)(*DAT_2026a9f0 + 8))(DAT_2026a9f0);
        }
        if (DAT_2026a9ec != (int *)0x0) {
          (**(code **)(*DAT_2026a9ec + 8))(DAT_2026a9ec);
        }
        if (DAT_2026a9e8 != (int *)0x0) {
          (**(code **)(*DAT_2026a9e8 + 8))(DAT_2026a9e8);
        }
        if (DAT_2026a9e4 != (int *)0x0) {
          (**(code **)(*DAT_2026a9e4 + 8))(DAT_2026a9e4);
        }
        goto LAB_20024559;
      }
      uStack_40 = 0;
      iVar2 = (**(code **)(*DAT_2026a9f4 + 0x14))(DAT_2026a9f4,&DAT_20113408,1,&uStack_40);
      if (-1 < iVar2) {
        if (((byte)uStack_40 & 3) != 3) {
          FUN_20024290();
          return 0;
        }
        bVar3 = 0;
        iVar2 = (**(code **)(*DAT_2026a9f4 + 0x14))(DAT_2026a9f4,&DAT_20113408,1);
        if (-1 < iVar2) {
          if ((bVar3 & 3) == 3) {
            FUN_20024290();
            return 1;
          }
          FUN_20024290();
          return 0;
        }
        FUN_20024290();
        return 0;
      }
    }
  }
  if (DAT_2026a9f4 != (int *)0x0) {
    (**(code **)(*DAT_2026a9f4 + 8))(DAT_2026a9f4);
  }
  if (DAT_2026a9f0 != (int *)0x0) {
    (**(code **)(*DAT_2026a9f0 + 8))(DAT_2026a9f0);
  }
  if (DAT_2026a9ec != (int *)0x0) {
    (**(code **)(*DAT_2026a9ec + 8))(DAT_2026a9ec);
  }
  if (DAT_2026a9e8 != (int *)0x0) {
    (**(code **)(*DAT_2026a9e8 + 8))(DAT_2026a9e8);
  }
  if (DAT_2026a9e4 != (int *)0x0) {
    (**(code **)(*DAT_2026a9e4 + 8))(DAT_2026a9e4);
  }
LAB_20024559:
  DAT_2026a9e4 = (int *)0x0;
  DAT_2026a9e8 = (int *)0x0;
  DAT_2026a9ec = (int *)0x0;
  DAT_2026a9f0 = (int *)0x0;
  DAT_2026a9f4 = (int *)0x0;
  CoUninitialize();
  return 0;
}

