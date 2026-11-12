// rea decompile_all
// name: FUN_200fc336
// address: 0x200fc336
// body: available
// range: 0x200fc336-0x200fc3f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_200fc336(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  short *psVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 3) == 0) {
      if ((uVar1 & 0xc) == 0) {
        if ((uVar1 & 0x10) == 0) {
          pcVar2 = &DAT_2015af28 + (uint)*(ushort *)(param_1 + 8) * 8;
        }
        else {
          pcVar2 = &DAT_2015af2a + (uint)*(ushort *)(param_1 + 8) * 8;
        }
      }
      else {
        pcVar2 = &DAT_2015af2c + (uint)*(ushort *)(param_1 + 8) * 8;
      }
    }
    else {
      pcVar2 = &DAT_2015af2e + (uint)*(ushort *)(param_1 + 8) * 8;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 != -0x20)) || (pcVar2[1] == '\0')) {
      pcVar2 = (char *)0x0;
    }
  }
  else {
    pcVar2 = (char *)0x0;
    iVar3 = 0;
    psVar4 = &DAT_2015aeb0;
    do {
      if (*psVar4 == *(short *)(param_1 + 8)) {
        if ((uVar1 & 3) != 0) {
          return (char *)(iVar3 * 10 + 0x2015aeb8);
        }
        if ((uVar1 & 0xc) != 0) {
          return (char *)(iVar3 * 10 + 0x2015aeb6);
        }
        if ((uVar1 & 0x10) != 0) {
          return (char *)(iVar3 * 10 + 0x2015aeb4);
        }
        return (char *)(iVar3 * 10 + 0x2015aeb2);
      }
      psVar4 = psVar4 + 5;
      iVar3 = iVar3 + 1;
    } while ((int)psVar4 < 0x2015af28);
  }
  return pcVar2;
}

