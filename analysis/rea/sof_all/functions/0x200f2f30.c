// rea decompile_all
// name: FUN_200f2f30
// address: 0x200f2f30
// body: available
// range: 0x200f2f30-0x200f2fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f2f30(int *param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    if (param_3 == (undefined1 *)0x0) {
      param_3 = &DAT_2015ee44;
    }
    FUN_200f3a80(param_1 + 6,s_JOIN__s__s_20159b80,param_2,param_3);
    uVar1 = FUN_200f0540(param_1,param_2,param_5,param_6,param_4,param_3);
    FUN_200eef40(param_1,param_2);
    while (param_7 != 0) {
      do {
        FUN_200f2ce0(param_1,uVar1);
        FUN_200f96a0(10);
        iVar2 = FUN_200f0350(param_1,uVar1);
      } while (iVar2 != 0);
      param_7 = FUN_200eee10(param_1,uVar1);
    }
  }
  return;
}

