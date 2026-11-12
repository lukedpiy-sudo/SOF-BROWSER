// rea decompile_all
// name: FUN_200f9d32
// address: 0x200f9d32
// body: available
// range: 0x200f9d32-0x200f9d9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f9d32(LPVOID param_1)

{
  LPVOID lpMem;
  int iVar1;
  undefined4 local_8;
  
  lpMem = param_1;
  if (param_1 != (LPVOID)0x0) {
    if (DAT_20408b68 == 3) {
      iVar1 = FUN_200fd0b3(param_1);
      if (iVar1 != 0) {
        FUN_200fd0de(iVar1);
        return;
      }
    }
    else if ((DAT_20408b68 == 2) && (iVar1 = FUN_200fde0e(param_1,&local_8,&param_1), iVar1 != 0)) {
      FUN_200fde65(local_8,param_1,iVar1);
      return;
    }
    HeapFree(DAT_20408b64,0,lpMem);
  }
  return;
}

