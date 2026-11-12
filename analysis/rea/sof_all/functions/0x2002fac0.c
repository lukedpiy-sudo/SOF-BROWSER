// rea decompile_all
// name: FUN_2002fac0
// address: 0x2002fac0
// body: available
// range: 0x2002fac0-0x2002fb36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002fac0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_201fb68c + param_1 * 0x40;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  if (0x3f < iVar4) {
    Com_Error(1,s_svc_lightstyle_length__i_20132c60,iVar4);
  }
  iVar2 = 0;
  (&DAT_2026b420)[param_1 * 0x44] = iVar4;
  if (0 < iVar4) {
    pfVar5 = (float *)(&DAT_2026b430 + param_1 * 0x44);
    do {
      pcVar6 = &DAT_201fb68c + param_1 * 0x40 + iVar2;
      iVar2 = iVar2 + 1;
      *pfVar5 = (float)(*pcVar6 + -0x61) * 0.083333336;
      pfVar5 = pfVar5 + 1;
    } while (iVar2 < iVar4);
  }
  return;
}

