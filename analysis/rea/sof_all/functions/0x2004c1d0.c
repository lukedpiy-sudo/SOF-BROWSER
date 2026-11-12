// rea decompile_all
// name: FUN_2004c1d0
// address: 0x2004c1d0
// body: available
// range: 0x2004c1d0-0x2004c223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004c1d0(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pcVar1 = (char *)(&DAT_20365298)[iVar3];
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      if (iVar3 == -1) {
        pcVar2 = s_<KEY_NOT_FOUND>_20136718;
      }
      else {
        pcVar2 = (char *)(&DAT_20135350)[iVar3 * 4];
        if (pcVar2 == (char *)0x0) {
          pcVar2 = s_<UNKNOWN_KEYNUM>_20136704;
        }
      }
      FUN_200faa48(param_1,s_bind__s___s__201367f0,pcVar2,pcVar1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  return;
}

