// rea decompile_all
// name: FUN_200b30c0
// address: 0x200b30c0
// body: available
// range: 0x200b30c0-0x200b3324 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200b30c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  char cVar7;
  int iVar8;
  int *in_ECX;
  int iVar9;
  short sVar10;
  short sVar11;
  ushort uVar12;
  uint uVar13;
  ushort *puVar14;
  undefined4 uVar15;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [12];
  float local_4;
  
  if (DAT_20403d68 != '\0') {
    *in_ECX = *in_ECX + 1;
    FUN_200b8210(param_2,&local_2c,&local_30,local_18,local_1c);
    FUN_200b8210(param_2 + 0x10,&local_24,&local_28,local_10,local_14);
    local_34 = 0;
    if (0 < in_ECX[2]) {
      local_3c = 0;
      do {
        local_20 = *(int *)(local_3c + 8 + in_ECX[0x2c]);
        local_38 = 0;
        if (0 < local_20) {
          do {
            iVar8 = *(int *)(local_3c + 4 + in_ECX[0x2c]) + local_38;
            iVar9 = in_ECX[0x30] + iVar8 * 6;
            iVar8 = *(short *)(in_ECX[0x30] + iVar8 * 6) * 4;
            if (*(int *)(iVar8 + (*(int **)(param_4 + 0xb8))[2]) != **(int **)(param_4 + 0xb8)) {
              *(undefined1 *)(*(int *)(iVar8 + *(int *)(param_5 + 4)) + 5) = 1;
              cVar7 = FUN_200c28e0(param_2);
              if (cVar7 != '\0') {
                sVar11 = *(short *)(iVar9 + 4);
                puVar6 = (ushort *)(in_ECX[0x31] + *(short *)(iVar9 + 2) * 2);
                while (sVar11 != 0) {
                  uVar12 = *puVar6;
                  puVar14 = puVar6 + 1;
                  sVar10 = sVar11 + -1;
                  if ((short)uVar12 < 0) {
                    uVar12 = -uVar12;
                    uVar15 = 6;
                  }
                  else if (uVar12 == 0) {
                    uVar12 = *puVar14;
                    puVar14 = puVar6 + 2;
                    sVar10 = sVar11 + -2;
                    uVar15 = 4;
                  }
                  else {
                    uVar15 = 5;
                  }
                  FUN_20093e30(uVar15);
                  sVar11 = sVar10 - uVar12;
                  puVar6 = puVar14;
                  if (0 < (short)uVar12) {
                    uVar13 = (uint)uVar12;
                    do {
                      uVar12 = *puVar14;
                      puVar14 = puVar14 + 1;
                      piVar1 = (int *)(in_ECX[0x43] + (short)uVar12 * 0x4c);
                      if (*in_ECX != *piVar1) {
                        *piVar1 = *in_ECX;
                        if (-1 < piVar1[1]) {
                          piVar2 = (int *)(local_2c + piVar1[1] * local_30 * 0xc);
                          piVar1[2] = *piVar2;
                          piVar1[3] = piVar2[1];
                          piVar1[4] = piVar2[2];
                          iVar9 = piVar1[1] * local_28;
                          fVar3 = *(float *)(local_24 + iVar9 * 0xc);
                          fVar4 = *(float *)(local_24 + 4 + iVar9 * 0xc);
                          local_4 = *(float *)(local_24 + iVar9 * 0xc + 8);
                          piVar1[2] = (int)((float)piVar1[2] - fVar3);
                          piVar1[3] = (int)((float)piVar1[3] - fVar4);
                          piVar1[4] = (int)((float)piVar1[4] - local_4);
                          fVar5 = *(float *)(param_2 + 0x20);
                          piVar1[2] = (int)(fVar5 * (float)piVar1[2]);
                          piVar1[3] = (int)(fVar5 * (float)piVar1[3]);
                          piVar1[4] = (int)(fVar5 * (float)piVar1[4]);
                          piVar1[2] = (int)(fVar3 + (float)piVar1[2]);
                          piVar1[3] = (int)(fVar4 + (float)piVar1[3]);
                          piVar1[4] = (int)(local_4 + (float)piVar1[4]);
                        }
                      }
                      FUN_20093e90(piVar1 + 2);
                      uVar13 = uVar13 - 1;
                      puVar6 = puVar14;
                    } while (uVar13 != 0);
                  }
                }
              }
            }
            local_38 = local_38 + 1;
          } while (local_38 < local_20);
        }
        local_34 = local_34 + 1;
        local_3c = local_3c + 0xc;
      } while (local_34 < in_ECX[2]);
    }
  }
  return;
}

