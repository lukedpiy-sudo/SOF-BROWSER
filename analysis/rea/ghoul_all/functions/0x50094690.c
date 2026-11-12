// rea decompile_all
// name: FUN_50094690
// address: 0x50094690
// body: available
// range: 0x50094690-0x500947e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500947df to 0x500c3880 FUN_500c3880 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50094690(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x6e) & 1) == 0) {
    iVar3 = 0;
    if (0 < DAT_5015d8c8) {
      iVar2 = 0x464;
      do {
        iVar1 = iVar2 + DAT_5015cca0;
        if (*(int *)(iVar2 + 0x78 + DAT_5015cca0) != 0) {
          if (param_1[0xef] != 0) {
            *(int *)(*(int *)(iVar1 + 0x74) + 0x94) = param_1[0x89];
          }
          *(int *)(*(int *)(iVar1 + 0x74) + 0x5b0) = *(int *)(*(int *)(iVar1 + 0x74) + 0x5b0) + -1;
          *(undefined4 *)(*(int *)(iVar1 + 0x74) + 100) = 0xffffffff;
          *(undefined1 *)(*(int *)(iVar1 + 0x74) + 0x68) = 0;
          if ((*(byte *)(param_1 + 0x6e) & 2) != 0) {
            *(undefined4 *)(iVar1 + 0x158) = 2;
            *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) & 0xffffffef;
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x464;
      } while (iVar3 < DAT_5015d8c8);
    }
  }
  else {
    if (param_1[0xef] != 0) {
      *(int *)(*(int *)(param_1[0xcb] + 0x74) + 0x94) = param_1[0x89];
    }
    *(int *)(*(int *)(param_1[0xcb] + 0x74) + 0x5b0) =
         *(int *)(*(int *)(param_1[0xcb] + 0x74) + 0x5b0) + -1;
    *(undefined4 *)(*(int *)(param_1[0xcb] + 0x74) + 100) = 0xffffffff;
    *(undefined1 *)(*(int *)(param_1[0xcb] + 0x74) + 0x68) = 0;
    if ((*(byte *)(param_1 + 0x6e) & 2) != 0) {
      *(uint *)(param_1[0xcb] + 0x1a0) = *(uint *)(param_1[0xcb] + 0x1a0) & 0xffffffef;
      *(undefined4 *)(param_1[0xcb] + 0x158) = 2;
    }
  }
  param_1[0xc6] = 0;
  if ((*(byte *)(param_1 + 0x6e) & 4) != 0) {
    return;
  }
  FUN_500c3880(param_1);
  return;
}

