// rea decompile_all
// name: FUN_200209d0
// address: 0x200209d0
// body: available
// range: 0x200209d0-0x20020adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200209d0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (DAT_2024af84 < DAT_2024af80) {
    *(undefined1 *)(DAT_2024af7c + DAT_2024af84) = 0;
    DAT_2024af84 = DAT_2024af84 + 1;
  }
  if (DAT_2024af8c == DAT_2024af88) {
    DAT_2024af8c = DAT_2024af8c + 1;
  }
  DAT_2024af88 = DAT_2024af88 + 1;
  if (DAT_2024af80 < DAT_2024af84 + 0x100) {
    DAT_2024af84 = 0;
  }
  *(int *)(DAT_2024af74 + ((int)DAT_2024af88 % DAT_2024af78) * 4) = DAT_2024af84;
  puVar4 = (undefined4 *)(DAT_2024af7c + DAT_2024af84);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = (int)DAT_2024af88 % DAT_2024af78;
  while( true ) {
    iVar2 = (iVar2 + 1) % DAT_2024af78;
    iVar1 = (int)DAT_2024af88 / DAT_2024af78;
    if (iVar2 == (int)DAT_2024af88 % DAT_2024af78) break;
    iVar1 = *(int *)(DAT_2024af74 + iVar2 * 4);
    if ((iVar1 != -1) && (DAT_2024af84 <= iVar1)) {
      if (DAT_2024af84 + 0x100 < iVar1) break;
      *(undefined4 *)(DAT_2024af74 + iVar2 * 4) = 0xffffffff;
    }
  }
  DAT_2024af90 = 0;
  if (-1 < (int)DAT_2024af88) {
    uVar3 = DAT_2024af88 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    *(float *)(&DAT_2024afa4 + uVar3 * 4) = (float)DAT_201c1f0c;
  }
  return iVar1;
}

