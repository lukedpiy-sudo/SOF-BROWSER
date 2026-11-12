// rea decompile_all
// name: FUN_20012010
// address: 0x20012010
// body: available
// range: 0x20012010-0x20012140 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20012010(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  
  if (_DAT_2022525c + 0.1 < DAT_201e8fc8 != (_DAT_2022525c + 0.1 == DAT_201e8fc8)) {
    _DAT_2022525c = DAT_201e8fc8;
    DAT_20225810 = DAT_20225904;
    DAT_20225814 = DAT_20225908;
    _DAT_20225818 = DAT_2022590c;
    pfVar7 = (float *)&DAT_202253fc;
    do {
      cVar4 = __ftol();
      pfVar8 = pfVar7 + 1;
      *pfVar7 = (float)(int)cVar4 * 0.25;
      pfVar7 = pfVar8;
    } while ((int)pfVar8 < 0x20225408);
    DAT_20225904 = DAT_202253fc;
    DAT_20225908 = DAT_20225400;
    DAT_2022590c = DAT_20225404;
    DAT_202253fc = 0;
    DAT_20225400 = 0;
    DAT_20225404 = 0;
  }
  fVar3 = DAT_201e8fc8 - _DAT_2022525c;
  iVar5 = 0;
  do {
    fVar1 = *(float *)((int)&DAT_20225904 + iVar5);
    fVar2 = *(float *)((int)&DAT_20225810 + iVar5);
    if (fVar1 - fVar2 <= 180.0) {
      if (fVar1 - fVar2 < -180.0) {
        fVar1 = fVar1 + 360.0;
      }
    }
    else {
      fVar1 = fVar1 - 360.0;
    }
    iVar6 = iVar5 + 4;
    *(float *)((int)&DAT_20225828 + iVar5) = (fVar1 - fVar2) * fVar3 * 10.0 + fVar2;
    iVar5 = iVar6;
  } while (iVar6 < 0xc);
  return;
}

