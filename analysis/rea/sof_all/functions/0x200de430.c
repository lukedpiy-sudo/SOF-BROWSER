// rea decompile_all
// name: FUN_200de430
// address: 0x200de430
// body: available
// range: 0x200de430-0x200de5b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200de472) */

void FUN_200de430(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_2010f5b5;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_20112c80;
  iVar1 = in_ECX[0x29];
  local_4 = 2;
  iVar4 = in_ECX[0x2a];
  for (iVar3 = iVar1; iVar3 != iVar4; iVar3 = iVar3 + 0x18) {
    FUN_2000a5b0(1);
  }
  in_ECX[0x2a] = iVar1;
  iVar4 = in_ECX[0x29];
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,1);
  for (; iVar4 != iVar1; iVar4 = iVar4 + 0x18) {
    FUN_2000a5b0(1);
  }
  FUN_200f9f75(in_ECX[0x29]);
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
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

