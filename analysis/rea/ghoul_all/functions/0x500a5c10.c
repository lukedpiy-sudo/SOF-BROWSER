// rea decompile_all
// name: FUN_500a5c10
// address: 0x500a5c10
// body: available
// range: 0x500a5c10-0x500a5d02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500a5c10(void *this,char *param_1,char *param_2,undefined1 param_3,char *param_4,char *param_5,
            char param_6)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  bool bVar4;
  int local_4;
  
  local_4 = **(int **)((int)this + 4);
  if ((int *)local_4 != *(int **)((int)this + 4)) {
    do {
      iVar1 = __strcmpi((char *)(*(int *)(local_4 + 0x10) + 0x42a),param_1);
      if (iVar1 == 0) {
        iVar1 = __strcmpi((char *)(*(int *)(local_4 + 0x10) + 0x48e),param_2);
        if (iVar1 == 0) {
          pcVar2 = (char *)(*(int *)(local_4 + 0x10) + 0x4f2);
          if (param_4 == (char *)0x0) {
            bVar4 = *pcVar2 == '\0';
          }
          else {
            iVar1 = __strcmpi(pcVar2,param_4);
            bVar4 = iVar1 == 0;
          }
          if (bVar4) {
            pcVar2 = (char *)(*(int *)(local_4 + 0x10) + 0x556);
            if (param_5 == (char *)0x0) {
              bVar4 = *pcVar2 == '\0';
            }
            else {
              iVar1 = __strcmpi(pcVar2,param_5);
              bVar4 = iVar1 == 0;
            }
            if (bVar4) {
              return *(undefined4 **)(local_4 + 0x10);
            }
          }
        }
      }
      FUN_5006b290(&local_4);
    } while (local_4 != *(int *)((int)this + 4));
  }
  if (param_6 != '\0') {
    return (undefined4 *)0x0;
  }
  puVar3 = FUN_500a5a30(this,param_1,param_2,param_3,param_4,param_5);
  return puVar3;
}

