// rea decompile_all
// name: FUN_200feafe
// address: 0x200feafe
// body: available
// range: 0x200feafe-0x200feb98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200feafe(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  DAT_20408420 = (int *)FUN_2010555b(*param_1);
  DAT_20408428 = DAT_20408420[1] + -1;
  pcVar1 = (char *)((uint)(*DAT_20408420 == 0x2d) + param_2);
  FUN_201054e4(pcVar1,param_3,DAT_20408420);
  DAT_2040842c = DAT_20408428 < DAT_20408420[1] + -1;
  DAT_20408428 = DAT_20408420[1] + -1;
  if ((DAT_20408428 < -4) || (param_3 <= DAT_20408428)) {
    FUN_200feb99(param_1,param_2,param_3,param_4);
  }
  else {
    if ((bool)DAT_2040842c) {
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2[-1] = '\0';
    }
    FUN_200febc0(param_1,param_2,param_3);
  }
  return;
}

