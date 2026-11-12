// rea decompile_all
// name: FUN_200f5db0
// address: 0x200f5db0
// body: available
// range: 0x200f5db0-0x200f5e36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f5db0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  Com_DPrintf(s__s__s_in__s_2015a43c,param_3,(&PTR_s_peoned_2015a030)[param_4],param_2);
  uVar2 = FUN_20055450(&DAT_2015a42c,param_3,(&PTR_s_peoned_2015a030)[param_4],param_2,0);
  FUN_200c7fd0(uVar2);
  iVar1 = DAT_204076d0;
  if (DAT_204076d0 != 0) {
    FUN_200c8020();
    if (*(int *)(iVar1 + 0xc) != 0) {
      uVar2 = FUN_20055450(&DAT_2015a360,param_2 + 1,&LAB_200f6400,0,0);
      FUN_200f31e0(*(undefined4 *)(iVar1 + 0xc),uVar2);
    }
  }
  return;
}

