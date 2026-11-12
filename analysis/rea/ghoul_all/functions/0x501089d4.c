// rea decompile_all
// name: FUN_501089d4
// address: 0x501089d4
// body: available
// range: 0x501089d4-0x50108aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_501089d4(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_5018c2c8._2_2_) {
    if (local_24.wHour == (WORD)DAT_5018c2c8) {
      if (local_24.wDay == DAT_5018c2c4._2_2_) {
        if (local_24.wMonth == DAT_5018c2c0._2_2_) {
          if (local_24.wYear == (WORD)DAT_5018c2c0) goto LAB_50108a7e;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_5018c2b8 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_5018c2b8 = 1;
  }
  else {
    DAT_5018c2b8 = 0;
  }
  DAT_5018c2c0._0_2_ = local_24.wYear;
  DAT_5018c2c0._2_2_ = local_24.wMonth;
  DAT_5018c2c4._0_2_ = local_24.wDayOfWeek;
  DAT_5018c2c4._2_2_ = local_24.wDay;
  DAT_5018c2c8._0_2_ = local_24.wHour;
  DAT_5018c2c8._2_2_ = local_24.wMinute;
  DAT_5018c2cc._0_2_ = local_24.wSecond;
  DAT_5018c2cc._2_2_ = local_24.wMilliseconds;
LAB_50108a7e:
  iVar2 = FUN_5010ed0a((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_5018c2b8);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}

