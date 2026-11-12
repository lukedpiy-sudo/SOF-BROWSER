// rea decompile_all
// name: FUN_200d9b40
// address: 0x200d9b40
// body: available
// range: 0x200d9b40-0x200d9c1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200d9b40(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = &DAT_2011e3b0;
  pcVar1 = (char *)FUN_200eb440(0);
  iVar2 = __strcmpi(pcVar1,pcVar4);
  if (iVar2 == 0) {
    return 2;
  }
  pcVar4 = &DAT_20158e84;
  pcVar1 = (char *)FUN_200eb440(0);
  iVar2 = __strcmpi(pcVar1,pcVar4);
  if (iVar2 == 0) {
    return 4;
  }
  pcVar4 = &DAT_20158de4;
  pcVar1 = (char *)FUN_200eb440(0);
  iVar2 = __strcmpi(pcVar1,pcVar4);
  if (iVar2 == 0) {
    return 6;
  }
  pcVar4 = s_rname_20158e7c;
  pcVar1 = (char *)FUN_200eb440(0);
  iVar2 = __strcmpi(pcVar1,pcVar4);
  if (iVar2 == 0) {
    return 3;
  }
  pcVar4 = s_rsize_20158e74;
  pcVar1 = (char *)FUN_200eb440(0);
  iVar2 = __strcmpi(pcVar1,pcVar4);
  if (iVar2 == 0) {
    return 5;
  }
  pcVar4 = s_rtime_20158e6c;
  pcVar1 = (char *)FUN_200eb440(0);
  iVar2 = __strcmpi(pcVar1,pcVar4);
  uVar3 = 7;
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}

