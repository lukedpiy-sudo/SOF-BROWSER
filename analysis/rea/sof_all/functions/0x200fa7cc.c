// rea decompile_all
// name: FUN_200fa7cc
// address: 0x200fa7cc
// body: available
// range: 0x200fa7cc-0x200fa8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200fa7cc(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_20408388._2_2_) {
    if (local_24.wHour == (WORD)DAT_20408388) {
      if (local_24.wDay == DAT_20408384._2_2_) {
        if (local_24.wMonth == DAT_20408380._2_2_) {
          if (local_24.wYear == (WORD)DAT_20408380) goto LAB_200fa876;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_20408378 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_20408378 = 1;
  }
  else {
    DAT_20408378 = 0;
  }
  DAT_20408380._0_2_ = local_24.wYear;
  DAT_20408380._2_2_ = local_24.wMonth;
  DAT_20408384._0_2_ = local_24.wDayOfWeek;
  DAT_20408384._2_2_ = local_24.wDay;
  DAT_20408388._0_2_ = local_24.wHour;
  DAT_20408388._2_2_ = local_24.wMinute;
  DAT_2040838c._0_2_ = local_24.wSecond;
  DAT_2040838c._2_2_ = local_24.wMilliseconds;
LAB_200fa876:
  uVar2 = FUN_200ff705(local_14.wYear,local_14.wMonth,local_14.wDay,local_14.wHour,local_14.wMinute,
                       local_14.wSecond,DAT_20408378);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}

