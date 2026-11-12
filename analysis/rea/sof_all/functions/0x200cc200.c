// rea decompile_all
// name: FUN_200cc200
// address: 0x200cc200
// body: available
// range: 0x200cc200-0x200cc29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cc200(int param_1,char param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  
  if (param_2 == '\0') {
    *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + *(int *)(param_1 + 0x44);
    *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + *(int *)(param_1 + 0x48);
  }
  else {
    *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + 1;
  }
  uVar1 = FUN_20055450(s__d__d_2011d118,*(undefined4 *)(in_ECX + 0x48),
                       *(undefined4 *)(in_ECX + 0x4c));
  Cvar_Set(s_player_summary_20158754,uVar1);
  if (*(int *)(in_ECX + 0x3c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x84;
  }
  uVar1 = FUN_20055450(&DAT_2011d0b4,iVar2);
  Cvar_Set(s_server_summary_20158744,uVar1);
  uVar1 = FUN_20055450(&DAT_2011d0b4,*(undefined4 *)(in_ECX + 0x50));
  Cvar_Set(s_locked_summary_20158734,uVar1);
  return;
}

