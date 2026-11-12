// rea decompile_all
// name: FUN_500b77d0
// address: 0x500b77d0
// body: available
// range: 0x500b77d0-0x500b794d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500b77d0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  code *pcVar4;
  
  iVar2 = *(int *)(param_2 + 0x30);
  if (*(char *)(iVar2 + 0x118) < '\0') {
    if (*(uint *)(iVar2 + 0x160) == *(uint *)(param_1 + 0x160)) {
      return *(uint *)(iVar2 + 0x160) & 0xffffff00;
    }
    if ((*(int *)(param_1 + 0x2ec) != 0x7a69) && ((*(uint *)(param_1 + 0x1a0) & 0x400000) != 0)) {
      pfVar1 = (float *)(param_2 + 0x14);
      if ((pfVar1 == (float *)0x0) ||
         (DAT_501557a0 * *pfVar1 +
          DAT_501557a4 * *(float *)(param_2 + 0x18) + DAT_501557a8 * *(float *)(param_2 + 0x1c) <=
          0.8)) {
        *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) * -0.2;
        *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) * -0.2;
        fVar3 = *(float *)(param_1 + 0x254) * -0.2;
      }
      else {
        *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) * -1.0;
        *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) * 0.4;
        *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) * 0.4;
        fVar3 = *(float *)(param_1 + 0x254) * 0.4;
      }
      *(float *)(param_1 + 0x254) = fVar3;
      pcVar4 = *(code **)(param_1 + 0x2c0);
      if ((pcVar4 != (code *)0x0) &&
         ((*(int *)(param_1 + 0x158) != 0 || (*(int *)(param_1 + 0x19c) == 0xb)))) {
        pcVar4 = (code *)(*pcVar4)(param_1,iVar2,pfVar1,*(undefined4 *)(param_2 + 0x28));
      }
      return (uint)pcVar4 & 0xffffff00;
    }
  }
  if ((*(code **)(param_1 + 0x2c0) != (code *)0x0) &&
     ((*(int *)(param_1 + 0x158) != 0 || (*(int *)(param_1 + 0x19c) == 0xb)))) {
    (**(code **)(param_1 + 0x2c0))(param_1,iVar2,param_2 + 0x14,*(undefined4 *)(param_2 + 0x28));
  }
  pcVar4 = *(code **)(iVar2 + 0x2c0);
  if ((pcVar4 != (code *)0x0) && (*(int *)(iVar2 + 0x158) != 0)) {
    pcVar4 = (code *)(*pcVar4)(iVar2,param_1,0,0);
  }
  return CONCAT31((int3)((uint)pcVar4 >> 8),1);
}

