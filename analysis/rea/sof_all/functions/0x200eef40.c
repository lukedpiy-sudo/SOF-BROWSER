// rea decompile_all
// name: FUN_200eef40
// address: 0x200eef40
// body: available
// range: 0x200eef40-0x200eef8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200eef40(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_158 [344];
  
  pcVar2 = local_158;
  for (iVar3 = 0x56; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar2 = 0;
    pcVar2 = (char *)((int)pcVar2 + 4);
  }
  iVar3 = -(int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(local_158 + iVar3)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_200f44d0(*(undefined4 *)(param_1 + 0x380),local_158);
  return;
}

