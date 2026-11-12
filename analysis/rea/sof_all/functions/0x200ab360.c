// rea decompile_all
// name: FUN_200ab360
// address: 0x200ab360
// body: available
// range: 0x200ab360-0x200ab5f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ab360(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = in_ECX[0x2b];
  in_ECX[0x2c] = in_ECX[0xc] + local_4;
  in_ECX[0x2d] = in_ECX[0xd] + local_4;
  in_ECX[0x2e] = in_ECX[0xe] + local_4;
  in_ECX[0x2f] = in_ECX[0xf] + local_4;
  in_ECX[0x30] = in_ECX[0x10] + local_4;
  in_ECX[0x31] = in_ECX[0x11] + local_4;
  in_ECX[0x32] = in_ECX[0x12] + local_4;
  local_c = in_ECX[0x13] + local_4;
  in_ECX[0x33] = local_c;
  local_8 = in_ECX[0x14] + local_4;
  local_4 = local_4 + in_ECX[0x15];
  in_ECX[0x34] = local_8;
  in_ECX[0x35] = local_4;
  for (uVar7 = 0;
      (*(int *)(param_1 + 4) != 0 &&
      (uVar7 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2))); uVar7 = uVar7 + 1) {
    FUN_200a8890(in_ECX[0x38],1,&local_c);
    FUN_200a8890(in_ECX[0x3c],1,&local_8);
    FUN_200a8890(in_ECX[0x40],1,&local_4);
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + uVar7 * 4);
    local_c = local_c + in_ECX[9] * iVar6 * 6;
    local_8 = local_8 + in_ECX[10] * iVar6 * 4;
    local_4 = local_4 + in_ECX[0xb] * iVar6;
  }
  *in_ECX = 0;
  puVar2 = operator_new(in_ECX[8] * 0x4c);
  in_ECX[0x43] = puVar2;
  iVar6 = 0;
  for (uVar7 = in_ECX[8] * 0x13 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  if (0 < (int)in_ECX[8]) {
    iVar3 = 0;
    iVar5 = 0;
    do {
      *(int *)(in_ECX[0x43] + 4 + iVar3) = (int)*(short *)(in_ECX[0x32] + iVar5);
      if (*(short *)(iVar5 + in_ECX[0x32]) < 0) {
        puVar4 = (undefined4 *)(in_ECX[0x2d] + (*(short *)(iVar5 + in_ECX[0x32]) + 1) * -0xc);
        puVar2 = (undefined4 *)(in_ECX[0x43] + 8 + iVar3);
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
      }
      *(int *)(in_ECX[0x43] + 0x24 + iVar3) = (int)*(short *)(in_ECX[0x32] + 4 + iVar5);
      sVar1 = *(short *)(in_ECX[0x32] + 4 + iVar5);
      if (sVar1 < 0) {
        puVar2 = (undefined4 *)(in_ECX[0x2e] - (sVar1 * 8 + 8));
        *(undefined4 *)(in_ECX[0x43] + 0x28 + iVar3) = *puVar2;
        *(undefined4 *)(in_ECX[0x43] + 0x2c + iVar3) = puVar2[1];
      }
      *(int *)(in_ECX[0x43] + 0x14 + iVar3) = (int)*(short *)(in_ECX[0x32] + 2 + iVar5);
      sVar1 = *(short *)(in_ECX[0x32] + 2 + iVar5);
      if (sVar1 < 0) {
        puVar4 = (undefined4 *)(in_ECX[0x2f] + (sVar1 + 1) * -0xc);
        puVar2 = (undefined4 *)(in_ECX[0x43] + 0x18 + iVar3);
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 6;
      iVar3 = iVar3 + 0x4c;
    } while (iVar6 < (int)in_ECX[8]);
  }
  return;
}

