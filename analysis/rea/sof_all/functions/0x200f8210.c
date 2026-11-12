// rea decompile_all
// name: FUN_200f8210
// address: 0x200f8210
// body: available
// range: 0x200f8210-0x200f8267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200f8210(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_4) {
    do {
      puVar2 = (undefined4 *)FUN_200f44b0(*(undefined4 *)(param_1 + 4),iVar4);
      uVar1 = *puVar2;
      iVar3 = FUN_200f7bc0(uVar1);
      if ((param_3 == iVar3) && (iVar3 = FUN_200f44a0(uVar1), iVar3 == param_2)) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_4);
  }
  return -1;
}

