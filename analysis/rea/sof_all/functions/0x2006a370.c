// rea decompile_all
// name: FUN_2006a370
// address: 0x2006a370
// body: available
// range: 0x2006a370-0x2006a55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_2006a370(undefined1 param_1,short *param_2)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int in_ECX;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  undefined1 local_29;
  uint local_28;
  int local_24;
  uint local_20;
  undefined1 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b7a8;
  local_c = ExceptionList;
  local_29 = 1;
  ExceptionList = &local_c;
  if (*param_2 == 0) {
    ExceptionList = &local_c;
    *param_2 = 1;
  }
  local_20 = CONCAT22((short)((uint)param_2 >> 0x10),*param_2);
  local_28 = local_20;
  while( true ) {
    if (*(int *)(in_ECX + 0x14) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 2;
    }
    if ((local_28 & 0xffff) == uVar4) goto LAB_2006a4f7;
    cVar2 = FUN_200bdbc0();
    if (cVar2 != '\0') break;
    iVar8 = 1;
    if ((short)local_28 == 0) {
      puVar7 = (uint *)&param_1;
      param_1 = 0;
    }
    else {
      param_1 = 1;
      FUN_200bdca0(&param_1,1);
      local_24 = 0;
      uVar3 = 0x10;
      do {
        if ((ushort)local_28 < uVar3) break;
        uVar3 = uVar3 << 4;
        local_24 = local_24 + 1;
      } while (uVar3 != 0);
      FUN_200bdca0(&local_24,2);
      puVar7 = &local_28;
      iVar8 = local_24 * 4 + 4;
    }
    FUN_200bdca0(puVar7,iVar8);
    uVar4 = 0xffffffff;
    pcVar1 = *(char **)(*(int *)(in_ECX + 0x14) + (local_28 & 0xffff) * 4);
    local_1c = param_2._0_1_;
    local_18 = (undefined1 *)0x0;
    local_14 = 0;
    local_10 = 0;
    pcVar6 = pcVar1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_2000a600(pcVar1,~uVar4 - 1);
    local_4 = 0;
    puVar5 = local_18;
    if (local_18 == (undefined1 *)0x0) {
      puVar5 = &DAT_201116cc;
    }
    FUN_200bde30(puVar5);
    local_4 = 0xffffffff;
    if (local_18 != (undefined1 *)0x0) {
      if (local_18[-1] == '\0') {
        FUN_200f9f75(local_18 + -1);
      }
      else {
        local_18[-1] = local_18[-1] + -1;
      }
    }
    local_18 = (undefined1 *)0x0;
    *param_2 = (short)local_20;
    local_20 = local_20 + 1;
    local_14 = 0;
    local_10 = 0;
    local_28 = local_28 + 1;
  }
  local_29 = 0;
LAB_2006a4f7:
  if (*(int *)(in_ECX + 0x14) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 2;
  }
  if ((local_28 & 0xffff) == uVar4) {
    cVar2 = FUN_200bdbc0();
    if (cVar2 == '\0') {
      *param_2 = (short)local_20;
    }
    else {
      local_29 = 0;
    }
  }
  param_2 = (short *)((uint)param_2 & 0xffffff00);
  FUN_200bdca0(&param_2,1);
  ExceptionList = local_c;
  return local_29;
}

