// rea decompile_all
// name: FUN_200f35f0
// address: 0x200f35f0
// body: available
// range: 0x200f35f0-0x200f36c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200f36c4 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f35f0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != -1) {
    Ordinal_22(*param_1,2);
    Ordinal_3(*param_1);
  }
  param_1[1] = 2;
  FUN_200f9d32(param_1[0x42]);
  FUN_200f9d32(param_1[0x45]);
  FUN_200f9d32(param_1[0x48]);
  FUN_200f9d32(param_1[0x49]);
  FUN_200f9d32(param_1[0x4a]);
  FUN_200f9d32(param_1[0x4b]);
  FUN_200f9d32(param_1[0x4c]);
  FUN_200f9d32(param_1[0x4d]);
  FUN_200f9d32(param_1[0x4e]);
  FUN_200f9d32(param_1[0x4f]);
  iVar1 = 0;
  if (0 < param_1[0x51]) {
    do {
      FUN_200f9d32(*(undefined4 *)(param_1[0x50] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x51]);
  }
  FUN_200f9d32();
  return;
}

