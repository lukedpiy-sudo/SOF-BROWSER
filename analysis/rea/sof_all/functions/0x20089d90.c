// rea decompile_all
// name: FUN_20089d90
// address: 0x20089d90
// body: available
// range: 0x20089d90-0x20089fae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20089d90(ushort param_1,undefined4 param_2,ushort param_3)

{
  ushort *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  int local_2c;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010c418;
  local_c = ExceptionList;
  uVar10 = 0;
  local_1c = (undefined1)param_3;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_2008d8f0(*(undefined4 *)(in_ECX + 0xc4),1,local_20);
  local_4 = 0xffffffff;
  FUN_20092110();
  puVar1 = (ushort *)(*(int *)(in_ECX + 0xc0) + (uint)*(ushort *)(in_ECX + 0x14) * 0x14);
  puVar1[1] = param_3;
  *puVar1 = param_1;
  bVar3 = false;
  if (*(int *)(in_ECX + 0x4c) != 0) {
    uVar10 = *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2;
  }
  if (*(int *)(puVar1 + 4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(puVar1 + 8) - *(int *)(puVar1 + 4) >> 1;
  }
  if (uVar5 < uVar10) {
    uVar5 = uVar10;
    if ((int)uVar10 < 0) {
      uVar5 = 0;
    }
    pvVar6 = operator_new(uVar5 * 2);
    FUN_2008c9c0(*(undefined4 *)(puVar1 + 4),*(undefined4 *)(puVar1 + 6),pvVar6);
    FUN_2008c730(*(undefined4 *)(puVar1 + 4),*(undefined4 *)(puVar1 + 6));
    FUN_200f9f75(*(undefined4 *)(puVar1 + 4));
    *(void **)(puVar1 + 8) = (void *)((int)pvVar6 + uVar10 * 2);
    if (*(int *)(puVar1 + 4) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(puVar1 + 6) - *(int *)(puVar1 + 4) >> 1;
    }
    *(void **)(puVar1 + 4) = pvVar6;
    *(void **)(puVar1 + 6) = (void *)((int)pvVar6 + iVar7 * 2);
  }
  piVar8 = *(int **)(in_ECX + 0x50);
  bVar4 = false;
  if (*(int **)(in_ECX + 0x4c) != piVar8) {
    local_2c = 0;
    piVar8 = *(int **)(in_ECX + 0x4c);
    do {
      iVar7 = -1;
      iVar9 = (int)*(short *)(*(int *)(*(int *)(in_ECX + 0xa0) + -0xc + (uint)param_1 * 0x14) +
                             local_2c);
      if (-1 < iVar9) {
        iVar2 = *piVar8;
        if (iVar2 != 0) {
          if (*(char *)(iVar2 + 0x28) == '\0') {
            FUN_2009d3b0(iVar2 + 0x14);
          }
          *(undefined1 *)(iVar2 + 0x28) = 1;
          if (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x84) + iVar9 * 4) + 0x24) + 0x88) == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = FUN_200bf910(param_2);
          }
        }
        if ((!bVar3) && (-1 < iVar7)) {
          bVar3 = true;
        }
      }
      local_24 = iVar7;
      FUN_2008d0c0(*(undefined4 *)(puVar1 + 6),1,&local_24);
      piVar8 = piVar8 + 1;
      local_2c = local_2c + 2;
      bVar4 = bVar3;
    } while (piVar8 != *(int **)(in_ECX + 0x50));
  }
  *(short *)(in_ECX + 0x14) = *(short *)(in_ECX + 0x14) + 1;
  ExceptionList = local_c;
  return CONCAT22((short)((uint)piVar8 >> 0x10),-(ushort)bVar4 & *(ushort *)(in_ECX + 0x14));
}

