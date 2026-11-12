// rea decompile_all
// name: FUN_2008bce0
// address: 0x2008bce0
// body: available
// range: 0x2008bce0-0x2008bd7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2008bce0(void)

{
  int in_ECX;
  int iVar1;
  
  if (*(char *)(in_ECX + 0x117) == '\0') {
    iVar1 = 0;
    *(undefined1 *)(in_ECX + 0x117) = 1;
    do {
      if ((int)(uint)*(ushort *)(in_ECX + 0xc) < 1 << ((byte)iVar1 & 0x1f)) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    *(int *)(in_ECX + 0x11c) = iVar1;
    iVar1 = 0;
    do {
      if ((int)(uint)*(ushort *)(in_ECX + 0xe) < 1 << ((byte)iVar1 & 0x1f)) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    *(int *)(in_ECX + 0x120) = iVar1;
    iVar1 = 0;
    do {
      if ((int)(uint)*(ushort *)(in_ECX + 0x12) < 1 << ((byte)iVar1 & 0x1f)) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    *(int *)(in_ECX + 0x124) = iVar1;
    iVar1 = 0;
    do {
      if ((int)(uint)*(ushort *)(in_ECX + 0x14) < 1 << ((byte)iVar1 & 0x1f)) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    *(int *)(in_ECX + 0x128) = iVar1;
  }
  return in_ECX + 0x11c;
}

