// rea decompile_all
// name: FUN_200f66a0
// address: 0x200f66a0
// body: available
// range: 0x200f66a0-0x200f6710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f66a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = Cmd_Argc();
  if (iVar1 < 4) {
    Com_Printf(s_Usage__gsc_kick_<channel>_<user>_2015a680);
    return;
  }
  if (DAT_204076d0 != 0) {
    uVar2 = Cmd_Argv(3);
    uVar3 = Cmd_Argv(2);
    uVar4 = Cmd_Argv(1);
    iVar1 = DAT_204076d0;
    if (*(int *)(DAT_204076d0 + 0xc) != 0) {
      uVar2 = FUN_20055450(&DAT_2015a360,uVar4,uVar3,uVar2);
      FUN_200f3370(*(undefined4 *)(iVar1 + 0xc),uVar2);
    }
  }
  return;
}

