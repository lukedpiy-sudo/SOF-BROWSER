// rea decompile_all
// name: FUN_200f9600
// address: 0x200f9600
// body: available
// range: 0x200f9600-0x200f9649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f9600(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)param_1[3])(param_2,param_1[1]);
  iVar2 = FUN_200f4650(*(undefined4 *)(*param_1 + iVar1 * 4),param_2,param_1[4],0,0);
  if (iVar2 == -1) {
    return 0;
  }
  uVar3 = FUN_200f44b0(*(undefined4 *)(*param_1 + iVar1 * 4),iVar2);
  return uVar3;
}

