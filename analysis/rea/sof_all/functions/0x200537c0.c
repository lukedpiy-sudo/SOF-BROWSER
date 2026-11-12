// rea decompile_all
// name: FUN_200537c0
// address: 0x200537c0
// body: available
// range: 0x200537c0-0x2005388d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200537c0(void)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(DAT_20390290 + 4);
  if ((bVar1 & 0x10) == 0) {
    if (*(short *)((int)DAT_20390290 + 0x2a) < 10) {
      *(byte *)(DAT_20390290 + 4) = bVar1 & 0xfd;
      return;
    }
    if (((bVar1 & 2) == 0) && (*DAT_20390290 != 3)) {
      if (DAT_20390290[0x3b] < 2) {
        if (DAT_20390290[0x39] != 0) {
          iVar2 = (*(code *)DAT_20390290[0x3e])(DAT_20390290[0x39]);
          if (iVar2 == 0) {
            *(byte *)(DAT_20390290 + 4) = *(byte *)(DAT_20390290 + 4) | 2;
            DAT_20390290[0x39] = 0;
            DAT_20390234 = 270.0;
          }
        }
      }
      else {
        DAT_20390290[0x39] = 0;
        if (DAT_20390234 < -300.0 == (DAT_20390234 == -300.0)) {
          if (DAT_20390290[0x3a] == 0x20) {
            DAT_20390234 = 100.0;
            return;
          }
          if (DAT_20390290[0x3a] == 0x10) {
            DAT_20390234 = 80.0;
            return;
          }
          DAT_20390234 = 50.0;
          return;
        }
      }
    }
  }
  return;
}

