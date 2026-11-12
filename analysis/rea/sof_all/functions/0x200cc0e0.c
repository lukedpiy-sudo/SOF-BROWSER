// rea decompile_all
// name: FUN_200cc0e0
// address: 0x200cc0e0
// body: available
// range: 0x200cc0e0-0x200cc1fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200cc0ff) */
/* WARNING: Removing unreachable block (ram,0x200cc10a) */
/* WARNING: Removing unreachable block (ram,0x200cc10c) */
/* WARNING: Removing unreachable block (ram,0x200cc19a) */

void FUN_200cc0e0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar2 = *(int *)(in_ECX + 0x40);
  iVar1 = *(int *)(in_ECX + 0x3c);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x84) {
    FUN_200cc9c0();
  }
  *(int *)(in_ECX + 0x40) = iVar1;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  Cvar_Set(s_player_summary_20158754,&DAT_20158764);
  Cvar_Set(s_server_summary_20158744,&DAT_2011c4ac);
  Cvar_Set(s_locked_summary_20158734,&DAT_2011c4ac);
  return;
}

