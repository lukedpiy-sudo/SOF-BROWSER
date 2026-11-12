// rea decompile_all
// name: FUN_200f94a0
// address: 0x200f94a0
// body: available
// range: 0x200f94a0-0x200f9504 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_200f94a0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = _malloc(0x14);
  pvVar2 = _malloc(param_2 * 4);
  iVar4 = 0;
  *piVar1 = (int)pvVar2;
  if (0 < param_2) {
    do {
      uVar3 = FUN_200f4400(param_1,param_3,param_6);
      *(undefined4 *)(*piVar1 + iVar4 * 4) = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  piVar1[3] = param_4;
  piVar1[1] = param_2;
  piVar1[2] = param_6;
  piVar1[4] = param_5;
  return piVar1;
}

