// rea decompile_all
// name: FUN_200d3ef0
// address: 0x200d3ef0
// body: available
// range: 0x200d3ef0-0x200d405b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d3ef0(void)

{
  int iVar1;
  int *piVar2;
  void **ppvVar3;
  undefined4 *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010eaa5;
  iVar1 = in_ECX[0x32];
  iVar4 = in_ECX[0x31];
  local_4 = 2;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar3, iVar4 != iVar1; iVar4 = iVar4 + 0x10) {
    FUN_2000a5b0(1);
    ppvVar3 = ExceptionList;
  }
  FUN_200f9f75(in_ECX[0x31]);
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  iVar1 = in_ECX[0x2c];
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  iVar1 = in_ECX[0x24];
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  *in_ECX = &PTR_FUN_20112788;
  piVar2 = (int *)in_ECX[0x22];
  local_4 = 3;
  if (piVar2 != (int *)0x0) {
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    if (*piVar2 != 0) {
      FUN_200d6dd0(1);
    }
    local_4._0_1_ = 4;
    FUN_2000a5b0(1);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_2000a5b0(1);
    FUN_200f9f75(piVar2);
  }
  FUN_200f9f75(in_ECX[0x1a]);
  iVar1 = in_ECX[0x1c];
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  ExceptionList = local_c;
  return;
}

