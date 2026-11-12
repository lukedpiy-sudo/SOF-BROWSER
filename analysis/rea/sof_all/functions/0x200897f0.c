// rea decompile_all
// name: FUN_200897f0
// address: 0x200897f0
// body: available
// range: 0x200897f0-0x200899b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200897f0(undefined4 param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int *piVar7;
  int in_ECX;
  char cVar8;
  void *pvVar9;
  int iVar10;
  int *piVar11;
  uint local_2c;
  undefined1 local_20 [4];
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010c3b8;
  local_c = ExceptionList;
  local_1c = (undefined1)param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_2008d5f0(*(undefined4 *)(in_ECX + 0xa4),1,local_20);
  local_4 = 0xffffffff;
  FUN_2008c730(local_18,local_14);
  FUN_200f9f75(local_18);
  uVar3 = (undefined2)param_2;
  uVar5 = 0;
  param_2 = param_2 & 0xffffff00;
  puVar1 = (undefined2 *)(*(int *)(in_ECX + 0xa0) + (uint)*(ushort *)(in_ECX + 0x12) * 0x14);
  *puVar1 = uVar3;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    local_2c = 0;
  }
  else {
    local_2c = *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2;
  }
  if (*(int *)(puVar1 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(puVar1 + 8) - *(int *)(puVar1 + 4) >> 1;
  }
  if (uVar4 < local_2c) {
    uVar5 = local_2c;
    if ((int)local_2c < 0) {
      uVar5 = 0;
    }
    pvVar6 = operator_new(uVar5 * 2);
    iVar2 = *(int *)(puVar1 + 6);
    pvVar9 = pvVar6;
    for (iVar10 = *(int *)(puVar1 + 4); iVar10 != iVar2; iVar10 = iVar10 + 2) {
      FUN_20076220(pvVar9,iVar10);
      pvVar9 = (void *)((int)pvVar9 + 2);
    }
    FUN_2008c730(*(undefined4 *)(puVar1 + 4),*(undefined4 *)(puVar1 + 6));
    FUN_200f9f75(*(undefined4 *)(puVar1 + 4));
    *(void **)(puVar1 + 8) = (void *)((int)pvVar6 + local_2c * 2);
    iVar10 = FUN_2008c150();
    *(void **)(puVar1 + 4) = pvVar6;
    uVar5 = param_2 & 0xff;
    *(void **)(puVar1 + 6) = (void *)((int)pvVar6 + iVar10 * 2);
  }
  cVar8 = (char)uVar5;
  piVar11 = *(int **)(in_ECX + 0x4c);
  piVar7 = *(int **)(in_ECX + 0x50);
  if (piVar11 != piVar7) {
    do {
      if (*piVar11 == 0) {
        param_2 = 0xffffffff;
      }
      else {
        param_2 = FUN_2009c720(param_1);
      }
      if (((char)uVar5 == '\0') && (-1 < (int)param_2)) {
        uVar5 = 1;
      }
      cVar8 = (char)uVar5;
      FUN_2008d0c0(*(undefined4 *)(puVar1 + 6),1,&param_2);
      piVar7 = *(int **)(in_ECX + 0x50);
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar7);
  }
  *(short *)(in_ECX + 0x12) = *(short *)(in_ECX + 0x12) + 1;
  ExceptionList = local_c;
  return CONCAT22((short)((uint)piVar7 >> 0x10),
                  -(ushort)(cVar8 != '\0') & *(ushort *)(in_ECX + 0x12));
}

