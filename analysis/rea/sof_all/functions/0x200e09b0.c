// rea decompile_all
// name: FUN_200e09b0
// address: 0x200e09b0
// body: available
// range: 0x200e09b0-0x200e0ae8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e09b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_2010f867;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_20112d40;
  puVar1 = (undefined4 *)in_ECX[0x2d];
  local_4 = 1;
  puVar5 = (undefined4 *)*puVar1;
  while (puVar5 != puVar1) {
    puVar2 = (undefined4 *)*puVar5;
    FUN_200e3530(&local_10,puVar5);
    puVar5 = puVar2;
  }
  FUN_200f9f75(in_ECX[0x2d]);
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  iVar3 = in_ECX[0x24];
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = *(char *)(iVar3 + -1) + -1;
    }
  }
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  *in_ECX = &PTR_FUN_20112788;
  piVar4 = (int *)in_ECX[0x22];
  local_4 = 2;
  if (piVar4 != (int *)0x0) {
    local_4._0_1_ = 4;
    local_4._1_3_ = 0;
    local_10 = piVar4;
    if (*piVar4 != 0) {
      FUN_200d6dd0(1);
    }
    local_4._0_1_ = 3;
    FUN_2000a5b0(1);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_2000a5b0(1);
    FUN_200f9f75(piVar4);
  }
  FUN_200f9f75(in_ECX[0x1a]);
  iVar3 = in_ECX[0x1c];
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = *(char *)(iVar3 + -1) + -1;
    }
  }
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  ExceptionList = local_c;
  return;
}

