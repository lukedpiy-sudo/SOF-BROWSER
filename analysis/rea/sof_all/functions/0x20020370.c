// rea decompile_all
// name: FUN_20020370
// address: 0x20020370
// body: available
// range: 0x20020370-0x20020486 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20020370(void)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  
  if ((DAT_201c1f04 == 0) && (DAT_201e7f58._3_1_ != '\0')) {
    DAT_201ca520 = 1;
    return;
  }
  if (*(float *)(DAT_2024afb8 + 0x18) != 0.0) {
    FUN_20013f30();
    if (DAT_201e947c != '\0') {
      FUN_20018180(s_killserver_201304f8);
      return;
    }
    if (DAT_201c1f00 == 1) {
      FUN_20018180(s_demo_201304f0);
      return;
    }
    DAT_20365e9c = 1;
    _DAT_2024afa4 = 0;
    _DAT_2024afa8 = 0;
    _DAT_2024afac = 0;
    bVar2 = DAT_201c1f04 == 1;
    (&DAT_20365ea1)[DAT_20367ea4 * 0x100] = 0;
    _DAT_2024afb0 = 0;
    if (bVar2) {
      FUN_200c7380();
      FUN_20012810();
      DAT_201c1f04 = 0;
      Cvar_Set(s_paused_2011d4b0,&DAT_2011c4ac);
      return;
    }
    FUN_200c7380();
    FUN_20012830();
    DAT_201c1f04 = 1;
    fVar3 = (float10)FUN_200216d0(s_maxclients_2011d768);
    if (fVar3 == (float10)1.0) {
      iVar1 = FUN_2001cae0();
      if (iVar1 != 0) {
        Cvar_Set(s_paused_2011d4b0,&DAT_2011d31c);
      }
    }
  }
  return;
}

