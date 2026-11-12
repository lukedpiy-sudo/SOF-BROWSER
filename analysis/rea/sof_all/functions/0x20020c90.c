// rea decompile_all
// name: FUN_20020c90
// address: 0x20020c90
// body: available
// range: 0x20020c90-0x20020d6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20020c90(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 local_4;
  
  if ((DAT_201c1f04 != 3) && ((DAT_201c1f04 == 1 || (DAT_201c1f00 != 8)))) {
    iVar2 = DAT_20367ea4 * 0x100;
    puVar3 = &DAT_20365ea0 + iVar2;
    puVar3[DAT_20365e9c] = 0x20;
    if ((DAT_201c1f0c & 0x100) != 0) {
      puVar3[DAT_20365e9c] = 0x5f;
    }
    iVar1 = DAT_20365e9c + 1;
    if (iVar1 < DAT_2024af98) {
      do {
        puVar3[iVar1] = 0x20;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_2024af98);
    }
    if (DAT_2024af98 <= DAT_20365e9c) {
      puVar3 = &DAT_20365ea1 + (DAT_20365e9c - DAT_2024af98) + iVar2;
    }
    iVar2 = 0;
    if (0 < DAT_2024af98) {
      iVar1 = 8;
      do {
        local_4 = 0xffffffff;
        (*DAT_204035c8)(iVar1,DAT_2024afa0 + -0x10,(int)(char)puVar3[iVar2],&local_4);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < DAT_2024af98);
    }
    (&DAT_20365ea0)[DAT_20365e9c + DAT_20367ea4 * 0x100] = 0;
  }
  return;
}

