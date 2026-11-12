// rea decompile_all
// name: FUN_2003b7f0
// address: 0x2003b7f0
// body: available
// range: 0x2003b7f0-0x2003ba34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003b7f0(void)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  int local_8;
  
  iVar5 = __ftol();
  if (0x400 < iVar5) {
    iVar5 = 0x400;
  }
  if (0 < iVar5) {
    puVar8 = &DAT_202eacc8;
    do {
      if (*(float *)(puVar8 + 0x6c) < 0.0 == (*(float *)(puVar8 + 0x6c) == 0.0)) {
        FUN_200166d0(puVar8);
      }
      puVar8 = puVar8 + 0xdc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_8 = 0;
  iVar5 = __ftol();
  if (0x400 < iVar5) {
    iVar5 = 0x400;
  }
  iVar9 = 0;
  if (0 < iVar5) {
    do {
      iVar7 = ((DAT_20321ccc - iVar9) + iVar5) % iVar5;
      if ((float)(&DAT_2027c4fc)[iVar7 * 0x37] < 0.0 ==
          ((float)(&DAT_2027c4fc)[iVar7 * 0x37] == 0.0)) {
        if ((float)local_8 <= *(float *)(DAT_202b3490 + 0x18)) {
          FUN_20016690(&DAT_2027c490 + iVar7 * 0xdc,0);
          local_8 = local_8 + 1;
        }
        else {
          (&DAT_2027c4fc)[iVar7 * 0x37] = 0;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
  }
  iVar5 = DAT_202b34a8;
  if (DAT_202b34a8 != 0) {
    local_8 = 0;
    iVar7 = 0;
    iVar5 = local_8;
    iVar9 = DAT_202b34a8;
joined_r0x2003b8de:
    iVar3 = iVar9;
    if (iVar3 != 0) {
      iVar9 = *(int *)(iVar3 + 100);
      bVar2 = false;
      if ((*(float *)(DAT_202ea4b8 + 0x18) == 0.0) && (*(float *)(DAT_201e756c + 0x18) == 0.0)) {
        if ((*(int *)(iVar3 + 0x34) == 0) &&
           (((*(byte *)(iVar3 + 0x38) & 0x20) == 0 && ((*(byte *)(iVar3 + 0x74) & 8) == 0)))) {
          bVar2 = true;
        }
        if (((*(float *)(iVar3 + 0x6c) < DAT_2027c478 != (*(float *)(iVar3 + 0x6c) == DAT_2027c478))
            || (*(byte *)(iVar3 + 0x2f) < 2)) || (bVar2)) {
          if ((((*(byte *)(iVar3 + 0x74) & 8) != 0) && (*(int **)(iVar3 + 0xbc) != (int *)0x0)) &&
             (sVar4 = (**(code **)(**(int **)(iVar3 + 0xbc) + 0x9c))(), 0 < sVar4)) {
            (**(code **)(**(int **)(iVar3 + 0xbc) + 0xd4))();
            *(undefined4 *)(iVar3 + 0xbc) = 0;
            *(byte *)(iVar3 + 0x74) = *(byte *)(iVar3 + 0x74) & 0xf7;
          }
          *(int *)(iVar3 + 100) = DAT_202b34ac;
          DAT_202b34ac = iVar3;
          *(undefined4 *)(iVar3 + 0x6c) = 0;
          goto joined_r0x2003b8de;
        }
      }
      *(undefined4 *)(iVar3 + 100) = 0;
      local_8 = iVar3;
      if (iVar7 != 0) {
        *(int *)(iVar7 + 100) = iVar3;
        local_8 = iVar5;
      }
      iVar7 = iVar3;
      iVar5 = local_8;
      if (((*(int *)(iVar3 + 0x88) == 0) && (uVar1 = *(ushort *)(iVar3 + 0x38), (uVar1 & 0x20) == 0)
          ) && ((iVar6 = __ftol(), (float)iVar6 < *(float *)(iVar3 + 0x6c) &&
                ((uVar1 != 0 || ((*(byte *)(iVar3 + 0x74) & 8) != 0)))))) {
        if ((*(byte *)(iVar3 + 0x74) & 8) == 0) {
          if (*(int *)(iVar3 + 0x34) != 0) {
            FUN_200166d0(iVar3);
          }
        }
        else {
          FUN_20016690(iVar3,0);
        }
        if ((*(byte *)(iVar3 + 0x38) & 1) != 0) {
          *(undefined4 *)(iVar3 + 0x6c) = 0;
        }
      }
      goto joined_r0x2003b8de;
    }
  }
  DAT_202b34a8 = iVar5;
  return;
}

