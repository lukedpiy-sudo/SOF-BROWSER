// rea decompile_all
// name: FUN_50061dc0
// address: 0x50061dc0
// body: available
// range: 0x50061dc0-0x50061e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_50061dc0(void *param_1)

{
  undefined2 extraout_var;
  int iVar1;
  short local_8 [4];
  
  if (*(float *)(DAT_5015d9ac + 0x18) != 0.0) {
    FUN_50061b10(param_1,DAT_5015cca0 + 0x464,local_8,'\0');
    *(short *)((int)param_1 + 0x8c) = local_8[0];
    return CONCAT22(extraout_var,local_8[0]);
  }
  if (*(int *)((int)param_1 + 0x18) == 0) {
    *(undefined2 *)((int)param_1 + 0x8c) = 0xffff;
    return 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18);
  *(short *)((int)param_1 + 0x8c) =
       (((short)(iVar1 / 0x34) + (short)(iVar1 >> 0x1f)) -
       (short)((longlong)iVar1 * 0x4ec4ec4f >> 0x3f)) + -1;
  return (uint)((longlong)iVar1 * 0x4ec4ec4f);
}

