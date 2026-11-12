// rea decompile_all
// name: FUN_20031940
// address: 0x20031940
// body: available
// range: 0x20031940-0x20031bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20031940(void)

{
  char cVar1;
  undefined4 *in_ECX;
  char *pcVar2;
  
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x6c] = 0;
  *in_ECX = 0x42c80000;
  in_ECX[1] = 0x42c80000;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0x40800000;
  in_ECX[0xe] = 0x40800000;
  in_ECX[0xf] = 0x41000000;
  in_ECX[0x10] = 0x41000000;
  in_ECX[0x11] = 0x40800000;
  in_ECX[0x12] = 0x40800000;
  in_ECX[0x13] = 0x41000000;
  in_ECX[0x14] = 0x41000000;
  pcVar2 = s_textures_sprites_sparkpart_201321cc;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0x42200000;
  in_ECX[0x17] = 0x42200000;
  do {
    cVar1 = *pcVar2;
    *(char *)((int)(in_ECX + -0x804c85b) + (int)pcVar2) = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  in_ECX[0x28] = 0x3f000000;
  in_ECX[0x29] = 0x3f000000;
  in_ECX[0x2a] = 0x437f0000;
  in_ECX[0x2b] = 0x437f0000;
  in_ECX[0x2c] = 0x437f0000;
  in_ECX[0x2d] = 0x437f0000;
  in_ECX[0x2e] = 0x437f0000;
  in_ECX[0x2f] = 0x437f0000;
  in_ECX[0x30] = 0x437f0000;
  in_ECX[0x31] = 0x437f0000;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0x3f000000;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 1;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  pcVar2 = &DAT_2015ee44;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0x3f333333;
  do {
    cVar1 = *pcVar2;
    *(char *)((int)(in_ECX + -0x8057b51) + (int)pcVar2) = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_2015ee44;
  in_ECX[0x50] = 0x42700000;
  do {
    cVar1 = *pcVar2;
    *(char *)((int)(in_ECX + -0x8057b40) + (int)pcVar2) = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6e] = 0;
  in_ECX[0x6f] = 0;
  in_ECX[0x70] = 0;
  *(undefined2 *)(in_ECX + 0x71) = 0;
  return;
}

