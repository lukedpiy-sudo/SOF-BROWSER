// rea decompile_all
// name: FUN_200f30f0
// address: 0x200f30f0
// body: available
// range: 0x200f30f0-0x200f31ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f30f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  if (*param_1 != 0) {
    iVar1 = FUN_200ef6a0(param_1,param_2);
    if (iVar1 == 0) {
      FUN_200f3a80(param_1 + 6,s_TOPIC__s_20159be8,param_2);
      uVar2 = FUN_200f05c0(param_1,param_2,param_3,param_4);
    }
    else {
      uVar2 = FUN_200f0320(param_1);
      local_c = 1;
      local_8 = param_2;
      local_4 = iVar1;
      FUN_200edf60(param_1,0x11,param_3,&local_c,param_4,uVar2,param_2,0xc);
    }
    while (param_5 != 0) {
      do {
        FUN_200f2ce0(param_1,uVar2);
        FUN_200f96a0(10);
        iVar1 = FUN_200f0350(param_1,uVar2);
      } while (iVar1 != 0);
      param_5 = FUN_200eee10(param_1,uVar2);
    }
  }
  return;
}

