// rea decompile_all
// name: FUN_30012710
// address: 0x30012710
// body: available
// range: 0x30012710-0x300127ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_30012710(int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = DAT_3008fb98;
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x20) & 0x10000) != 0) {
      if ((DAT_300a3734 < 0x400) && (*(int *)(DAT_3008fb98 + 0x18) != 0x40000000)) {
        (&DAT_300a2730)[DAT_300a3734] = param_1;
        DAT_300a3734 = DAT_300a3734 + 1;
      }
      iVar2 = 0;
      if (0 < *(int *)(iVar1 + 0x4c)) {
        piVar4 = (int *)(iVar1 + 0x2c);
        while (*piVar4 != *(int *)(param_1 + 4)) {
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 1;
          if (*(int *)(iVar1 + 0x4c) <= iVar2) {
            return CONCAT31((int3)((uint)iVar2 >> 8),1);
          }
        }
        *(undefined1 *)(iVar2 + 0x44 + iVar1) = 1;
      }
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    if (*(int *)(DAT_3008fb98 + 0x18) == 0x3f800000) {
      uVar3 = FUN_300128a0(iVar1);
      return uVar3 & 0xffffff00;
    }
    in_EAX = uVar3;
    if (((*(int *)(DAT_3008fb98 + 0x18) != 0x40000000) && (DAT_300a3734 < 0x400)) &&
       (*(int *)(DAT_3008fb98 + 0x18) != 0x3f800000)) {
      (&DAT_300a2730)[DAT_300a3734] = param_1;
      DAT_300a3734 = DAT_300a3734 + 1;
    }
  }
  return in_EAX & 0xffffff00;
}

