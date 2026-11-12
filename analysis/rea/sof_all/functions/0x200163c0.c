// rea decompile_all
// name: FUN_200163c0
// address: 0x200163c0
// body: available
// range: 0x200163c0-0x2001659d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200163c0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iStack_10;
  int iStack_c;
  
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_20225a70;
  pcVar8 = &DAT_20225a70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (~uVar4 - 1 < 10000) {
    iVar2 = (*DAT_20403640)(&DAT_20225e80);
    iVar3 = DAT_20230310;
    if ((DAT_20230320 == 0) || (DAT_201e7efc != '\x02')) {
      iVar6 = __ftol();
    }
    else {
      iVar6 = (DAT_20403660 - (DAT_20403660 * 0x30) / 0x1e0) + 4;
    }
    iStack_10 = 0;
    iStack_c = iVar6;
    if (0 < iVar3) {
      do {
        iStack_c = iVar2 + iStack_c;
        uVar4 = 0xffffffff;
        pcVar8 = pcVar5;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar3 = (*DAT_2040363c)(pcVar5,&DAT_20225e80);
        iVar7 = (DAT_2040365c - iVar3) / 2;
        if (iVar7 < DAT_20225a38) {
          DAT_20225a38 = iVar7;
        }
        if (DAT_20225a40 < iVar7) {
          DAT_20225a40 = iVar7;
        }
        if (iVar6 < DAT_20225a3c) {
          DAT_20225a3c = iVar6;
        }
        if (DAT_20225a44 < iVar6) {
          DAT_20225a44 = iVar6;
        }
        (*DAT_20403638)(iVar7,iVar6,pcVar5,0xff00ffff,&DAT_20225e80,iStack_10 != 0);
        iVar7 = iVar7 + iVar3;
        if (iVar7 < DAT_20225a38) {
          DAT_20225a38 = iVar7;
        }
        if (DAT_20225a40 < iVar7) {
          DAT_20225a40 = iVar7;
        }
        if (iStack_c < DAT_20225a3c) {
          DAT_20225a3c = iStack_c;
        }
        if (DAT_20225a44 < iStack_c) {
          DAT_20225a44 = iStack_c;
        }
        iVar6 = iVar6 + iVar2;
        iStack_10 = iStack_10 + 1;
        pcVar5 = pcVar5 + ~uVar4;
      } while (iStack_10 < DAT_20230310);
    }
  }
  return;
}

