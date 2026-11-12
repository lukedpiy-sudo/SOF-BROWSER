// rea decompile_all
// name: FUN_2003ca20
// address: 0x2003ca20
// body: available
// range: 0x2003ca20-0x2003ca5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003ca20(void)

{
  char cVar1;
  undefined4 *in_ECX;
  char *pcVar2;
  
  pcVar2 = s_textures_sprites_sparkpart_201321cc;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  *in_ECX = &PTR_LAB_20111c3c;
  do {
    cVar1 = *pcVar2;
    *(char *)((int)(in_ECX + -0x804c86a) + (int)pcVar2) = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[4] = 0x40000000;
  in_ECX[5] = 0x40000000;
  return;
}

