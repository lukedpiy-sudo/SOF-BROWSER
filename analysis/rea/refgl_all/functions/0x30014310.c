// rea decompile_all
// name: FUN_30014310
// address: 0x30014310
// body: available
// range: 0x30014310-0x3001439b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_30014310(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  uint3 uVar5;
  
  fVar1 = *(float *)(DAT_3008fe34 + 0x18);
  uVar5 = (uint3)(CONCAT22((short)((uint)DAT_3008fe34 >> 0x10),
                           (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe) >> 8);
  if (fVar1 == 0.0) {
    return (uint)uVar5 << 8;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x20) & 0x80c) != 0) {
    return (uint)uVar5 << 8;
  }
  if (*(char *)(param_1 + 0x6a) == -1) {
    return (uint)uVar5 << 8;
  }
  *param_2 = 0;
  do {
    iVar4 = *param_2;
    bVar3 = *(byte *)(iVar4 + 0x50 + param_1);
    if (bVar3 == 0xff) break;
    fVar1 = *(float *)((uint)bVar3 * 0x10 + 0xc + DAT_3008fd44);
    fVar2 = *(float *)(param_1 + 0x54 + iVar4 * 4);
    if (fVar1 != fVar2) {
      return CONCAT31((uint3)(byte)(fVar1 < fVar2 |
                                    (byte)((ushort)((ushort)(NAN(fVar1) || NAN(fVar2)) << 10) >> 8)
                                   | (byte)((ushort)((ushort)(fVar1 == fVar2) << 0xe) >> 8)),1);
    }
    *param_2 = iVar4 + 1;
  } while (iVar4 + 1 < 4);
  return CONCAT31((int3)((uint)DAT_3008fd90 >> 8),*(int *)(param_1 + 0x44) == DAT_3008fd90);
}

