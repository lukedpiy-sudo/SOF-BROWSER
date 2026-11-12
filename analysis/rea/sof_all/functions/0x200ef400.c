// rea decompile_all
// name: FUN_200ef400
// address: 0x200ef400
// body: available
// range: 0x200ef400-0x200ef479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200ef400(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_158 [344];
  
  iVar2 = -(int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(local_158 + iVar2)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_200f9600(*(undefined4 *)(param_1 + 0x37c),local_158);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0xcc) == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)(iVar2 + 0xb0);
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  return 1;
}

