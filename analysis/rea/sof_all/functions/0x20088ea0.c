// rea decompile_all
// name: FUN_20088ea0
// address: 0x20088ea0
// body: available
// range: 0x20088ea0-0x20088f02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20088ea0(uint param_1,uint param_2)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    do {
      in_EAX = *(int *)(in_ECX + 0x80) + (uVar1 & 0xffff) * 0x18;
      if ((*(int *)(*(int *)(in_ECX + 0x80) + 4 + (uVar1 & 0xffff) * 0x18) == 1) &&
         (in_EAX = (uint)*(short *)(*(int *)(in_EAX + 0xc) +
                                   *(int *)(*(int *)(in_ECX + 0x5c) + -8 + (param_1 & 0xffff) * 8) *
                                   2), in_EAX == param_2)) {
        return uVar1 + 1;
      }
      uVar1 = uVar1 + 1;
    } while ((ushort)uVar1 < *(ushort *)(in_ECX + 0xe));
  }
  return in_EAX & 0xffff0000;
}

