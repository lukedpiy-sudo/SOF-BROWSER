// rea decompile_all
// name: FUN_100156b6
// address: 0x100156b6
// body: available
// range: 0x100156b6-0x10015933 inclusive
// range: 0x10015942-0x100159c8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_100156b6(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  errno_t eVar4;
  int iVar5;
  size_t sVar6;
  undefined **ppuVar7;
  int *piVar8;
  long lVar9;
  char *unaff_ESI;
  undefined **unaff_EDI;
  char *pcVar10;
  UINT local_38;
  int local_34;
  int local_30;
  long local_2c;
  long local_28;
  undefined **local_24;
  long local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10023f78;
  uStack_c = 0x100156c2;
  bVar2 = false;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (undefined **)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = FUN_100156b0();
  eVar4 = FID_conflict___get_dstbias(local_20);
  if (((eVar4 == 0) && (eVar4 = FID_conflict___get_dstbias(&local_28), eVar4 == 0)) &&
     (eVar4 = FID_conflict___get_dstbias(&local_2c), eVar4 == 0)) {
    local_38 = ____lc_codepage_func();
    DAT_100290cc = 0;
    unaff_EDI = (undefined **)0xffffffff;
    DAT_10027e9c = 0xffffffff;
    DAT_10027e90 = 0xffffffff;
    unaff_ESI = __getenv_helper_nolock("TZ");
    if (unaff_ESI == (char *)0x0) goto LAB_100157c4;
    if (*unaff_ESI == '\0') goto LAB_100157c4;
    if (DAT_100290d0 != (char *)0x0) {
      iVar5 = _strcmp(unaff_ESI,DAT_100290d0);
      if (iVar5 == 0) goto LAB_100158af;
      if (DAT_100290d0 != (char *)0x0) {
        _free(DAT_100290d0);
      }
    }
    sVar6 = _strlen(unaff_ESI);
    DAT_100290d0 = __malloc_crt(sVar6 + 1);
    if (DAT_100290d0 == (char *)0x0) goto LAB_100158af;
    pcVar10 = unaff_ESI;
    sVar6 = _strlen(unaff_ESI);
    eVar4 = _strcpy_s(DAT_100290d0,sVar6 + 1,pcVar10);
    if (eVar4 == 0) goto LAB_100158b6;
  }
  while( true ) {
    do {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_100157c4:
      if (DAT_100290d0 != (char *)0x0) {
        _free(DAT_100290d0);
        DAT_100290d0 = (char *)0x0;
      }
      ppuVar7 = (undefined **)GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10029020);
      if (ppuVar7 != unaff_EDI) {
        DAT_100290cc = 1;
        local_20[0] = DAT_10029020 * 0x3c;
        if (DAT_10029066 != 0) {
          local_20[0] = local_20[0] + DAT_10029074 * 0x3c;
        }
        if ((DAT_100290ba == 0) || (DAT_100290c8 == 0)) {
          local_28 = 0;
          local_2c = 0;
        }
        else {
          local_28 = 1;
          local_2c = (DAT_100290c8 - DAT_10029074) * 0x3c;
        }
        iVar5 = WideCharToMultiByte(local_38,0,(LPCWSTR)&DAT_10029024,(int)unaff_EDI,*local_24,0x3f,
                                    (LPCSTR)0x0,&local_34);
        if ((iVar5 == 0) || (local_34 != 0)) {
          **local_24 = 0;
        }
        else {
          (*local_24)[0x3f] = 0;
        }
        iVar5 = WideCharToMultiByte(local_38,0,(LPCWSTR)&DAT_10029078,-1,local_24[1],0x3f,
                                    (LPCSTR)0x0,&local_34);
        if ((iVar5 == 0) || (local_34 != 0)) {
          *local_24[1] = 0;
        }
        else {
          local_24[1][0x3f] = 0;
        }
      }
LAB_100158af:
      local_30 = 1;
LAB_100158b6:
      lVar9 = local_20[0];
      piVar8 = FUN_100156aa();
      lVar3 = local_28;
      *piVar8 = lVar9;
      piVar8 = FUN_1001569e();
      lVar9 = local_2c;
      *piVar8 = lVar3;
      piVar8 = FUN_100156a4();
      *piVar8 = lVar9;
      local_8 = (undefined *)0xfffffffe;
      FUN_10015939();
      unaff_EDI = local_24;
      if (local_30 != 0) {
        return;
      }
      eVar4 = _strncpy_s(*local_24,0x40,unaff_ESI,3);
    } while (eVar4 != 0);
    pcVar10 = unaff_ESI + 3;
    if (unaff_ESI[3] == '-') {
      bVar2 = true;
      pcVar10 = unaff_ESI + 4;
    }
    unaff_ESI = pcVar10;
    lVar9 = _atol(unaff_ESI);
    local_20[0] = lVar9 * 0xe10;
    for (; (cVar1 = *unaff_ESI, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':'))));
        unaff_ESI = unaff_ESI + 1) {
    }
    if (*unaff_ESI == ':') {
      unaff_ESI = unaff_ESI + 1;
      lVar9 = _atol(unaff_ESI);
      local_20[0] = local_20[0] + lVar9 * 0x3c;
      for (; ('/' < *unaff_ESI && (*unaff_ESI < ':')); unaff_ESI = unaff_ESI + 1) {
      }
      if (*unaff_ESI == ':') {
        unaff_ESI = unaff_ESI + 1;
        lVar9 = _atol(unaff_ESI);
        local_20[0] = local_20[0] + lVar9;
        for (; ('/' < *unaff_ESI && (*unaff_ESI < ':')); unaff_ESI = unaff_ESI + 1) {
        }
      }
    }
    if (bVar2) {
      local_20[0] = -local_20[0];
    }
    local_28 = (long)*unaff_ESI;
    if (local_28 == 0) break;
    eVar4 = _strncpy_s(unaff_EDI[1],0x40,unaff_ESI,3);
    if (eVar4 == 0) {
LAB_100159af:
      lVar3 = local_20[0];
      piVar8 = FUN_100156aa();
      lVar9 = local_28;
      *piVar8 = lVar3;
      piVar8 = FUN_1001569e();
      *piVar8 = lVar9;
      return;
    }
  }
  *unaff_EDI[1] = 0;
  goto LAB_100159af;
}

