// rea decompile_all
// name: FUN_200f0380
// address: 0x200f0380
// body: available
// range: 0x200f0380-0x200f03fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f0380(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 900);
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar2 = 0;
    for (iVar3 = iVar1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x24)) {
      if (iVar1 == iVar3) {
        *(undefined4 *)(param_1 + 900) = *(undefined4 *)(iVar3 + 0x24);
        if (*(int *)(param_1 + 0x388) == iVar3) {
          *(int *)(param_1 + 0x388) = iVar2;
        }
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
        }
        FUN_200f9d32(*(undefined4 *)(iVar3 + 0x1c));
        FUN_200f9d32(*(undefined4 *)(iVar3 + 8));
        FUN_200f9d32(*(undefined4 *)(iVar3 + 0xc));
        FUN_200f9d32(iVar3);
        break;
      }
      iVar2 = iVar3;
    }
    iVar1 = *(int *)(param_1 + 900);
  } while( true );
}

