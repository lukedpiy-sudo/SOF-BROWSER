// rea decompile_all
// name: FUN_200ab140
// address: 0x200ab140
// body: available
// range: 0x200ab140-0x200ab2ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ab140(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010d860;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if ((*(int *)(in_ECX + 0xac) != 0) && (ExceptionList = &local_c, *(char *)(in_ECX + 0xa8) != '\0')
     ) {
    ExceptionList = &local_c;
    FUN_200f9f75(*(int *)(in_ECX + 0xac));
  }
  *(undefined4 *)(in_ECX + 0xac) = 0;
  if (*(int *)(in_ECX + 0x10c) != 0) {
    FUN_200f9f75(*(int *)(in_ECX + 0x10c));
  }
  iVar1 = *(int *)(in_ECX + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  if (iVar1 != 0) {
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((*(int *)(iVar1 + 0x34) != 0) && (*(char *)(iVar1 + 0x30) != '\0')) {
      FUN_200f9f75(*(int *)(iVar1 + 0x34));
    }
    iVar2 = *(int *)(iVar1 + 0x24);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    if (iVar2 != *(int *)(iVar1 + 0x28)) {
      do {
        FUN_200b8fb0(iVar2 + 0x34);
        iVar2 = iVar2 + 0x38;
      } while (iVar2 != *(int *)(iVar1 + 0x28));
    }
    local_4._0_1_ = 3;
    FUN_2008c730(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28));
    FUN_200f9f75(*(undefined4 *)(iVar1 + 0x24));
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_20092110();
    FUN_200f9f75(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x108) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xfc));
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xec));
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xdc));
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  ExceptionList = local_c;
  return;
}

