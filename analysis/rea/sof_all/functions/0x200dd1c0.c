// rea decompile_all
// name: FUN_200dd1c0
// address: 0x200dd1c0
// body: available
// range: 0x200dd1c0-0x200dd2a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dd1c0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010f401;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_20112788;
  piVar1 = (int *)in_ECX[0x22];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    local_4 = 2;
    if (*piVar1 != 0) {
      FUN_200d6dd0(1);
    }
    iVar2 = piVar1[8];
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + -1) == '\0') {
        FUN_200f9f75((char *)(iVar2 + -1));
      }
      else {
        *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
      }
    }
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    iVar2 = piVar1[4];
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + -1) == '\0') {
        FUN_200f9f75((char *)(iVar2 + -1));
      }
      else {
        *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
      }
    }
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    FUN_200f9f75(piVar1);
  }
  FUN_200f9f75(in_ECX[0x1a]);
  iVar2 = in_ECX[0x1c];
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
    }
  }
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  ExceptionList = local_c;
  return;
}

