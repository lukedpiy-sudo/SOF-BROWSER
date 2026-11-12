// rea decompile_all
// name: FUN_2005ab70
// address: 0x2005ab70
// body: available
// range: 0x2005ab70-0x2005ac2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005ab70(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_200216d0(s_maxclients_2011d768);
  iVar1 = __ftol();
  iVar2 = Cmd_Argc();
  if (1 < iVar2) {
    uVar3 = Cmd_Argv(1);
    iVar1 = FUN_200f9e13(uVar3);
  }
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    do {
      uVar3 = FUN_20055450(s_bot_name_i_20139428,iVar2);
      uVar4 = FUN_20021760(uVar3,&DAT_20139424,3);
      iVar5 = FUN_200fbba0(uVar4);
      if (iVar5 == 0) {
        iVar1 = Cmd_Argc();
        if (iVar1 < 3) {
          FUN_200c8320(uVar3);
        }
        else {
          uVar4 = Cmd_Argv(2);
          Cvar_Set(uVar3,uVar4);
        }
        uVar3 = FUN_20021760(uVar3);
        Com_Printf(s_Added_bot___s___201393f4,uVar3);
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1 + -2);
  }
  Com_Printf(s_No_free_slots_to_add_bot__20139408);
  return;
}

