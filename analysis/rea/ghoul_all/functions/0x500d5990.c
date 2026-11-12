// rea decompile_all
// name: FUN_500d5990
// address: 0x500d5990
// body: available
// range: 0x500d5990-0x500d5a50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500d5990(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  iVar5 = 0;
  if ((((*(byte *)(iVar1 + 0x194) & 8) != 0) && (*(int *)(iVar1 + 0x168) != 0)) &&
     ((param_2 != 0 || (*(float *)(iVar1 + 0x164) < DAT_5015ccdc)))) {
    do {
      uVar2 = *(uint *)(iVar1 + 0x168) + 1;
      uVar4 = *(uint *)(iVar1 + 0x168) & 1;
      uVar2 = (int)((uVar2 & 0xfffffffe) - ((int)uVar2 >> 0x1f)) >> 1;
      FUN_500d2860(param_1,-(uint)(uVar4 != 0) & uVar2,~-(uint)(uVar4 != 0) & uVar2);
      iVar3 = *(int *)(iVar1 + 0x168) + -1;
      *(int *)(iVar1 + 0x168) = iVar3;
      if ((iVar3 == 0) && ((*(byte *)(param_1 + 0x1b8) & 4) != 0)) {
        *(undefined4 *)(iVar1 + 0x168) = 8;
      }
      iVar5 = iVar5 + 1;
      param_2 = param_2 + -1;
      *(float *)(iVar1 + 0x164) = DAT_5015ccdc + 1.0;
    } while (0 < param_2);
  }
  return iVar5;
}

