// rea decompile_all
// name: FUN_200d9f80
// address: 0x200d9f80
// body: available
// range: 0x200d9f80-0x200da12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200d9fca) */

void FUN_200d9f80(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010f059;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_20112b00;
  iVar1 = in_ECX[0x35];
  local_4 = 5;
  FUN_200e39f0(iVar1,in_ECX[0x36]);
  in_ECX[0x36] = iVar1;
  iVar2 = in_ECX[0x35];
  local_4._0_1_ = 4;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x40) {
    FUN_200c9520(0);
  }
  FUN_200f9f75(in_ECX[0x35]);
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_2000a5b0(1);
  iVar1 = in_ECX[0x2d];
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  iVar1 = in_ECX[0x29];
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
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
  iVar1 = in_ECX[0x22];
  local_4 = 6;
  if (iVar1 != 0) {
    FUN_200d6ab0();
    FUN_200f9f75(iVar1);
  }
  FUN_200f9f75(in_ECX[0x1a]);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  ExceptionList = local_c;
  return;
}

