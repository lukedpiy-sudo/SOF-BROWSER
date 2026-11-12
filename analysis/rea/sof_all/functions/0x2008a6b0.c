// rea decompile_all
// name: FUN_2008a6b0
// address: 0x2008a6b0
// body: available
// range: 0x2008a6b0-0x2008a74d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2008a6b0(ushort param_1,ushort param_2)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 0xa0) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_ECX + 0xa4) - *(int *)(in_ECX + 0xa0)) / 0x14;
    }
    in_EAX = param_1 - 1;
    if ((in_EAX < uVar2) && (param_2 != 0)) {
      if (*(int *)(in_ECX + 0xc0) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)(in_ECX + 0xc4) - *(int *)(in_ECX + 0xc0)) / 0x14;
      }
      uVar1 = (uint)param_2;
      in_EAX = uVar1;
      if ((uVar1 - 1 < uVar2) &&
         (in_EAX = *(uint *)(in_ECX + 0xc0), *(ushort *)((in_EAX - 0x14) + uVar1 * 0x14) == param_1)
         ) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}

