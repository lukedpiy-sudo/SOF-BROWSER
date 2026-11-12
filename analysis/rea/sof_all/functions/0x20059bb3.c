// rea decompile_all
// name: FUN_20059bb3
// address: 0x20059bb3
// body: available
// range: 0x20059bb3-0x20059c98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20059c94 to 0x200599c0 FUN_200599c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20059bb3(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar1 = Cmd_Argc();
  if (iVar1 == 1) {
    FUN_20058800(&stack0x00000004,0x80,0x50a);
    Com_Printf(&stack0x00000004);
  }
  iVar1 = __ftol(&DAT_20130de0);
  uVar2 = FUN_20058110(iVar1 + 0x4ff);
  iVar1 = FUN_200fa6a0(uVar2);
  iVar1 = FUN_200f9e9e(iVar1 + 1);
  iVar6 = 1;
  iVar3 = Cmd_Argc();
  if (1 < iVar3) {
    do {
      uVar2 = Cmd_Argv(iVar6);
      iVar3 = FUN_200f9e9e(uVar2);
      if ((iVar3 <= iVar1) && (0 < iVar3)) {
        uVar5 = uVar5 | 1 << ((char)iVar3 - 1U & 0x1f);
      }
      iVar6 = iVar6 + 1;
      iVar3 = Cmd_Argc();
    } while (iVar6 < iVar3);
  }
  uVar4 = __ftol();
  Cvar_SetValue(s_dmflags_20138e8c,(float)(int)(uVar4 | uVar5));
  *(float *)(DAT_203fecb0 + 0x18) = (float)(int)(uVar4 | uVar5);
  FUN_200599c0();
  return;
}

