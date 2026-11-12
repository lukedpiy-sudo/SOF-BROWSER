// rea decompile_all
// name: FUN_20087ab0
// address: 0x20087ab0
// body: available
// range: 0x20087ab0-0x20087b21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20087ab0(ushort param_1,ushort param_2)

{
  ushort uVar1;
  uint in_EAX;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(in_ECX + 4);
  uVar4 = *(uint *)(in_ECX + 8);
  if (uVar3 != uVar4) {
    do {
      iVar2 = (int)(uVar4 - uVar3) / 0xc;
      uVar1 = *(ushort *)(uVar3 + iVar2 * 6);
      in_EAX = uVar3 + iVar2 * 6;
      if (uVar1 < param_1) {
        uVar3 = in_EAX + 6;
        uVar5 = uVar4;
      }
      else {
        uVar5 = in_EAX;
        if (uVar1 <= param_1) {
          if (*(ushort *)(in_EAX + 2) < param_2) {
            uVar3 = in_EAX + 6;
            uVar5 = uVar4;
          }
          else if (*(ushort *)(in_EAX + 2) <= param_2) {
            return CONCAT22((short)(in_EAX >> 0x10),*(undefined2 *)(in_EAX + 4));
          }
        }
      }
      uVar4 = uVar5;
    } while (uVar3 != uVar5);
  }
  return in_EAX & 0xffff0000;
}

