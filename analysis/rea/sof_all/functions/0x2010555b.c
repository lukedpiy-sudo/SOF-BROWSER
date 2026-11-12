// rea decompile_all
// name: FUN_2010555b
// address: 0x2010555b
// body: available
// range: 0x2010555b-0x201055be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_2010555b(void)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  FUN_201055bf(&local_10,&stack0x00000004);
  _DAT_204086c0 = FUN_20106d6b(local_10,uStack_c,uStack_8,0x11,0,&DAT_20408698);
  _DAT_204086b8 = (int)DAT_2040869a;
  _DAT_204086bc = (int)DAT_20408698;
  _DAT_204086c4 = &DAT_2040869c;
  return &DAT_204086b8;
}

