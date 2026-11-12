// rea decompile_all
// name: FUN_2009d5d0
// address: 0x2009d5d0
// body: available
// range: 0x2009d5d0-0x2009d776 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2009d6ae) */

void FUN_2009d5d0(void)

{
  int iVar1;
  undefined4 uVar2;
  void **ppvVar3;
  int in_ECX;
  int *piVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_2010d16c;
  local_c = ExceptionList;
  piVar4 = *(int **)(in_ECX + 0x2c);
  local_4 = 3;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (piVar4 != *(int **)(in_ECX + 0x30)) {
    do {
      iVar1 = *piVar4;
      local_10 = iVar1;
      if (iVar1 != 0) {
        local_4._0_1_ = 10;
        FUN_20092110();
        local_4._0_1_ = 9;
        FUN_20092110();
        local_4._0_1_ = 8;
        FUN_20092110();
        local_4._0_1_ = 7;
        FUN_20092110();
        local_4._0_1_ = 6;
        FUN_20092110();
        local_4._0_1_ = 5;
        FUN_20092110();
        local_4._0_1_ = 4;
        FUN_2009d780();
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_2000a5b0(1);
        FUN_200f9f75(iVar1);
      }
      piVar4 = piVar4 + 1;
      ppvVar3 = ExceptionList;
    } while (piVar4 != *(int **)(in_ECX + 0x30));
  }
  ExceptionList = ppvVar3;
  uVar2 = *(undefined4 *)(in_ECX + 0x2c);
  FUN_2008c730(uVar2,*(undefined4 *)(in_ECX + 0x30));
  *(undefined4 *)(in_ECX + 0x30) = uVar2;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x3c));
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x2c));
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_20058c00(&local_10,**(undefined4 **)(in_ECX + 0x18),*(undefined4 **)(in_ECX + 0x18));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x18));
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x1c));
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  local_4 = 0xffffffff;
  FUN_2009e140(&local_10,**(undefined4 **)(in_ECX + 4),*(undefined4 **)(in_ECX + 4));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  ExceptionList = local_c;
  return;
}

