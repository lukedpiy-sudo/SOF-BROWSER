// rea decompile_all
// name: FUN_200bd8c0
// address: 0x200bd8c0
// body: available
// range: 0x200bd8c0-0x200bd9ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bd8c0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int extraout_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  float local_404;
  int local_400 [256];
  
  iVar7 = 0;
  iVar8 = (int)local_400 - (int)param_1;
  do {
    puVar4 = _malloc(0x10);
    *(char *)(puVar4 + 2) = (char)iVar7;
    puVar4[3] = *param_1;
    *puVar4 = 0;
    puVar4[1] = 0;
    (&DAT_204059cc)[iVar7 * 2] = 0;
    *(undefined4 **)(iVar8 + (int)param_1) = puVar4;
    iVar7 = iVar7 + 1;
    param_1 = param_1 + 1;
  } while (iVar7 < 0x100);
  iVar7 = 0xff;
  do {
    fVar1 = 1e+30;
    iVar9 = -1;
    iVar8 = -1;
    local_404 = 1e+30;
    iVar6 = 0;
    do {
      iVar3 = local_400[iVar6];
      fVar2 = fVar1;
      if (iVar3 != 0) {
        if (fVar1 <= *(float *)(iVar3 + 0xc)) {
          if (*(float *)(iVar3 + 0xc) < local_404) {
            local_404 = *(float *)(iVar3 + 0xc);
            iVar8 = iVar6;
          }
        }
        else {
          iVar8 = iVar9;
          iVar9 = iVar6;
          fVar2 = *(float *)(iVar3 + 0xc);
          local_404 = fVar1;
        }
      }
      fVar1 = fVar2;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x100);
    piVar5 = _malloc(0x10);
    iVar6 = local_400[iVar8];
    *piVar5 = iVar6;
    iVar3 = local_400[iVar9];
    local_400[iVar9] = (int)piVar5;
    piVar5[1] = iVar3;
    iVar7 = iVar7 + -1;
    fVar1 = *(float *)(iVar3 + 0xc);
    fVar2 = *(float *)(iVar6 + 0xc);
    *(undefined1 *)(piVar5 + 2) = 0xff;
    local_400[iVar8] = 0;
    piVar5[3] = (int)(fVar1 + fVar2);
  } while (iVar7 != 0);
  DAT_204063d4 = piVar5;
  if (*piVar5 != 0) {
    FUN_200bd870(*piVar5,1,0);
    FUN_200bd870(*(undefined4 *)(extraout_EDX + 4),1,1);
    return;
  }
  (&DAT_204059cc)[(uint)*(byte *)(piVar5 + 2) * 2] = 0;
  *(undefined4 *)(&DAT_204059c8 + (uint)*(byte *)(piVar5 + 2) * 8) = 0;
  return;
}

