// rea decompile_all
// name: FUN_200dab40
// address: 0x200dab40
// body: available
// range: 0x200dab40-0x200dad4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dab40(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010f1c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_20112b40;
  local_4 = 7;
  uVar1 = FUN_200e4810(in_ECX[0x3a],in_ECX[0x3a],in_ECX[0x39]);
  FUN_200e39f0(uVar1,in_ECX[0x3a]);
  in_ECX[0x3a] = uVar1;
  uVar1 = FUN_200e4810(in_ECX[0x36],in_ECX[0x36],in_ECX[0x35]);
  FUN_200e39f0(uVar1,in_ECX[0x36]);
  in_ECX[0x36] = uVar1;
  iVar2 = FUN_200e4810(in_ECX[0x3e],in_ECX[0x3e],in_ECX[0x3d]);
  FUN_200e39f0(iVar2,in_ECX[0x3e]);
  local_4._0_1_ = 6;
  in_ECX[0x3e] = iVar2;
  for (iVar3 = in_ECX[0x3d]; iVar3 != iVar2; iVar3 = iVar3 + 0x40) {
    FUN_200c9520(0);
  }
  FUN_200f9f75(in_ECX[0x3d]);
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  iVar3 = in_ECX[0x3a];
  iVar2 = in_ECX[0x39];
  local_4._0_1_ = 5;
  for (; iVar2 != iVar3; iVar2 = iVar2 + 0x40) {
    FUN_200c9520(0);
  }
  FUN_200f9f75(in_ECX[0x39]);
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  local_4._0_1_ = 4;
  FUN_200e39f0(in_ECX[0x35],in_ECX[0x36]);
  FUN_200f9f75(in_ECX[0x35]);
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  local_4._0_1_ = 3;
  FUN_2000a5b0(1);
  local_4._0_1_ = 2;
  FUN_2000a5b0(1);
  local_4._0_1_ = 1;
  FUN_2000a5b0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_2000a5b0(1);
  *in_ECX = &PTR_FUN_20112788;
  iVar3 = in_ECX[0x22];
  local_4 = 8;
  if (iVar3 != 0) {
    FUN_200d6ab0();
    FUN_200f9f75(iVar3);
  }
  FUN_200f9f75(in_ECX[0x1a]);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  ExceptionList = local_c;
  return;
}

