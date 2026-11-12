// rea decompile_all
// name: FUN_20088f10
// address: 0x20088f10
// body: available
// range: 0x20088f10-0x2008910e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20088f10(undefined4 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined2 *puVar4;
  uint uVar5;
  void *pvVar6;
  undefined2 *puVar7;
  int *piVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  uint local_38;
  int local_34;
  int local_30;
  void *local_2c;
  undefined2 *local_28;
  undefined1 local_24 [8];
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010c318;
  local_c = ExceptionList;
  local_1c = (undefined1)param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_2008d2d0(*(undefined4 *)(in_ECX + 0x84),1,local_24);
  local_4 = 0xffffffff;
  FUN_2008c730(local_18,local_14);
  FUN_200f9f75(local_18);
  puVar1 = (undefined2 *)(*(int *)(in_ECX + 0x80) + (uint)*(ushort *)(in_ECX + 0xe) * 0x18);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 2) = 0;
  bVar2 = false;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2;
  }
  if (*(int *)(puVar1 + 6) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(puVar1 + 10) - *(int *)(puVar1 + 6) >> 1;
  }
  local_28 = puVar1;
  if (uVar5 < local_38) {
    uVar5 = local_38;
    if ((int)local_38 < 0) {
      uVar5 = 0;
    }
    pvVar6 = operator_new(uVar5 * 2);
    iVar9 = *(int *)(puVar1 + 6);
    local_30 = *(int *)(puVar1 + 8);
    local_2c = pvVar6;
    if (iVar9 != local_30) {
      do {
        FUN_20076220(pvVar6,iVar9);
        iVar9 = iVar9 + 2;
        pvVar6 = (void *)((int)pvVar6 + 2);
      } while (iVar9 != local_30);
    }
    FUN_2008c730(*(undefined4 *)(puVar1 + 6),*(undefined4 *)(puVar1 + 8));
    FUN_200f9f75(*(undefined4 *)(puVar1 + 6));
    pvVar6 = local_2c;
    *(void **)(puVar1 + 10) = (void *)((int)local_2c + local_38 * 2);
    iVar9 = FUN_2008c150();
    *(void **)(puVar1 + 6) = pvVar6;
    *(void **)(puVar1 + 8) = (void *)((int)pvVar6 + iVar9 * 2);
  }
  puVar4 = local_28;
  piVar10 = *(int **)(in_ECX + 0x4c);
  piVar8 = *(int **)(in_ECX + 0x50);
  bVar3 = false;
  if (piVar10 != piVar8) {
    do {
      if (*piVar10 == 0) {
        puVar7 = (undefined2 *)0xffffffff;
      }
      else {
        puVar7 = (undefined2 *)FUN_200a57d0(param_1,&local_34);
      }
      if (bVar2) {
        if ((-1 < (int)puVar7) && (local_34 != *(int *)(puVar4 + 2))) {
          FUN_2008e9e0(s_name_Collision_between_different_20157128);
          puVar7 = (undefined2 *)0xffffffff;
        }
      }
      else if (-1 < (int)puVar7) {
        bVar2 = true;
        *(int *)(puVar4 + 2) = local_34;
      }
      local_28 = puVar7;
      FUN_2008d0c0(*(undefined4 *)(puVar1 + 8),1,&local_28);
      piVar8 = *(int **)(in_ECX + 0x50);
      piVar10 = piVar10 + 1;
      bVar3 = bVar2;
    } while (piVar10 != piVar8);
  }
  *(short *)(in_ECX + 0xe) = *(short *)(in_ECX + 0xe) + 1;
  ExceptionList = local_c;
  return CONCAT22((short)((uint)piVar8 >> 0x10),-(ushort)bVar3 & *(ushort *)(in_ECX + 0xe));
}

