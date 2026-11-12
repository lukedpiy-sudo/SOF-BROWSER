// rea decompile_all
// name: FUN_200ae180
// address: 0x200ae180
// body: available
// range: 0x200ae180-0x200ae42d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ae180(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  short sVar7;
  short sVar8;
  int iVar9;
  ushort *puVar10;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  iVar9 = 0;
  local_44 = 0;
  if (in_ECX[0x42] == 0) {
    iVar9 = *(int *)(*param_2 * 4 + in_ECX[0x37]);
    if (iVar9 == 0) {
      return;
    }
    local_34 = *(int *)(*param_2 * 4 + *(int *)(param_2[3] + 0x14)) * 3;
    local_30 = param_2[1] * 3;
  }
  else {
    FUN_200b8210(param_2,&local_44,&local_28,local_1c,local_20);
  }
  *in_ECX = *in_ECX + 1;
  local_38 = 0;
  if (0 < in_ECX[2]) {
    local_48 = 0;
    do {
      local_24 = *(int *)(local_48 + 8 + in_ECX[0x2c]);
      local_3c = 0;
      if (0 < local_24) {
        do {
          iVar5 = *(int *)(local_48 + 4 + in_ECX[0x2c]) + local_3c;
          iVar6 = (int)*(short *)(in_ECX[0x30] + iVar5 * 6);
          iVar5 = in_ECX[0x30] + iVar5 * 6;
          if (param_4 < 0) {
            if ((*(int *)(iVar6 * 4 + param_3[2]) != *param_3) &&
               (cVar3 = FUN_20090e10(param_2), cVar3 != '\0')) goto LAB_200ae28f;
          }
          else if (iVar6 == param_4) {
LAB_200ae28f:
            sVar8 = *(short *)(iVar5 + 4);
            puVar2 = (ushort *)(in_ECX[0x31] + *(short *)(iVar5 + 2) * 2);
            while (sVar8 != 0) {
              uVar4 = *puVar2;
              puVar10 = puVar2 + 1;
              sVar7 = sVar8 + -1;
              if ((short)uVar4 < 0) {
                uVar4 = -uVar4;
              }
              else if (uVar4 == 0) {
                uVar4 = *puVar10;
                puVar10 = puVar2 + 2;
                sVar7 = sVar8 + -2;
              }
              sVar8 = sVar7 - uVar4;
              puVar2 = puVar10;
              if (0 < (short)uVar4) {
                local_40 = (uint)uVar4;
                do {
                  uVar4 = *puVar10;
                  puVar10 = puVar10 + 1;
                  piVar1 = (int *)(in_ECX[0x43] + (short)uVar4 * 0x4c);
                  if (*in_ECX != *(int *)(in_ECX[0x43] + (short)uVar4 * 0x4c)) {
                    *piVar1 = *in_ECX;
                    iVar5 = piVar1[1];
                    if (-1 < iVar5) {
                      if (iVar9 == 0) {
                        local_18 = *(float *)(local_44 + iVar5 * local_28 * 0xc);
                        iVar5 = local_44 + iVar5 * local_28 * 0xc;
                        local_14 = *(float *)(iVar5 + 4);
                        local_10 = *(float *)(iVar5 + 8);
                      }
                      else {
                        iVar6 = iVar5 * local_34 + local_30;
                        iVar5 = iVar9 + iVar6 * 2;
                        local_2c = (int)*(short *)(iVar5 + 4);
                        local_18 = (float)(int)*(short *)(iVar9 + iVar6 * 2) * (float)in_ECX[0x20] +
                                   (float)in_ECX[0x23];
                        local_14 = (float)(int)*(short *)(iVar5 + 2) * (float)in_ECX[0x21] +
                                   (float)in_ECX[0x24];
                        local_10 = (float)local_2c * (float)in_ECX[0x22] + (float)in_ECX[0x25];
                      }
                      FUN_200a1410(local_c,&local_18);
                      FUN_20067780(local_c);
                    }
                  }
                  local_40 = local_40 - 1;
                  puVar2 = puVar10;
                } while (local_40 != 0);
              }
            }
          }
          local_3c = local_3c + 1;
        } while (local_3c < local_24);
      }
      local_38 = local_38 + 1;
      local_48 = local_48 + 0xc;
    } while (local_38 < in_ECX[2]);
  }
  return;
}

