// rea decompile_all
// name: FUN_1001094b
// address: 0x1001094b
// body: available
// range: 0x1001094b-0x10010bd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010bd2 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


errno_t __cdecl FUN_1001094b(tm *param_1,uint *param_2)

{
  code *pcVar1;
  int *piVar2;
  errno_t eVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint local_18;
  int local_14;
  uint local_10;
  long local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  if (param_1 == (tm *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1000d7dd();
    return 0x16;
  }
  _memset(param_1,0xff,0x24);
  if (param_2 == (uint *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1000d7dd();
  }
  else {
    uVar6 = param_2[1];
    if (((0 < (int)uVar6) || (-1 < (int)uVar6)) &&
       (((int)uVar6 < 7 || (((int)uVar6 < 8 && (*param_2 < 0x93407000)))))) {
      ___tzset();
      eVar3 = FID_conflict___get_dstbias(&local_c);
      if ((eVar3 == 0) &&
         ((eVar3 = FID_conflict___get_dstbias((long *)&local_10), eVar3 == 0 &&
          (eVar3 = FID_conflict___get_dstbias((long *)&local_8), eVar3 == 0)))) {
        uVar6 = param_2[1];
        uVar7 = *param_2;
        if (((int)uVar6 < 0) || (((int)uVar6 < 1 && (uVar7 < 0x3f481)))) {
          eVar3 = __gmtime64_s(param_1,(__time64_t *)param_2);
          if (eVar3 != 0) {
            return eVar3;
          }
          if ((local_c == 0) || (iVar4 = __isindst(param_1), iVar4 == 0)) {
            uVar6 = param_1->tm_sec;
            uVar7 = uVar6 - local_8;
            uVar6 = (((int)uVar6 >> 0x1f) - ((int)local_8 >> 0x1f)) - (uint)(uVar6 < local_8);
          }
          else {
            uVar5 = local_8 + local_10;
            param_1->tm_isdst = 1;
            uVar6 = param_1->tm_sec;
            uVar7 = uVar6 - uVar5;
            uVar6 = (((int)uVar6 >> 0x1f) - ((int)uVar5 >> 0x1f)) - (uint)(uVar6 < uVar5);
          }
          uVar9 = __allrem(uVar7,uVar6,0x3c,0);
          iVar4 = (int)uVar9;
          param_1->tm_sec = iVar4;
          if (iVar4 < 0) {
            bVar8 = 0x3b < uVar7;
            uVar7 = uVar7 - 0x3c;
            param_1->tm_sec = iVar4 + 0x3c;
            uVar6 = (uVar6 - 1) + (uint)bVar8;
          }
          lVar10 = __alldiv(uVar7,uVar6,0x3c,0);
          lVar10 = lVar10 + param_1->tm_min;
          uVar9 = __allrem((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x3c,0);
          iVar4 = (int)uVar9;
          param_1->tm_min = iVar4;
          if (iVar4 < 0) {
            param_1->tm_min = iVar4 + 0x3c;
            lVar10 = lVar10 + -0x3c;
          }
          lVar10 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x3c,0);
          lVar10 = lVar10 + param_1->tm_hour;
          uVar9 = __allrem((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x18,0);
          iVar4 = (int)uVar9;
          param_1->tm_hour = iVar4;
          if (iVar4 < 0) {
            param_1->tm_hour = iVar4 + 0x18;
            lVar10 = lVar10 + -0x18;
          }
          lVar10 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x18,0);
          iVar4 = (int)lVar10;
          if (lVar10 < 0) {
            param_1->tm_mday = param_1->tm_mday + iVar4;
            param_1->tm_wday = (iVar4 + 7 + param_1->tm_wday) % 7;
            if (param_1->tm_mday < 1) {
              param_1->tm_yday = param_1->tm_yday + iVar4 + 0x16d;
              param_1->tm_year = param_1->tm_year + -1;
              param_1->tm_mday = param_1->tm_mday + 0x1f;
              param_1->tm_mon = 0xb;
              return 0;
            }
          }
          else {
            if (lVar10 == 0) {
              return 0;
            }
            param_1->tm_mday = param_1->tm_mday + iVar4;
            param_1->tm_wday = (param_1->tm_wday + iVar4) % 7;
          }
          param_1->tm_yday = param_1->tm_yday + iVar4;
        }
        else {
          local_18 = uVar7 - local_8;
          local_14 = (uVar6 - ((int)local_8 >> 0x1f)) - (uint)(uVar7 < local_8);
          eVar3 = __gmtime64_s(param_1,(__time64_t *)&local_18);
          if (eVar3 != 0) {
            return eVar3;
          }
          if ((local_c != 0) && (iVar4 = __isindst(param_1), iVar4 != 0)) {
            bVar8 = local_18 < local_10;
            local_18 = local_18 - local_10;
            local_14 = (local_14 - ((int)local_10 >> 0x1f)) - (uint)bVar8;
            eVar3 = __gmtime64_s(param_1,(__time64_t *)&local_18);
            if (eVar3 != 0) {
              return eVar3;
            }
            param_1->tm_isdst = 1;
          }
        }
        return 0;
      }
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      eVar3 = (*pcVar1)();
      return eVar3;
    }
    piVar2 = __errno();
    *piVar2 = 0x16;
  }
  return 0x16;
}

