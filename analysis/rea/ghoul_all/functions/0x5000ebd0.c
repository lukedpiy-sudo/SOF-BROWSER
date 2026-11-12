// rea decompile_all
// name: FUN_5000ebd0
// address: 0x5000ebd0
// body: available
// range: 0x5000ebd0-0x5000ec2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __thiscall FUN_5000ebd0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1c8) != 0) {
    while( true ) {
      uVar1 = FUN_500c26a0(uVar1,0x1c4,*(char **)(param_1 + 0x1c8),(void *)0x0);
      if (uVar1 == 0) break;
      iVar2 = 0x11;
      bVar5 = true;
      pcVar3 = *(char **)(uVar1 + 0x1b4);
      pcVar4 = s_item_equip_armor_5012f7cc;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        return false;
      }
    }
  }
  bVar5 = FUN_5000e310(this,param_1);
  return bVar5;
}

