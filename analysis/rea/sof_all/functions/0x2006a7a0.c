// rea decompile_all
// name: FUN_2006a7a0
// address: 0x2006a7a0
// body: available
// range: 0x2006a7a0-0x2006a938 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006a7a0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  int in_ECX;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010b842;
  piVar1 = *(int **)(in_ECX + 0xc);
  local_4 = 4;
  piVar2 = (int *)*piVar1;
  ppvVar4 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, piVar2 != piVar1) {
    iVar3 = piVar2[4];
    if (iVar3 != 0) {
      FUN_20071d80(local_10,**(undefined4 **)(iVar3 + 4),*(undefined4 **)(iVar3 + 4));
      FUN_200f9f75(*(undefined4 *)(iVar3 + 4));
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      FUN_200f9f75(*(undefined4 *)(iVar3 + 8));
      *(undefined4 *)(iVar3 + 8) = 0;
      FUN_200f9f75(iVar3);
    }
    FUN_20085230();
    ppvVar4 = ExceptionList;
    piVar1 = *(int **)(in_ECX + 0xc);
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 3;
  FUN_200fb4ef(in_ECX + 0x58,0x3c,2,FUN_2006fbc0);
  local_4._0_1_ = 2;
  FUN_20071d80(local_10,**(undefined4 **)(in_ECX + 0x48),*(undefined4 **)(in_ECX + 0x48));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x48));
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  local_4._0_1_ = 1;
  FUN_20071d80(local_10,**(undefined4 **)(in_ECX + 0x34),*(undefined4 **)(in_ECX + 0x34));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x34));
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x38));
  *(undefined4 *)(in_ECX + 0x38) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_20071d80(local_10,**(undefined4 **)(in_ECX + 0x20),*(undefined4 **)(in_ECX + 0x20));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x20));
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x24));
  *(undefined4 *)(in_ECX + 0x24) = 0;
  local_4 = 0xffffffff;
  FUN_20072180(local_10,**(undefined4 **)(in_ECX + 0xc),*(undefined4 **)(in_ECX + 0xc));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x10));
  *(undefined4 *)(in_ECX + 0x10) = 0;
  ExceptionList = local_c;
  return;
}

