// rea decompile_all
// name: FUN_5005d6c0
// address: 0x5005d6c0
// body: available
// range: 0x5005d6c0-0x5005d88d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_5005d6c0(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  fVar2 = *(float *)(DAT_5015c9d4 + 0x18);
  uVar10 = CONCAT22((short)((uint)DAT_5015c9d4 >> 0x10),
                    (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                    (ushort)(fVar2 == 0.0) << 0xe);
  if (fVar2 != 0.0) {
    uVar10 = 0;
    if ((*(int *)((int)param_1 + 0x18) != 0) &&
       (iVar7 = *(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18),
       uVar10 = iVar7 * 0x4ec4ec4f, 1 < (uint)(iVar7 / 0x34))) {
      uVar10 = (uint)*(ushort *)((int)param_1 + 0x8c);
      iVar7 = uVar10 * 0x34;
      for (; (*(int *)((int)param_1 + 0x18) != 0 &&
             (uVar10 < (uint)((*(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18)) / 0x34
                             ))); uVar10 = uVar10 + 1) {
        iVar3 = *(int *)((int)param_1 + 0x18);
        iVar4 = *(int *)(iVar7 + 0x28 + iVar3);
        if (iVar4 != 0) {
          iVar1 = iVar3 + iVar4 * 0x34;
          if ((int)(uint)*(ushort *)((int)param_1 + 0x8c) <= iVar4) {
            *(int *)(iVar7 + 0x28 + iVar3) = iVar4 + -1;
          }
          iVar3 = *(int *)(iVar1 + 0x28);
          if ((int)(uint)*(ushort *)((int)param_1 + 0x8c) <= iVar3) {
            *(int *)(iVar1 + 0x28) = iVar3 + -1;
          }
        }
        iVar7 = iVar7 + 0x34;
      }
      puVar5 = *(undefined4 **)((int)param_1 + 0x18);
      uVar10 = 0;
      if (puVar5 != *(undefined4 **)((int)param_1 + 0x1c)) {
        puVar11 = puVar5;
        while (uVar10 != *(ushort *)((int)param_1 + 0x8c)) {
          puVar11 = puVar11 + 0xd;
          uVar10 = uVar10 + 1;
          if (puVar11 == *(undefined4 **)((int)param_1 + 0x1c)) {
            return uVar10;
          }
        }
        if (puVar5[uVar10 * 0xd + 10] != 0) {
          puVar5[puVar5[uVar10 * 0xd + 10] * 0xd + 10] = 0;
        }
        iVar7 = *(int *)((int)param_1 + 0x18);
        if (iVar7 != *(int *)((int)param_1 + 0x1c)) {
          do {
            puVar5 = *(undefined4 **)(iVar7 + 0x30);
            while (puVar5 != (undefined4 *)0x0) {
              *(undefined4 *)(iVar7 + 0x30) = *puVar5;
              FUN_50106b60((undefined *)puVar5);
              puVar5 = *(undefined4 **)(iVar7 + 0x30);
            }
            iVar7 = iVar7 + 0x34;
          } while (iVar7 != *(int *)((int)param_1 + 0x1c));
        }
        puVar5 = *(undefined4 **)((int)param_1 + 0x1c);
        puVar6 = puVar11;
        while (puVar11 = puVar11 + 0xd, puVar11 != puVar5) {
          puVar8 = puVar6 + 0xd;
          puVar9 = puVar11;
          puVar12 = puVar6;
          for (iVar7 = 0xd; puVar6 = puVar8, iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar12 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        iVar3 = *(int *)((int)param_1 + 0x1c);
        for (iVar7 = iVar3 + -0x34; iVar7 != iVar3; iVar7 = iVar7 + 0x34) {
          puVar5 = *(undefined4 **)(iVar7 + 0x30);
          while (puVar5 != (undefined4 *)0x0) {
            *(undefined4 *)(iVar7 + 0x30) = *puVar5;
            FUN_50106b60((undefined *)puVar5);
            puVar5 = *(undefined4 **)(iVar7 + 0x30);
          }
        }
        iVar7 = 0;
        *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x1c) + -0x34;
        for (uVar10 = 0;
            (*(int *)((int)param_1 + 0x18) != 0 &&
            (uVar10 < (uint)((*(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18)) / 0x34)
            )); uVar10 = uVar10 + 1) {
          *(uint *)(iVar7 + 0xc + *(int *)((int)param_1 + 0x18)) = uVar10;
          iVar7 = iVar7 + 0x34;
        }
        uVar10 = FUN_5005fe60(param_1);
      }
    }
  }
  return uVar10;
}

