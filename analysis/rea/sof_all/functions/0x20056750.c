// rea decompile_all
// name: FUN_20056750
// address: 0x20056750
// body: available
// range: 0x20056750-0x200567f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20056750(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int *in_ECX;
  int unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  (**(code **)(*in_ECX + 4))();
  iVar2 = param_2;
  uVar1 = param_1;
  FUN_200563b0(param_1,param_2,&param_2,&param_1);
  if (param_2 == 0xb) {
    FUN_200563b0(uVar1,iVar2,&param_2,&param_1);
    cVar3 = (**(code **)(*in_ECX + 8))(param_2,param_1,param_3);
    while (cVar3 != '\0') {
      FUN_200563b0(uVar1,iVar2,&stack0xfffffffc,&stack0xfffffff8);
      cVar3 = (**(code **)(*in_ECX + 8))(unaff_EBX,unaff_ESI,unaff_retaddr);
    }
    return unaff_EBX == 0xc;
  }
  return false;
}

