// rea decompile_all
// name: FUN_500ed6b0
// address: 0x500ed6b0
// body: available
// range: 0x500ed6b0-0x500ed808 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500ed6b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  
  if (DAT_5015d1ec == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x1b8) & 8) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x180) == 0x180) {
    return 1;
  }
  fVar1 = *(float *)(param_1 + 4) - *(float *)(DAT_5015d1ec + 4);
  fVar2 = *(float *)(param_1 + 8) - *(float *)(DAT_5015d1ec + 8);
  fVar3 = *(float *)(param_1 + 0xc) - *(float *)(DAT_5015d1ec + 0xc);
  FUN_500fdd70((float *)(*(int *)(DAT_5015d1ec + 0x74) + 0x1c),&local_44,(float *)0x0,(float *)0x0);
  if (((0.0 <= local_44 * fVar1 + local_40 * fVar2 + local_3c * fVar3) ||
      (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 <=
       (float)(*(int *)(param_1 + 0x2f4) * *(int *)(param_1 + 0x2f4)))) &&
     (iVar4 = (*DAT_5015cad0)(DAT_5015d1ec + 4,param_1 + 4), iVar4 != 0)) {
    if (-1 < *(char *)(param_1 + 0x1b8)) {
      return 1;
    }
    (*DAT_5015cac0)(param_1 + 4,&DAT_5018bf0c,&DAT_5018bf0c,DAT_5015d1ec + 4,DAT_5015d1ec,3,
                    auStack_38);
    if (0.99 <= fStack_34) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x100;
      return 1;
    }
    return 0;
  }
  return 0;
}

