// rea decompile_all
// name: FUN_200046d0
// address: 0x200046d0
// body: available
// range: 0x200046d0-0x20004780 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200046d0(int *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)Cmd_Argv(1);
  if (*pcVar1 == '\0') {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = 4;
  }
  else {
    iVar2 = FUN_200f9e9e(pcVar1);
    if (*param_1 == iVar2) {
      *param_1 = 0;
    }
    else {
      if (param_1[1] != iVar2) {
        return;
      }
      param_1[1] = 0;
      if (*param_1 != 0) {
        return;
      }
    }
    if ((param_1[1] == 0) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
      uVar3 = Cmd_Argv(2);
      iVar2 = FUN_200f9e9e(uVar3);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 5) = 0;
        param_1[3] = param_1[3] + 10;
        param_1[4] = param_1[4] & 0xfffffffeU | 4;
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      param_1[3] = param_1[3] + (iVar2 - param_1[2]);
      param_1[4] = param_1[4] & 0xfffffffeU | 4;
      return;
    }
  }
  return;
}

