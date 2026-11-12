// rea decompile_all
// name: FUN_2002d590
// address: 0x2002d590
// body: available
// range: 0x2002d590-0x2002d5b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002d590(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = (*DAT_20403598)(*(undefined4 *)((int)&PTR_s_textures_sprites_smoke2_20131580 + iVar2));
    *(undefined4 *)((int)&DAT_2026acf0 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0xe4);
  return;
}

