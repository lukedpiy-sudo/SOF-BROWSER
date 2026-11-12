// rea decompile_all
// name: FUN_200b93e0
// address: 0x200b93e0
// body: available
// range: 0x200b93e0-0x200b945f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200b93e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_2010d9e8;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_20112694;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 0;
  puVar3 = (undefined4 *)*puVar1;
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_200ba400(local_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_200f9f75(in_ECX[2]);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = &PTR_LAB_201126a0;
  ExceptionList = local_c;
  return;
}

