// rea decompile_all
// name: FUN_200ddb10
// address: 0x200ddb10
// body: available
// range: 0x200ddb10-0x200ddca4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ddb10(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010f4f5;
  local_c = ExceptionList;
  iVar1 = in_ECX[0x30];
  local_4 = 2;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      ExceptionList = &local_c;
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      ExceptionList = &local_c;
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  piVar2 = (int *)in_ECX[0x2c];
  piVar3 = (int *)*piVar2;
  while (piVar3 != piVar2) {
    puVar4 = (undefined4 *)FUN_2008d0b0(local_18,0);
    FUN_200275c0(local_14,*puVar4);
  }
  FUN_200f9f75(in_ECX[0x2c]);
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  iVar1 = in_ECX[0x28];
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
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
    local_10 = piVar2;
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
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  ExceptionList = local_c;
  return;
}

